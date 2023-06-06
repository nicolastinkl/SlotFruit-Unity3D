#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t0048BB94992A96F02D427E2C26C6E92AC9AECD32;
// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
struct Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074;
// System.Collections.Generic.Dictionary`2<SymbolType,System.Int32>
struct Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.AudioSource>
struct KeyCollection_t0F1098B499074B3F4D9317FC9907764C2C636048;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t6642D08E578C77292ED5537CF3192269131C189C;
// System.Collections.Generic.List`1<BetEffect>
struct List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<IButton>
struct List_1_t25CC355F40BA5B8379EA396CBEF081CF0F3384CC;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<SlotSymbol>
struct List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F;
// System.Collections.Generic.List`1<SymbolType>
struct List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1;
// MonoSingleton`1<System.Object>
struct MonoSingleton_1_tCB0740E1A0FBE7F99B80A6DFD8CD948FFAECF3D2;
// MonoSingleton`1<TaiXiu>
struct MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E;
// MonoSingleton`1<UserProfile>
struct MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.AudioSource>
struct ValueCollection_tFDA967D9EE31D1A8AF2D30AAD3634610CCC9F95F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.AudioSource>[]
struct EntryU5BU5D_t76EF06C40D2FEC86BE0651711FE58F9FC908FF9B;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t9F61665C9F79DD5715B9C6C357BC1A9F16326884;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// SymbolType[]
struct SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_tC2631579BAB41F64C63A0909E8386B88B45F93D1;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BetRate
struct BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_t2FA372BD7BB8D2A0CBCBCC812FBCB83703A63F9B;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
struct CubicBezierDecoder_t5807727848593CD408A4C942FA347EBC8F7A25FF;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// IButton
struct IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// IMoney
struct IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F;
// INumber
struct INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A;
// ISlotResult
struct ISlotResult_t574B29D7C8DA4983B17B6BEB35DD122FD269D3D7;
// ISlotRule
struct ISlotRule_tD70DBB6FAF661EA7747BDB997FCC400368AD5C78;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// JPEffect
struct JPEffect_tA6BC456ADC9A21CDA94777623CB7FC4BA1C2B95C;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_tE244F738878748CB8B92F95C686BE0B57B066291;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// UnityEngine.UI.Shadow
struct Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SlotFruitGame
struct SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604;
// SoundUtility
struct SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// SymbolResult
struct SymbolResult_t4DFA5D9FEE85B3C7248CF883C6BCBFBAA41A4C77;
// TXResult
struct TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0;
// TaiXiu
struct TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645;
// TaiXiuRule
struct TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UserModel
struct UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF;
// UserMoney
struct UserMoney_t02B52319D944BFFDA80F86057AE8D4CF98608A28;
// UserProfile
struct UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5;
// UserStatistic
struct UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// DG.Tweening.DOTweenCYInstruction/WaitForCompletion
struct WaitForCompletion_t9F365BC31EF3315DA3B809E3CB617F803283D67F;
// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
struct WaitForElapsedLoops_t59B0D77B88598E4CD91A4C3A1508F2FB810470A4;
// DG.Tweening.DOTweenCYInstruction/WaitForKill
struct WaitForKill_t1C0002DDEF1C49DDE1DB6D93C0C16BBF662A2B6D;
// DG.Tweening.DOTweenCYInstruction/WaitForPosition
struct WaitForPosition_tF45B25B48601A808ACA7A19EEAA6DABAFE64D3CB;
// DG.Tweening.DOTweenCYInstruction/WaitForRewind
struct WaitForRewind_t63F6F6401744395FF42FD23059C8F13A08B6EF0E;
// DG.Tweening.DOTweenCYInstruction/WaitForStart
struct WaitForStart_tAF9DF336B5F10E0C153522BD49426FC7EF68540C;
// DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8EDD49424F7AFC055DC1442B3F99B3BFCF6B09F0;
// DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tA5DAB4AB298719A5FC9203633FE7CAE2D7AFBF0A;
// DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tF06F41913CFED04E5FC3E2C676BCEAC2D3E53CAC;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t5BD4116FD80F4DAD54FD39BBD7A2CFBDAEAB3AF3;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t35A2F555A5E408DEE2EA63254AACB729C014757D;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t39BE4FE1476B4D5D73FC150406C576C638973F8D;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t3A8BE7E3EE8D0963B5FC3AE4F184CAF2EB8E1D84;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tC3DF99D3D2F6A0C0E6651294AE0DF0537CEC4617;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tF8E56709396C6DFFECA7608E4CD67CBE2C1C1CE5;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440;
// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB9266040A99BBE64FC737A175355345A13E86D21;
// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tED64664CBF4D43290FDDCBF237DF29F9DB8F92A9;
// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tDABE9F243A4095C0C2295D15C58B0D3334267A3A;
// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB7DA75EB7F11962B20C503C1B2A50BF4D821E318;
// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB63C203014F824EA9466F064AF2D8A157A7F4CBF;
// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E;
// DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t865A37B70235C08B0F32F1F40EAB16312D05FD50;
// DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t0A5F164BAD8ACAD20D458366B497C9B9C1974AE4;
// DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7D1FCC95A881539756647760D7E3BCAD117D9C2F;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t8BFF1858EDF6EB2283AE20F2D8CC662A1FA5B379;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t5C701670B3C5449F73D82915BD4DA267A8B8E8F5;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t9C18A438FEAA8C5C1A925F5F28D6DF30A8D5B269;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t27965A830C5CE83826CC357F50299FE28BE9CABB;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t532827BA234D3C2B9DA5E065866B8C8F605250F4;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t1E74F8DF7C76B80F85C66967590B72EF52627D1C;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t6FE99B74BA758AD9E3C5FA4B81F22E50E2878289;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t161B9E0C9F3AF194B3F6E501D4E253148BFDFEB6;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t28369CB684CE937EF263102FBF87D2E7FC952FD0;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t7047CE2AF01FC75FD677DF4C1C7E4B32EC2452A5;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t585165D7235045AD6EACEA96E3084E01A742C936;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tB3B621D850CE15CA278C20DAAA2C3C0358206A21;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t770F928128D9FC7ADA02EA054C711D60F30E16B9;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t97D2AA4FE9552148F7E37D2DFED676A57DFB1351;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t26F763CBFD1D4D4EDFFE9BD383DB924D3B6033E7;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tF09BD80EEE9ECC7296C10982CEDF0DBFD274B895;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tA347965DD1CA3D351E3B581654CC8128EDFF3061;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t93DB5B4DF0357D11E4A951B037CFD527BF3B56C8;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t4D4A1506D5AC9A010D11414FAD7E48C6A7FBA299;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tE68276C76E7215C53283D3ADC6A731F1DF29E8C8;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD73E62A2224FE13C8F6B52FCE8BD1C5FD313B99F;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t94F73A3FFC30F6C2558392FF5F07AE2E096BF84F;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t805529EB975D0626EBC97ACAB3880EFC6AB317A3;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_tA414D6A179D68B4F320ED1DB2C432127B75AB0E9;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5CB8EE7F07D06E29D59588955B144762AF73E4F6;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t60E5325D834E607C2110DB690899FC3C7A44D407;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t8938338C4A6E58BB25C48A1F318E0458FD3B8CC4;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tCE8E904A62CBD9F143B3D692CA532EFA7A6F777D;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t9A0201E5801BCA86E98A5567791D120983EAD387;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t9CD30C09F13A8901FBD37CEEE628023A3AC88587;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tB80886C18986402D46C539623ED89C069D383A01;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t3101E53746ED12113974445EFE5F8ED7275D9845;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE55619A7933D4E2E6A3AF6BCBAB6B4C17A865A55;
// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t7A8C490B052492D0F6162243E706C61D6E7EA629;
// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581;
// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t53BDF2E37BFB95287099C6E583DADCA05E3069F8;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tC860FA7151AA6FCFDF839398CFEDFEBF0713CB61;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// SlotFruitGame/<IEPlaySymbolSound>d__26
struct U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7;
// SoundUtility/<StopLoopSound>d__14
struct U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553;
// UserProfile/UpdateValue
struct UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D;

IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral40C4DAAA8990CF89DFC5FC60A13AB052F77F0818;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8503D723CC8B71B62A3F957B1A03B7DCABACC1F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFE793C2892495FC1F9A2B9F253992EAF897981;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9986C33D4824878A3C7A1CA2AED6F53395A85218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF0EA02507554A7566445A1F7B71F93105178094B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisUserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_m17F3F395C0C19E040FD480800FE9DF80E8D8B9EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m011C75C41130DB869B4921B7F4E5F62AE63FA850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m53E4DC3958B90775481A29D35FFFEBFA32E0134B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m64DE9FC4A5963A41457B9E8E3285F5E017EE47AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1__ctor_m25D7E94AE54CB9A7042ED903B57BD815C980F45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1__ctor_m9B13923F02C82DD569030DBE77184AB6C9C9C7C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaiXiu_EndTaiXiu_m9FF2E6023DBDF601E9F0C9F5326D82D97F01764D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaiXiu_LoadNumTaiXiu_m4739C21368B7FB4C67F3960AECFD3915BA16A5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaiXiu_U3CSpinU3Eb__14_0_m920FE21722699A6942F07630DBA5981C2741B78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1_mC10FC7863E2D4946A8604498627A2DCB051BF8BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIEPlaySymbolSoundU3Ed__26_System_Collections_IEnumerator_Reset_m19400D8C315B107F5BA11DAAE5712296EEB812B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopLoopSoundU3Ed__14_System_Collections_IEnumerator_Reset_mE4C4EB604B5A06389E5CD8714486647E92D5404A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UserMoney_UpdateMoney_m85802EFBDFF536D100883AB39F93C00E87B70976_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
struct Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t76EF06C40D2FEC86BE0651711FE58F9FC908FF9B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0F1098B499074B3F4D9317FC9907764C2C636048 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFDA967D9EE31D1A8AF2D30AAD3634610CCC9F95F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___entries_1)); }
	inline EntryU5BU5D_t76EF06C40D2FEC86BE0651711FE58F9FC908FF9B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t76EF06C40D2FEC86BE0651711FE58F9FC908FF9B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t76EF06C40D2FEC86BE0651711FE58F9FC908FF9B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___keys_7)); }
	inline KeyCollection_t0F1098B499074B3F4D9317FC9907764C2C636048 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0F1098B499074B3F4D9317FC9907764C2C636048 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0F1098B499074B3F4D9317FC9907764C2C636048 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ___values_8)); }
	inline ValueCollection_tFDA967D9EE31D1A8AF2D30AAD3634610CCC9F95F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFDA967D9EE31D1A8AF2D30AAD3634610CCC9F95F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFDA967D9EE31D1A8AF2D30AAD3634610CCC9F95F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<SymbolType>
struct List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40, ____items_1)); }
	inline SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875* get__items_1() const { return ____items_1; }
	inline SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40_StaticFields, ____emptyArray_5)); }
	inline SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SymbolTypeU5BU5D_tE6FC2BD4E5D525D9DC8659ECC9FC88461AB53875* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// GameDefine
struct GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143  : public RuntimeObject
{
public:

public:
};

struct GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields
{
public:
	// System.Single GameDefine::TIME_ROTATE_INCREATE
	float ___TIME_ROTATE_INCREATE_0;
	// System.Single GameDefine::TIME_ROTATE_REDUCTION
	float ___TIME_ROTATE_REDUCTION_1;
	// System.Single GameDefine::TIME_ROTATE_TOTAL
	float ___TIME_ROTATE_TOTAL_2;
	// System.Single GameDefine::TIME_EFFECT_TURN
	float ___TIME_EFFECT_TURN_3;
	// System.Single GameDefine::TIME_UP_DOWN_MONEY
	float ___TIME_UP_DOWN_MONEY_4;
	// System.Single GameDefine::TIME_DELAY_BET_BUTTON
	float ___TIME_DELAY_BET_BUTTON_5;
	// System.Int32 GameDefine::NUM_ROTATE_INCREATE
	int32_t ___NUM_ROTATE_INCREATE_6;
	// System.Int32 GameDefine::NUM_ROTATE_REDUCTION
	int32_t ___NUM_ROTATE_REDUCTION_7;
	// System.Int32 GameDefine::NUM_ROTATE_TOTAL
	int32_t ___NUM_ROTATE_TOTAL_8;
	// System.Single GameDefine::TIME_SYMBOL_SOUND
	float ___TIME_SYMBOL_SOUND_9;
	// System.Single GameDefine::TIME_DELAY_END_SPIN
	float ___TIME_DELAY_END_SPIN_10;
	// System.Single GameDefine::TIME_SPIN_ONE_INDEX
	float ___TIME_SPIN_ONE_INDEX_11;
	// System.Int32 GameDefine::MAX_BET
	int32_t ___MAX_BET_12;
	// System.Single GameDefine::TIME_TAIXIU
	float ___TIME_TAIXIU_13;
	// System.String GameDefine::USER_LOCAL
	String_t* ___USER_LOCAL_14;
	// System.Int32 GameDefine::USER_MONEY
	int32_t ___USER_MONEY_15;
	// System.Single GameDefine::USER_VOLUME
	float ___USER_VOLUME_16;
	// System.String GameDefine::SOUND_BUTTON_SCENE_CLICK
	String_t* ___SOUND_BUTTON_SCENE_CLICK_17;
	// System.String GameDefine::SOUND_BUTTON_SCENE_CLOSE
	String_t* ___SOUND_BUTTON_SCENE_CLOSE_18;
	// System.String GameDefine::SOUND_SPIN
	String_t* ___SOUND_SPIN_19;
	// System.String GameDefine::SOUND_WIN
	String_t* ___SOUND_WIN_20;
	// System.String GameDefine::SOUND_LOSE
	String_t* ___SOUND_LOSE_21;
	// System.String GameDefine::SOUND_PUSH_COIN
	String_t* ___SOUND_PUSH_COIN_22;
	// System.String GameDefine::SOUND_LUCKY_WIN
	String_t* ___SOUND_LUCKY_WIN_23;
	// System.String GameDefine::SOUND_LUCKY_LOSE
	String_t* ___SOUND_LUCKY_LOSE_24;
	// System.String GameDefine::SOUND_JACKPOT_SPIN
	String_t* ___SOUND_JACKPOT_SPIN_25;
	// System.String GameDefine::SOUND_JACKPOT_END
	String_t* ___SOUND_JACKPOT_END_26;
	// System.String GameDefine::SOUND_APPLE
	String_t* ___SOUND_APPLE_27;
	// System.String GameDefine::SOUND_ORANGE
	String_t* ___SOUND_ORANGE_28;
	// System.String GameDefine::SOUND_MANGO
	String_t* ___SOUND_MANGO_29;
	// System.String GameDefine::SOUND_BELL
	String_t* ___SOUND_BELL_30;
	// System.String GameDefine::SOUND_WATERMELON
	String_t* ___SOUND_WATERMELON_31;
	// System.String GameDefine::SOUND_STAR
	String_t* ___SOUND_STAR_32;
	// System.String GameDefine::SOUND_SEVEN
	String_t* ___SOUND_SEVEN_33;
	// System.String GameDefine::SOUND_BAR
	String_t* ___SOUND_BAR_34;
	// System.String GameDefine::SOUND_LUCKY
	String_t* ___SOUND_LUCKY_35;
	// System.String GameDefine::SOUND_TAI_XIU
	String_t* ___SOUND_TAI_XIU_36;
	// System.String GameDefine::SOUND_TAI_XIU_BUTTON
	String_t* ___SOUND_TAI_XIU_BUTTON_37;
	// System.String GameDefine::SOUND_TAI_XIU_WIN
	String_t* ___SOUND_TAI_XIU_WIN_38;
	// System.String GameDefine::SOUND_TAI_XIU_LOSE
	String_t* ___SOUND_TAI_XIU_LOSE_39;
	// System.String GameDefine::SOUND_BUTTON
	String_t* ___SOUND_BUTTON_40;
	// System.String GameDefine::SOUND_CHIP_FAIL
	String_t* ___SOUND_CHIP_FAIL_41;

public:
	inline static int32_t get_offset_of_TIME_ROTATE_INCREATE_0() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_ROTATE_INCREATE_0)); }
	inline float get_TIME_ROTATE_INCREATE_0() const { return ___TIME_ROTATE_INCREATE_0; }
	inline float* get_address_of_TIME_ROTATE_INCREATE_0() { return &___TIME_ROTATE_INCREATE_0; }
	inline void set_TIME_ROTATE_INCREATE_0(float value)
	{
		___TIME_ROTATE_INCREATE_0 = value;
	}

	inline static int32_t get_offset_of_TIME_ROTATE_REDUCTION_1() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_ROTATE_REDUCTION_1)); }
	inline float get_TIME_ROTATE_REDUCTION_1() const { return ___TIME_ROTATE_REDUCTION_1; }
	inline float* get_address_of_TIME_ROTATE_REDUCTION_1() { return &___TIME_ROTATE_REDUCTION_1; }
	inline void set_TIME_ROTATE_REDUCTION_1(float value)
	{
		___TIME_ROTATE_REDUCTION_1 = value;
	}

	inline static int32_t get_offset_of_TIME_ROTATE_TOTAL_2() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_ROTATE_TOTAL_2)); }
	inline float get_TIME_ROTATE_TOTAL_2() const { return ___TIME_ROTATE_TOTAL_2; }
	inline float* get_address_of_TIME_ROTATE_TOTAL_2() { return &___TIME_ROTATE_TOTAL_2; }
	inline void set_TIME_ROTATE_TOTAL_2(float value)
	{
		___TIME_ROTATE_TOTAL_2 = value;
	}

	inline static int32_t get_offset_of_TIME_EFFECT_TURN_3() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_EFFECT_TURN_3)); }
	inline float get_TIME_EFFECT_TURN_3() const { return ___TIME_EFFECT_TURN_3; }
	inline float* get_address_of_TIME_EFFECT_TURN_3() { return &___TIME_EFFECT_TURN_3; }
	inline void set_TIME_EFFECT_TURN_3(float value)
	{
		___TIME_EFFECT_TURN_3 = value;
	}

	inline static int32_t get_offset_of_TIME_UP_DOWN_MONEY_4() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_UP_DOWN_MONEY_4)); }
	inline float get_TIME_UP_DOWN_MONEY_4() const { return ___TIME_UP_DOWN_MONEY_4; }
	inline float* get_address_of_TIME_UP_DOWN_MONEY_4() { return &___TIME_UP_DOWN_MONEY_4; }
	inline void set_TIME_UP_DOWN_MONEY_4(float value)
	{
		___TIME_UP_DOWN_MONEY_4 = value;
	}

	inline static int32_t get_offset_of_TIME_DELAY_BET_BUTTON_5() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_DELAY_BET_BUTTON_5)); }
	inline float get_TIME_DELAY_BET_BUTTON_5() const { return ___TIME_DELAY_BET_BUTTON_5; }
	inline float* get_address_of_TIME_DELAY_BET_BUTTON_5() { return &___TIME_DELAY_BET_BUTTON_5; }
	inline void set_TIME_DELAY_BET_BUTTON_5(float value)
	{
		___TIME_DELAY_BET_BUTTON_5 = value;
	}

	inline static int32_t get_offset_of_NUM_ROTATE_INCREATE_6() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___NUM_ROTATE_INCREATE_6)); }
	inline int32_t get_NUM_ROTATE_INCREATE_6() const { return ___NUM_ROTATE_INCREATE_6; }
	inline int32_t* get_address_of_NUM_ROTATE_INCREATE_6() { return &___NUM_ROTATE_INCREATE_6; }
	inline void set_NUM_ROTATE_INCREATE_6(int32_t value)
	{
		___NUM_ROTATE_INCREATE_6 = value;
	}

	inline static int32_t get_offset_of_NUM_ROTATE_REDUCTION_7() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___NUM_ROTATE_REDUCTION_7)); }
	inline int32_t get_NUM_ROTATE_REDUCTION_7() const { return ___NUM_ROTATE_REDUCTION_7; }
	inline int32_t* get_address_of_NUM_ROTATE_REDUCTION_7() { return &___NUM_ROTATE_REDUCTION_7; }
	inline void set_NUM_ROTATE_REDUCTION_7(int32_t value)
	{
		___NUM_ROTATE_REDUCTION_7 = value;
	}

	inline static int32_t get_offset_of_NUM_ROTATE_TOTAL_8() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___NUM_ROTATE_TOTAL_8)); }
	inline int32_t get_NUM_ROTATE_TOTAL_8() const { return ___NUM_ROTATE_TOTAL_8; }
	inline int32_t* get_address_of_NUM_ROTATE_TOTAL_8() { return &___NUM_ROTATE_TOTAL_8; }
	inline void set_NUM_ROTATE_TOTAL_8(int32_t value)
	{
		___NUM_ROTATE_TOTAL_8 = value;
	}

	inline static int32_t get_offset_of_TIME_SYMBOL_SOUND_9() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_SYMBOL_SOUND_9)); }
	inline float get_TIME_SYMBOL_SOUND_9() const { return ___TIME_SYMBOL_SOUND_9; }
	inline float* get_address_of_TIME_SYMBOL_SOUND_9() { return &___TIME_SYMBOL_SOUND_9; }
	inline void set_TIME_SYMBOL_SOUND_9(float value)
	{
		___TIME_SYMBOL_SOUND_9 = value;
	}

	inline static int32_t get_offset_of_TIME_DELAY_END_SPIN_10() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_DELAY_END_SPIN_10)); }
	inline float get_TIME_DELAY_END_SPIN_10() const { return ___TIME_DELAY_END_SPIN_10; }
	inline float* get_address_of_TIME_DELAY_END_SPIN_10() { return &___TIME_DELAY_END_SPIN_10; }
	inline void set_TIME_DELAY_END_SPIN_10(float value)
	{
		___TIME_DELAY_END_SPIN_10 = value;
	}

	inline static int32_t get_offset_of_TIME_SPIN_ONE_INDEX_11() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_SPIN_ONE_INDEX_11)); }
	inline float get_TIME_SPIN_ONE_INDEX_11() const { return ___TIME_SPIN_ONE_INDEX_11; }
	inline float* get_address_of_TIME_SPIN_ONE_INDEX_11() { return &___TIME_SPIN_ONE_INDEX_11; }
	inline void set_TIME_SPIN_ONE_INDEX_11(float value)
	{
		___TIME_SPIN_ONE_INDEX_11 = value;
	}

	inline static int32_t get_offset_of_MAX_BET_12() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___MAX_BET_12)); }
	inline int32_t get_MAX_BET_12() const { return ___MAX_BET_12; }
	inline int32_t* get_address_of_MAX_BET_12() { return &___MAX_BET_12; }
	inline void set_MAX_BET_12(int32_t value)
	{
		___MAX_BET_12 = value;
	}

	inline static int32_t get_offset_of_TIME_TAIXIU_13() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___TIME_TAIXIU_13)); }
	inline float get_TIME_TAIXIU_13() const { return ___TIME_TAIXIU_13; }
	inline float* get_address_of_TIME_TAIXIU_13() { return &___TIME_TAIXIU_13; }
	inline void set_TIME_TAIXIU_13(float value)
	{
		___TIME_TAIXIU_13 = value;
	}

	inline static int32_t get_offset_of_USER_LOCAL_14() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___USER_LOCAL_14)); }
	inline String_t* get_USER_LOCAL_14() const { return ___USER_LOCAL_14; }
	inline String_t** get_address_of_USER_LOCAL_14() { return &___USER_LOCAL_14; }
	inline void set_USER_LOCAL_14(String_t* value)
	{
		___USER_LOCAL_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USER_LOCAL_14), (void*)value);
	}

	inline static int32_t get_offset_of_USER_MONEY_15() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___USER_MONEY_15)); }
	inline int32_t get_USER_MONEY_15() const { return ___USER_MONEY_15; }
	inline int32_t* get_address_of_USER_MONEY_15() { return &___USER_MONEY_15; }
	inline void set_USER_MONEY_15(int32_t value)
	{
		___USER_MONEY_15 = value;
	}

	inline static int32_t get_offset_of_USER_VOLUME_16() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___USER_VOLUME_16)); }
	inline float get_USER_VOLUME_16() const { return ___USER_VOLUME_16; }
	inline float* get_address_of_USER_VOLUME_16() { return &___USER_VOLUME_16; }
	inline void set_USER_VOLUME_16(float value)
	{
		___USER_VOLUME_16 = value;
	}

	inline static int32_t get_offset_of_SOUND_BUTTON_SCENE_CLICK_17() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_BUTTON_SCENE_CLICK_17)); }
	inline String_t* get_SOUND_BUTTON_SCENE_CLICK_17() const { return ___SOUND_BUTTON_SCENE_CLICK_17; }
	inline String_t** get_address_of_SOUND_BUTTON_SCENE_CLICK_17() { return &___SOUND_BUTTON_SCENE_CLICK_17; }
	inline void set_SOUND_BUTTON_SCENE_CLICK_17(String_t* value)
	{
		___SOUND_BUTTON_SCENE_CLICK_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_BUTTON_SCENE_CLICK_17), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_BUTTON_SCENE_CLOSE_18() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_BUTTON_SCENE_CLOSE_18)); }
	inline String_t* get_SOUND_BUTTON_SCENE_CLOSE_18() const { return ___SOUND_BUTTON_SCENE_CLOSE_18; }
	inline String_t** get_address_of_SOUND_BUTTON_SCENE_CLOSE_18() { return &___SOUND_BUTTON_SCENE_CLOSE_18; }
	inline void set_SOUND_BUTTON_SCENE_CLOSE_18(String_t* value)
	{
		___SOUND_BUTTON_SCENE_CLOSE_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_BUTTON_SCENE_CLOSE_18), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_SPIN_19() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_SPIN_19)); }
	inline String_t* get_SOUND_SPIN_19() const { return ___SOUND_SPIN_19; }
	inline String_t** get_address_of_SOUND_SPIN_19() { return &___SOUND_SPIN_19; }
	inline void set_SOUND_SPIN_19(String_t* value)
	{
		___SOUND_SPIN_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_SPIN_19), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_WIN_20() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_WIN_20)); }
	inline String_t* get_SOUND_WIN_20() const { return ___SOUND_WIN_20; }
	inline String_t** get_address_of_SOUND_WIN_20() { return &___SOUND_WIN_20; }
	inline void set_SOUND_WIN_20(String_t* value)
	{
		___SOUND_WIN_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_WIN_20), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_LOSE_21() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_LOSE_21)); }
	inline String_t* get_SOUND_LOSE_21() const { return ___SOUND_LOSE_21; }
	inline String_t** get_address_of_SOUND_LOSE_21() { return &___SOUND_LOSE_21; }
	inline void set_SOUND_LOSE_21(String_t* value)
	{
		___SOUND_LOSE_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_LOSE_21), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_PUSH_COIN_22() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_PUSH_COIN_22)); }
	inline String_t* get_SOUND_PUSH_COIN_22() const { return ___SOUND_PUSH_COIN_22; }
	inline String_t** get_address_of_SOUND_PUSH_COIN_22() { return &___SOUND_PUSH_COIN_22; }
	inline void set_SOUND_PUSH_COIN_22(String_t* value)
	{
		___SOUND_PUSH_COIN_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_PUSH_COIN_22), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_LUCKY_WIN_23() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_LUCKY_WIN_23)); }
	inline String_t* get_SOUND_LUCKY_WIN_23() const { return ___SOUND_LUCKY_WIN_23; }
	inline String_t** get_address_of_SOUND_LUCKY_WIN_23() { return &___SOUND_LUCKY_WIN_23; }
	inline void set_SOUND_LUCKY_WIN_23(String_t* value)
	{
		___SOUND_LUCKY_WIN_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_LUCKY_WIN_23), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_LUCKY_LOSE_24() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_LUCKY_LOSE_24)); }
	inline String_t* get_SOUND_LUCKY_LOSE_24() const { return ___SOUND_LUCKY_LOSE_24; }
	inline String_t** get_address_of_SOUND_LUCKY_LOSE_24() { return &___SOUND_LUCKY_LOSE_24; }
	inline void set_SOUND_LUCKY_LOSE_24(String_t* value)
	{
		___SOUND_LUCKY_LOSE_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_LUCKY_LOSE_24), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_JACKPOT_SPIN_25() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_JACKPOT_SPIN_25)); }
	inline String_t* get_SOUND_JACKPOT_SPIN_25() const { return ___SOUND_JACKPOT_SPIN_25; }
	inline String_t** get_address_of_SOUND_JACKPOT_SPIN_25() { return &___SOUND_JACKPOT_SPIN_25; }
	inline void set_SOUND_JACKPOT_SPIN_25(String_t* value)
	{
		___SOUND_JACKPOT_SPIN_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_JACKPOT_SPIN_25), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_JACKPOT_END_26() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_JACKPOT_END_26)); }
	inline String_t* get_SOUND_JACKPOT_END_26() const { return ___SOUND_JACKPOT_END_26; }
	inline String_t** get_address_of_SOUND_JACKPOT_END_26() { return &___SOUND_JACKPOT_END_26; }
	inline void set_SOUND_JACKPOT_END_26(String_t* value)
	{
		___SOUND_JACKPOT_END_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_JACKPOT_END_26), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_APPLE_27() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_APPLE_27)); }
	inline String_t* get_SOUND_APPLE_27() const { return ___SOUND_APPLE_27; }
	inline String_t** get_address_of_SOUND_APPLE_27() { return &___SOUND_APPLE_27; }
	inline void set_SOUND_APPLE_27(String_t* value)
	{
		___SOUND_APPLE_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_APPLE_27), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_ORANGE_28() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_ORANGE_28)); }
	inline String_t* get_SOUND_ORANGE_28() const { return ___SOUND_ORANGE_28; }
	inline String_t** get_address_of_SOUND_ORANGE_28() { return &___SOUND_ORANGE_28; }
	inline void set_SOUND_ORANGE_28(String_t* value)
	{
		___SOUND_ORANGE_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_ORANGE_28), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_MANGO_29() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_MANGO_29)); }
	inline String_t* get_SOUND_MANGO_29() const { return ___SOUND_MANGO_29; }
	inline String_t** get_address_of_SOUND_MANGO_29() { return &___SOUND_MANGO_29; }
	inline void set_SOUND_MANGO_29(String_t* value)
	{
		___SOUND_MANGO_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_MANGO_29), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_BELL_30() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_BELL_30)); }
	inline String_t* get_SOUND_BELL_30() const { return ___SOUND_BELL_30; }
	inline String_t** get_address_of_SOUND_BELL_30() { return &___SOUND_BELL_30; }
	inline void set_SOUND_BELL_30(String_t* value)
	{
		___SOUND_BELL_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_BELL_30), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_WATERMELON_31() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_WATERMELON_31)); }
	inline String_t* get_SOUND_WATERMELON_31() const { return ___SOUND_WATERMELON_31; }
	inline String_t** get_address_of_SOUND_WATERMELON_31() { return &___SOUND_WATERMELON_31; }
	inline void set_SOUND_WATERMELON_31(String_t* value)
	{
		___SOUND_WATERMELON_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_WATERMELON_31), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_STAR_32() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_STAR_32)); }
	inline String_t* get_SOUND_STAR_32() const { return ___SOUND_STAR_32; }
	inline String_t** get_address_of_SOUND_STAR_32() { return &___SOUND_STAR_32; }
	inline void set_SOUND_STAR_32(String_t* value)
	{
		___SOUND_STAR_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_STAR_32), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_SEVEN_33() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_SEVEN_33)); }
	inline String_t* get_SOUND_SEVEN_33() const { return ___SOUND_SEVEN_33; }
	inline String_t** get_address_of_SOUND_SEVEN_33() { return &___SOUND_SEVEN_33; }
	inline void set_SOUND_SEVEN_33(String_t* value)
	{
		___SOUND_SEVEN_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_SEVEN_33), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_BAR_34() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_BAR_34)); }
	inline String_t* get_SOUND_BAR_34() const { return ___SOUND_BAR_34; }
	inline String_t** get_address_of_SOUND_BAR_34() { return &___SOUND_BAR_34; }
	inline void set_SOUND_BAR_34(String_t* value)
	{
		___SOUND_BAR_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_BAR_34), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_LUCKY_35() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_LUCKY_35)); }
	inline String_t* get_SOUND_LUCKY_35() const { return ___SOUND_LUCKY_35; }
	inline String_t** get_address_of_SOUND_LUCKY_35() { return &___SOUND_LUCKY_35; }
	inline void set_SOUND_LUCKY_35(String_t* value)
	{
		___SOUND_LUCKY_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_LUCKY_35), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_TAI_XIU_36() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_TAI_XIU_36)); }
	inline String_t* get_SOUND_TAI_XIU_36() const { return ___SOUND_TAI_XIU_36; }
	inline String_t** get_address_of_SOUND_TAI_XIU_36() { return &___SOUND_TAI_XIU_36; }
	inline void set_SOUND_TAI_XIU_36(String_t* value)
	{
		___SOUND_TAI_XIU_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_TAI_XIU_36), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_TAI_XIU_BUTTON_37() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_TAI_XIU_BUTTON_37)); }
	inline String_t* get_SOUND_TAI_XIU_BUTTON_37() const { return ___SOUND_TAI_XIU_BUTTON_37; }
	inline String_t** get_address_of_SOUND_TAI_XIU_BUTTON_37() { return &___SOUND_TAI_XIU_BUTTON_37; }
	inline void set_SOUND_TAI_XIU_BUTTON_37(String_t* value)
	{
		___SOUND_TAI_XIU_BUTTON_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_TAI_XIU_BUTTON_37), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_TAI_XIU_WIN_38() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_TAI_XIU_WIN_38)); }
	inline String_t* get_SOUND_TAI_XIU_WIN_38() const { return ___SOUND_TAI_XIU_WIN_38; }
	inline String_t** get_address_of_SOUND_TAI_XIU_WIN_38() { return &___SOUND_TAI_XIU_WIN_38; }
	inline void set_SOUND_TAI_XIU_WIN_38(String_t* value)
	{
		___SOUND_TAI_XIU_WIN_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_TAI_XIU_WIN_38), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_TAI_XIU_LOSE_39() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_TAI_XIU_LOSE_39)); }
	inline String_t* get_SOUND_TAI_XIU_LOSE_39() const { return ___SOUND_TAI_XIU_LOSE_39; }
	inline String_t** get_address_of_SOUND_TAI_XIU_LOSE_39() { return &___SOUND_TAI_XIU_LOSE_39; }
	inline void set_SOUND_TAI_XIU_LOSE_39(String_t* value)
	{
		___SOUND_TAI_XIU_LOSE_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_TAI_XIU_LOSE_39), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_BUTTON_40() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_BUTTON_40)); }
	inline String_t* get_SOUND_BUTTON_40() const { return ___SOUND_BUTTON_40; }
	inline String_t** get_address_of_SOUND_BUTTON_40() { return &___SOUND_BUTTON_40; }
	inline void set_SOUND_BUTTON_40(String_t* value)
	{
		___SOUND_BUTTON_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_BUTTON_40), (void*)value);
	}

	inline static int32_t get_offset_of_SOUND_CHIP_FAIL_41() { return static_cast<int32_t>(offsetof(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields, ___SOUND_CHIP_FAIL_41)); }
	inline String_t* get_SOUND_CHIP_FAIL_41() const { return ___SOUND_CHIP_FAIL_41; }
	inline String_t** get_address_of_SOUND_CHIP_FAIL_41() { return &___SOUND_CHIP_FAIL_41; }
	inline void set_SOUND_CHIP_FAIL_41(String_t* value)
	{
		___SOUND_CHIP_FAIL_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SOUND_CHIP_FAIL_41), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// TXResult
struct TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0  : public RuntimeObject
{
public:
	// System.Int32 TXResult::money
	int32_t ___money_0;
	// System.Int32 TXResult::number
	int32_t ___number_1;

public:
	inline static int32_t get_offset_of_money_0() { return static_cast<int32_t>(offsetof(TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0, ___money_0)); }
	inline int32_t get_money_0() const { return ___money_0; }
	inline int32_t* get_address_of_money_0() { return &___money_0; }
	inline void set_money_0(int32_t value)
	{
		___money_0 = value;
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0, ___number_1)); }
	inline int32_t get_number_1() const { return ___number_1; }
	inline int32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(int32_t value)
	{
		___number_1 = value;
	}
};


// TaiXiuRule
struct TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B  : public RuntimeObject
{
public:
	// System.Int32 TaiXiuRule::betMoney
	int32_t ___betMoney_2;
	// System.Int32 TaiXiuRule::lastnumber
	int32_t ___lastnumber_3;

public:
	inline static int32_t get_offset_of_betMoney_2() { return static_cast<int32_t>(offsetof(TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B, ___betMoney_2)); }
	inline int32_t get_betMoney_2() const { return ___betMoney_2; }
	inline int32_t* get_address_of_betMoney_2() { return &___betMoney_2; }
	inline void set_betMoney_2(int32_t value)
	{
		___betMoney_2 = value;
	}

	inline static int32_t get_offset_of_lastnumber_3() { return static_cast<int32_t>(offsetof(TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B, ___lastnumber_3)); }
	inline int32_t get_lastnumber_3() const { return ___lastnumber_3; }
	inline int32_t* get_address_of_lastnumber_3() { return &___lastnumber_3; }
	inline void set_lastnumber_3(int32_t value)
	{
		___lastnumber_3 = value;
	}
};


// UserModel
struct UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF  : public RuntimeObject
{
public:
	// System.Int32 UserModel::money
	int32_t ___money_0;
	// System.Single UserModel::volume
	float ___volume_1;
	// UserStatistic UserModel::statistic
	UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * ___statistic_2;

public:
	inline static int32_t get_offset_of_money_0() { return static_cast<int32_t>(offsetof(UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF, ___money_0)); }
	inline int32_t get_money_0() const { return ___money_0; }
	inline int32_t* get_address_of_money_0() { return &___money_0; }
	inline void set_money_0(int32_t value)
	{
		___money_0 = value;
	}

	inline static int32_t get_offset_of_volume_1() { return static_cast<int32_t>(offsetof(UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF, ___volume_1)); }
	inline float get_volume_1() const { return ___volume_1; }
	inline float* get_address_of_volume_1() { return &___volume_1; }
	inline void set_volume_1(float value)
	{
		___volume_1 = value;
	}

	inline static int32_t get_offset_of_statistic_2() { return static_cast<int32_t>(offsetof(UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF, ___statistic_2)); }
	inline UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * get_statistic_2() const { return ___statistic_2; }
	inline UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 ** get_address_of_statistic_2() { return &___statistic_2; }
	inline void set_statistic_2(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * value)
	{
		___statistic_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statistic_2), (void*)value);
	}
};


// UserStatistic
struct UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3  : public RuntimeObject
{
public:
	// System.Single UserStatistic::winRate
	float ___winRate_0;
	// System.Int32 UserStatistic::win
	int32_t ___win_1;
	// System.Int32 UserStatistic::round
	int32_t ___round_2;
	// System.Int32 UserStatistic::highestSingeWin
	int32_t ___highestSingeWin_3;
	// System.Int32 UserStatistic::timeOfBigBang
	int32_t ___timeOfBigBang_4;

public:
	inline static int32_t get_offset_of_winRate_0() { return static_cast<int32_t>(offsetof(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3, ___winRate_0)); }
	inline float get_winRate_0() const { return ___winRate_0; }
	inline float* get_address_of_winRate_0() { return &___winRate_0; }
	inline void set_winRate_0(float value)
	{
		___winRate_0 = value;
	}

	inline static int32_t get_offset_of_win_1() { return static_cast<int32_t>(offsetof(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3, ___win_1)); }
	inline int32_t get_win_1() const { return ___win_1; }
	inline int32_t* get_address_of_win_1() { return &___win_1; }
	inline void set_win_1(int32_t value)
	{
		___win_1 = value;
	}

	inline static int32_t get_offset_of_round_2() { return static_cast<int32_t>(offsetof(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3, ___round_2)); }
	inline int32_t get_round_2() const { return ___round_2; }
	inline int32_t* get_address_of_round_2() { return &___round_2; }
	inline void set_round_2(int32_t value)
	{
		___round_2 = value;
	}

	inline static int32_t get_offset_of_highestSingeWin_3() { return static_cast<int32_t>(offsetof(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3, ___highestSingeWin_3)); }
	inline int32_t get_highestSingeWin_3() const { return ___highestSingeWin_3; }
	inline int32_t* get_address_of_highestSingeWin_3() { return &___highestSingeWin_3; }
	inline void set_highestSingeWin_3(int32_t value)
	{
		___highestSingeWin_3 = value;
	}

	inline static int32_t get_offset_of_timeOfBigBang_4() { return static_cast<int32_t>(offsetof(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3, ___timeOfBigBang_4)); }
	inline int32_t get_timeOfBigBang_4() const { return ___timeOfBigBang_4; }
	inline int32_t* get_address_of_timeOfBigBang_4() { return &___timeOfBigBang_4; }
	inline void set_timeOfBigBang_4(int32_t value)
	{
		___timeOfBigBang_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8EDD49424F7AFC055DC1442B3F99B3BFCF6B09F0  : public RuntimeObject
{
public:
	// UnityEngine.AudioSource DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::target
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t8EDD49424F7AFC055DC1442B3F99B3BFCF6B09F0, ___target_0)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_target_0() const { return ___target_0; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tA5DAB4AB298719A5FC9203633FE7CAE2D7AFBF0A  : public RuntimeObject
{
public:
	// UnityEngine.AudioSource DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::target
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tA5DAB4AB298719A5FC9203633FE7CAE2D7AFBF0A, ___target_0)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_target_0() const { return ___target_0; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1  : public RuntimeObject
{
public:
	// UnityEngine.Audio.AudioMixer DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::target
	AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * ___target_0;
	// System.String DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::floatName
	String_t* ___floatName_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1, ___target_0)); }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * get_target_0() const { return ___target_0; }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_floatName_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1, ___floatName_1)); }
	inline String_t* get_floatName_1() const { return ___floatName_1; }
	inline String_t** get_address_of_floatName_1() { return &___floatName_1; }
	inline void set_floatName_1(String_t* value)
	{
		___floatName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatName_1), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tF06F41913CFED04E5FC3E2C676BCEAC2D3E53CAC  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tF06F41913CFED04E5FC3E2C676BCEAC2D3E53CAC, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::trans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans_0;
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_1;

public:
	inline static int32_t get_offset_of_trans_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937, ___trans_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trans_0() const { return ___trans_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trans_0() { return &___trans_0; }
	inline void set_trans_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trans_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trans_0), (void*)value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937, ___target_1)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_1() const { return ___target_1; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t5BD4116FD80F4DAD54FD39BBD7A2CFBDAEAB3AF3  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t5BD4116FD80F4DAD54FD39BBD7A2CFBDAEAB3AF3, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t35A2F555A5E408DEE2EA63254AACB729C014757D  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t35A2F555A5E408DEE2EA63254AACB729C014757D, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t39BE4FE1476B4D5D73FC150406C576C638973F8D  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t39BE4FE1476B4D5D73FC150406C576C638973F8D, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t3A8BE7E3EE8D0963B5FC3AE4F184CAF2EB8E1D84  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3A8BE7E3EE8D0963B5FC3AE4F184CAF2EB8E1D84, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tC3DF99D3D2F6A0C0E6651294AE0DF0537CEC4617  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tC3DF99D3D2F6A0C0E6651294AE0DF0537CEC4617, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tF8E56709396C6DFFECA7608E4CD67CBE2C1C1CE5  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_tF8E56709396C6DFFECA7608E4CD67CBE2C1C1CE5, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::trans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans_0;
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_1;

public:
	inline static int32_t get_offset_of_trans_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440, ___trans_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trans_0() const { return ___trans_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trans_0() { return &___trans_0; }
	inline void set_trans_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trans_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trans_0), (void*)value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440, ___target_1)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_1() const { return ___target_1; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB9266040A99BBE64FC737A175355345A13E86D21  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tB9266040A99BBE64FC737A175355345A13E86D21, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tED64664CBF4D43290FDDCBF237DF29F9DB8F92A9  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody2D DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::target
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tED64664CBF4D43290FDDCBF237DF29F9DB8F92A9, ___target_0)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_target_0() const { return ___target_0; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tDABE9F243A4095C0C2295D15C58B0D3334267A3A  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody2D DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::target
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tDABE9F243A4095C0C2295D15C58B0D3334267A3A, ___target_0)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_target_0() const { return ___target_0; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tB7DA75EB7F11962B20C503C1B2A50BF4D821E318  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody2D DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::target
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tB7DA75EB7F11962B20C503C1B2A50BF4D821E318, ___target_0)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_target_0() const { return ___target_0; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB63C203014F824EA9466F064AF2D8A157A7F4CBF  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody2D DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::target
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tB63C203014F824EA9466F064AF2D8A157A7F4CBF, ___target_0)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_target_0() const { return ___target_0; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t865A37B70235C08B0F32F1F40EAB16312D05FD50  : public RuntimeObject
{
public:
	// UnityEngine.SpriteRenderer DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::target
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t865A37B70235C08B0F32F1F40EAB16312D05FD50, ___target_0)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_target_0() const { return ___target_0; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t0A5F164BAD8ACAD20D458366B497C9B9C1974AE4  : public RuntimeObject
{
public:
	// UnityEngine.SpriteRenderer DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::target
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t0A5F164BAD8ACAD20D458366B497C9B9C1974AE4, ___target_0)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_target_0() const { return ___target_0; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7D1FCC95A881539756647760D7E3BCAD117D9C2F  : public RuntimeObject
{
public:
	// UnityEngine.CanvasGroup DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::target
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t7D1FCC95A881539756647760D7E3BCAD117D9C2F, ___target_0)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_target_0() const { return ___target_0; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t8BFF1858EDF6EB2283AE20F2D8CC662A1FA5B379  : public RuntimeObject
{
public:
	// UnityEngine.UI.Outline DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::target
	Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t8BFF1858EDF6EB2283AE20F2D8CC662A1FA5B379, ___target_0)); }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * get_target_0() const { return ___target_0; }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t5C701670B3C5449F73D82915BD4DA267A8B8E8F5  : public RuntimeObject
{
public:
	// UnityEngine.UI.Outline DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::target
	Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t5C701670B3C5449F73D82915BD4DA267A8B8E8F5, ___target_0)); }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * get_target_0() const { return ___target_0; }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t9C18A438FEAA8C5C1A925F5F28D6DF30A8D5B269  : public RuntimeObject
{
public:
	// UnityEngine.UI.Outline DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::target
	Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t9C18A438FEAA8C5C1A925F5F28D6DF30A8D5B269, ___target_0)); }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * get_target_0() const { return ___target_0; }
	inline Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t27965A830C5CE83826CC357F50299FE28BE9CABB  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t27965A830C5CE83826CC357F50299FE28BE9CABB, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t532827BA234D3C2B9DA5E065866B8C8F605250F4  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t532827BA234D3C2B9DA5E065866B8C8F605250F4, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t1E74F8DF7C76B80F85C66967590B72EF52627D1C  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t1E74F8DF7C76B80F85C66967590B72EF52627D1C, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t6FE99B74BA758AD9E3C5FA4B81F22E50E2878289  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t6FE99B74BA758AD9E3C5FA4B81F22E50E2878289, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t161B9E0C9F3AF194B3F6E501D4E253148BFDFEB6  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t161B9E0C9F3AF194B3F6E501D4E253148BFDFEB6, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t28369CB684CE937EF263102FBF87D2E7FC952FD0  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t28369CB684CE937EF263102FBF87D2E7FC952FD0, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t7047CE2AF01FC75FD677DF4C1C7E4B32EC2452A5  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t7047CE2AF01FC75FD677DF4C1C7E4B32EC2452A5, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t585165D7235045AD6EACEA96E3084E01A742C936  : public RuntimeObject
{
public:
	// UnityEngine.UI.Graphic DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::target
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t585165D7235045AD6EACEA96E3084E01A742C936, ___target_0)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_target_0() const { return ___target_0; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tB3B621D850CE15CA278C20DAAA2C3C0358206A21  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tB3B621D850CE15CA278C20DAAA2C3C0358206A21, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t770F928128D9FC7ADA02EA054C711D60F30E16B9  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t770F928128D9FC7ADA02EA054C711D60F30E16B9, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t97D2AA4FE9552148F7E37D2DFED676A57DFB1351  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t97D2AA4FE9552148F7E37D2DFED676A57DFB1351, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t26F763CBFD1D4D4EDFFE9BD383DB924D3B6033E7  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t26F763CBFD1D4D4EDFFE9BD383DB924D3B6033E7, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tF09BD80EEE9ECC7296C10982CEDF0DBFD274B895  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tF09BD80EEE9ECC7296C10982CEDF0DBFD274B895, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tA347965DD1CA3D351E3B581654CC8128EDFF3061  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_tA347965DD1CA3D351E3B581654CC8128EDFF3061, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t93DB5B4DF0357D11E4A951B037CFD527BF3B56C8  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t93DB5B4DF0357D11E4A951B037CFD527BF3B56C8, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t4D4A1506D5AC9A010D11414FAD7E48C6A7FBA299  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t4D4A1506D5AC9A010D11414FAD7E48C6A7FBA299, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tE68276C76E7215C53283D3ADC6A731F1DF29E8C8  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tE68276C76E7215C53283D3ADC6A731F1DF29E8C8, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD73E62A2224FE13C8F6B52FCE8BD1C5FD313B99F  : public RuntimeObject
{
public:
	// UnityEngine.UI.Graphic DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::target
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD73E62A2224FE13C8F6B52FCE8BD1C5FD313B99F, ___target_0)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_target_0() const { return ___target_0; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t94F73A3FFC30F6C2558392FF5F07AE2E096BF84F  : public RuntimeObject
{
public:
	// UnityEngine.UI.ScrollRect DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::target
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t94F73A3FFC30F6C2558392FF5F07AE2E096BF84F, ___target_0)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_target_0() const { return ___target_0; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t805529EB975D0626EBC97ACAB3880EFC6AB317A3  : public RuntimeObject
{
public:
	// UnityEngine.UI.ScrollRect DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::target
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t805529EB975D0626EBC97ACAB3880EFC6AB317A3, ___target_0)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_target_0() const { return ___target_0; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_tA414D6A179D68B4F320ED1DB2C432127B75AB0E9  : public RuntimeObject
{
public:
	// UnityEngine.UI.ScrollRect DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::target
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_tA414D6A179D68B4F320ED1DB2C432127B75AB0E9, ___target_0)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_target_0() const { return ___target_0; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t5CB8EE7F07D06E29D59588955B144762AF73E4F6  : public RuntimeObject
{
public:
	// UnityEngine.UI.Slider DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::target
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t5CB8EE7F07D06E29D59588955B144762AF73E4F6, ___target_0)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_target_0() const { return ___target_0; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t60E5325D834E607C2110DB690899FC3C7A44D407  : public RuntimeObject
{
public:
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::target
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t60E5325D834E607C2110DB690899FC3C7A44D407, ___target_0)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_target_0() const { return ___target_0; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t8938338C4A6E58BB25C48A1F318E0458FD3B8CC4  : public RuntimeObject
{
public:
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::target
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t8938338C4A6E58BB25C48A1F318E0458FD3B8CC4, ___target_0)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_target_0() const { return ___target_0; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tCE8E904A62CBD9F143B3D692CA532EFA7A6F777D  : public RuntimeObject
{
public:
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::target
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tCE8E904A62CBD9F143B3D692CA532EFA7A6F777D, ___target_0)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_target_0() const { return ___target_0; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t9A0201E5801BCA86E98A5567791D120983EAD387  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::target
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t9A0201E5801BCA86E98A5567791D120983EAD387, ___target_0)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_target_0() const { return ___target_0; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t9CD30C09F13A8901FBD37CEEE628023A3AC88587  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::target
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t9CD30C09F13A8901FBD37CEEE628023A3AC88587, ___target_0)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_target_0() const { return ___target_0; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tB80886C18986402D46C539623ED89C069D383A01  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::target
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tB80886C18986402D46C539623ED89C069D383A01, ___target_0)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_target_0() const { return ___target_0; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t3101E53746ED12113974445EFE5F8ED7275D9845  : public RuntimeObject
{
public:
	// UnityEngine.UI.LayoutElement DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::target
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t3101E53746ED12113974445EFE5F8ED7275D9845, ___target_0)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_target_0() const { return ___target_0; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE55619A7933D4E2E6A3AF6BCBAB6B4C17A865A55  : public RuntimeObject
{
public:
	// UnityEngine.UI.LayoutElement DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::target
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tE55619A7933D4E2E6A3AF6BCBAB6B4C17A865A55, ___target_0)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_target_0() const { return ___target_0; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t7A8C490B052492D0F6162243E706C61D6E7EA629  : public RuntimeObject
{
public:
	// UnityEngine.UI.LayoutElement DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::target
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t7A8C490B052492D0F6162243E706C61D6E7EA629, ___target_0)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_target_0() const { return ___target_0; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/Utils
struct Utils_t527C9032C20CC850EB3CA3932CCF65246FD765BA  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::target
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___target_0;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::propertyID
	int32_t ___propertyID_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581, ___target_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_target_0() const { return ___target_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581, ___propertyID_1)); }
	inline int32_t get_propertyID_1() const { return ___propertyID_1; }
	inline int32_t* get_address_of_propertyID_1() { return &___propertyID_1; }
	inline void set_propertyID_1(int32_t value)
	{
		___propertyID_1 = value;
	}
};


// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::target
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___target_0;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::propertyID
	int32_t ___propertyID_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551, ___target_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_target_0() const { return ___target_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551, ___propertyID_1)); }
	inline int32_t get_propertyID_1() const { return ___propertyID_1; }
	inline int32_t* get_address_of_propertyID_1() { return &___propertyID_1; }
	inline void set_propertyID_1(int32_t value)
	{
		___propertyID_1 = value;
	}
};


// DG.Tweening.DOTweenModuleUtils/Physics
struct Physics_t379352FCCF26C01744720033D3784D7F57DE0D8F  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t53BDF2E37BFB95287099C6E583DADCA05E3069F8  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t53BDF2E37BFB95287099C6E583DADCA05E3069F8, ___target_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_0() const { return ___target_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tC860FA7151AA6FCFDF839398CFEDFEBF0713CB61  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tC860FA7151AA6FCFDF839398CFEDFEBF0713CB61, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// SlotFruitGame/<IEPlaySymbolSound>d__26
struct U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7  : public RuntimeObject
{
public:
	// System.Int32 SlotFruitGame/<IEPlaySymbolSound>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SlotFruitGame/<IEPlaySymbolSound>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.Generic.List`1<SymbolType> SlotFruitGame/<IEPlaySymbolSound>d__26::symbolTypeWins
	List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * ___symbolTypeWins_2;
	// SlotFruitGame SlotFruitGame/<IEPlaySymbolSound>d__26::<>4__this
	SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_symbolTypeWins_2() { return static_cast<int32_t>(offsetof(U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7, ___symbolTypeWins_2)); }
	inline List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * get_symbolTypeWins_2() const { return ___symbolTypeWins_2; }
	inline List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 ** get_address_of_symbolTypeWins_2() { return &___symbolTypeWins_2; }
	inline void set_symbolTypeWins_2(List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * value)
	{
		___symbolTypeWins_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbolTypeWins_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7, ___U3CU3E4__this_3)); }
	inline SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// SoundUtility/<StopLoopSound>d__14
struct U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553  : public RuntimeObject
{
public:
	// System.Int32 SoundUtility/<StopLoopSound>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SoundUtility/<StopLoopSound>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single SoundUtility/<StopLoopSound>d__14::time
	float ___time_2;
	// UnityEngine.AudioSource SoundUtility/<StopLoopSound>d__14::source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source_3;
	// SoundUtility SoundUtility/<StopLoopSound>d__14::<>4__this
	SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * ___U3CU3E4__this_4;
	// System.String SoundUtility/<StopLoopSound>d__14::key
	String_t* ___key_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553, ___source_3)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_source_3() const { return ___source_3; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553, ___U3CU3E4__this_4)); }
	inline SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_key_5() { return static_cast<int32_t>(offsetof(U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553, ___key_5)); }
	inline String_t* get_key_5() const { return ___key_5; }
	inline String_t** get_address_of_key_5() { return &___key_5; }
	inline void set_key_5(String_t* value)
	{
		___key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_5), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// DG.Tweening.Plugins.Options.NoOptions
struct NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t2F23740D8943FC7C06AD3DD80B71D65744F140F2__padding[24];
	};

public:
};


// DG.Tweening.DOTweenCYInstruction/WaitForCompletion
struct WaitForCompletion_t9F365BC31EF3315DA3B809E3CB617F803283D67F  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForCompletion::t
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t_0;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(WaitForCompletion_t9F365BC31EF3315DA3B809E3CB617F803283D67F, ___t_0)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_t_0() const { return ___t_0; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}
};


// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
struct WaitForElapsedLoops_t59B0D77B88598E4CD91A4C3A1508F2FB810470A4  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::t
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t_0;
	// System.Int32 DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::elapsedLoops
	int32_t ___elapsedLoops_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(WaitForElapsedLoops_t59B0D77B88598E4CD91A4C3A1508F2FB810470A4, ___t_0)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_t_0() const { return ___t_0; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_elapsedLoops_1() { return static_cast<int32_t>(offsetof(WaitForElapsedLoops_t59B0D77B88598E4CD91A4C3A1508F2FB810470A4, ___elapsedLoops_1)); }
	inline int32_t get_elapsedLoops_1() const { return ___elapsedLoops_1; }
	inline int32_t* get_address_of_elapsedLoops_1() { return &___elapsedLoops_1; }
	inline void set_elapsedLoops_1(int32_t value)
	{
		___elapsedLoops_1 = value;
	}
};


// DG.Tweening.DOTweenCYInstruction/WaitForKill
struct WaitForKill_t1C0002DDEF1C49DDE1DB6D93C0C16BBF662A2B6D  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForKill::t
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t_0;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(WaitForKill_t1C0002DDEF1C49DDE1DB6D93C0C16BBF662A2B6D, ___t_0)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_t_0() const { return ___t_0; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}
};


// DG.Tweening.DOTweenCYInstruction/WaitForPosition
struct WaitForPosition_tF45B25B48601A808ACA7A19EEAA6DABAFE64D3CB  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForPosition::t
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t_0;
	// System.Single DG.Tweening.DOTweenCYInstruction/WaitForPosition::position
	float ___position_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(WaitForPosition_tF45B25B48601A808ACA7A19EEAA6DABAFE64D3CB, ___t_0)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_t_0() const { return ___t_0; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(WaitForPosition_tF45B25B48601A808ACA7A19EEAA6DABAFE64D3CB, ___position_1)); }
	inline float get_position_1() const { return ___position_1; }
	inline float* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(float value)
	{
		___position_1 = value;
	}
};


// DG.Tweening.DOTweenCYInstruction/WaitForRewind
struct WaitForRewind_t63F6F6401744395FF42FD23059C8F13A08B6EF0E  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForRewind::t
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t_0;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(WaitForRewind_t63F6F6401744395FF42FD23059C8F13A08B6EF0E, ___t_0)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_t_0() const { return ___t_0; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}
};


// DG.Tweening.DOTweenCYInstruction/WaitForStart
struct WaitForStart_tAF9DF336B5F10E0C153522BD49426FC7EF68540C  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForStart::t
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t_0;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(WaitForStart_tAF9DF336B5F10E0C153522BD49426FC7EF68540C, ___t_0)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_t_0() const { return ___t_0; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// DG.Tweening.AxisConstraint
struct AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_tA0D384964013674923F26C7DF2618FB76CD3D7F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DG.Tweening.Plugins.Options.OrientType
struct OrientType_t98C6DBF0A80C2A938CA315BCE990CF0201D52886 
{
public:
	// System.Int32 DG.Tweening.Plugins.Options.OrientType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientType_t98C6DBF0A80C2A938CA315BCE990CF0201D52886, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.PathMode
struct PathMode_tC3536FD34C73F94ADFB5C7DC9415985E353CE572 
{
public:
	// System.Int32 DG.Tweening.PathMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathMode_tC3536FD34C73F94ADFB5C7DC9415985E353CE572, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.PathType
struct PathType_tBA0D4391850F4868EE61BFE9579098DD42D02899 
{
public:
	// System.Int32 DG.Tweening.PathType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathType_tBA0D4391850F4868EE61BFE9579098DD42D02899, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SymbolType
struct SymbolType_t46E05101ABB1D1755132F7D5A0F24D6D48A813BB 
{
public:
	// System.Int32 SymbolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SymbolType_t46E05101ABB1D1755132F7D5A0F24D6D48A813BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TXBetType
struct TXBetType_tF55B76C2C95CCD04A81346B419BE610E57398396 
{
public:
	// System.Int32 TXBetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TXBetType_tF55B76C2C95CCD04A81346B419BE610E57398396, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.DOTweenAnimation/AnimationType
struct AnimationType_tB9DCEC00E4867CACC56CD4A05962EC48C03364F7 
{
public:
	// System.Int32 DG.Tweening.DOTweenAnimation/AnimationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationType_tB9DCEC00E4867CACC56CD4A05962EC48C03364F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.DOTweenAnimation/TargetType
struct TargetType_tF7D7A457E5A00EEDADE64E635A7F8C04DD1D9688 
{
public:
	// System.Int32 DG.Tweening.DOTweenAnimation/TargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetType_tF7D7A457E5A00EEDADE64E635A7F8C04DD1D9688, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::target
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target_0;
	// System.Single DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::startPosY
	float ___startPosY_1;
	// System.Boolean DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::offsetYSet
	bool ___offsetYSet_2;
	// System.Single DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::offsetY
	float ___offsetY_3;
	// DG.Tweening.Sequence DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::s
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___s_4;
	// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::endValue
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endValue_5;
	// DG.Tweening.Tween DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::yTween
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___yTween_6;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___target_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_target_0() const { return ___target_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_startPosY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___startPosY_1)); }
	inline float get_startPosY_1() const { return ___startPosY_1; }
	inline float* get_address_of_startPosY_1() { return &___startPosY_1; }
	inline void set_startPosY_1(float value)
	{
		___startPosY_1 = value;
	}

	inline static int32_t get_offset_of_offsetYSet_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___offsetYSet_2)); }
	inline bool get_offsetYSet_2() const { return ___offsetYSet_2; }
	inline bool* get_address_of_offsetYSet_2() { return &___offsetYSet_2; }
	inline void set_offsetYSet_2(bool value)
	{
		___offsetYSet_2 = value;
	}

	inline static int32_t get_offset_of_offsetY_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___offsetY_3)); }
	inline float get_offsetY_3() const { return ___offsetY_3; }
	inline float* get_address_of_offsetY_3() { return &___offsetY_3; }
	inline void set_offsetY_3(float value)
	{
		___offsetY_3 = value;
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___s_4)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_s_4() const { return ___s_4; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___endValue_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endValue_5() const { return ___endValue_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endValue_5() { return &___endValue_5; }
	inline void set_endValue_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endValue_5 = value;
	}

	inline static int32_t get_offset_of_yTween_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9, ___yTween_6)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_yTween_6() const { return ___yTween_6; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_yTween_6() { return &___yTween_6; }
	inline void set_yTween_6(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___yTween_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yTween_6), (void*)value);
	}
};


// DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E  : public RuntimeObject
{
public:
	// UnityEngine.Rigidbody2D DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::target
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___target_0;
	// System.Single DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::startPosY
	float ___startPosY_1;
	// System.Boolean DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::offsetYSet
	bool ___offsetYSet_2;
	// System.Single DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::offsetY
	float ___offsetY_3;
	// DG.Tweening.Sequence DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::s
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___s_4;
	// UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::endValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue_5;
	// DG.Tweening.Tween DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::yTween
	Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___yTween_6;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___target_0)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_target_0() const { return ___target_0; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_startPosY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___startPosY_1)); }
	inline float get_startPosY_1() const { return ___startPosY_1; }
	inline float* get_address_of_startPosY_1() { return &___startPosY_1; }
	inline void set_startPosY_1(float value)
	{
		___startPosY_1 = value;
	}

	inline static int32_t get_offset_of_offsetYSet_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___offsetYSet_2)); }
	inline bool get_offsetYSet_2() const { return ___offsetYSet_2; }
	inline bool* get_address_of_offsetYSet_2() { return &___offsetYSet_2; }
	inline void set_offsetYSet_2(bool value)
	{
		___offsetYSet_2 = value;
	}

	inline static int32_t get_offset_of_offsetY_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___offsetY_3)); }
	inline float get_offsetY_3() const { return ___offsetY_3; }
	inline float* get_address_of_offsetY_3() { return &___offsetY_3; }
	inline void set_offsetY_3(float value)
	{
		___offsetY_3 = value;
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___s_4)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_s_4() const { return ___s_4; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___endValue_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endValue_5() const { return ___endValue_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endValue_5() { return &___endValue_5; }
	inline void set_endValue_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endValue_5 = value;
	}

	inline static int32_t get_offset_of_yTween_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E, ___yTween_6)); }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * get_yTween_6() const { return ___yTween_6; }
	inline Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 ** get_address_of_yTween_6() { return &___yTween_6; }
	inline void set_yTween_6(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * value)
	{
		___yTween_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yTween_6), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::to
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to_0;
	// UnityEngine.SpriteRenderer DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::target
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4, ___to_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_to_0() const { return ___to_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4, ___target_1)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_target_1() const { return ___target_1; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::target
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___target_0;
	// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::startPosY
	float ___startPosY_1;
	// System.Boolean DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::offsetYSet
	bool ___offsetYSet_2;
	// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::offsetY
	float ___offsetY_3;
	// DG.Tweening.Sequence DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::s
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___s_4;
	// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::endValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endValue_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D, ___target_0)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_target_0() const { return ___target_0; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_startPosY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D, ___startPosY_1)); }
	inline float get_startPosY_1() const { return ___startPosY_1; }
	inline float* get_address_of_startPosY_1() { return &___startPosY_1; }
	inline void set_startPosY_1(float value)
	{
		___startPosY_1 = value;
	}

	inline static int32_t get_offset_of_offsetYSet_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D, ___offsetYSet_2)); }
	inline bool get_offsetYSet_2() const { return ___offsetYSet_2; }
	inline bool* get_address_of_offsetYSet_2() { return &___offsetYSet_2; }
	inline void set_offsetYSet_2(bool value)
	{
		___offsetYSet_2 = value;
	}

	inline static int32_t get_offset_of_offsetY_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D, ___offsetY_3)); }
	inline float get_offsetY_3() const { return ___offsetY_3; }
	inline float* get_address_of_offsetY_3() { return &___offsetY_3; }
	inline void set_offsetY_3(float value)
	{
		___offsetY_3 = value;
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D, ___s_4)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_s_4() const { return ___s_4; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D, ___endValue_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_endValue_5() const { return ___endValue_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_endValue_5() { return &___endValue_5; }
	inline void set_endValue_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___endValue_5 = value;
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::to
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to_0;
	// UnityEngine.UI.Graphic DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::target
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1, ___to_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_to_0() const { return ___to_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1, ___target_1)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_target_1() const { return ___target_1; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::to
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to_0;
	// UnityEngine.UI.Image DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::target
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA, ___to_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_to_0() const { return ___to_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA, ___target_1)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_target_1() const { return ___target_1; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::to
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to_0;
	// UnityEngine.UI.Text DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::target
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10, ___to_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_to_0() const { return ___to_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10, ___target_1)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_target_1() const { return ___target_1; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5  : public RuntimeObject
{
public:
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___wpLengths_3;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_4;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_5;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_6;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___wps_7;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t9F61665C9F79DD5715B9C6C357BC1A9F16326884* ___controlPoints_8;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_9;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___timesTable_11;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengthsTable_12;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraStartWp
	bool ___addedExtraStartWp_14;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraEndWp
	bool ___addedExtraEndWp_15;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ____incrementalClone_16;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_17;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_tC2631579BAB41F64C63A0909E8386B88B45F93D1 * ____decoder_18;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_19;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___nonLinearDrawWps_20;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_21;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lookAtPosition_22;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___gizmoColor_23;

public:
	inline static int32_t get_offset_of_wpLengths_3() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___wpLengths_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_wpLengths_3() const { return ___wpLengths_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_wpLengths_3() { return &___wpLengths_3; }
	inline void set_wpLengths_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___wpLengths_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wpLengths_3), (void*)value);
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_5() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___subdivisionsXSegment_5)); }
	inline int32_t get_subdivisionsXSegment_5() const { return ___subdivisionsXSegment_5; }
	inline int32_t* get_address_of_subdivisionsXSegment_5() { return &___subdivisionsXSegment_5; }
	inline void set_subdivisionsXSegment_5(int32_t value)
	{
		___subdivisionsXSegment_5 = value;
	}

	inline static int32_t get_offset_of_subdivisions_6() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___subdivisions_6)); }
	inline int32_t get_subdivisions_6() const { return ___subdivisions_6; }
	inline int32_t* get_address_of_subdivisions_6() { return &___subdivisions_6; }
	inline void set_subdivisions_6(int32_t value)
	{
		___subdivisions_6 = value;
	}

	inline static int32_t get_offset_of_wps_7() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___wps_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_wps_7() const { return ___wps_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_wps_7() { return &___wps_7; }
	inline void set_wps_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___wps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wps_7), (void*)value);
	}

	inline static int32_t get_offset_of_controlPoints_8() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___controlPoints_8)); }
	inline ControlPointU5BU5D_t9F61665C9F79DD5715B9C6C357BC1A9F16326884* get_controlPoints_8() const { return ___controlPoints_8; }
	inline ControlPointU5BU5D_t9F61665C9F79DD5715B9C6C357BC1A9F16326884** get_address_of_controlPoints_8() { return &___controlPoints_8; }
	inline void set_controlPoints_8(ControlPointU5BU5D_t9F61665C9F79DD5715B9C6C357BC1A9F16326884* value)
	{
		___controlPoints_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlPoints_8), (void*)value);
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_isFinalized_10() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___isFinalized_10)); }
	inline bool get_isFinalized_10() const { return ___isFinalized_10; }
	inline bool* get_address_of_isFinalized_10() { return &___isFinalized_10; }
	inline void set_isFinalized_10(bool value)
	{
		___isFinalized_10 = value;
	}

	inline static int32_t get_offset_of_timesTable_11() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___timesTable_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_timesTable_11() const { return ___timesTable_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_timesTable_11() { return &___timesTable_11; }
	inline void set_timesTable_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___timesTable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timesTable_11), (void*)value);
	}

	inline static int32_t get_offset_of_lengthsTable_12() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___lengthsTable_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_lengthsTable_12() const { return ___lengthsTable_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_lengthsTable_12() { return &___lengthsTable_12; }
	inline void set_lengthsTable_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___lengthsTable_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengthsTable_12), (void*)value);
	}

	inline static int32_t get_offset_of_linearWPIndex_13() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___linearWPIndex_13)); }
	inline int32_t get_linearWPIndex_13() const { return ___linearWPIndex_13; }
	inline int32_t* get_address_of_linearWPIndex_13() { return &___linearWPIndex_13; }
	inline void set_linearWPIndex_13(int32_t value)
	{
		___linearWPIndex_13 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_14() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___addedExtraStartWp_14)); }
	inline bool get_addedExtraStartWp_14() const { return ___addedExtraStartWp_14; }
	inline bool* get_address_of_addedExtraStartWp_14() { return &___addedExtraStartWp_14; }
	inline void set_addedExtraStartWp_14(bool value)
	{
		___addedExtraStartWp_14 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_15() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___addedExtraEndWp_15)); }
	inline bool get_addedExtraEndWp_15() const { return ___addedExtraEndWp_15; }
	inline bool* get_address_of_addedExtraEndWp_15() { return &___addedExtraEndWp_15; }
	inline void set_addedExtraEndWp_15(bool value)
	{
		___addedExtraEndWp_15 = value;
	}

	inline static int32_t get_offset_of__incrementalClone_16() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ____incrementalClone_16)); }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * get__incrementalClone_16() const { return ____incrementalClone_16; }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 ** get_address_of__incrementalClone_16() { return &____incrementalClone_16; }
	inline void set__incrementalClone_16(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * value)
	{
		____incrementalClone_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____incrementalClone_16), (void*)value);
	}

	inline static int32_t get_offset_of__incrementalIndex_17() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ____incrementalIndex_17)); }
	inline int32_t get__incrementalIndex_17() const { return ____incrementalIndex_17; }
	inline int32_t* get_address_of__incrementalIndex_17() { return &____incrementalIndex_17; }
	inline void set__incrementalIndex_17(int32_t value)
	{
		____incrementalIndex_17 = value;
	}

	inline static int32_t get_offset_of__decoder_18() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ____decoder_18)); }
	inline ABSPathDecoder_tC2631579BAB41F64C63A0909E8386B88B45F93D1 * get__decoder_18() const { return ____decoder_18; }
	inline ABSPathDecoder_tC2631579BAB41F64C63A0909E8386B88B45F93D1 ** get_address_of__decoder_18() { return &____decoder_18; }
	inline void set__decoder_18(ABSPathDecoder_tC2631579BAB41F64C63A0909E8386B88B45F93D1 * value)
	{
		____decoder_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_18), (void*)value);
	}

	inline static int32_t get_offset_of__changed_19() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ____changed_19)); }
	inline bool get__changed_19() const { return ____changed_19; }
	inline bool* get_address_of__changed_19() { return &____changed_19; }
	inline void set__changed_19(bool value)
	{
		____changed_19 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_20() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___nonLinearDrawWps_20)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_nonLinearDrawWps_20() const { return ___nonLinearDrawWps_20; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_nonLinearDrawWps_20() { return &___nonLinearDrawWps_20; }
	inline void set_nonLinearDrawWps_20(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___nonLinearDrawWps_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nonLinearDrawWps_20), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_21() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___targetPosition_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_21() const { return ___targetPosition_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_21() { return &___targetPosition_21; }
	inline void set_targetPosition_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_21 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_22() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___lookAtPosition_22)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lookAtPosition_22() const { return ___lookAtPosition_22; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lookAtPosition_22() { return &___lookAtPosition_22; }
	inline void set_lookAtPosition_22(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lookAtPosition_22 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_23() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5, ___gizmoColor_23)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_gizmoColor_23() const { return ___gizmoColor_23; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_gizmoColor_23() { return &___gizmoColor_23; }
	inline void set_gizmoColor_23(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___gizmoColor_23 = value;
	}
};

struct Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5_StaticFields
{
public:
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_t2FA372BD7BB8D2A0CBCBCC812FBCB83703A63F9B * ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_tE244F738878748CB8B92F95C686BE0B57B066291 * ____linearDecoder_1;
	// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder DG.Tweening.Plugins.Core.PathCore.Path::_cubicBezierDecoder
	CubicBezierDecoder_t5807727848593CD408A4C942FA347EBC8F7A25FF * ____cubicBezierDecoder_2;

public:
	inline static int32_t get_offset_of__catmullRomDecoder_0() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5_StaticFields, ____catmullRomDecoder_0)); }
	inline CatmullRomDecoder_t2FA372BD7BB8D2A0CBCBCC812FBCB83703A63F9B * get__catmullRomDecoder_0() const { return ____catmullRomDecoder_0; }
	inline CatmullRomDecoder_t2FA372BD7BB8D2A0CBCBCC812FBCB83703A63F9B ** get_address_of__catmullRomDecoder_0() { return &____catmullRomDecoder_0; }
	inline void set__catmullRomDecoder_0(CatmullRomDecoder_t2FA372BD7BB8D2A0CBCBCC812FBCB83703A63F9B * value)
	{
		____catmullRomDecoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____catmullRomDecoder_0), (void*)value);
	}

	inline static int32_t get_offset_of__linearDecoder_1() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5_StaticFields, ____linearDecoder_1)); }
	inline LinearDecoder_tE244F738878748CB8B92F95C686BE0B57B066291 * get__linearDecoder_1() const { return ____linearDecoder_1; }
	inline LinearDecoder_tE244F738878748CB8B92F95C686BE0B57B066291 ** get_address_of__linearDecoder_1() { return &____linearDecoder_1; }
	inline void set__linearDecoder_1(LinearDecoder_tE244F738878748CB8B92F95C686BE0B57B066291 * value)
	{
		____linearDecoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____linearDecoder_1), (void*)value);
	}

	inline static int32_t get_offset_of__cubicBezierDecoder_2() { return static_cast<int32_t>(offsetof(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5_StaticFields, ____cubicBezierDecoder_2)); }
	inline CubicBezierDecoder_t5807727848593CD408A4C942FA347EBC8F7A25FF * get__cubicBezierDecoder_2() const { return ____cubicBezierDecoder_2; }
	inline CubicBezierDecoder_t5807727848593CD408A4C942FA347EBC8F7A25FF ** get_address_of__cubicBezierDecoder_2() { return &____cubicBezierDecoder_2; }
	inline void set__cubicBezierDecoder_2(CubicBezierDecoder_t5807727848593CD408A4C942FA347EBC8F7A25FF * value)
	{
		____cubicBezierDecoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cubicBezierDecoder_2), (void*)value);
	}
};


// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A 
{
public:
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startupRot_13;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_14;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_15;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_16;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_orientType_1() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___orientType_1)); }
	inline int32_t get_orientType_1() const { return ___orientType_1; }
	inline int32_t* get_address_of_orientType_1() { return &___orientType_1; }
	inline void set_orientType_1(int32_t value)
	{
		___orientType_1 = value;
	}

	inline static int32_t get_offset_of_lockPositionAxis_2() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lockPositionAxis_2)); }
	inline int32_t get_lockPositionAxis_2() const { return ___lockPositionAxis_2; }
	inline int32_t* get_address_of_lockPositionAxis_2() { return &___lockPositionAxis_2; }
	inline void set_lockPositionAxis_2(int32_t value)
	{
		___lockPositionAxis_2 = value;
	}

	inline static int32_t get_offset_of_lockRotationAxis_3() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lockRotationAxis_3)); }
	inline int32_t get_lockRotationAxis_3() const { return ___lockRotationAxis_3; }
	inline int32_t* get_address_of_lockRotationAxis_3() { return &___lockRotationAxis_3; }
	inline void set_lockRotationAxis_3(int32_t value)
	{
		___lockRotationAxis_3 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_4() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___isClosedPath_4)); }
	inline bool get_isClosedPath_4() const { return ___isClosedPath_4; }
	inline bool* get_address_of_isClosedPath_4() { return &___isClosedPath_4; }
	inline void set_isClosedPath_4(bool value)
	{
		___isClosedPath_4 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_5() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lookAtPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lookAtPosition_5() const { return ___lookAtPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lookAtPosition_5() { return &___lookAtPosition_5; }
	inline void set_lookAtPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lookAtPosition_5 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_6() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lookAtTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_lookAtTransform_6() const { return ___lookAtTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_lookAtTransform_6() { return &___lookAtTransform_6; }
	inline void set_lookAtTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___lookAtTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookAtTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_lookAhead_7() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___lookAhead_7)); }
	inline float get_lookAhead_7() const { return ___lookAhead_7; }
	inline float* get_address_of_lookAhead_7() { return &___lookAhead_7; }
	inline void set_lookAhead_7(float value)
	{
		___lookAhead_7 = value;
	}

	inline static int32_t get_offset_of_hasCustomForwardDirection_8() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___hasCustomForwardDirection_8)); }
	inline bool get_hasCustomForwardDirection_8() const { return ___hasCustomForwardDirection_8; }
	inline bool* get_address_of_hasCustomForwardDirection_8() { return &___hasCustomForwardDirection_8; }
	inline void set_hasCustomForwardDirection_8(bool value)
	{
		___hasCustomForwardDirection_8 = value;
	}

	inline static int32_t get_offset_of_forward_9() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___forward_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_forward_9() const { return ___forward_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_forward_9() { return &___forward_9; }
	inline void set_forward_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___forward_9 = value;
	}

	inline static int32_t get_offset_of_useLocalPosition_10() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___useLocalPosition_10)); }
	inline bool get_useLocalPosition_10() const { return ___useLocalPosition_10; }
	inline bool* get_address_of_useLocalPosition_10() { return &___useLocalPosition_10; }
	inline void set_useLocalPosition_10(bool value)
	{
		___useLocalPosition_10 = value;
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___parent_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_parent_11() const { return ___parent_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_11), (void*)value);
	}

	inline static int32_t get_offset_of_isRigidbody_12() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___isRigidbody_12)); }
	inline bool get_isRigidbody_12() const { return ___isRigidbody_12; }
	inline bool* get_address_of_isRigidbody_12() { return &___isRigidbody_12; }
	inline void set_isRigidbody_12(bool value)
	{
		___isRigidbody_12 = value;
	}

	inline static int32_t get_offset_of_startupRot_13() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___startupRot_13)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_startupRot_13() const { return ___startupRot_13; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_startupRot_13() { return &___startupRot_13; }
	inline void set_startupRot_13(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___startupRot_13 = value;
	}

	inline static int32_t get_offset_of_startupZRot_14() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___startupZRot_14)); }
	inline float get_startupZRot_14() const { return ___startupZRot_14; }
	inline float* get_address_of_startupZRot_14() { return &___startupZRot_14; }
	inline void set_startupZRot_14(float value)
	{
		___startupZRot_14 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_15() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___addedExtraStartWp_15)); }
	inline bool get_addedExtraStartWp_15() const { return ___addedExtraStartWp_15; }
	inline bool* get_address_of_addedExtraStartWp_15() { return &___addedExtraStartWp_15; }
	inline void set_addedExtraStartWp_15(bool value)
	{
		___addedExtraStartWp_15 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_16() { return static_cast<int32_t>(offsetof(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A, ___addedExtraEndWp_16)); }
	inline bool get_addedExtraEndWp_16() const { return ___addedExtraEndWp_16; }
	inline bool* get_address_of_addedExtraEndWp_16() { return &___addedExtraEndWp_16; }
	inline void set_addedExtraEndWp_16(bool value)
	{
		___addedExtraEndWp_16 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_5;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_11;
	int32_t ___isRigidbody_12;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startupRot_13;
	float ___startupZRot_14;
	int32_t ___addedExtraStartWp_15;
	int32_t ___addedExtraEndWp_16;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lookAtPosition_5;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent_11;
	int32_t ___isRigidbody_12;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___startupRot_13;
	float ___startupZRot_14;
	int32_t ___addedExtraStartWp_15;
	int32_t ___addedExtraEndWp_16;
};

// SymbolResult
struct SymbolResult_t4DFA5D9FEE85B3C7248CF883C6BCBFBAA41A4C77  : public RuntimeObject
{
public:
	// SymbolType SymbolResult::type
	int32_t ___type_0;
	// System.Int32 SymbolResult::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(SymbolResult_t4DFA5D9FEE85B3C7248CF883C6BCBFBAA41A4C77, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(SymbolResult_t4DFA5D9FEE85B3C7248CF883C6BCBFBAA41A4C77, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_6;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_7;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_8;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_9;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_10;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_18;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_19;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_20;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_21;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_22;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_23;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_24;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_25;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_26;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_27;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_28;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_29;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_30;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_31;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_32;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_33;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_34;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_35;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_36;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_37;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_38;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_39;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_40;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_41;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_42;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_43;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_44;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_45;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_47;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_48;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_49;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_50;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_51;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_52;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_53;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_6)); }
	inline RuntimeObject * get_id_6() const { return ___id_6; }
	inline RuntimeObject ** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(RuntimeObject * value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_6), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_7)); }
	inline String_t* get_stringId_7() const { return ___stringId_7; }
	inline String_t** get_address_of_stringId_7() { return &___stringId_7; }
	inline void set_stringId_7(String_t* value)
	{
		___stringId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_7), (void*)value);
	}

	inline static int32_t get_offset_of_intId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_8)); }
	inline int32_t get_intId_8() const { return ___intId_8; }
	inline int32_t* get_address_of_intId_8() { return &___intId_8; }
	inline void set_intId_8(int32_t value)
	{
		___intId_8 = value;
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_9)); }
	inline RuntimeObject * get_target_9() const { return ___target_9; }
	inline RuntimeObject ** get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(RuntimeObject * value)
	{
		___target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_9), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_10)); }
	inline int32_t get_updateType_10() const { return ___updateType_10; }
	inline int32_t* get_address_of_updateType_10() { return &___updateType_10; }
	inline void set_updateType_10(int32_t value)
	{
		___updateType_10 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_11)); }
	inline bool get_isIndependentUpdate_11() const { return ___isIndependentUpdate_11; }
	inline bool* get_address_of_isIndependentUpdate_11() { return &___isIndependentUpdate_11; }
	inline void set_isIndependentUpdate_11(bool value)
	{
		___isIndependentUpdate_11 = value;
	}

	inline static int32_t get_offset_of_onPlay_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_12)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_12() const { return ___onPlay_12; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_12() { return &___onPlay_12; }
	inline void set_onPlay_12(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_12), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_13() const { return ___onPause_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_13() { return &___onPause_13; }
	inline void set_onPause_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_13), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_14() const { return ___onRewind_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_14() { return &___onRewind_14; }
	inline void set_onRewind_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_14), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_15() const { return ___onUpdate_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_15() { return &___onUpdate_15; }
	inline void set_onUpdate_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_16() const { return ___onStepComplete_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_16() { return &___onStepComplete_16; }
	inline void set_onStepComplete_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_16), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_17() const { return ___onComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_17() { return &___onComplete_17; }
	inline void set_onComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_18() const { return ___onKill_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_18() { return &___onKill_18; }
	inline void set_onKill_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_18), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_19)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_19() const { return ___onWaypointChange_19; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_19() { return &___onWaypointChange_19; }
	inline void set_onWaypointChange_19(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_19), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_20)); }
	inline bool get_isFrom_20() const { return ___isFrom_20; }
	inline bool* get_address_of_isFrom_20() { return &___isFrom_20; }
	inline void set_isFrom_20(bool value)
	{
		___isFrom_20 = value;
	}

	inline static int32_t get_offset_of_isBlendable_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_21)); }
	inline bool get_isBlendable_21() const { return ___isBlendable_21; }
	inline bool* get_address_of_isBlendable_21() { return &___isBlendable_21; }
	inline void set_isBlendable_21(bool value)
	{
		___isBlendable_21 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_22)); }
	inline bool get_isRecyclable_22() const { return ___isRecyclable_22; }
	inline bool* get_address_of_isRecyclable_22() { return &___isRecyclable_22; }
	inline void set_isRecyclable_22(bool value)
	{
		___isRecyclable_22 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_23)); }
	inline bool get_isSpeedBased_23() const { return ___isSpeedBased_23; }
	inline bool* get_address_of_isSpeedBased_23() { return &___isSpeedBased_23; }
	inline void set_isSpeedBased_23(bool value)
	{
		___isSpeedBased_23 = value;
	}

	inline static int32_t get_offset_of_autoKill_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_24)); }
	inline bool get_autoKill_24() const { return ___autoKill_24; }
	inline bool* get_address_of_autoKill_24() { return &___autoKill_24; }
	inline void set_autoKill_24(bool value)
	{
		___autoKill_24 = value;
	}

	inline static int32_t get_offset_of_duration_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_25)); }
	inline float get_duration_25() const { return ___duration_25; }
	inline float* get_address_of_duration_25() { return &___duration_25; }
	inline void set_duration_25(float value)
	{
		___duration_25 = value;
	}

	inline static int32_t get_offset_of_loops_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_26)); }
	inline int32_t get_loops_26() const { return ___loops_26; }
	inline int32_t* get_address_of_loops_26() { return &___loops_26; }
	inline void set_loops_26(int32_t value)
	{
		___loops_26 = value;
	}

	inline static int32_t get_offset_of_loopType_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_27)); }
	inline int32_t get_loopType_27() const { return ___loopType_27; }
	inline int32_t* get_address_of_loopType_27() { return &___loopType_27; }
	inline void set_loopType_27(int32_t value)
	{
		___loopType_27 = value;
	}

	inline static int32_t get_offset_of_delay_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_28)); }
	inline float get_delay_28() const { return ___delay_28; }
	inline float* get_address_of_delay_28() { return &___delay_28; }
	inline void set_delay_28(float value)
	{
		___delay_28 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_29)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_29() const { return ___U3CisRelativeU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_29() { return &___U3CisRelativeU3Ek__BackingField_29; }
	inline void set_U3CisRelativeU3Ek__BackingField_29(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_easeType_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_30)); }
	inline int32_t get_easeType_30() const { return ___easeType_30; }
	inline int32_t* get_address_of_easeType_30() { return &___easeType_30; }
	inline void set_easeType_30(int32_t value)
	{
		___easeType_30 = value;
	}

	inline static int32_t get_offset_of_customEase_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_31)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_31() const { return ___customEase_31; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_31() { return &___customEase_31; }
	inline void set_customEase_31(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_31), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_32)); }
	inline float get_easeOvershootOrAmplitude_32() const { return ___easeOvershootOrAmplitude_32; }
	inline float* get_address_of_easeOvershootOrAmplitude_32() { return &___easeOvershootOrAmplitude_32; }
	inline void set_easeOvershootOrAmplitude_32(float value)
	{
		___easeOvershootOrAmplitude_32 = value;
	}

	inline static int32_t get_offset_of_easePeriod_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_33)); }
	inline float get_easePeriod_33() const { return ___easePeriod_33; }
	inline float* get_address_of_easePeriod_33() { return &___easePeriod_33; }
	inline void set_easePeriod_33(float value)
	{
		___easePeriod_33 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_34)); }
	inline String_t* get_debugTargetId_34() const { return ___debugTargetId_34; }
	inline String_t** get_address_of_debugTargetId_34() { return &___debugTargetId_34; }
	inline void set_debugTargetId_34(String_t* value)
	{
		___debugTargetId_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_34), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_35)); }
	inline Type_t * get_typeofT1_35() const { return ___typeofT1_35; }
	inline Type_t ** get_address_of_typeofT1_35() { return &___typeofT1_35; }
	inline void set_typeofT1_35(Type_t * value)
	{
		___typeofT1_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_36)); }
	inline Type_t * get_typeofT2_36() const { return ___typeofT2_36; }
	inline Type_t ** get_address_of_typeofT2_36() { return &___typeofT2_36; }
	inline void set_typeofT2_36(Type_t * value)
	{
		___typeofT2_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_37)); }
	inline Type_t * get_typeofTPlugOptions_37() const { return ___typeofTPlugOptions_37; }
	inline Type_t ** get_address_of_typeofTPlugOptions_37() { return &___typeofTPlugOptions_37; }
	inline void set_typeofTPlugOptions_37(Type_t * value)
	{
		___typeofTPlugOptions_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_38)); }
	inline bool get_U3CactiveU3Ek__BackingField_38() const { return ___U3CactiveU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_38() { return &___U3CactiveU3Ek__BackingField_38; }
	inline void set_U3CactiveU3Ek__BackingField_38(bool value)
	{
		___U3CactiveU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_isSequenced_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_39)); }
	inline bool get_isSequenced_39() const { return ___isSequenced_39; }
	inline bool* get_address_of_isSequenced_39() { return &___isSequenced_39; }
	inline void set_isSequenced_39(bool value)
	{
		___isSequenced_39 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_40)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_40() const { return ___sequenceParent_40; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_40() { return &___sequenceParent_40; }
	inline void set_sequenceParent_40(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_40), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_41)); }
	inline int32_t get_activeId_41() const { return ___activeId_41; }
	inline int32_t* get_address_of_activeId_41() { return &___activeId_41; }
	inline void set_activeId_41(int32_t value)
	{
		___activeId_41 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_42)); }
	inline int32_t get_specialStartupMode_42() const { return ___specialStartupMode_42; }
	inline int32_t* get_address_of_specialStartupMode_42() { return &___specialStartupMode_42; }
	inline void set_specialStartupMode_42(int32_t value)
	{
		___specialStartupMode_42 = value;
	}

	inline static int32_t get_offset_of_creationLocked_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_43)); }
	inline bool get_creationLocked_43() const { return ___creationLocked_43; }
	inline bool* get_address_of_creationLocked_43() { return &___creationLocked_43; }
	inline void set_creationLocked_43(bool value)
	{
		___creationLocked_43 = value;
	}

	inline static int32_t get_offset_of_startupDone_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_44)); }
	inline bool get_startupDone_44() const { return ___startupDone_44; }
	inline bool* get_address_of_startupDone_44() { return &___startupDone_44; }
	inline void set_startupDone_44(bool value)
	{
		___startupDone_44 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_45)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_45() const { return ___U3CplayedOnceU3Ek__BackingField_45; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_45() { return &___U3CplayedOnceU3Ek__BackingField_45; }
	inline void set_U3CplayedOnceU3Ek__BackingField_45(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_46)); }
	inline float get_U3CpositionU3Ek__BackingField_46() const { return ___U3CpositionU3Ek__BackingField_46; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_46() { return &___U3CpositionU3Ek__BackingField_46; }
	inline void set_U3CpositionU3Ek__BackingField_46(float value)
	{
		___U3CpositionU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_fullDuration_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_47)); }
	inline float get_fullDuration_47() const { return ___fullDuration_47; }
	inline float* get_address_of_fullDuration_47() { return &___fullDuration_47; }
	inline void set_fullDuration_47(float value)
	{
		___fullDuration_47 = value;
	}

	inline static int32_t get_offset_of_completedLoops_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_48)); }
	inline int32_t get_completedLoops_48() const { return ___completedLoops_48; }
	inline int32_t* get_address_of_completedLoops_48() { return &___completedLoops_48; }
	inline void set_completedLoops_48(int32_t value)
	{
		___completedLoops_48 = value;
	}

	inline static int32_t get_offset_of_isPlaying_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_49)); }
	inline bool get_isPlaying_49() const { return ___isPlaying_49; }
	inline bool* get_address_of_isPlaying_49() { return &___isPlaying_49; }
	inline void set_isPlaying_49(bool value)
	{
		___isPlaying_49 = value;
	}

	inline static int32_t get_offset_of_isComplete_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_50)); }
	inline bool get_isComplete_50() const { return ___isComplete_50; }
	inline bool* get_address_of_isComplete_50() { return &___isComplete_50; }
	inline void set_isComplete_50(bool value)
	{
		___isComplete_50 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_51)); }
	inline float get_elapsedDelay_51() const { return ___elapsedDelay_51; }
	inline float* get_address_of_elapsedDelay_51() { return &___elapsedDelay_51; }
	inline void set_elapsedDelay_51(float value)
	{
		___elapsedDelay_51 = value;
	}

	inline static int32_t get_offset_of_delayComplete_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_52)); }
	inline bool get_delayComplete_52() const { return ___delayComplete_52; }
	inline bool* get_address_of_delayComplete_52() { return &___delayComplete_52; }
	inline void set_delayComplete_52(bool value)
	{
		___delayComplete_52 = value;
	}

	inline static int32_t get_offset_of_miscInt_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_53)); }
	inline int32_t get_miscInt_53() const { return ___miscInt_53; }
	inline int32_t* get_address_of_miscInt_53() { return &___miscInt_53; }
	inline void set_miscInt_53(int32_t value)
	{
		___miscInt_53 = value;
	}
};


// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB  : public MulticastDelegate_t
{
public:

public:
};


// UserProfile/UpdateValue
struct UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * ___sequencedTweens_54;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t6642D08E578C77292ED5537CF3192269131C189C * ____sequencedObjs_55;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_56;

public:
	inline static int32_t get_offset_of_sequencedTweens_54() { return static_cast<int32_t>(offsetof(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E, ___sequencedTweens_54)); }
	inline List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * get_sequencedTweens_54() const { return ___sequencedTweens_54; }
	inline List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 ** get_address_of_sequencedTweens_54() { return &___sequencedTweens_54; }
	inline void set_sequencedTweens_54(List_1_t08B78D4D8AA7967CCB0B188F26199678C0124DF1 * value)
	{
		___sequencedTweens_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequencedTweens_54), (void*)value);
	}

	inline static int32_t get_offset_of__sequencedObjs_55() { return static_cast<int32_t>(offsetof(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E, ____sequencedObjs_55)); }
	inline List_1_t6642D08E578C77292ED5537CF3192269131C189C * get__sequencedObjs_55() const { return ____sequencedObjs_55; }
	inline List_1_t6642D08E578C77292ED5537CF3192269131C189C ** get_address_of__sequencedObjs_55() { return &____sequencedObjs_55; }
	inline void set__sequencedObjs_55(List_1_t6642D08E578C77292ED5537CF3192269131C189C * value)
	{
		____sequencedObjs_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequencedObjs_55), (void*)value);
	}

	inline static int32_t get_offset_of_lastTweenInsertTime_56() { return static_cast<int32_t>(offsetof(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E, ___lastTweenInsertTime_56)); }
	inline float get_lastTweenInsertTime_56() const { return ___lastTweenInsertTime_56; }
	inline float* get_address_of_lastTweenInsertTime_56() { return &___lastTweenInsertTime_56; }
	inline void set_lastTweenInsertTime_56(float value)
	{
		___lastTweenInsertTime_56 = value;
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_54;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_55;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_54() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_54)); }
	inline bool get_hasManuallySetStartValue_54() const { return ___hasManuallySetStartValue_54; }
	inline bool* get_address_of_hasManuallySetStartValue_54() { return &___hasManuallySetStartValue_54; }
	inline void set_hasManuallySetStartValue_54(bool value)
	{
		___hasManuallySetStartValue_54 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_55)); }
	inline bool get_isFromAllowed_55() const { return ___isFromAllowed_55; }
	inline bool* get_address_of_isFromAllowed_55() { return &___isFromAllowed_55; }
	inline void set_isFromAllowed_55(bool value)
	{
		___isFromAllowed_55 = value;
	}
};


// MonoSingleton`1<SoundUtility>
struct MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_StaticFields
{
public:
	// T MonoSingleton`1::m_Instance
	SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * ___m_Instance_4;
	// System.Boolean MonoSingleton`1::_isInitialized
	bool ____isInitialized_5;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_StaticFields, ___m_Instance_4)); }
	inline SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_StaticFields, ____isInitialized_5)); }
	inline bool get__isInitialized_5() const { return ____isInitialized_5; }
	inline bool* get_address_of__isInitialized_5() { return &____isInitialized_5; }
	inline void set__isInitialized_5(bool value)
	{
		____isInitialized_5 = value;
	}
};


// MonoSingleton`1<TaiXiu>
struct MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E_StaticFields
{
public:
	// T MonoSingleton`1::m_Instance
	TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * ___m_Instance_4;
	// System.Boolean MonoSingleton`1::_isInitialized
	bool ____isInitialized_5;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E_StaticFields, ___m_Instance_4)); }
	inline TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E_StaticFields, ____isInitialized_5)); }
	inline bool get__isInitialized_5() const { return ____isInitialized_5; }
	inline bool* get_address_of__isInitialized_5() { return &____isInitialized_5; }
	inline void set__isInitialized_5(bool value)
	{
		____isInitialized_5 = value;
	}
};


// MonoSingleton`1<UserProfile>
struct MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_StaticFields
{
public:
	// T MonoSingleton`1::m_Instance
	UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * ___m_Instance_4;
	// System.Boolean MonoSingleton`1::_isInitialized
	bool ____isInitialized_5;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_StaticFields, ___m_Instance_4)); }
	inline UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_StaticFields, ____isInitialized_5)); }
	inline bool get__isInitialized_5() const { return ____isInitialized_5; }
	inline bool* get_address_of__isInitialized_5() { return &____isInitialized_5; }
	inline void set__isInitialized_5(bool value)
	{
		____isInitialized_5 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	int32_t ___startValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	int32_t ___endValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	int32_t ___changeValue_58;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  ___plugOptions_59;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * ___getter_60;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * ___setter_61;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * ___tweenPlugin_62;

public:
	inline static int32_t get_offset_of_startValue_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___startValue_56)); }
	inline int32_t get_startValue_56() const { return ___startValue_56; }
	inline int32_t* get_address_of_startValue_56() { return &___startValue_56; }
	inline void set_startValue_56(int32_t value)
	{
		___startValue_56 = value;
	}

	inline static int32_t get_offset_of_endValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___endValue_57)); }
	inline int32_t get_endValue_57() const { return ___endValue_57; }
	inline int32_t* get_address_of_endValue_57() { return &___endValue_57; }
	inline void set_endValue_57(int32_t value)
	{
		___endValue_57 = value;
	}

	inline static int32_t get_offset_of_changeValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___changeValue_58)); }
	inline int32_t get_changeValue_58() const { return ___changeValue_58; }
	inline int32_t* get_address_of_changeValue_58() { return &___changeValue_58; }
	inline void set_changeValue_58(int32_t value)
	{
		___changeValue_58 = value;
	}

	inline static int32_t get_offset_of_plugOptions_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___plugOptions_59)); }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  get_plugOptions_59() const { return ___plugOptions_59; }
	inline NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903 * get_address_of_plugOptions_59() { return &___plugOptions_59; }
	inline void set_plugOptions_59(NoOptions_tC6268051BD5FC68CCF71210DB794123387EA0903  value)
	{
		___plugOptions_59 = value;
	}

	inline static int32_t get_offset_of_getter_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___getter_60)); }
	inline DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * get_getter_60() const { return ___getter_60; }
	inline DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE ** get_address_of_getter_60() { return &___getter_60; }
	inline void set_getter_60(DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * value)
	{
		___getter_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_60), (void*)value);
	}

	inline static int32_t get_offset_of_setter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___setter_61)); }
	inline DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * get_setter_61() const { return ___setter_61; }
	inline DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 ** get_address_of_setter_61() { return &___setter_61; }
	inline void set_setter_61(DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * value)
	{
		___setter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_61), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1, ___tweenPlugin_62)); }
	inline ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * get_tweenPlugin_62() const { return ___tweenPlugin_62; }
	inline ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D ** get_address_of_tweenPlugin_62() { return &___tweenPlugin_62; }
	inline void set_tweenPlugin_62(ABSTweenPlugin_3_t9E1908A1F1C31ED571433EEB266EA3936C8F349D * value)
	{
		___tweenPlugin_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_62), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___startValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___endValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___changeValue_58;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  ___plugOptions_59;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * ___getter_60;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * ___setter_61;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t0048BB94992A96F02D427E2C26C6E92AC9AECD32 * ___tweenPlugin_62;

public:
	inline static int32_t get_offset_of_startValue_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___startValue_56)); }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * get_startValue_56() const { return ___startValue_56; }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 ** get_address_of_startValue_56() { return &___startValue_56; }
	inline void set_startValue_56(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * value)
	{
		___startValue_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_56), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___endValue_57)); }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * get_endValue_57() const { return ___endValue_57; }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 ** get_address_of_endValue_57() { return &___endValue_57; }
	inline void set_endValue_57(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * value)
	{
		___endValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___changeValue_58)); }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * get_changeValue_58() const { return ___changeValue_58; }
	inline Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 ** get_address_of_changeValue_58() { return &___changeValue_58; }
	inline void set_changeValue_58(Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * value)
	{
		___changeValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___plugOptions_59)); }
	inline PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  get_plugOptions_59() const { return ___plugOptions_59; }
	inline PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A * get_address_of_plugOptions_59() { return &___plugOptions_59; }
	inline void set_plugOptions_59(PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  value)
	{
		___plugOptions_59 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_59))->___lookAtTransform_6), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_59))->___parent_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getter_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___getter_60)); }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * get_getter_60() const { return ___getter_60; }
	inline DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A ** get_address_of_getter_60() { return &___getter_60; }
	inline void set_getter_60(DOGetter_1_tE8D2419A0219EB945463B02351F4905C77235E1A * value)
	{
		___getter_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_60), (void*)value);
	}

	inline static int32_t get_offset_of_setter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___setter_61)); }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * get_setter_61() const { return ___setter_61; }
	inline DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 ** get_address_of_setter_61() { return &___setter_61; }
	inline void set_setter_61(DOSetter_1_tAEE38AA9321AE4A0A4A4E5D496EA753BFB746B85 * value)
	{
		___setter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_61), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A, ___tweenPlugin_62)); }
	inline ABSTweenPlugin_3_t0048BB94992A96F02D427E2C26C6E92AC9AECD32 * get_tweenPlugin_62() const { return ___tweenPlugin_62; }
	inline ABSTweenPlugin_3_t0048BB94992A96F02D427E2C26C6E92AC9AECD32 ** get_address_of_tweenPlugin_62() { return &___tweenPlugin_62; }
	inline void set_tweenPlugin_62(ABSTweenPlugin_3_t0048BB94992A96F02D427E2C26C6E92AC9AECD32 * value)
	{
		___tweenPlugin_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_62), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BetRate
struct BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<BetEffect> BetRate::betsLeft
	List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 * ___betsLeft_4;
	// System.Collections.Generic.List`1<BetEffect> BetRate::betsRight
	List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 * ___betsRight_5;
	// System.Int32 BetRate::dir
	int32_t ___dir_6;
	// System.Int32 BetRate::index
	int32_t ___index_7;
	// System.Int32 BetRate::indexEnd
	int32_t ___indexEnd_8;
	// System.Boolean BetRate::onSpin
	bool ___onSpin_9;
	// System.Single BetRate::time
	float ___time_10;
	// System.Single BetRate::timeDelay
	float ___timeDelay_11;
	// System.Single BetRate::totalTime
	float ___totalTime_12;

public:
	inline static int32_t get_offset_of_betsLeft_4() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___betsLeft_4)); }
	inline List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 * get_betsLeft_4() const { return ___betsLeft_4; }
	inline List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 ** get_address_of_betsLeft_4() { return &___betsLeft_4; }
	inline void set_betsLeft_4(List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 * value)
	{
		___betsLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betsLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_betsRight_5() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___betsRight_5)); }
	inline List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 * get_betsRight_5() const { return ___betsRight_5; }
	inline List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 ** get_address_of_betsRight_5() { return &___betsRight_5; }
	inline void set_betsRight_5(List_1_t43E95D6AE0F4311362DF68B35ED0626CF3E251D0 * value)
	{
		___betsRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betsRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_dir_6() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___dir_6)); }
	inline int32_t get_dir_6() const { return ___dir_6; }
	inline int32_t* get_address_of_dir_6() { return &___dir_6; }
	inline void set_dir_6(int32_t value)
	{
		___dir_6 = value;
	}

	inline static int32_t get_offset_of_index_7() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___index_7)); }
	inline int32_t get_index_7() const { return ___index_7; }
	inline int32_t* get_address_of_index_7() { return &___index_7; }
	inline void set_index_7(int32_t value)
	{
		___index_7 = value;
	}

	inline static int32_t get_offset_of_indexEnd_8() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___indexEnd_8)); }
	inline int32_t get_indexEnd_8() const { return ___indexEnd_8; }
	inline int32_t* get_address_of_indexEnd_8() { return &___indexEnd_8; }
	inline void set_indexEnd_8(int32_t value)
	{
		___indexEnd_8 = value;
	}

	inline static int32_t get_offset_of_onSpin_9() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___onSpin_9)); }
	inline bool get_onSpin_9() const { return ___onSpin_9; }
	inline bool* get_address_of_onSpin_9() { return &___onSpin_9; }
	inline void set_onSpin_9(bool value)
	{
		___onSpin_9 = value;
	}

	inline static int32_t get_offset_of_time_10() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___time_10)); }
	inline float get_time_10() const { return ___time_10; }
	inline float* get_address_of_time_10() { return &___time_10; }
	inline void set_time_10(float value)
	{
		___time_10 = value;
	}

	inline static int32_t get_offset_of_timeDelay_11() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___timeDelay_11)); }
	inline float get_timeDelay_11() const { return ___timeDelay_11; }
	inline float* get_address_of_timeDelay_11() { return &___timeDelay_11; }
	inline void set_timeDelay_11(float value)
	{
		___timeDelay_11 = value;
	}

	inline static int32_t get_offset_of_totalTime_12() { return static_cast<int32_t>(offsetof(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576, ___totalTime_12)); }
	inline float get_totalTime_12() const { return ___totalTime_12; }
	inline float* get_address_of_totalTime_12() { return &___totalTime_12; }
	inline void set_totalTime_12(float value)
	{
		___totalTime_12 = value;
	}
};


// IButton
struct IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button IButton::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_4;
	// INumber IButton::number
	INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * ___number_5;
	// System.Boolean IButton::hold
	bool ___hold_6;
	// System.Single IButton::time
	float ___time_7;
	// System.Single IButton::timeDelay
	float ___timeDelay_8;
	// SymbolType IButton::symbolResult
	int32_t ___symbolResult_9;
	// System.Int32 IButton::idSoundButton
	int32_t ___idSoundButton_10;

public:
	inline static int32_t get_offset_of_button_4() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___button_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_4() const { return ___button_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_4() { return &___button_4; }
	inline void set_button_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_4), (void*)value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___number_5)); }
	inline INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * get_number_5() const { return ___number_5; }
	inline INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A ** get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * value)
	{
		___number_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_5), (void*)value);
	}

	inline static int32_t get_offset_of_hold_6() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___hold_6)); }
	inline bool get_hold_6() const { return ___hold_6; }
	inline bool* get_address_of_hold_6() { return &___hold_6; }
	inline void set_hold_6(bool value)
	{
		___hold_6 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_timeDelay_8() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___timeDelay_8)); }
	inline float get_timeDelay_8() const { return ___timeDelay_8; }
	inline float* get_address_of_timeDelay_8() { return &___timeDelay_8; }
	inline void set_timeDelay_8(float value)
	{
		___timeDelay_8 = value;
	}

	inline static int32_t get_offset_of_symbolResult_9() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___symbolResult_9)); }
	inline int32_t get_symbolResult_9() const { return ___symbolResult_9; }
	inline int32_t* get_address_of_symbolResult_9() { return &___symbolResult_9; }
	inline void set_symbolResult_9(int32_t value)
	{
		___symbolResult_9 = value;
	}

	inline static int32_t get_offset_of_idSoundButton_10() { return static_cast<int32_t>(offsetof(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB, ___idSoundButton_10)); }
	inline int32_t get_idSoundButton_10() const { return ___idSoundButton_10; }
	inline int32_t* get_address_of_idSoundButton_10() { return &___idSoundButton_10; }
	inline void set_idSoundButton_10(int32_t value)
	{
		___idSoundButton_10 = value;
	}
};


// INumber
struct INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> INumber::images
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___images_4;
	// System.Int32 INumber::number
	int32_t ___number_5;

public:
	inline static int32_t get_offset_of_images_4() { return static_cast<int32_t>(offsetof(INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A, ___images_4)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_images_4() const { return ___images_4; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_images_4() { return &___images_4; }
	inline void set_images_4(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___images_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___images_4), (void*)value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}
};


// ISlotGame
struct ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ISlotGame::PathConfig
	String_t* ___PathConfig_4;
	// System.Collections.Generic.List`1<SlotSymbol> ISlotGame::symbols
	List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F * ___symbols_5;
	// JPEffect ISlotGame::jackpot
	JPEffect_tA6BC456ADC9A21CDA94777623CB7FC4BA1C2B95C * ___jackpot_6;
	// IMoney ISlotGame::winMoney
	IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * ___winMoney_7;
	// BetRate ISlotGame::betRate
	BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * ___betRate_8;
	// System.Collections.Generic.List`1<IButton> ISlotGame::buttons
	List_1_t25CC355F40BA5B8379EA396CBEF081CF0F3384CC * ___buttons_9;
	// System.Int32 ISlotGame::moneyWin
	int32_t ___moneyWin_10;
	// ISlotRule ISlotGame::rule
	ISlotRule_tD70DBB6FAF661EA7747BDB997FCC400368AD5C78 * ___rule_11;
	// ISlotResult ISlotGame::result
	ISlotResult_t574B29D7C8DA4983B17B6BEB35DD122FD269D3D7 * ___result_12;
	// TaiXiuRule ISlotGame::taiXiu
	TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B * ___taiXiu_13;
	// System.Collections.Generic.Dictionary`2<SymbolType,System.Int32> ISlotGame::bets
	Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 * ___bets_14;
	// System.Collections.Generic.Dictionary`2<SymbolType,System.Int32> ISlotGame::oldBet
	Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 * ___oldBet_15;

public:
	inline static int32_t get_offset_of_PathConfig_4() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___PathConfig_4)); }
	inline String_t* get_PathConfig_4() const { return ___PathConfig_4; }
	inline String_t** get_address_of_PathConfig_4() { return &___PathConfig_4; }
	inline void set_PathConfig_4(String_t* value)
	{
		___PathConfig_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathConfig_4), (void*)value);
	}

	inline static int32_t get_offset_of_symbols_5() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___symbols_5)); }
	inline List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F * get_symbols_5() const { return ___symbols_5; }
	inline List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F ** get_address_of_symbols_5() { return &___symbols_5; }
	inline void set_symbols_5(List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F * value)
	{
		___symbols_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbols_5), (void*)value);
	}

	inline static int32_t get_offset_of_jackpot_6() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___jackpot_6)); }
	inline JPEffect_tA6BC456ADC9A21CDA94777623CB7FC4BA1C2B95C * get_jackpot_6() const { return ___jackpot_6; }
	inline JPEffect_tA6BC456ADC9A21CDA94777623CB7FC4BA1C2B95C ** get_address_of_jackpot_6() { return &___jackpot_6; }
	inline void set_jackpot_6(JPEffect_tA6BC456ADC9A21CDA94777623CB7FC4BA1C2B95C * value)
	{
		___jackpot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jackpot_6), (void*)value);
	}

	inline static int32_t get_offset_of_winMoney_7() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___winMoney_7)); }
	inline IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * get_winMoney_7() const { return ___winMoney_7; }
	inline IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F ** get_address_of_winMoney_7() { return &___winMoney_7; }
	inline void set_winMoney_7(IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * value)
	{
		___winMoney_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winMoney_7), (void*)value);
	}

	inline static int32_t get_offset_of_betRate_8() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___betRate_8)); }
	inline BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * get_betRate_8() const { return ___betRate_8; }
	inline BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 ** get_address_of_betRate_8() { return &___betRate_8; }
	inline void set_betRate_8(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * value)
	{
		___betRate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betRate_8), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_9() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___buttons_9)); }
	inline List_1_t25CC355F40BA5B8379EA396CBEF081CF0F3384CC * get_buttons_9() const { return ___buttons_9; }
	inline List_1_t25CC355F40BA5B8379EA396CBEF081CF0F3384CC ** get_address_of_buttons_9() { return &___buttons_9; }
	inline void set_buttons_9(List_1_t25CC355F40BA5B8379EA396CBEF081CF0F3384CC * value)
	{
		___buttons_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_9), (void*)value);
	}

	inline static int32_t get_offset_of_moneyWin_10() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___moneyWin_10)); }
	inline int32_t get_moneyWin_10() const { return ___moneyWin_10; }
	inline int32_t* get_address_of_moneyWin_10() { return &___moneyWin_10; }
	inline void set_moneyWin_10(int32_t value)
	{
		___moneyWin_10 = value;
	}

	inline static int32_t get_offset_of_rule_11() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___rule_11)); }
	inline ISlotRule_tD70DBB6FAF661EA7747BDB997FCC400368AD5C78 * get_rule_11() const { return ___rule_11; }
	inline ISlotRule_tD70DBB6FAF661EA7747BDB997FCC400368AD5C78 ** get_address_of_rule_11() { return &___rule_11; }
	inline void set_rule_11(ISlotRule_tD70DBB6FAF661EA7747BDB997FCC400368AD5C78 * value)
	{
		___rule_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rule_11), (void*)value);
	}

	inline static int32_t get_offset_of_result_12() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___result_12)); }
	inline ISlotResult_t574B29D7C8DA4983B17B6BEB35DD122FD269D3D7 * get_result_12() const { return ___result_12; }
	inline ISlotResult_t574B29D7C8DA4983B17B6BEB35DD122FD269D3D7 ** get_address_of_result_12() { return &___result_12; }
	inline void set_result_12(ISlotResult_t574B29D7C8DA4983B17B6BEB35DD122FD269D3D7 * value)
	{
		___result_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_12), (void*)value);
	}

	inline static int32_t get_offset_of_taiXiu_13() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___taiXiu_13)); }
	inline TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B * get_taiXiu_13() const { return ___taiXiu_13; }
	inline TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B ** get_address_of_taiXiu_13() { return &___taiXiu_13; }
	inline void set_taiXiu_13(TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B * value)
	{
		___taiXiu_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taiXiu_13), (void*)value);
	}

	inline static int32_t get_offset_of_bets_14() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___bets_14)); }
	inline Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 * get_bets_14() const { return ___bets_14; }
	inline Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 ** get_address_of_bets_14() { return &___bets_14; }
	inline void set_bets_14(Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 * value)
	{
		___bets_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bets_14), (void*)value);
	}

	inline static int32_t get_offset_of_oldBet_15() { return static_cast<int32_t>(offsetof(ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A, ___oldBet_15)); }
	inline Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 * get_oldBet_15() const { return ___oldBet_15; }
	inline Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 ** get_address_of_oldBet_15() { return &___oldBet_15; }
	inline void set_oldBet_15(Dictionary_2_t97B36AFCEBD1939C35EB0E37F05E9B8726B0FFD4 * value)
	{
		___oldBet_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldBet_15), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UserMoney
struct UserMoney_t02B52319D944BFFDA80F86057AE8D4CF98608A28  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// IMoney UserMoney::credit
	IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * ___credit_4;

public:
	inline static int32_t get_offset_of_credit_4() { return static_cast<int32_t>(offsetof(UserMoney_t02B52319D944BFFDA80F86057AE8D4CF98608A28, ___credit_4)); }
	inline IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * get_credit_4() const { return ___credit_4; }
	inline IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F ** get_address_of_credit_4() { return &___credit_4; }
	inline void set_credit_4(IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * value)
	{
		___credit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credit_4), (void*)value);
	}
};


// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA, ___m_Graphic_4)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// IMoney
struct IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F  : public INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A
{
public:
	// System.Int32 IMoney::money
	int32_t ___money_6;
	// System.Int32 IMoney::mon
	int32_t ___mon_7;
	// UnityEngine.AudioClip IMoney::pushClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pushClip_8;
	// UnityEngine.AudioClip IMoney::popClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___popClip_9;

public:
	inline static int32_t get_offset_of_money_6() { return static_cast<int32_t>(offsetof(IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F, ___money_6)); }
	inline int32_t get_money_6() const { return ___money_6; }
	inline int32_t* get_address_of_money_6() { return &___money_6; }
	inline void set_money_6(int32_t value)
	{
		___money_6 = value;
	}

	inline static int32_t get_offset_of_mon_7() { return static_cast<int32_t>(offsetof(IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F, ___mon_7)); }
	inline int32_t get_mon_7() const { return ___mon_7; }
	inline int32_t* get_address_of_mon_7() { return &___mon_7; }
	inline void set_mon_7(int32_t value)
	{
		___mon_7 = value;
	}

	inline static int32_t get_offset_of_pushClip_8() { return static_cast<int32_t>(offsetof(IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F, ___pushClip_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pushClip_8() const { return ___pushClip_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pushClip_8() { return &___pushClip_8; }
	inline void set_pushClip_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pushClip_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushClip_8), (void*)value);
	}

	inline static int32_t get_offset_of_popClip_9() { return static_cast<int32_t>(offsetof(IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F, ___popClip_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_popClip_9() const { return ___popClip_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_popClip_9() { return &___popClip_9; }
	inline void set_popClip_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___popClip_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popClip_9), (void*)value);
	}
};


// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.LayoutElement::m_IgnoreLayout
	bool ___m_IgnoreLayout_4;
	// System.Single UnityEngine.UI.LayoutElement::m_MinWidth
	float ___m_MinWidth_5;
	// System.Single UnityEngine.UI.LayoutElement::m_MinHeight
	float ___m_MinHeight_6;
	// System.Single UnityEngine.UI.LayoutElement::m_PreferredWidth
	float ___m_PreferredWidth_7;
	// System.Single UnityEngine.UI.LayoutElement::m_PreferredHeight
	float ___m_PreferredHeight_8;
	// System.Single UnityEngine.UI.LayoutElement::m_FlexibleWidth
	float ___m_FlexibleWidth_9;
	// System.Single UnityEngine.UI.LayoutElement::m_FlexibleHeight
	float ___m_FlexibleHeight_10;
	// System.Int32 UnityEngine.UI.LayoutElement::m_LayoutPriority
	int32_t ___m_LayoutPriority_11;

public:
	inline static int32_t get_offset_of_m_IgnoreLayout_4() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_IgnoreLayout_4)); }
	inline bool get_m_IgnoreLayout_4() const { return ___m_IgnoreLayout_4; }
	inline bool* get_address_of_m_IgnoreLayout_4() { return &___m_IgnoreLayout_4; }
	inline void set_m_IgnoreLayout_4(bool value)
	{
		___m_IgnoreLayout_4 = value;
	}

	inline static int32_t get_offset_of_m_MinWidth_5() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_MinWidth_5)); }
	inline float get_m_MinWidth_5() const { return ___m_MinWidth_5; }
	inline float* get_address_of_m_MinWidth_5() { return &___m_MinWidth_5; }
	inline void set_m_MinWidth_5(float value)
	{
		___m_MinWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_MinHeight_6() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_MinHeight_6)); }
	inline float get_m_MinHeight_6() const { return ___m_MinHeight_6; }
	inline float* get_address_of_m_MinHeight_6() { return &___m_MinHeight_6; }
	inline void set_m_MinHeight_6(float value)
	{
		___m_MinHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_PreferredWidth_7() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_PreferredWidth_7)); }
	inline float get_m_PreferredWidth_7() const { return ___m_PreferredWidth_7; }
	inline float* get_address_of_m_PreferredWidth_7() { return &___m_PreferredWidth_7; }
	inline void set_m_PreferredWidth_7(float value)
	{
		___m_PreferredWidth_7 = value;
	}

	inline static int32_t get_offset_of_m_PreferredHeight_8() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_PreferredHeight_8)); }
	inline float get_m_PreferredHeight_8() const { return ___m_PreferredHeight_8; }
	inline float* get_address_of_m_PreferredHeight_8() { return &___m_PreferredHeight_8; }
	inline void set_m_PreferredHeight_8(float value)
	{
		___m_PreferredHeight_8 = value;
	}

	inline static int32_t get_offset_of_m_FlexibleWidth_9() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_FlexibleWidth_9)); }
	inline float get_m_FlexibleWidth_9() const { return ___m_FlexibleWidth_9; }
	inline float* get_address_of_m_FlexibleWidth_9() { return &___m_FlexibleWidth_9; }
	inline void set_m_FlexibleWidth_9(float value)
	{
		___m_FlexibleWidth_9 = value;
	}

	inline static int32_t get_offset_of_m_FlexibleHeight_10() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_FlexibleHeight_10)); }
	inline float get_m_FlexibleHeight_10() const { return ___m_FlexibleHeight_10; }
	inline float* get_address_of_m_FlexibleHeight_10() { return &___m_FlexibleHeight_10; }
	inline void set_m_FlexibleHeight_10(float value)
	{
		___m_FlexibleHeight_10 = value;
	}

	inline static int32_t get_offset_of_m_LayoutPriority_11() { return static_cast<int32_t>(offsetof(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF, ___m_LayoutPriority_11)); }
	inline int32_t get_m_LayoutPriority_11() const { return ___m_LayoutPriority_11; }
	inline int32_t* get_address_of_m_LayoutPriority_11() { return &___m_LayoutPriority_11; }
	inline void set_m_LayoutPriority_11(int32_t value)
	{
		___m_LayoutPriority_11 = value;
	}
};


// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_40;

public:
	inline static int32_t get_offset_of_m_Content_4() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Content_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Content_4() const { return ___m_Content_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Content_4() { return &___m_Content_4; }
	inline void set_m_Content_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Content_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Horizontal_5() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Horizontal_5)); }
	inline bool get_m_Horizontal_5() const { return ___m_Horizontal_5; }
	inline bool* get_address_of_m_Horizontal_5() { return &___m_Horizontal_5; }
	inline void set_m_Horizontal_5(bool value)
	{
		___m_Horizontal_5 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_6() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Vertical_6)); }
	inline bool get_m_Vertical_6() const { return ___m_Vertical_6; }
	inline bool* get_address_of_m_Vertical_6() { return &___m_Vertical_6; }
	inline void set_m_Vertical_6(bool value)
	{
		___m_Vertical_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_7() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_MovementType_7)); }
	inline int32_t get_m_MovementType_7() const { return ___m_MovementType_7; }
	inline int32_t* get_address_of_m_MovementType_7() { return &___m_MovementType_7; }
	inline void set_m_MovementType_7(int32_t value)
	{
		___m_MovementType_7 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_8() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Elasticity_8)); }
	inline float get_m_Elasticity_8() const { return ___m_Elasticity_8; }
	inline float* get_address_of_m_Elasticity_8() { return &___m_Elasticity_8; }
	inline void set_m_Elasticity_8(float value)
	{
		___m_Elasticity_8 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_9() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Inertia_9)); }
	inline bool get_m_Inertia_9() const { return ___m_Inertia_9; }
	inline bool* get_address_of_m_Inertia_9() { return &___m_Inertia_9; }
	inline void set_m_Inertia_9(bool value)
	{
		___m_Inertia_9 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_10() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_DecelerationRate_10)); }
	inline float get_m_DecelerationRate_10() const { return ___m_DecelerationRate_10; }
	inline float* get_address_of_m_DecelerationRate_10() { return &___m_DecelerationRate_10; }
	inline void set_m_DecelerationRate_10(float value)
	{
		___m_DecelerationRate_10 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_11() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ScrollSensitivity_11)); }
	inline float get_m_ScrollSensitivity_11() const { return ___m_ScrollSensitivity_11; }
	inline float* get_address_of_m_ScrollSensitivity_11() { return &___m_ScrollSensitivity_11; }
	inline void set_m_ScrollSensitivity_11(float value)
	{
		___m_ScrollSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_12() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Viewport_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Viewport_12() const { return ___m_Viewport_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Viewport_12() { return &___m_Viewport_12; }
	inline void set_m_Viewport_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Viewport_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Viewport_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbar_13)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_HorizontalScrollbar_13() const { return ___m_HorizontalScrollbar_13; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_HorizontalScrollbar_13() { return &___m_HorizontalScrollbar_13; }
	inline void set_m_HorizontalScrollbar_13(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbar_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_14() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbar_14)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_14() const { return ___m_VerticalScrollbar_14; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_14() { return &___m_VerticalScrollbar_14; }
	inline void set_m_VerticalScrollbar_14(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_15() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarVisibility_15)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_15() const { return ___m_HorizontalScrollbarVisibility_15; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_15() { return &___m_HorizontalScrollbarVisibility_15; }
	inline void set_m_HorizontalScrollbarVisibility_15(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_16() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarVisibility_16)); }
	inline int32_t get_m_VerticalScrollbarVisibility_16() const { return ___m_VerticalScrollbarVisibility_16; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_16() { return &___m_VerticalScrollbarVisibility_16; }
	inline void set_m_VerticalScrollbarVisibility_16(int32_t value)
	{
		___m_VerticalScrollbarVisibility_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_17() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarSpacing_17)); }
	inline float get_m_HorizontalScrollbarSpacing_17() const { return ___m_HorizontalScrollbarSpacing_17; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_17() { return &___m_HorizontalScrollbarSpacing_17; }
	inline void set_m_HorizontalScrollbarSpacing_17(float value)
	{
		___m_HorizontalScrollbarSpacing_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_18() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarSpacing_18)); }
	inline float get_m_VerticalScrollbarSpacing_18() const { return ___m_VerticalScrollbarSpacing_18; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_18() { return &___m_VerticalScrollbarSpacing_18; }
	inline void set_m_VerticalScrollbarSpacing_18(float value)
	{
		___m_VerticalScrollbarSpacing_18 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_19() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_OnValueChanged_19)); }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * get_m_OnValueChanged_19() const { return ___m_OnValueChanged_19; }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E ** get_address_of_m_OnValueChanged_19() { return &___m_OnValueChanged_19; }
	inline void set_m_OnValueChanged_19(ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * value)
	{
		___m_OnValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_20() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PointerStartLocalCursor_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PointerStartLocalCursor_20() const { return ___m_PointerStartLocalCursor_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PointerStartLocalCursor_20() { return &___m_PointerStartLocalCursor_20; }
	inline void set_m_PointerStartLocalCursor_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PointerStartLocalCursor_20 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_21() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentStartPosition_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ContentStartPosition_21() const { return ___m_ContentStartPosition_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ContentStartPosition_21() { return &___m_ContentStartPosition_21; }
	inline void set_m_ContentStartPosition_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ContentStartPosition_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_22() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewRect_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ViewRect_22() const { return ___m_ViewRect_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ViewRect_22() { return &___m_ViewRect_22; }
	inline void set_m_ViewRect_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ViewRect_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewRect_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_23() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentBounds_23)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ContentBounds_23() const { return ___m_ContentBounds_23; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ContentBounds_23() { return &___m_ContentBounds_23; }
	inline void set_m_ContentBounds_23(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ContentBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_24() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewBounds_24)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ViewBounds_24() const { return ___m_ViewBounds_24; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ViewBounds_24() { return &___m_ViewBounds_24; }
	inline void set_m_ViewBounds_24(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ViewBounds_24 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_25() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Velocity_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Velocity_25() const { return ___m_Velocity_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Velocity_25() { return &___m_Velocity_25; }
	inline void set_m_Velocity_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Velocity_25 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_26() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Dragging_26)); }
	inline bool get_m_Dragging_26() const { return ___m_Dragging_26; }
	inline bool* get_address_of_m_Dragging_26() { return &___m_Dragging_26; }
	inline void set_m_Dragging_26(bool value)
	{
		___m_Dragging_26 = value;
	}

	inline static int32_t get_offset_of_m_Scrolling_27() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Scrolling_27)); }
	inline bool get_m_Scrolling_27() const { return ___m_Scrolling_27; }
	inline bool* get_address_of_m_Scrolling_27() { return &___m_Scrolling_27; }
	inline void set_m_Scrolling_27(bool value)
	{
		___m_Scrolling_27 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_28() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevPosition_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrevPosition_28() const { return ___m_PrevPosition_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrevPosition_28() { return &___m_PrevPosition_28; }
	inline void set_m_PrevPosition_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrevPosition_28 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_29() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevContentBounds_29)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevContentBounds_29() const { return ___m_PrevContentBounds_29; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevContentBounds_29() { return &___m_PrevContentBounds_29; }
	inline void set_m_PrevContentBounds_29(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevContentBounds_29 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_30() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevViewBounds_30)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevViewBounds_30() const { return ___m_PrevViewBounds_30; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevViewBounds_30() { return &___m_PrevViewBounds_30; }
	inline void set_m_PrevViewBounds_30(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevViewBounds_30 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_31() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HasRebuiltLayout_31)); }
	inline bool get_m_HasRebuiltLayout_31() const { return ___m_HasRebuiltLayout_31; }
	inline bool* get_address_of_m_HasRebuiltLayout_31() { return &___m_HasRebuiltLayout_31; }
	inline void set_m_HasRebuiltLayout_31(bool value)
	{
		___m_HasRebuiltLayout_31 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_32() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderExpand_32)); }
	inline bool get_m_HSliderExpand_32() const { return ___m_HSliderExpand_32; }
	inline bool* get_address_of_m_HSliderExpand_32() { return &___m_HSliderExpand_32; }
	inline void set_m_HSliderExpand_32(bool value)
	{
		___m_HSliderExpand_32 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_33() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderExpand_33)); }
	inline bool get_m_VSliderExpand_33() const { return ___m_VSliderExpand_33; }
	inline bool* get_address_of_m_VSliderExpand_33() { return &___m_VSliderExpand_33; }
	inline void set_m_VSliderExpand_33(bool value)
	{
		___m_VSliderExpand_33 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_34() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderHeight_34)); }
	inline float get_m_HSliderHeight_34() const { return ___m_HSliderHeight_34; }
	inline float* get_address_of_m_HSliderHeight_34() { return &___m_HSliderHeight_34; }
	inline void set_m_HSliderHeight_34(float value)
	{
		___m_HSliderHeight_34 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_35() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderWidth_35)); }
	inline float get_m_VSliderWidth_35() const { return ___m_VSliderWidth_35; }
	inline float* get_address_of_m_VSliderWidth_35() { return &___m_VSliderWidth_35; }
	inline void set_m_VSliderWidth_35(float value)
	{
		___m_VSliderWidth_35 = value;
	}

	inline static int32_t get_offset_of_m_Rect_36() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Rect_36)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_36() const { return ___m_Rect_36; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_36() { return &___m_Rect_36; }
	inline void set_m_Rect_36(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_37() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarRect_37)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HorizontalScrollbarRect_37() const { return ___m_HorizontalScrollbarRect_37; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HorizontalScrollbarRect_37() { return &___m_HorizontalScrollbarRect_37; }
	inline void set_m_HorizontalScrollbarRect_37(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HorizontalScrollbarRect_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbarRect_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_38() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarRect_38)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_VerticalScrollbarRect_38() const { return ___m_VerticalScrollbarRect_38; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_VerticalScrollbarRect_38() { return &___m_VerticalScrollbarRect_38; }
	inline void set_m_VerticalScrollbarRect_38(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_VerticalScrollbarRect_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarRect_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_39() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Tracker_39)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_39() const { return ___m_Tracker_39; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_39() { return &___m_Tracker_39; }
	inline void set_m_Tracker_39(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_39 = value;
	}

	inline static int32_t get_offset_of_m_Corners_40() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Corners_40)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_40() const { return ___m_Corners_40; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_40() { return &___m_Corners_40; }
	inline void set_m_Corners_40(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_40), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// SlotFruitGame
struct SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604  : public ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A
{
public:
	// System.Int32 SlotFruitGame::id
	int32_t ___id_16;
	// System.Int32 SlotFruitGame::idEnd
	int32_t ___idEnd_17;
	// System.Int32 SlotFruitGame::indexEnd
	int32_t ___indexEnd_18;
	// System.Int32 SlotFruitGame::dir
	int32_t ___dir_19;
	// System.Int32 SlotFruitGame::idOnTurn
	int32_t ___idOnTurn_20;
	// System.Int32 SlotFruitGame::iRound
	int32_t ___iRound_21;
	// System.Collections.Generic.List`1<SlotSymbol> SlotFruitGame::symbolWins
	List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F * ___symbolWins_22;
	// IButton SlotFruitGame::allButton
	IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * ___allButton_23;
	// UnityEngine.UI.Button SlotFruitGame::goButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___goButton_24;
	// TaiXiu SlotFruitGame::taiXiu
	TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * ___taiXiu_25;

public:
	inline static int32_t get_offset_of_id_16() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___id_16)); }
	inline int32_t get_id_16() const { return ___id_16; }
	inline int32_t* get_address_of_id_16() { return &___id_16; }
	inline void set_id_16(int32_t value)
	{
		___id_16 = value;
	}

	inline static int32_t get_offset_of_idEnd_17() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___idEnd_17)); }
	inline int32_t get_idEnd_17() const { return ___idEnd_17; }
	inline int32_t* get_address_of_idEnd_17() { return &___idEnd_17; }
	inline void set_idEnd_17(int32_t value)
	{
		___idEnd_17 = value;
	}

	inline static int32_t get_offset_of_indexEnd_18() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___indexEnd_18)); }
	inline int32_t get_indexEnd_18() const { return ___indexEnd_18; }
	inline int32_t* get_address_of_indexEnd_18() { return &___indexEnd_18; }
	inline void set_indexEnd_18(int32_t value)
	{
		___indexEnd_18 = value;
	}

	inline static int32_t get_offset_of_dir_19() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___dir_19)); }
	inline int32_t get_dir_19() const { return ___dir_19; }
	inline int32_t* get_address_of_dir_19() { return &___dir_19; }
	inline void set_dir_19(int32_t value)
	{
		___dir_19 = value;
	}

	inline static int32_t get_offset_of_idOnTurn_20() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___idOnTurn_20)); }
	inline int32_t get_idOnTurn_20() const { return ___idOnTurn_20; }
	inline int32_t* get_address_of_idOnTurn_20() { return &___idOnTurn_20; }
	inline void set_idOnTurn_20(int32_t value)
	{
		___idOnTurn_20 = value;
	}

	inline static int32_t get_offset_of_iRound_21() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___iRound_21)); }
	inline int32_t get_iRound_21() const { return ___iRound_21; }
	inline int32_t* get_address_of_iRound_21() { return &___iRound_21; }
	inline void set_iRound_21(int32_t value)
	{
		___iRound_21 = value;
	}

	inline static int32_t get_offset_of_symbolWins_22() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___symbolWins_22)); }
	inline List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F * get_symbolWins_22() const { return ___symbolWins_22; }
	inline List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F ** get_address_of_symbolWins_22() { return &___symbolWins_22; }
	inline void set_symbolWins_22(List_1_t262654C945AD61E61C43DA2973C5CE591A537F0F * value)
	{
		___symbolWins_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbolWins_22), (void*)value);
	}

	inline static int32_t get_offset_of_allButton_23() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___allButton_23)); }
	inline IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * get_allButton_23() const { return ___allButton_23; }
	inline IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB ** get_address_of_allButton_23() { return &___allButton_23; }
	inline void set_allButton_23(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * value)
	{
		___allButton_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allButton_23), (void*)value);
	}

	inline static int32_t get_offset_of_goButton_24() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___goButton_24)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_goButton_24() const { return ___goButton_24; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_goButton_24() { return &___goButton_24; }
	inline void set_goButton_24(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___goButton_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goButton_24), (void*)value);
	}

	inline static int32_t get_offset_of_taiXiu_25() { return static_cast<int32_t>(offsetof(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604, ___taiXiu_25)); }
	inline TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * get_taiXiu_25() const { return ___taiXiu_25; }
	inline TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 ** get_address_of_taiXiu_25() { return &___taiXiu_25; }
	inline void set_taiXiu_25(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * value)
	{
		___taiXiu_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taiXiu_25), (void*)value);
	}
};


// SoundUtility
struct SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4  : public MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181
{
public:
	// System.Single SoundUtility::volume
	float ___volume_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> SoundUtility::audioClips
	Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * ___audioClips_7;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource> SoundUtility::soundEffects
	Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * ___soundEffects_8;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource> SoundUtility::soundLoopEffects
	Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * ___soundLoopEffects_9;

public:
	inline static int32_t get_offset_of_volume_6() { return static_cast<int32_t>(offsetof(SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4, ___volume_6)); }
	inline float get_volume_6() const { return ___volume_6; }
	inline float* get_address_of_volume_6() { return &___volume_6; }
	inline void set_volume_6(float value)
	{
		___volume_6 = value;
	}

	inline static int32_t get_offset_of_audioClips_7() { return static_cast<int32_t>(offsetof(SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4, ___audioClips_7)); }
	inline Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * get_audioClips_7() const { return ___audioClips_7; }
	inline Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E ** get_address_of_audioClips_7() { return &___audioClips_7; }
	inline void set_audioClips_7(Dictionary_2_t724FE6E04A925CD1BB9BD376144DDF2E61B2B95E * value)
	{
		___audioClips_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClips_7), (void*)value);
	}

	inline static int32_t get_offset_of_soundEffects_8() { return static_cast<int32_t>(offsetof(SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4, ___soundEffects_8)); }
	inline Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * get_soundEffects_8() const { return ___soundEffects_8; }
	inline Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 ** get_address_of_soundEffects_8() { return &___soundEffects_8; }
	inline void set_soundEffects_8(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * value)
	{
		___soundEffects_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundEffects_8), (void*)value);
	}

	inline static int32_t get_offset_of_soundLoopEffects_9() { return static_cast<int32_t>(offsetof(SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4, ___soundLoopEffects_9)); }
	inline Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * get_soundLoopEffects_9() const { return ___soundLoopEffects_9; }
	inline Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 ** get_address_of_soundLoopEffects_9() { return &___soundLoopEffects_9; }
	inline void set_soundLoopEffects_9(Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * value)
	{
		___soundLoopEffects_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundLoopEffects_9), (void*)value);
	}
};


// TaiXiu
struct TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645  : public MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E
{
public:
	// SlotFruitGame TaiXiu::slotFruit
	SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * ___slotFruit_6;
	// BetRate TaiXiu::betRate
	BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * ___betRate_7;
	// UnityEngine.UI.Button TaiXiu::creditToWinButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___creditToWinButton_8;
	// IButton TaiXiu::winToCreditButton
	IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * ___winToCreditButton_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> TaiXiu::taiXiuButtons
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___taiXiuButtons_10;
	// System.Int32 TaiXiu::num
	int32_t ___num_11;
	// System.Int32 TaiXiu::numEnd
	int32_t ___numEnd_12;
	// INumber TaiXiu::numTaiXiu
	INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * ___numTaiXiu_13;
	// System.Int32 TaiXiu::moneyWin
	int32_t ___moneyWin_14;
	// TXResult TaiXiu::result
	TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * ___result_15;
	// System.Int32 TaiXiu::tempmoneywincount
	int32_t ___tempmoneywincount_16;
	// System.Int32 TaiXiu::tempmoneywin
	int32_t ___tempmoneywin_17;
	// System.Int32 TaiXiu::checkx2
	int32_t ___checkx2_18;

public:
	inline static int32_t get_offset_of_slotFruit_6() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___slotFruit_6)); }
	inline SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * get_slotFruit_6() const { return ___slotFruit_6; }
	inline SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 ** get_address_of_slotFruit_6() { return &___slotFruit_6; }
	inline void set_slotFruit_6(SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * value)
	{
		___slotFruit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotFruit_6), (void*)value);
	}

	inline static int32_t get_offset_of_betRate_7() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___betRate_7)); }
	inline BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * get_betRate_7() const { return ___betRate_7; }
	inline BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 ** get_address_of_betRate_7() { return &___betRate_7; }
	inline void set_betRate_7(BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * value)
	{
		___betRate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betRate_7), (void*)value);
	}

	inline static int32_t get_offset_of_creditToWinButton_8() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___creditToWinButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_creditToWinButton_8() const { return ___creditToWinButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_creditToWinButton_8() { return &___creditToWinButton_8; }
	inline void set_creditToWinButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___creditToWinButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creditToWinButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_winToCreditButton_9() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___winToCreditButton_9)); }
	inline IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * get_winToCreditButton_9() const { return ___winToCreditButton_9; }
	inline IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB ** get_address_of_winToCreditButton_9() { return &___winToCreditButton_9; }
	inline void set_winToCreditButton_9(IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * value)
	{
		___winToCreditButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winToCreditButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_taiXiuButtons_10() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___taiXiuButtons_10)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_taiXiuButtons_10() const { return ___taiXiuButtons_10; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_taiXiuButtons_10() { return &___taiXiuButtons_10; }
	inline void set_taiXiuButtons_10(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___taiXiuButtons_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taiXiuButtons_10), (void*)value);
	}

	inline static int32_t get_offset_of_num_11() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___num_11)); }
	inline int32_t get_num_11() const { return ___num_11; }
	inline int32_t* get_address_of_num_11() { return &___num_11; }
	inline void set_num_11(int32_t value)
	{
		___num_11 = value;
	}

	inline static int32_t get_offset_of_numEnd_12() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___numEnd_12)); }
	inline int32_t get_numEnd_12() const { return ___numEnd_12; }
	inline int32_t* get_address_of_numEnd_12() { return &___numEnd_12; }
	inline void set_numEnd_12(int32_t value)
	{
		___numEnd_12 = value;
	}

	inline static int32_t get_offset_of_numTaiXiu_13() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___numTaiXiu_13)); }
	inline INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * get_numTaiXiu_13() const { return ___numTaiXiu_13; }
	inline INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A ** get_address_of_numTaiXiu_13() { return &___numTaiXiu_13; }
	inline void set_numTaiXiu_13(INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * value)
	{
		___numTaiXiu_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numTaiXiu_13), (void*)value);
	}

	inline static int32_t get_offset_of_moneyWin_14() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___moneyWin_14)); }
	inline int32_t get_moneyWin_14() const { return ___moneyWin_14; }
	inline int32_t* get_address_of_moneyWin_14() { return &___moneyWin_14; }
	inline void set_moneyWin_14(int32_t value)
	{
		___moneyWin_14 = value;
	}

	inline static int32_t get_offset_of_result_15() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___result_15)); }
	inline TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * get_result_15() const { return ___result_15; }
	inline TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 ** get_address_of_result_15() { return &___result_15; }
	inline void set_result_15(TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * value)
	{
		___result_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_15), (void*)value);
	}

	inline static int32_t get_offset_of_tempmoneywincount_16() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___tempmoneywincount_16)); }
	inline int32_t get_tempmoneywincount_16() const { return ___tempmoneywincount_16; }
	inline int32_t* get_address_of_tempmoneywincount_16() { return &___tempmoneywincount_16; }
	inline void set_tempmoneywincount_16(int32_t value)
	{
		___tempmoneywincount_16 = value;
	}

	inline static int32_t get_offset_of_tempmoneywin_17() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___tempmoneywin_17)); }
	inline int32_t get_tempmoneywin_17() const { return ___tempmoneywin_17; }
	inline int32_t* get_address_of_tempmoneywin_17() { return &___tempmoneywin_17; }
	inline void set_tempmoneywin_17(int32_t value)
	{
		___tempmoneywin_17 = value;
	}

	inline static int32_t get_offset_of_checkx2_18() { return static_cast<int32_t>(offsetof(TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645, ___checkx2_18)); }
	inline int32_t get_checkx2_18() const { return ___checkx2_18; }
	inline int32_t* get_address_of_checkx2_18() { return &___checkx2_18; }
	inline void set_checkx2_18(int32_t value)
	{
		___checkx2_18 = value;
	}
};


// UserProfile
struct UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5  : public MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598
{
public:
	// UserModel UserProfile::user
	UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * ___user_6;
	// UserProfile/UpdateValue UserProfile::updateMoney
	UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * ___updateMoney_7;

public:
	inline static int32_t get_offset_of_user_6() { return static_cast<int32_t>(offsetof(UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5, ___user_6)); }
	inline UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * get_user_6() const { return ___user_6; }
	inline UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF ** get_address_of_user_6() { return &___user_6; }
	inline void set_user_6(UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * value)
	{
		___user_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_6), (void*)value);
	}

	inline static int32_t get_offset_of_updateMoney_7() { return static_cast<int32_t>(offsetof(UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5, ___updateMoney_7)); }
	inline UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * get_updateMoney_7() const { return ___updateMoney_7; }
	inline UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D ** get_address_of_updateMoney_7() { return &___updateMoney_7; }
	inline void set_updateMoney_7(UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * value)
	{
		___updateMoney_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateMoney_7), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Shadow
struct Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E  : public BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;

public:
	inline static int32_t get_offset_of_m_EffectColor_5() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_EffectColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_EffectColor_5() const { return ___m_EffectColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_EffectColor_5() { return &___m_EffectColor_5; }
	inline void set_m_EffectColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_EffectColor_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_6() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_EffectDistance_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_EffectDistance_6() const { return ___m_EffectDistance_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_EffectDistance_6() { return &___m_EffectDistance_6; }
	inline void set_m_EffectDistance_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_EffectDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_7() { return static_cast<int32_t>(offsetof(Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E, ___m_UseGraphicAlpha_7)); }
	inline bool get_m_UseGraphicAlpha_7() const { return ___m_UseGraphicAlpha_7; }
	inline bool* get_address_of_m_UseGraphicAlpha_7() { return &___m_UseGraphicAlpha_7; }
	inline void set_m_UseGraphicAlpha_7(bool value)
	{
		___m_UseGraphicAlpha_7 = value;
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Outline
struct Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2  : public Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E
{
public:

public:
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T MonoSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoSingleton_1_get_Instance_mCE2B57A6C26AF0A4EB6651167B44367A4F4AFCDF_gshared (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOGetter`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E_gshared (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOSetter`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4_gshared (DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnComplete_TisRuntimeObject_m23E1F90FEE2A0CA4D04C244B7A7A83A541855DC0_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void MonoSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSingleton_1__ctor_m61403EFFF67FCC44C5204C87188AABECE7128139_gshared (MonoSingleton_1_tCB0740E1A0FBE7F99B80A6DFD8CD948FFAECF3D2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m773E96422E4C6790FAD627D7D77548B42712E48E_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void TaiXiu::OffTaiXiu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_OffTaiXiu_mCEF33FA5FAD2162E333A03B6121C2EE368E7511A (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method);
// System.Void TaiXiu::UpdateButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_UpdateButtons_m7C08CCF25063C972F4EC400C1DF25F1FBACFAAE7 (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, bool ___isOn0, const RuntimeMethod* method);
// System.Void TaiXiu::UpdateTaiXiuButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_UpdateTaiXiuButtons_m5945BF63822334B81EAE1047DB3FFF111A86574D (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, bool ___isOn0, const RuntimeMethod* method);
// System.Void IButton::UpdateButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IButton_UpdateButton_m501EA749E3CD4695B7E9E90BD3313F66C9261D69 (IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * __this, bool ___isOn0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// T MonoSingleton`1<SoundUtility>::get_Instance()
inline SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA (const RuntimeMethod* method)
{
	return ((  SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * (*) (const RuntimeMethod*))MonoSingleton_1_get_Instance_mCE2B57A6C26AF0A4EB6651167B44367A4F4AFCDF_gshared)(method);
}
// UnityEngine.AudioSource SoundUtility::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23 (SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * __this, String_t* ___fileName0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void SlotFruitGame::OnWinSymbolsEffectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotFruitGame_OnWinSymbolsEffectEnd_m4F656334B5C53683AB3F343FF3D4BA97BCAC40E0 (SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.DOGetter`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *, RuntimeObject *, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4 (DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4_gshared)(__this, ___object0, ___method1, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<System.Int32>,DG.Tweening.Core.DOSetter`1<System.Int32>,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * DOTween_To_mDD1CC936BA688C36B4F0F1BCBFEBBF9DC8E8D9F8 (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * ___getter0, DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * ___setter1, int32_t ___endValue2, float ___duration3, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662 (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>>(!!0,DG.Tweening.TweenCallback)
inline TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1_mC10FC7863E2D4946A8604498627A2DCB051BF8BE (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * (*) (TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_m23E1F90FEE2A0CA4D04C244B7A7A83A541855DC0_gshared)(___t0, ___action1, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void BetRate::OnWinTaiXiu(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetRate_OnWinTaiXiu_m1420860A83E09F16D7DE51875D516BE72E3CD7C9 (BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void SlotFruitGame::OnWinSymbolsEffectWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotFruitGame_OnWinSymbolsEffectWin_mB258D76E0EEDCC0239C171EEB173DDD67BE3F024 (SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * __this, const RuntimeMethod* method);
// System.Void SlotFruitGame::UpdateMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotFruitGame_UpdateMoney_m75756C7628C1B6999D8598B8B30E3873857AB454 (SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * __this, const RuntimeMethod* method);
// System.Void SoundUtility::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundUtility_StopAll_m53E07491408602103D4B18DDCFD5B0625EFC9E5B (SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * __this, const RuntimeMethod* method);
// System.Void BetRate::OnRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetRate_OnRight_mF22DCBECC5D7107453067497ED31430BC9F3ADCC (BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * __this, const RuntimeMethod* method);
// System.Void SlotFruitGame::SpinTaiXiu(TXBetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotFruitGame_SpinTaiXiu_m1871D7D480BCA20A83CEB849A23E59664279F76D (SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * __this, int32_t ___bet0, const RuntimeMethod* method);
// System.Void BetRate::OnLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetRate_OnLeft_m4ACA85504C159EA57A95FEAE88CCC661BBFDBB09 (BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// T MonoSingleton`1<UserProfile>::get_Instance()
inline UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55 (const RuntimeMethod* method)
{
	return ((  UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * (*) (const RuntimeMethod*))MonoSingleton_1_get_Instance_mCE2B57A6C26AF0A4EB6651167B44367A4F4AFCDF_gshared)(method);
}
// System.Void UserProfile::AddMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_AddMoney_mBC127FAA6125E2F836DAA90036ECE6269C04F7D3 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___money0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UserProfile::SubMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_SubMoney_mC6EAF7581FA2E2C0C71A36820D9BCE709959596A (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___money0, const RuntimeMethod* method);
// System.Void MonoSingleton`1<TaiXiu>::.ctor()
inline void MonoSingleton_1__ctor_m25D7E94AE54CB9A7042ED903B57BD815C980F45B (MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E * __this, const RuntimeMethod* method)
{
	((  void (*) (MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E *, const RuntimeMethod*))MonoSingleton_1__ctor_m61403EFFF67FCC44C5204C87188AABECE7128139_gshared)(__this, method);
}
// System.Void TXResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TXResult__ctor_mAE33BB7AF8A2BF29A9C3125768AFBA1E376DD262 (TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * __this, const RuntimeMethod* method);
// System.Void UserStatistic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserStatistic__ctor_m079EA8C1FFD4ECBB4AA8B582176D7652AA9321A7 (UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * __this, const RuntimeMethod* method);
// System.Void UserStatistic::Spin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserStatistic_Spin_m5A5C46898480415F56B138628D0E6FCB085471D0 (UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * __this, int32_t ___moneyWin0, int32_t ___round1, const RuntimeMethod* method);
// System.Void UserProfile/UpdateValue::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateValue__ctor_mA29B513B5339A0767E9DE23E43705956B88E8E2D (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void IMoney::UpdateMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMoney_UpdateMoney_m315E473770D38D45D8771100700BC0D6C5425303 (IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * __this, int32_t ___m0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UserProfile::LoadUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_LoadUser_m4AF55EEDA416966E812C0B135F50E7AA9BC9FA4A (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UserModel>(System.String)
inline UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * JsonUtility_FromJson_TisUserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_m17F3F395C0C19E040FD480800FE9DF80E8D8B9EE (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void UserProfile/UpdateValue::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0 (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * __this, RuntimeObject * ___data0, const RuntimeMethod* method);
// System.Void UserModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserModel__ctor_m0282C3D5AED4CC32726D03F8955A80E469482577 (UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * __this, const RuntimeMethod* method);
// System.Void UserProfile::SaveUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method);
// System.Void SoundUtility::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundUtility_SetVolume_m92FB237E36C88C4B70C6D7AB08AC8C1D7098C846 (SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * __this, float ___volume0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UserModel::Spin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserModel_Spin_m33F5C75010AF3DE1707038B2CAE56082B4A2AE76 (UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * __this, int32_t ___moneyWin0, int32_t ___round1, const RuntimeMethod* method);
// System.Void MonoSingleton`1<UserProfile>::.ctor()
inline void MonoSingleton_1__ctor_m9B13923F02C82DD569030DBE77184AB6C9C9C7C1 (MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598 * __this, const RuntimeMethod* method)
{
	((  void (*) (MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598 *, const RuntimeMethod*))MonoSingleton_1__ctor_m61403EFFF67FCC44C5204C87188AABECE7128139_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mC87F29FE0746C793F0C11175A9B37087C1C436FD (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Int32 DG.Tweening.TweenExtensions::CompletedLoops(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenExtensions_CompletedLoops_m067EA5E0CFEEF70813063DC6336000D02E5C2E87 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Single DG.Tweening.Tween::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_playedOnce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_mFA82C31BFA8C147EEE916A0C92FD3A705F717F20_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_m269CC0D94DFA272A6900F2A75AE94FF7B9D8E40C (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, String_t* ___name0, float* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method);
// System.Single DG.Tweening.TweenExtensions::ElapsedPercentage(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedPercentage_mC12ED1EAF1BEBF089D80B420DC6D987DE9C7C618 (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, bool ___includeLoops1, const RuntimeMethod* method);
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DOVirtual_EasedValue_m13B1BCEC7154DBD3C6B63DD66BED84E3ACCB3E92 (float ___from0, float ___to1, float ___lifetimePercentage2, int32_t ___easeType3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_position_m1604084713EB195D44B8B411D4BCAFA5941E3413 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Shadow_get_effectDistance_mD0C417FD305D3F674FB111F38B41C9B94808E7C0_inline (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_set_effectDistance_m5C9FAC6D8D46E952FF29D00852E790E6A3BF2E09 (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RectTransform::get_anchoredPosition3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Single DG.Tweening.TweenExtensions::ElapsedDirectionalPercentage(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedDirectionalPercentage_m478ED527B4F86DCC0240987C317231168587F5DF (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_horizontalNormalizedPosition_m2447569D682F6F02D64671B82B64FA9C80EE8FE2 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_verticalNormalizedPosition_mB5E338D332643DF0B7464F45CC9C04DD9868FBB4 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_horizontalNormalizedPosition_m3552851D166277D4DEDFCB6B81BF6726666D3AF5 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m18393A7B91359B013466A984325F233535A6941D (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransformUtility_WorldToScreenPoint_m92E801861EE14D73219C34A6175847C4A46105E1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPoint1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_GetTextureOffset_m53C54C035DFCB16181F0226D9C41C9EAB2301617 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mDEE0C861BD2FC8D38924087590BE8FD123195A78 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_GetTextureScale_mE494CDECFF6B59EDB43D6000608A91A4B7289A9C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureScale(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_m9F02CF20C15805224119E8A1AE57B1B064CB72C1 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_m3024C151FEC9BB75735DE9B4BA64F16AA779C5D6 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * DOTweenModulePhysics_DOPath_m3C49FFEB71D494F474F7223248D7105E90CF5BE7 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target0, Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOLocalPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * DOTweenModulePhysics_DOLocalPath_m6F939DAF66D56DA9B52DA62546C70F3862E14193 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___target0, Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * ShortcutExtensions_DOPath_m7AB84619455A541B79164E1D270A5AB511533B24 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOLocalPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * ShortcutExtensions_DOLocalPath_m28185CD9787640FBB679A0B46F144E1BB0DB43F8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<SymbolType>::get_Count()
inline int32_t List_1_get_Count_m53E4DC3958B90775481A29D35FFFEBFA32E0134B_inline (List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<SymbolType>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m64DE9FC4A5963A41457B9E8E3285F5E017EE47AF_inline (List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline)(__this, ___index0, method);
}
// System.String GameDefine::GetSymbolSound(SymbolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameDefine_GetSymbolSound_m475EBE5643F6B11A1B621A7E8E56E09172CEBEF3 (int32_t ___symbolType0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SymbolType>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m011C75C41130DB869B4921B7F4E5F62AE63FA850 (List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m773E96422E4C6790FAD627D7D77548B42712E48E_gshared)(__this, ___index0, method);
}
// System.Collections.IEnumerator SlotFruitGame::IEPlaySymbolSound(System.Collections.Generic.List`1<SymbolType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SlotFruitGame_IEPlaySymbolSound_m9660FE49FF6CFC909A61D3D7F708E08CE4FFFC31 (SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * __this, List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * ___symbolTypeWins0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9986C33D4824878A3C7A1CA2AED6F53395A85218 (Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>::Remove(!0)
inline bool Dictionary_2_Remove_mF0EA02507554A7566445A1F7B71F93105178094B (Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SymbolResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolResult__ctor_m427A2A0492E2472571EB1F01314AC73603B2208F (SymbolResult_t4DFA5D9FEE85B3C7248CF883C6BCBFBAA41A4C77 * __this, const RuntimeMethod* method)
{
	{
		// public SymbolResult()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void SymbolResult::.ctor(SymbolType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolResult__ctor_mC79FB75A12F8FB8977016A485A679FC60BB7FADF (SymbolResult_t4DFA5D9FEE85B3C7248CF883C6BCBFBAA41A4C77 * __this, int32_t ___type0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// public SymbolResult(SymbolType type, int value)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.type = type;
		int32_t L_0 = ___type0;
		__this->set_type_0(L_0);
		// this.value = value;
		int32_t L_1 = ___value1;
		__this->set_value_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TXResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TXResult__ctor_mAE33BB7AF8A2BF29A9C3125768AFBA1E376DD262 (TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TaiXiu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_Start_mBA647C848F907EC6519A317648F434B79E6C42DE (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	{
		// OffTaiXiu();
		TaiXiu_OffTaiXiu_mCEF33FA5FAD2162E333A03B6121C2EE368E7511A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TaiXiu::OffTaiXiu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_OffTaiXiu_mCEF33FA5FAD2162E333A03B6121C2EE368E7511A (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	{
		// numTaiXiu.LoadNumber(0);
		INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * L_0 = __this->get_numTaiXiu_13();
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void INumber::LoadNumber(System.Int32) */, L_0, 0);
		// UpdateButtons(false);
		TaiXiu_UpdateButtons_m7C08CCF25063C972F4EC400C1DF25F1FBACFAAE7(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TaiXiu::OnTaiXiu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_OnTaiXiu_m2CC8B0A6EEABAF2BCAFC251CCA98CB50546DC13B (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	{
		// UpdateButtons(true);
		TaiXiu_UpdateButtons_m7C08CCF25063C972F4EC400C1DF25F1FBACFAAE7(__this, (bool)1, /*hidden argument*/NULL);
		// moneyWin = slotFruit.winMoney.money;
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_0 = __this->get_slotFruit_6();
		NullCheck(L_0);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_1 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_0)->get_winMoney_7();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_money_6();
		__this->set_moneyWin_14(L_2);
		// }
		return;
	}
}
// System.Void TaiXiu::UpdateButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_UpdateButtons_m7C08CCF25063C972F4EC400C1DF25F1FBACFAAE7 (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, bool ___isOn0, const RuntimeMethod* method)
{
	{
		// UpdateTaiXiuButtons(isOn);
		bool L_0 = ___isOn0;
		TaiXiu_UpdateTaiXiuButtons_m5945BF63822334B81EAE1047DB3FFF111A86574D(__this, L_0, /*hidden argument*/NULL);
		// winToCreditButton.UpdateButton(isOn);
		IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * L_1 = __this->get_winToCreditButton_9();
		bool L_2 = ___isOn0;
		NullCheck(L_1);
		IButton_UpdateButton_m501EA749E3CD4695B7E9E90BD3313F66C9261D69(L_1, L_2, /*hidden argument*/NULL);
		// creditToWinButton.interactable = isOn;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_creditToWinButton_8();
		bool L_4 = ___isOn0;
		NullCheck(L_3);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TaiXiu::Spin(TXResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_Spin_m4891678944EBFFC3E2267DEB608559123DA15F07 (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaiXiu_EndTaiXiu_m9FF2E6023DBDF601E9F0C9F5326D82D97F01764D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaiXiu_LoadNumTaiXiu_m4739C21368B7FB4C67F3960AECFD3915BA16A5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaiXiu_U3CSpinU3Eb__14_0_m920FE21722699A6942F07630DBA5981C2741B78C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1_mC10FC7863E2D4946A8604498627A2DCB051BF8BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C4DAAA8990CF89DFC5FC60A13AB052F77F0818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8503D723CC8B71B62A3F957B1A03B7DCABACC1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (result == null) Debug.Log("Tai Xiu Null");
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_0 = ___result0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (result == null) Debug.Log("Tai Xiu Null");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD8503D723CC8B71B62A3F957B1A03B7DCABACC1F, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		// moneyWin = result.money;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_1 = ___result0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_money_0();
		__this->set_moneyWin_14(L_2);
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_3;
		L_3 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_4 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_36();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_3, L_4, /*hidden argument*/NULL);
		// this.result = result;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_6 = ___result0;
		__this->set_result_15(L_6);
		// Debug.Log("Num tai Xiu: " + result.number);
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_7 = ___result0;
		NullCheck(L_7);
		int32_t* L_8 = L_7->get_address_of_number_1();
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral40C4DAAA8990CF89DFC5FC60A13AB052F77F0818, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// int i = this.num / 12;
		int32_t L_11 = __this->get_num_11();
		V_0 = ((int32_t)((int32_t)L_11/(int32_t)((int32_t)12)));
		// this.numEnd = (i + 1) * 12 + result.number;
		int32_t L_12 = V_0;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_13 = ___result0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_number_1();
		__this->set_numEnd_12(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), (int32_t)((int32_t)12))), (int32_t)L_14)));
		// slotFruit.OnWinSymbolsEffectEnd();
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_15 = __this->get_slotFruit_6();
		NullCheck(L_15);
		SlotFruitGame_OnWinSymbolsEffectEnd_m4F656334B5C53683AB3F343FF3D4BA97BCAC40E0(L_15, /*hidden argument*/NULL);
		// DOTween.To(() => this.num, LoadNumTaiXiu, this.numEnd, GameDefine.TIME_TAIXIU).OnComplete(EndTaiXiu);
		DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE * L_16 = (DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE *)il2cpp_codegen_object_new(DOGetter_1_t369B69E8547160E3E9873151EF406D5B333369BE_il2cpp_TypeInfo_var);
		DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E(L_16, __this, (intptr_t)((intptr_t)TaiXiu_U3CSpinU3Eb__14_0_m920FE21722699A6942F07630DBA5981C2741B78C_RuntimeMethod_var), /*hidden argument*/DOGetter_1__ctor_mF4C644EBA2C36D22FB16B64CCB6694C522602B7E_RuntimeMethod_var);
		DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 * L_17 = (DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8 *)il2cpp_codegen_object_new(DOSetter_1_tCD43FAA29EE5B49551A2A689CA72CE0A10BD0CC8_il2cpp_TypeInfo_var);
		DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4(L_17, __this, (intptr_t)((intptr_t)TaiXiu_LoadNumTaiXiu_m4739C21368B7FB4C67F3960AECFD3915BA16A5A0_RuntimeMethod_var), /*hidden argument*/DOSetter_1__ctor_mE3FF64B15CC7A3F6DA8657541ED9900F58C234A4_RuntimeMethod_var);
		int32_t L_18 = __this->get_numEnd_12();
		float L_19 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_TIME_TAIXIU_13();
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t7BE7AEC9D5268B0C5F1193D8F20B01B7F18CC203_il2cpp_TypeInfo_var);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_20;
		L_20 = DOTween_To_mDD1CC936BA688C36B4F0F1BCBFEBBF9DC8E8D9F8(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_21 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_21, __this, (intptr_t)((intptr_t)TaiXiu_EndTaiXiu_m9FF2E6023DBDF601E9F0C9F5326D82D97F01764D_RuntimeMethod_var), /*hidden argument*/NULL);
		TweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1 * L_22;
		L_22 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1_mC10FC7863E2D4946A8604498627A2DCB051BF8BE(L_20, L_21, /*hidden argument*/TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t5C07324C2EA38119743CE11ADED0DE2A8BD733E1_mC10FC7863E2D4946A8604498627A2DCB051BF8BE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TaiXiu::EndTaiXiu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_EndTaiXiu_m9FF2E6023DBDF601E9F0C9F5326D82D97F01764D (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (this.result!=null)
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_0 = __this->get_result_15();
		if (!L_0)
		{
			goto IL_00b9;
		}
	}
	{
		// if (this.result.money > 0)
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_1 = __this->get_result_15();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_money_0();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		// int idSoundEffectWinTaiXiu = Random.Range(0, 5);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_0 = L_3;
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU_WIN+ idSoundEffectWinTaiXiu);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_4;
		L_4 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_5 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_WIN_38();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8;
		L_8 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_4, L_7, /*hidden argument*/NULL);
		// int idSoundWinTaiXiu = Random.Range(5, 9);
		int32_t L_9;
		L_9 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(5, ((int32_t)9), /*hidden argument*/NULL);
		V_1 = L_9;
		// SoundUtility.Instance.Play(GameDefine.SOUND_WIN + idSoundWinTaiXiu);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_10;
		L_10 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		String_t* L_11 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_WIN_20();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14;
		L_14 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_10, L_13, /*hidden argument*/NULL);
		// betRate.OnWinTaiXiu(result.number);
		BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * L_15 = __this->get_betRate_7();
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_16 = __this->get_result_15();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_number_1();
		NullCheck(L_15);
		BetRate_OnWinTaiXiu_m1420860A83E09F16D7DE51875D516BE72E3CD7C9(L_15, L_17, /*hidden argument*/NULL);
		// slotFruit.OnWinSymbolsEffectWin();
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_18 = __this->get_slotFruit_6();
		NullCheck(L_18);
		SlotFruitGame_OnWinSymbolsEffectWin_mB258D76E0EEDCC0239C171EEB173DDD67BE3F024(L_18, /*hidden argument*/NULL);
		// }
		goto IL_00b9;
	}

IL_0085:
	{
		// int idSoundEffectLoseTaiXiu = Random.Range(0, 2);
		int32_t L_19;
		L_19 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		V_2 = L_19;
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU_LOSE + idSoundEffectLoseTaiXiu);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_20;
		L_20 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_21 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_LOSE_39();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_24;
		L_24 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_20, L_23, /*hidden argument*/NULL);
		// SoundUtility.Instance.Play(GameDefine.SOUND_LUCKY_LOSE);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_25;
		L_25 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		String_t* L_26 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_LUCKY_LOSE_24();
		NullCheck(L_25);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_27;
		L_27 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// slotFruit.UpdateMoney();
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_28 = __this->get_slotFruit_6();
		NullCheck(L_28);
		SlotFruitGame_UpdateMoney_m75756C7628C1B6999D8598B8B30E3873857AB454(L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TaiXiu::LoadNumTaiXiu(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_LoadNumTaiXiu_m4739C21368B7FB4C67F3960AECFD3915BA16A5A0 (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		// numTaiXiu.LoadNumber(num % 13 + 1);
		INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A * L_0 = __this->get_numTaiXiu_13();
		int32_t L_1 = ___num0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(4 /* System.Void INumber::LoadNumber(System.Int32) */, L_0, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_1%(int32_t)((int32_t)13))), (int32_t)1)));
		// }
		return;
	}
}
// System.Void TaiXiu::_ClickTai()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu__ClickTai_m150B928FAC986003133F99733889DB370BC3FE7F (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundUtility.Instance.StopAll();
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_0;
		L_0 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		NullCheck(L_0);
		SoundUtility_StopAll_m53E07491408602103D4B18DDCFD5B0625EFC9E5B(L_0, /*hidden argument*/NULL);
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU_BUTTON);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_1;
		L_1 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_2 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_BUTTON_37();
		NullCheck(L_1);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_1, L_2, /*hidden argument*/NULL);
		// betRate.OnRight();
		BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * L_4 = __this->get_betRate_7();
		NullCheck(L_4);
		BetRate_OnRight_mF22DCBECC5D7107453067497ED31430BC9F3ADCC(L_4, /*hidden argument*/NULL);
		// slotFruit.SpinTaiXiu(TXBetType.TAI);
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_5 = __this->get_slotFruit_6();
		NullCheck(L_5);
		SlotFruitGame_SpinTaiXiu_m1871D7D480BCA20A83CEB849A23E59664279F76D(L_5, 0, /*hidden argument*/NULL);
		// this.UpdateButtons(false);
		TaiXiu_UpdateButtons_m7C08CCF25063C972F4EC400C1DF25F1FBACFAAE7(__this, (bool)0, /*hidden argument*/NULL);
		// checkx2 = 0;
		__this->set_checkx2_18(0);
		// tempmoneywincount = 0;
		__this->set_tempmoneywincount_16(0);
		// tempmoneywin = 0;
		__this->set_tempmoneywin_17(0);
		// }
		return;
	}
}
// System.Void TaiXiu::_ClickXiu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu__ClickXiu_mA1F385CCF0B2FA09AF5804D97085E8BEAA926B2D (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundUtility.Instance.StopAll();
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_0;
		L_0 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		NullCheck(L_0);
		SoundUtility_StopAll_m53E07491408602103D4B18DDCFD5B0625EFC9E5B(L_0, /*hidden argument*/NULL);
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU_BUTTON);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_1;
		L_1 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_2 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_BUTTON_37();
		NullCheck(L_1);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_1, L_2, /*hidden argument*/NULL);
		// betRate.OnLeft();
		BetRate_t122F5CE1A96F9DE399C82EE37AC4F778ED850576 * L_4 = __this->get_betRate_7();
		NullCheck(L_4);
		BetRate_OnLeft_m4ACA85504C159EA57A95FEAE88CCC661BBFDBB09(L_4, /*hidden argument*/NULL);
		// slotFruit.SpinTaiXiu(TXBetType.XIU);
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_5 = __this->get_slotFruit_6();
		NullCheck(L_5);
		SlotFruitGame_SpinTaiXiu_m1871D7D480BCA20A83CEB849A23E59664279F76D(L_5, 1, /*hidden argument*/NULL);
		// this.UpdateButtons(false);
		TaiXiu_UpdateButtons_m7C08CCF25063C972F4EC400C1DF25F1FBACFAAE7(__this, (bool)0, /*hidden argument*/NULL);
		// checkx2 = 0;
		__this->set_checkx2_18(0);
		// tempmoneywincount = 0;
		__this->set_tempmoneywincount_16(0);
		// tempmoneywin = 0;
		__this->set_tempmoneywin_17(0);
		// }
		return;
	}
}
// System.Void TaiXiu::UpdateTaiXiuButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu_UpdateTaiXiuButtons_m5945BF63822334B81EAE1047DB3FFF111A86574D (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, bool ___isOn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i=0; i< taiXiuButtons.Count; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// taiXiuButtons[i].interactable = isOn;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_taiXiuButtons_10();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
		L_2 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		bool L_3 = ___isOn0;
		NullCheck(L_2);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, L_3, /*hidden argument*/NULL);
		// for (int i=0; i< taiXiuButtons.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001a:
	{
		// for (int i=0; i< taiXiuButtons.Count; i++)
		int32_t L_5 = V_0;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_6 = __this->get_taiXiuButtons_10();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_6, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TaiXiu::_ClickWinToCredit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu__ClickWinToCredit_m7BF04B9AE7B3A79684F37ACD1B73559B4281E2F1 (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempmoneywincount = slotFruit.winMoney.number;
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_0 = __this->get_slotFruit_6();
		NullCheck(L_0);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_1 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_0)->get_winMoney_7();
		NullCheck(L_1);
		int32_t L_2 = ((INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A *)L_1)->get_number_5();
		__this->set_tempmoneywincount_16(L_2);
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU_BUTTON);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_3;
		L_3 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_4 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_BUTTON_37();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_3, L_4, /*hidden argument*/NULL);
		// creditToWinButton.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_creditToWinButton_8();
		NullCheck(L_6);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)1, /*hidden argument*/NULL);
		// if (slotFruit.winMoney.number > 0)
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_7 = __this->get_slotFruit_6();
		NullCheck(L_7);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_8 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_7)->get_winMoney_7();
		NullCheck(L_8);
		int32_t L_9 = ((INumber_t62CC4C3D24A38E1351412F816E50BB242C6C656A *)L_8)->get_number_5();
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// slotFruit.winMoney.AddMoney(-1);
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_10 = __this->get_slotFruit_6();
		NullCheck(L_10);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_11 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_10)->get_winMoney_7();
		NullCheck(L_11);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void IMoney::AddMoney(System.Int32) */, L_11, (-1));
		// tempmoneywincount--;
		int32_t L_12 = __this->get_tempmoneywincount_16();
		__this->set_tempmoneywincount_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
		// UserProfile.Instance.AddMoney(1);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_13;
		L_13 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		NullCheck(L_13);
		UserProfile_AddMoney_mBC127FAA6125E2F836DAA90036ECE6269C04F7D3(L_13, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0070:
	{
		// UpdateTaiXiuButtons(false);
		TaiXiu_UpdateTaiXiuButtons_m5945BF63822334B81EAE1047DB3FFF111A86574D(__this, (bool)0, /*hidden argument*/NULL);
		// winToCreditButton.UpdateButton(false);
		IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * L_14 = __this->get_winToCreditButton_9();
		NullCheck(L_14);
		IButton_UpdateButton_m501EA749E3CD4695B7E9E90BD3313F66C9261D69(L_14, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TaiXiu::_ClickCreditToWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu__ClickCreditToWin_m4DDFD4838DE94D16FEC198B586D838C8E5295BCA (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFE793C2892495FC1F9A2B9F253992EAF897981);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// UpdateTaiXiuButtons(true);
		TaiXiu_UpdateTaiXiuButtons_m5945BF63822334B81EAE1047DB3FFF111A86574D(__this, (bool)1, /*hidden argument*/NULL);
		// creditToWinButton.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_creditToWinButton_8();
		NullCheck(L_0);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_0, (bool)0, /*hidden argument*/NULL);
		// winToCreditButton.UpdateButton(true);
		IButton_tEC75A1CDAE86DF31EE87BCF778E810E0F36E37AB * L_1 = __this->get_winToCreditButton_9();
		NullCheck(L_1);
		IButton_UpdateButton_m501EA749E3CD4695B7E9E90BD3313F66C9261D69(L_1, (bool)1, /*hidden argument*/NULL);
		// int dtMoney = Mathf.Abs(UserProfile.Instance.user.money - moneyWin * 2);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_2;
		L_2 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		NullCheck(L_2);
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_3 = L_2->get_user_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_money_0();
		int32_t L_5 = __this->get_moneyWin_14();
		int32_t L_6;
		L_6 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)))), /*hidden argument*/NULL);
		V_0 = L_6;
		// Debug.LogError("Dt money : " + dtMoney);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDAFE793C2892495FC1F9A2B9F253992EAF897981, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
		// if (dtMoney > 0)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0102;
		}
	}
	{
		// tempmoneywin = moneyWin * 2;
		int32_t L_10 = __this->get_moneyWin_14();
		__this->set_tempmoneywin_17(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)));
		// if (UserProfile.Instance.SubMoney(tempmoneywin - tempmoneywincount))
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_11;
		L_11 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		int32_t L_12 = __this->get_tempmoneywin_17();
		int32_t L_13 = __this->get_tempmoneywincount_16();
		NullCheck(L_11);
		bool L_14;
		L_14 = UserProfile_SubMoney_mC6EAF7581FA2E2C0C71A36820D9BCE709959596A(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b8;
		}
	}
	{
		// slotFruit.winMoney.SetMoney(moneyWin * 2);
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_15 = __this->get_slotFruit_6();
		NullCheck(L_15);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_16 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_15)->get_winMoney_7();
		int32_t L_17 = __this->get_moneyWin_14();
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void IMoney::SetMoney(System.Int32) */, L_16, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// checkx2 = 1;
		__this->set_checkx2_18(1);
		// tempmoneywincount = 0;
		__this->set_tempmoneywincount_16(0);
		// SoundUtility.Instance.Play(GameDefine.SOUND_TAI_XIU_BUTTON);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_18;
		L_18 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_19 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_TAI_XIU_BUTTON_37();
		NullCheck(L_18);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_20;
		L_20 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b8:
	{
		// UserProfile.Instance.SubMoney(UserProfile.Instance.user.money);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_21;
		L_21 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_22;
		L_22 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		NullCheck(L_22);
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_23 = L_22->get_user_6();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_money_0();
		NullCheck(L_21);
		bool L_25;
		L_25 = UserProfile_SubMoney_mC6EAF7581FA2E2C0C71A36820D9BCE709959596A(L_21, L_24, /*hidden argument*/NULL);
		// slotFruit.winMoney.SetMoney(slotFruit.winMoney.money + UserProfile.Instance.user.money);
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_26 = __this->get_slotFruit_6();
		NullCheck(L_26);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_27 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_26)->get_winMoney_7();
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_28 = __this->get_slotFruit_6();
		NullCheck(L_28);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_29 = ((ISlotGame_tFCB9B352D7605AA2724D3E9F3D38A95DE7B1DE0A *)L_28)->get_winMoney_7();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_money_6();
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_31;
		L_31 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		NullCheck(L_31);
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_32 = L_31->get_user_6();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_money_0();
		NullCheck(L_27);
		VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void IMoney::SetMoney(System.Int32) */, L_27, ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_33)));
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void TaiXiu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiu__ctor_mF80414FFA6BCA48E90526D393E1497DE97462A2D (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1__ctor_m25D7E94AE54CB9A7042ED903B57BD815C980F45B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t23CC52A76D08A8E9DD628B4D3B21FA867018487E_il2cpp_TypeInfo_var);
		MonoSingleton_1__ctor_m25D7E94AE54CB9A7042ED903B57BD815C980F45B(__this, /*hidden argument*/MonoSingleton_1__ctor_m25D7E94AE54CB9A7042ED903B57BD815C980F45B_RuntimeMethod_var);
		return;
	}
}
// System.Int32 TaiXiu::<Spin>b__14_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaiXiu_U3CSpinU3Eb__14_0_m920FE21722699A6942F07630DBA5981C2741B78C (TaiXiu_tF6AF80E08A6C608B73261A565D48DA6E46464645 * __this, const RuntimeMethod* method)
{
	{
		// DOTween.To(() => this.num, LoadNumTaiXiu, this.numEnd, GameDefine.TIME_TAIXIU).OnComplete(EndTaiXiu);
		int32_t L_0 = __this->get_num_11();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TXResult TaiXiuRule::Spin(System.Int32,TXBetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * TaiXiuRule_Spin_m942EE1583DC5C16106F8E938BE459875C3C50283 (TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B * __this, int32_t ___bet0, int32_t ___betType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// this.betMoney = bet;
		int32_t L_0 = ___bet0;
		__this->set_betMoney_2(L_0);
		// TXResult result = new TXResult();
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_1 = (TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 *)il2cpp_codegen_object_new(TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0_il2cpp_TypeInfo_var);
		TXResult__ctor_mAE33BB7AF8A2BF29A9C3125768AFBA1E376DD262(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// int rand = Random.Range(MIN, MAX);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)14), /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0021;
	}

IL_0018:
	{
		// rand = Random.Range(MIN, MAX);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)14), /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0021:
	{
		// while(rand == 7)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)7)))
		{
			goto IL_0018;
		}
	}
	{
		// if(rand < 8 && betType == TXBetType.XIU)//xiu
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)8)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_6 = ___betType1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// result.number = rand;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		L_7->set_number_1(L_8);
		// result.money = this.betMoney * 2;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_9 = V_0;
		int32_t L_10 = __this->get_betMoney_2();
		NullCheck(L_9);
		L_9->set_money_0(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)));
		// }
		goto IL_0070;
	}

IL_0044:
	{
		// if(rand >= 8 && betType == TXBetType.TAI)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_12 = ___betType1;
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		// result.number = rand;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		L_13->set_number_1(L_14);
		// result.money = this.betMoney * 2;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_15 = V_0;
		int32_t L_16 = __this->get_betMoney_2();
		NullCheck(L_15);
		L_15->set_money_0(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)));
		// }
		goto IL_0070;
	}

IL_0062:
	{
		// result.number = rand;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		L_17->set_number_1(L_18);
		// result.money = 0;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_19 = V_0;
		NullCheck(L_19);
		L_19->set_money_0(0);
	}

IL_0070:
	{
		// return result;
		TXResult_t399A8F0B8BB5CFF4282E70E92C31CDFCF6E146B0 * L_20 = V_0;
		return L_20;
	}
}
// System.Void TaiXiuRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaiXiuRule__ctor_m145DAADE782CF5F840B0B6A9BFC23904405BF057 (TaiXiuRule_t4AD97D78D9D1C0750130A3CAB28848558DFBB54B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserModel__ctor_m0282C3D5AED4CC32726D03F8955A80E469482577 (UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserModel()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// money = GameDefine.USER_MONEY;
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_USER_MONEY_15();
		__this->set_money_0(L_0);
		// volume = GameDefine.USER_VOLUME;
		float L_1 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_USER_VOLUME_16();
		__this->set_volume_1(L_1);
		// statistic = new UserStatistic();
		UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * L_2 = (UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 *)il2cpp_codegen_object_new(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3_il2cpp_TypeInfo_var);
		UserStatistic__ctor_m079EA8C1FFD4ECBB4AA8B582176D7652AA9321A7(L_2, /*hidden argument*/NULL);
		__this->set_statistic_2(L_2);
		// }
		return;
	}
}
// System.Void UserModel::Spin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserModel_Spin_m33F5C75010AF3DE1707038B2CAE56082B4A2AE76 (UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * __this, int32_t ___moneyWin0, int32_t ___round1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (statistic == null)
		UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * L_0 = __this->get_statistic_2();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// statistic = new UserStatistic();
		UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * L_1 = (UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 *)il2cpp_codegen_object_new(UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3_il2cpp_TypeInfo_var);
		UserStatistic__ctor_m079EA8C1FFD4ECBB4AA8B582176D7652AA9321A7(L_1, /*hidden argument*/NULL);
		__this->set_statistic_2(L_1);
	}

IL_0013:
	{
		// statistic.Spin(moneyWin, round);
		UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * L_2 = __this->get_statistic_2();
		int32_t L_3 = ___moneyWin0;
		int32_t L_4 = ___round1;
		NullCheck(L_2);
		UserStatistic_Spin_m5A5C46898480415F56B138628D0E6FCB085471D0(L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserMoney::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMoney_OnEnable_mB731765BAE47CB887BA31C10FA6EFD1591447870 (UserMoney_t02B52319D944BFFDA80F86057AE8D4CF98608A28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserMoney_UpdateMoney_m85802EFBDFF536D100883AB39F93C00E87B70976_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UserProfile.Instance.updateMoney += UpdateMoney;
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_0;
		L_0 = MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55(/*hidden argument*/MonoSingleton_1_get_Instance_m649AE3DB9D1D3DEBAC5B75420CDB021674808C55_RuntimeMethod_var);
		UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * L_1 = L_0;
		NullCheck(L_1);
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_2 = L_1->get_updateMoney_7();
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_3 = (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D *)il2cpp_codegen_object_new(UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D_il2cpp_TypeInfo_var);
		UpdateValue__ctor_mA29B513B5339A0767E9DE23E43705956B88E8E2D(L_3, __this, (intptr_t)((intptr_t)UserMoney_UpdateMoney_m85802EFBDFF536D100883AB39F93C00E87B70976_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_updateMoney_7(((UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D *)CastclassSealed((RuntimeObject*)L_4, UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UserMoney::UpdateMoney(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMoney_UpdateMoney_m85802EFBDFF536D100883AB39F93C00E87B70976 (UserMoney_t02B52319D944BFFDA80F86057AE8D4CF98608A28 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int money = (int)data;
		RuntimeObject * L_0 = ___data0;
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// Debug.Log(money);
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// credit.UpdateMoney(money);
		IMoney_tDD85F1A46FBC019F9080A1F17B70103EA74B3D1F * L_4 = __this->get_credit_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IMoney_UpdateMoney_m315E473770D38D45D8771100700BC0D6C5425303(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserMoney::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserMoney__ctor_m487A840734714F0708E4B866164D4CF5CCE6D377 (UserMoney_t02B52319D944BFFDA80F86057AE8D4CF98608A28 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserProfile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_Start_mEDCC592E031B5481FEE6A8C40A0D947886D5BE1E (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method)
{
	{
		// this.LoadUser();
		UserProfile_LoadUser_m4AF55EEDA416966E812C0B135F50E7AA9BC9FA4A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserProfile::ClearData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_ClearData_m973B78CA3D36F05CE70DB55BCB47752053880812 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserProfile::LoadUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_LoadUser_m4AF55EEDA416966E812C0B135F50E7AA9BC9FA4A (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_m17F3F395C0C19E040FD480800FE9DF80E8D8B9EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (PlayerPrefs.HasKey(GameDefine.USER_LOCAL))
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_USER_LOCAL_14();
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		// string data = PlayerPrefs.GetString(GameDefine.USER_LOCAL);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_2 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_USER_LOCAL_14();
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!data.Equals(""))
		String_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0089;
		}
	}
	{
		// this.user = JsonUtility.FromJson<UserModel>(data);
		String_t* L_6 = V_0;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_7;
		L_7 = JsonUtility_FromJson_TisUserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_m17F3F395C0C19E040FD480800FE9DF80E8D8B9EE(L_6, /*hidden argument*/JsonUtility_FromJson_TisUserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_m17F3F395C0C19E040FD480800FE9DF80E8D8B9EE_RuntimeMethod_var);
		__this->set_user_6(L_7);
		// if (this.updateMoney != null)
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_8 = __this->get_updateMoney_7();
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		// this.updateMoney.Invoke(this.user.money);
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_9 = __this->get_updateMoney_7();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_10 = __this->get_user_6();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_money_0();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0(L_9, L_13, /*hidden argument*/NULL);
		// }
		goto IL_0089;
	}

IL_0055:
	{
		// this.user = new UserModel();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_14 = (UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF *)il2cpp_codegen_object_new(UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF_il2cpp_TypeInfo_var);
		UserModel__ctor_m0282C3D5AED4CC32726D03F8955A80E469482577(L_14, /*hidden argument*/NULL);
		__this->set_user_6(L_14);
		// this.SaveUser();
		UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97(__this, /*hidden argument*/NULL);
		// if (this.updateMoney != null)
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_15 = __this->get_updateMoney_7();
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		// this.updateMoney.Invoke(this.user.money);
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_16 = __this->get_updateMoney_7();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_17 = __this->get_user_6();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_money_0();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0(L_16, L_20, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// SoundUtility.Instance.SetVolume(user.volume);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_21;
		L_21 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_22 = __this->get_user_6();
		NullCheck(L_22);
		float L_23 = L_22->get_volume_1();
		NullCheck(L_21);
		SoundUtility_SetVolume_m92FB237E36C88C4B70C6D7AB08AC8C1D7098C846(L_21, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UserProfile::SaveUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (this.user != null)
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// string data = JsonUtility.ToJson(this.user);
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_1 = __this->get_user_6();
		String_t* L_2;
		L_2 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Debug.Log(data);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// PlayerPrefs.SetString(GameDefine.USER_LOCAL, data);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_4 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_USER_LOCAL_14();
		String_t* L_5 = V_0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UserProfile::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetVolume_m983E72975AC4034500566EE6484C77DACDE17A7E (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, float ___volume0, const RuntimeMethod* method)
{
	{
		// if (this.user != null)
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// this.user.volume = volume;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_1 = __this->get_user_6();
		float L_2 = ___volume0;
		NullCheck(L_1);
		L_1->set_volume_1(L_2);
		// this.SaveUser();
		UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97(__this, /*hidden argument*/NULL);
		// LoadUser();
		UserProfile_LoadUser_m4AF55EEDA416966E812C0B135F50E7AA9BC9FA4A(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UserProfile::AddMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_AddMoney_mBC127FAA6125E2F836DAA90036ECE6269C04F7D3 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___money0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.user != null)
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// this.user.money += money;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_1 = __this->get_user_6();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_money_0();
		int32_t L_4 = ___money0;
		NullCheck(L_2);
		L_2->set_money_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)));
		// this.SaveUser();
		UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97(__this, /*hidden argument*/NULL);
		// if (updateMoney != null)
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_5 = __this->get_updateMoney_7();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// updateMoney.Invoke(this.user.money);
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_6 = __this->get_updateMoney_7();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_7 = __this->get_user_6();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_money_0();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0(L_6, L_10, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean UserProfile::SubMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_SubMoney_mC6EAF7581FA2E2C0C71A36820D9BCE709959596A (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___money0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int m = this.user.money - money;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_money_0();
		int32_t L_2 = ___money0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		// if (m >= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// this.user.money = m;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_4 = __this->get_user_6();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		L_4->set_money_0(L_5);
		// this.SaveUser();
		UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97(__this, /*hidden argument*/NULL);
		// if (updateMoney != null)
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_6 = __this->get_updateMoney_7();
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// updateMoney.Invoke(this.user.money);
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_7 = __this->get_updateMoney_7();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_8 = __this->get_user_6();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_money_0();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// return true;
		return (bool)1;
	}

IL_0049:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 UserProfile::SubMoneys(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_SubMoneys_m700279BD5DFA7348470F29EBDE47A8AFFA1FD75A (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___money0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int m = this.user.money - money;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_money_0();
		int32_t L_2 = ___money0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		// if (m >= 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// this.user.money = m;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_4 = __this->get_user_6();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		L_4->set_money_0(L_5);
		// this.SaveUser();
		UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97(__this, /*hidden argument*/NULL);
		// if (updateMoney != null)
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_6 = __this->get_updateMoney_7();
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// updateMoney.Invoke(this.user.money);
		UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * L_7 = __this->get_updateMoney_7();
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_8 = __this->get_user_6();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_money_0();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// return m;
		int32_t L_12 = V_0;
		return L_12;
	}

IL_0049:
	{
		// return -1;
		return (-1);
	}
}
// System.Boolean UserProfile::CheckMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_CheckMoney_mF0F8BD7C1C779DA2CD73B8D31B5B13AE0F6DF519 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___money0, const RuntimeMethod* method)
{
	{
		// return this.user.money >= money;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_money_0();
		int32_t L_2 = ___money0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UserProfile::Spin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_Spin_m4049A59383C512BA54654122796C27848EEB0438 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, int32_t ___moneyWin0, int32_t ___round1, const RuntimeMethod* method)
{
	{
		// this.user.Spin(moneyWin, round);
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		int32_t L_1 = ___moneyWin0;
		int32_t L_2 = ___round1;
		NullCheck(L_0);
		UserModel_Spin_m33F5C75010AF3DE1707038B2CAE56082B4A2AE76(L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.SaveUser();
		UserProfile_SaveUser_m6330B097C1ED4636D2151C9C0D1BC06658E7ED97(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UserStatistic UserProfile::GetStatistic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * UserProfile_GetStatistic_mAE7D47535B2AF4B483394E60799BB20D7F941E93 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method)
{
	{
		// LoadUser();
		UserProfile_LoadUser_m4AF55EEDA416966E812C0B135F50E7AA9BC9FA4A(__this, /*hidden argument*/NULL);
		// return this.user.statistic;
		UserModel_t9F82F8BEA5403F8434549BE2677C7C5A28D690AF * L_0 = __this->get_user_6();
		NullCheck(L_0);
		UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * L_1 = L_0->get_statistic_2();
		return L_1;
	}
}
// System.Void UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m4694749686D3452B0D565F0C23E8C907FE271C89 (UserProfile_t90B71C1AEAF3639ED33BBC26C50139367BB6E2A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1__ctor_m9B13923F02C82DD569030DBE77184AB6C9C9C7C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t69D50E796D7E60FD2A1EA87BA2416E85DD18E598_il2cpp_TypeInfo_var);
		MonoSingleton_1__ctor_m9B13923F02C82DD569030DBE77184AB6C9C9C7C1(__this, /*hidden argument*/MonoSingleton_1__ctor_m9B13923F02C82DD569030DBE77184AB6C9C9C7C1_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserStatistic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserStatistic__ctor_m079EA8C1FFD4ECBB4AA8B582176D7652AA9321A7 (UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * __this, const RuntimeMethod* method)
{
	{
		// public UserStatistic()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// winRate = 0;
		__this->set_winRate_0((0.0f));
		// round = 0;
		__this->set_round_2(0);
		// highestSingeWin = 0;
		__this->set_highestSingeWin_3(0);
		// timeOfBigBang = 0;
		__this->set_timeOfBigBang_4(0);
		// win = 0;
		__this->set_win_1(0);
		// }
		return;
	}
}
// System.Void UserStatistic::Spin(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserStatistic_Spin_m5A5C46898480415F56B138628D0E6FCB085471D0 (UserStatistic_t8A932C6D6EDD741F1D0A28424EB4091801CB9AD3 * __this, int32_t ___moneyWin0, int32_t ___round1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.round += round;
		int32_t L_0 = __this->get_round_2();
		int32_t L_1 = ___round1;
		__this->set_round_2(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (moneyWin > highestSingeWin)
		int32_t L_2 = ___moneyWin0;
		int32_t L_3 = __this->get_highestSingeWin_3();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// this.highestSingeWin = moneyWin;
		int32_t L_4 = ___moneyWin0;
		__this->set_highestSingeWin_3(L_4);
	}

IL_001e:
	{
		// if (moneyWin > 0)
		int32_t L_5 = ___moneyWin0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// this.win +=round;
		int32_t L_6 = __this->get_win_1();
		int32_t L_7 = ___round1;
		__this->set_win_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)));
	}

IL_0030:
	{
		// winRate = (float) this.win / (float) this.round;
		int32_t L_8 = __this->get_win_1();
		int32_t L_9 = __this->get_round_2();
		__this->set_winRate_0(((float)((float)((float)((float)L_8))/(float)((float)((float)L_9)))));
		// Debug.Log(highestSingeWin + ":" + win);
		int32_t* L_10 = __this->get_address_of_highestSingeWin_3();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		int32_t* L_12 = __this->get_address_of_win_1();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_11, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForCompletion::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForCompletion_get_keepWaiting_mCA7642C5A8C37F8C0A2CAE990CE1CB6AEE8FD2D9 (WaitForCompletion_t9F365BC31EF3315DA3B809E3CB617F803283D67F * __this, const RuntimeMethod* method)
{
	{
		// return t.active && !t.IsComplete();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = __this->get_t_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = __this->get_t_0();
		bool L_3;
		L_3 = TweenExtensions_IsComplete_mC87F29FE0746C793F0C11175A9B37087C1C436FD(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForCompletion__ctor_m818111A77A3380EE626346FE03A1A604BB896A1A (WaitForCompletion_t9F365BC31EF3315DA3B809E3CB617F803283D67F * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween0, const RuntimeMethod* method)
{
	{
		// public WaitForCompletion(Tween tween)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// t = tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ___tween0;
		__this->set_t_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForElapsedLoops_get_keepWaiting_m6F7A59CCCC45BBA5125C6FC7AB667CD24359E8F4 (WaitForElapsedLoops_t59B0D77B88598E4CD91A4C3A1508F2FB810470A4 * __this, const RuntimeMethod* method)
{
	{
		// return t.active && t.CompletedLoops() < elapsedLoops;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = __this->get_t_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = __this->get_t_0();
		int32_t L_3;
		L_3 = TweenExtensions_CompletedLoops_m067EA5E0CFEEF70813063DC6336000D02E5C2E87(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_elapsedLoops_1();
		return (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForElapsedLoops__ctor_m8E720B450DD1350EE81EC3CCB5B6280BE5C51D8B (WaitForElapsedLoops_t59B0D77B88598E4CD91A4C3A1508F2FB810470A4 * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween0, int32_t ___elapsedLoops1, const RuntimeMethod* method)
{
	{
		// public WaitForElapsedLoops(Tween tween, int elapsedLoops)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// t = tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ___tween0;
		__this->set_t_0(L_0);
		// this.elapsedLoops = elapsedLoops;
		int32_t L_1 = ___elapsedLoops1;
		__this->set_elapsedLoops_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForKill::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForKill_get_keepWaiting_m7979151F1AD842D2E8004FE37A2C51B47AB36647 (WaitForKill_t1C0002DDEF1C49DDE1DB6D93C0C16BBF662A2B6D * __this, const RuntimeMethod* method)
{
	{
		// return t.active;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = __this->get_t_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForKill__ctor_m1C9624CE32A1C83CEA14BB5EADD587B6AD79D829 (WaitForKill_t1C0002DDEF1C49DDE1DB6D93C0C16BBF662A2B6D * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween0, const RuntimeMethod* method)
{
	{
		// public WaitForKill(Tween tween)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// t = tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ___tween0;
		__this->set_t_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForPosition::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForPosition_get_keepWaiting_m34DFE8356EAFEE916828BFAF4A17A822B47AD687 (WaitForPosition_tF45B25B48601A808ACA7A19EEAA6DABAFE64D3CB * __this, const RuntimeMethod* method)
{
	{
		// return t.active && t.position * (t.CompletedLoops() + 1) < position;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = __this->get_t_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = __this->get_t_0();
		NullCheck(L_2);
		float L_3;
		L_3 = Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline(L_2, /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_4 = __this->get_t_0();
		int32_t L_5;
		L_5 = TweenExtensions_CompletedLoops_m067EA5E0CFEEF70813063DC6336000D02E5C2E87(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_position_1();
		return (bool)((((float)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))))))) < ((float)L_6))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForPosition__ctor_m94DD0A05EF293B8AA83F343A12015C107AF7FDB8 (WaitForPosition_tF45B25B48601A808ACA7A19EEAA6DABAFE64D3CB * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween0, float ___position1, const RuntimeMethod* method)
{
	{
		// public WaitForPosition(Tween tween, float position)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// t = tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ___tween0;
		__this->set_t_0(L_0);
		// this.position = position;
		float L_1 = ___position1;
		__this->set_position_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForRewind::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRewind_get_keepWaiting_mB480319CB28155CA977F94C7FA03EE5353AA1285 (WaitForRewind_t63F6F6401744395FF42FD23059C8F13A08B6EF0E * __this, const RuntimeMethod* method)
{
	{
		// return t.active && (!t.playedOnce || t.position * (t.CompletedLoops() + 1) > 0);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = __this->get_t_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = __this->get_t_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_playedOnce_mFA82C31BFA8C147EEE916A0C92FD3A705F717F20_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_4 = __this->get_t_0();
		NullCheck(L_4);
		float L_5;
		L_5 = Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline(L_4, /*hidden argument*/NULL);
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_6 = __this->get_t_0();
		int32_t L_7;
		L_7 = TweenExtensions_CompletedLoops_m067EA5E0CFEEF70813063DC6336000D02E5C2E87(L_6, /*hidden argument*/NULL);
		return (bool)((((float)((float)il2cpp_codegen_multiply((float)L_5, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1))))))) > ((float)(0.0f)))? 1 : 0);
	}

IL_003c:
	{
		return (bool)1;
	}

IL_003e:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRewind__ctor_m66B575E497C363CB5137629B4D6A00D13B7CD5AE (WaitForRewind_t63F6F6401744395FF42FD23059C8F13A08B6EF0E * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween0, const RuntimeMethod* method)
{
	{
		// public WaitForRewind(Tween tween)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// t = tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ___tween0;
		__this->set_t_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForStart::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForStart_get_keepWaiting_m59700AA1AB726A22C76BFAA0C52FCA460F6E337D (WaitForStart_tAF9DF336B5F10E0C153522BD49426FC7EF68540C * __this, const RuntimeMethod* method)
{
	{
		// return t.active && !t.playedOnce;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = __this->get_t_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = __this->get_t_0();
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_playedOnce_mFA82C31BFA8C147EEE916A0C92FD3A705F717F20_inline(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForStart__ctor_mD7AB17A603CF22568EEF0D9861C49F6CFD632284 (WaitForStart_tAF9DF336B5F10E0C153522BD49426FC7EF68540C * __this, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___tween0, const RuntimeMethod* method)
{
	{
		// public WaitForStart(Tween tween)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// t = tween;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_0 = ___tween0;
		__this->set_t_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mB8ECD32BCDE8AEE5DA844CB16FB319546FDF65F4 (U3CU3Ec__DisplayClass0_0_t8EDD49424F7AFC055DC1442B3F99B3BFCF6B09F0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m6447B544882FDCCECF5F03C92CFD462E52F55C3C (U3CU3Ec__DisplayClass0_0_t8EDD49424F7AFC055DC1442B3F99B3BFCF6B09F0 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.volume, x => target.volume = x, endValue, duration);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass0_0::<DOFade>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_mCBA7DC56068D62779FD9318BF1BF6CC04674AA73 (U3CU3Ec__DisplayClass0_0_t8EDD49424F7AFC055DC1442B3F99B3BFCF6B09F0 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.volume, x => target.volume = x, endValue, duration);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD593A9B61B5F03AF9D1695ED9FA2C1E993F41739 (U3CU3Ec__DisplayClass1_0_tA5DAB4AB298719A5FC9203633FE7CAE2D7AFBF0A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::<DOPitch>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass1_0_U3CDOPitchU3Eb__0_mB6B65C2ED3194137382A4DC81F72AB5C2C95FEB7 (U3CU3Ec__DisplayClass1_0_tA5DAB4AB298719A5FC9203633FE7CAE2D7AFBF0A * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.pitch, x => target.pitch = x, endValue, duration);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass1_0::<DOPitch>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOPitchU3Eb__1_m9ED5ED10167C9FA210B584AAC22893154A683518 (U3CU3Ec__DisplayClass1_0_tA5DAB4AB298719A5FC9203633FE7CAE2D7AFBF0A * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.pitch, x => target.pitch = x, endValue, duration);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3D650640D73868903AB5235513EB20B1EF57851E (U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::<DOSetFloat>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass2_0_U3CDOSetFloatU3Eb__0_m1B04734B7D8B9A386220DCDED11506098EDF5039 (U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// target.GetFloat(floatName, out currVal);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_floatName_1();
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioMixer_GetFloat_m269CC0D94DFA272A6900F2A75AE94FF7B9D8E40C(L_0, L_1, (float*)(&V_0), /*hidden argument*/NULL);
		// return currVal;
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void DG.Tweening.DOTweenModuleAudio/<>c__DisplayClass2_0::<DOSetFloat>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CDOSetFloatU3Eb__1_mDE42A0D8DA684D1F5E21CA1797A119D6BF6252C3 (U3CU3Ec__DisplayClass2_0_tB2A5900BBCFDCC67A4CCA370F4284F7494E958E1 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// }, x=> target.SetFloat(floatName, x), endValue, duration);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_floatName_1();
		float L_2 = ___x0;
		NullCheck(L_0);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mCFBBC383950DE52D74C6F4E85C4F7F3273B10719 (U3CU3Ec__DisplayClass0_0_tF06F41913CFED04E5FC3E2C676BCEAC2D3E53CAC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0::<DOMove>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_m8158605D880C075EEDC090F3BD1175AA33E2E107 (U3CU3Ec__DisplayClass0_0_tF06F41913CFED04E5FC3E2C676BCEAC2D3E53CAC * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, endValue, duration);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m819824BC9854A0C90662B04D48B88CA7B052BF83 (U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::<DOLocalPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass10_0_U3CDOLocalPathU3Eb__0_m3089CA33F25546258A5E846EA51421D71AC55D70 (U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Path, PathOptions> t = DOTween.To(PathPlugin.Get(), () => trans.localPosition, x => target.MovePosition(trans.parent == null ? x : trans.parent.TransformPoint(x)), path, duration)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trans_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0::<DOLocalPath>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CDOLocalPathU3Eb__1_mD201EFBB4403FBDEC0D377D39A768A581E6CCDDD (U3CU3Ec__DisplayClass10_0_t6B6DFEAD8FF1DD6A724C294AA0B120F82A7A6937 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B2_0 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B3_1 = NULL;
	{
		// TweenerCore<Vector3, Path, PathOptions> t = DOTween.To(PathPlugin.Get(), () => trans.localPosition, x => target.MovePosition(trans.parent == null ? x : trans.parent.TransformPoint(x)), path, duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_trans_0();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_002c;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_trans_0();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___x0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___x0;
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m4E41921AB96267B39AAB22B0790884BEB58B467D (U3CU3Ec__DisplayClass1_0_t5BD4116FD80F4DAD54FD39BBD7A2CFBDAEAB3AF3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0::<DOMoveX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_m0EEE1A4D5C020E63505FB9F7E09A531433FC817D (U3CU3Ec__DisplayClass1_0_t5BD4116FD80F4DAD54FD39BBD7A2CFBDAEAB3AF3 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, new Vector3(endValue, 0, 0), duration);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mA7A465D617CE4C839F719F65F44B2D806976FC71 (U3CU3Ec__DisplayClass2_0_t35A2F555A5E408DEE2EA63254AACB729C014757D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0::<DOMoveY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_m4930252334FB6162D77F0821409D7487A96CB696 (U3CU3Ec__DisplayClass2_0_t35A2F555A5E408DEE2EA63254AACB729C014757D * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, new Vector3(0, endValue, 0), duration);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m9E94ECE0838CF218AB657F8C4B51F881B310EF34 (U3CU3Ec__DisplayClass3_0_t39BE4FE1476B4D5D73FC150406C576C638973F8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0::<DOMoveZ>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass3_0_U3CDOMoveZU3Eb__0_mF75D2479FE18CCE0BFC07AA4A06B1EBE01369D29 (U3CU3Ec__DisplayClass3_0_t39BE4FE1476B4D5D73FC150406C576C638973F8D * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, new Vector3(0, 0, endValue), duration);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m1A01BE964AEBF9737E72E7C9B3B5D660D965B936 (U3CU3Ec__DisplayClass4_0_t3A8BE7E3EE8D0963B5FC3AE4F184CAF2EB8E1D84 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0::<DORotate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  U3CU3Ec__DisplayClass4_0_U3CDORotateU3Eb__0_m6B41E1A9419EDB0B9FDE8C9A62BDAA1281D19EF5 (U3CU3Ec__DisplayClass4_0_t3A8BE7E3EE8D0963B5FC3AE4F184CAF2EB8E1D84 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Quaternion, Vector3, QuaternionOptions> t = DOTween.To(() => target.rotation, target.MoveRotation, endValue, duration);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF63278B7093557C5BF31EE7878AC0E87D82EEC74 (U3CU3Ec__DisplayClass5_0_tC3DF99D3D2F6A0C0E6651294AE0DF0537CEC4617 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0::<DOLookAt>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  U3CU3Ec__DisplayClass5_0_U3CDOLookAtU3Eb__0_m2019767096427977C234F4A6698E6C2559840795 (U3CU3Ec__DisplayClass5_0_tC3DF99D3D2F6A0C0E6651294AE0DF0537CEC4617 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Quaternion, Vector3, QuaternionOptions> t = DOTween.To(() => target.rotation, target.MoveRotation, towards, duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Rigidbody_get_rotation_mEB90F9D223B0BA32A1962971E3A93DEE1670D18A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m06AC3FA2094299E1FDE7ECAFCC8F970C5139B4FE (U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__0_m847B6B84B9DBBB179602A2DAC20A1E47B7CD0C6F (U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * __this, const RuntimeMethod* method)
{
	{
		// Tween yTween = DOTween.To(() => target.position, target.MovePosition, new Vector3(0, jumpPower, 0), duration / (numJumps * 2))
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__1_m488237F614033272B64730F763C4EFCD4009ACDB (U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * __this, const RuntimeMethod* method)
{
	{
		// .OnStart(() => startPosY = target.position.y);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		__this->set_startPosY_1(L_2);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__2_m6F586BA8E7E757466B5E77AB61BD0056F4D86D28 (U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * __this, const RuntimeMethod* method)
{
	{
		// s.Append(DOTween.To(() => target.position, target.MovePosition, new Vector3(endValue.x, 0, 0), duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__3_mEC9264AAF5B45E16B176AFA00079BFDA173EDDFE (U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * __this, const RuntimeMethod* method)
{
	{
		// ).Join(DOTween.To(() => target.position, target.MovePosition, new Vector3(0, 0, endValue.z), duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0::<DOJump>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CDOJumpU3Eb__4_m15CD7F1F9A30E34BA9AC943FA510B9FF0C15F84E (U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * G_B3_0 = NULL;
	U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	U3CU3Ec__DisplayClass6_0_t97B2374B522E403B5DF1B457D5B6EBF73C0D5CC9 * G_B4_1 = NULL;
	{
		// if (!offsetYSet) {
		bool L_0 = __this->get_offsetYSet_2();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		// offsetYSet = true;
		__this->set_offsetYSet_2((bool)1);
		// offsetY = s.isRelative ? endValue.y : endValue.y - startPosY;
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_1 = __this->get_s_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline(L_1, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_endValue_5();
		float L_4 = L_3->get_y_3();
		float L_5 = __this->get_startPosY_1();
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_0031:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_endValue_5();
		float L_7 = L_6->get_y_3();
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_offsetY_3(G_B4_0);
	}

IL_0041:
	{
		// Vector3 pos = target.position;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_target_0();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// pos.y += DOVirtual.EasedValue(0, offsetY, yTween.ElapsedPercentage(), Ease.OutQuad);
		float* L_10 = (&V_0)->get_address_of_y_3();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = __this->get_offsetY_3();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_14 = __this->get_yTween_6();
		float L_15;
		L_15 = TweenExtensions_ElapsedPercentage_mC12ED1EAF1BEBF089D80B420DC6D987DE9C7C618(L_14, (bool)1, /*hidden argument*/NULL);
		float L_16;
		L_16 = DOVirtual_EasedValue_m13B1BCEC7154DBD3C6B63DD66BED84E3ACCB3E92((0.0f), L_13, L_15, 6, /*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)L_16));
		// target.MovePosition(pos);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_17 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		NullCheck(L_17);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(L_17, L_18, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m177CD3D0B0169C7DF1FD6F64FB8C39D0F92E7023 (U3CU3Ec__DisplayClass7_0_tF8E56709396C6DFFECA7608E4CD67CBE2C1C1CE5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0::<DOPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__0_m448E92A163A6A98FFE561134611FAD6418C6824B (U3CU3Ec__DisplayClass7_0_tF8E56709396C6DFFECA7608E4CD67CBE2C1C1CE5 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Path, PathOptions> t = DOTween.To(PathPlugin.Get(), () => target.position, target.MovePosition, new Path(pathType, path, resolution, gizmoColor), duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4499D3AB924EEB9EB850233A8F64E5EC4A7AEA3D (U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::<DOLocalPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__0_mAB235341BB5079CA397BF09B075B856C6B950EDF (U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Path, PathOptions> t = DOTween.To(PathPlugin.Get(), () => trans.localPosition, x => target.MovePosition(trans.parent == null ? x : trans.parent.TransformPoint(x)), new Path(pathType, path, resolution, gizmoColor), duration)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_trans_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0::<DOLocalPath>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__1_m19CF06E0D31E737EFDEEFE6D4D2361EA0D372730 (U3CU3Ec__DisplayClass8_0_t7D774AA07804F8A87A6F27483038CEC5FB0CC440 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B2_0 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B3_1 = NULL;
	{
		// TweenerCore<Vector3, Path, PathOptions> t = DOTween.To(PathPlugin.Get(), () => trans.localPosition, x => target.MovePosition(trans.parent == null ? x : trans.parent.TransformPoint(x)), new Path(pathType, path, resolution, gizmoColor), duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_trans_0();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_002c;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_trans_0();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___x0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___x0;
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		Rigidbody_MovePosition_mB3CBBF21FD0ABB88BC6C004B993DED25673001C7(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mCA1E6F241784A13DEC15E12A0219479D552BB6BB (U3CU3Ec__DisplayClass9_0_tB9266040A99BBE64FC737A175355345A13E86D21 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0::<DOPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass9_0_U3CDOPathU3Eb__0_mD050544C13BA54260FC94E0964EF204B4EDB2628 (U3CU3Ec__DisplayClass9_0_tB9266040A99BBE64FC737A175355345A13E86D21 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Path, PathOptions> t = DOTween.To(PathPlugin.Get(), () => target.position, target.MovePosition, path, duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m28BD574ECE1FAC2A8040F507B4347CA641B883C8 (U3CU3Ec__DisplayClass0_0_tED64664CBF4D43290FDDCBF237DF29F9DB8F92A9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::<DOMove>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_mD0BB74EE7E3ED3D15C2B501656DD41CB4DB1CFB0 (U3CU3Ec__DisplayClass0_0_tED64664CBF4D43290FDDCBF237DF29F9DB8F92A9 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, endValue, duration);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m0A358EE93B5CBA3BAAFED5EFA3CB29B852CC0A8C (U3CU3Ec__DisplayClass1_0_tDABE9F243A4095C0C2295D15C58B0D3334267A3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::<DOMoveX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_m890A07E5B25CF040E903014587C8C30FC43505CF (U3CU3Ec__DisplayClass1_0_tDABE9F243A4095C0C2295D15C58B0D3334267A3A * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, new Vector2(endValue, 0), duration);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m79644C3E99A1BADC2CF695A33996EFBE999BCA28 (U3CU3Ec__DisplayClass2_0_tB7DA75EB7F11962B20C503C1B2A50BF4D821E318 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::<DOMoveY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_m833E99A0F3AFA6D89F501FE08B0EF7371AE20D4C (U3CU3Ec__DisplayClass2_0_tB7DA75EB7F11962B20C503C1B2A50BF4D821E318 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.position, target.MovePosition, new Vector2(0, endValue), duration);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m37C53B07CACF2CE16A6FECB187B45E328882E6CC (U3CU3Ec__DisplayClass3_0_tB63C203014F824EA9466F064AF2D8A157A7F4CBF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::<DORotate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass3_0_U3CDORotateU3Eb__0_mE8799B2B2CD516708D2235A0D1822AF9AEA117DF (U3CU3Ec__DisplayClass3_0_tB63C203014F824EA9466F064AF2D8A157A7F4CBF * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.rotation, target.MoveRotation, endValue, duration);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m35FA34381650BF0B9A9C29EE83B8043082D0A482 (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__0_m66684B2056E4B92E933AD98C2EAD6EDD9AF9C174 (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, const RuntimeMethod* method)
{
	{
		// Tween yTween = DOTween.To(() => target.position, x => target.position = x, new Vector2(0, jumpPower), duration / (numJumps * 2))
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__1_m99B395C93C8827215768541DBD48AAFCAA4014EC (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// Tween yTween = DOTween.To(() => target.position, x => target.position = x, new Vector2(0, jumpPower), duration / (numJumps * 2))
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		Rigidbody2D_set_position_m1604084713EB195D44B8B411D4BCAFA5941E3413(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__2_m9D2C7FBC51C4DBCCD91E8359A6FCD6D5BD633FB7 (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, const RuntimeMethod* method)
{
	{
		// .OnStart(() => startPosY = target.position.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		__this->set_startPosY_1(L_2);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__3_mEC32920DB355DC7E1AAF2249C33F3177670806E8 (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, const RuntimeMethod* method)
{
	{
		// s.Append(DOTween.To(() => target.position, x => target.position = x, new Vector2(endValue.x, 0), duration)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__4(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__4_m053F71A269824B99AA058986F6E772F950C453C7 (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// s.Append(DOTween.To(() => target.position, x => target.position = x, new Vector2(endValue.x, 0), duration)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		Rigidbody2D_set_position_m1604084713EB195D44B8B411D4BCAFA5941E3413(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__5_mC21E068A8BCD02C771D362D4397E7C1113CC2E3D (U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * G_B3_0 = NULL;
	U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	U3CU3Ec__DisplayClass4_0_tC3FB3913A0B5BA22F06134B01808D6D94A5F618E * G_B4_1 = NULL;
	{
		// if (!offsetYSet) {
		bool L_0 = __this->get_offsetYSet_2();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		// offsetYSet = true;
		__this->set_offsetYSet_2((bool)1);
		// offsetY = s.isRelative ? endValue.y : endValue.y - startPosY;
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_1 = __this->get_s_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline(L_1, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_endValue_5();
		float L_4 = L_3->get_y_1();
		float L_5 = __this->get_startPosY_1();
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_0031:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_endValue_5();
		float L_7 = L_6->get_y_1();
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_offsetY_3(G_B4_0);
	}

IL_0041:
	{
		// Vector3 pos = target.position;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_target_0();
		NullCheck(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// pos.y += DOVirtual.EasedValue(0, offsetY, yTween.ElapsedPercentage(), Ease.OutQuad);
		float* L_11 = (&V_0)->get_address_of_y_3();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = __this->get_offsetY_3();
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_15 = __this->get_yTween_6();
		float L_16;
		L_16 = TweenExtensions_ElapsedPercentage_mC12ED1EAF1BEBF089D80B420DC6D987DE9C7C618(L_15, (bool)1, /*hidden argument*/NULL);
		float L_17;
		L_17 = DOVirtual_EasedValue_m13B1BCEC7154DBD3C6B63DD66BED84E3ACCB3E92((0.0f), L_14, L_16, 6, /*hidden argument*/NULL);
		*((float*)L_12) = (float)((float)il2cpp_codegen_add((float)L_13, (float)L_17));
		// target.MovePosition(pos);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_18, L_20, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mD77E24E24423ADEC43F9983504BD6796D2671E99 (U3CU3Ec__DisplayClass0_0_t865A37B70235C08B0F32F1F40EAB16312D05FD50 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__0_m12BAC3674340BDF408F41A0E9BEEF6BB87C3F504 (U3CU3Ec__DisplayClass0_0_t865A37B70235C08B0F32F1F40EAB16312D05FD50 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__1_m89E34AE3BBC636BD2B38C1AB7300F1F20F25E616 (U3CU3Ec__DisplayClass0_0_t865A37B70235C08B0F32F1F40EAB16312D05FD50 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m40F18C57ED175BA68D1D65FFA97879AEAF2E3325 (U3CU3Ec__DisplayClass1_0_t0A5F164BAD8ACAD20D458366B497C9B9C1974AE4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__0_m8B9E647B54E5DA35EE71D65866372C8C90B7F452 (U3CU3Ec__DisplayClass1_0_t0A5F164BAD8ACAD20D458366B497C9B9C1974AE4 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__1_m935CE2E2B7CB25D7151DA0BF3B4420C8099E0A45 (U3CU3Ec__DisplayClass1_0_t0A5F164BAD8ACAD20D458366B497C9B9C1974AE4 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mB0AA92A12DE97E8954819AC2BAD916065D4BECDB (U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__0_m371A7E7E53DB5FC70A6534A7956B27A3A8B7EA03 (U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => to, x => {
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__1_m36515014C810F349D12C86DC636349E452DA6974 (U3CU3Ec__DisplayClass3_0_tE81EA512AF1E002F436D3758BC5CE9D93CED44E4 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___x0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_to_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// to = x;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___x0;
		__this->set_to_0(L_3);
		// target.color += diff;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_target_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = L_4;
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_5, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_5, L_8, /*hidden argument*/NULL);
		// }, endValue, duration)
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m14E6397A137D3CB8A7638F9254B4694553B4DC7C (U3CU3Ec__DisplayClass0_0_t7D1FCC95A881539756647760D7E3BCAD117D9C2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m6F0CD242FAEF332D726AD4CE2EB2691CCB3748B1 (U3CU3Ec__DisplayClass0_0_t7D1FCC95A881539756647760D7E3BCAD117D9C2F * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.alpha, x => target.alpha = x, endValue, duration);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::<DOFade>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_mDBDE14547A6DF70C0ADB82403282C26FBB4F6A27 (U3CU3Ec__DisplayClass0_0_t7D1FCC95A881539756647760D7E3BCAD117D9C2F * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.alpha, x => target.alpha = x, endValue, duration);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m11212BA4C7EB97E0EE079E78FA1C95C02D517C75 (U3CU3Ec__DisplayClass10_0_t8BFF1858EDF6EB2283AE20F2D8CC662A1FA5B379 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__0_m08737F267CCB60C0CA0244070DA3C50845FC8B1F (U3CU3Ec__DisplayClass10_0_t8BFF1858EDF6EB2283AE20F2D8CC662A1FA5B379 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.effectColor, x => target.effectColor = x, endValue, duration);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__1_mAFFD9D2D2F3FD2BE4E2423286098B9BCC1C0C193 (U3CU3Ec__DisplayClass10_0_t8BFF1858EDF6EB2283AE20F2D8CC662A1FA5B379 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.effectColor, x => target.effectColor = x, endValue, duration);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9B3BB08FF1DC2F3101E0D580891268445B7763CA (U3CU3Ec__DisplayClass11_0_t5C701670B3C5449F73D82915BD4DA267A8B8E8F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__0_mA57545026A9AE0CB3A20B6FFCDCF6F2F1CDA6AB0 (U3CU3Ec__DisplayClass11_0_t5C701670B3C5449F73D82915BD4DA267A8B8E8F5 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.effectColor, x => target.effectColor = x, endValue, duration);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__1_mCC70305FC1C1B93A838838519D023AC608D3E23E (U3CU3Ec__DisplayClass11_0_t5C701670B3C5449F73D82915BD4DA267A8B8E8F5 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.effectColor, x => target.effectColor = x, endValue, duration);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		Shadow_set_effectColor_mFB6601937B8DCBB52A6095435A380C4AE0A807DF(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m05F6F905C11A344C5681CE1CD406DE85940356E5 (U3CU3Ec__DisplayClass12_0_t9C18A438FEAA8C5C1A925F5F28D6DF30A8D5B269 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::<DOScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__0_mEE927D8596DDB335403416BF63FF4E7E27D49D51 (U3CU3Ec__DisplayClass12_0_t9C18A438FEAA8C5C1A925F5F28D6DF30A8D5B269 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.effectDistance, x => target.effectDistance = x, endValue, duration);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Shadow_get_effectDistance_mD0C417FD305D3F674FB111F38B41C9B94808E7C0_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::<DOScale>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__1_m65C60213296203590F596B6A3481E4B8621F96D5 (U3CU3Ec__DisplayClass12_0_t9C18A438FEAA8C5C1A925F5F28D6DF30A8D5B269 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.effectDistance, x => target.effectDistance = x, endValue, duration);
		Outline_t37C754965BCC82FDD6C6878357A1439376C61CC2 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		Shadow_set_effectDistance_m5C9FAC6D8D46E952FF29D00852E790E6A3BF2E09(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mC6D360265628BCFBFDD42CCAF1136983FDD186BE (U3CU3Ec__DisplayClass13_0_t27965A830C5CE83826CC357F50299FE28BE9CABB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::<DOAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__0_m693A41C7FCF87BDE6211DE0ADED05AA5C476D71F (U3CU3Ec__DisplayClass13_0_t27965A830C5CE83826CC357F50299FE28BE9CABB * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::<DOAnchorPos>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__1_m0F8F9CA39BC8894705C1EE9983E59D24A7BF218B (U3CU3Ec__DisplayClass13_0_t27965A830C5CE83826CC357F50299FE28BE9CABB * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m3BB3CA37E5912C211B954D7EE850C77F0B04BFF6 (U3CU3Ec__DisplayClass14_0_t532827BA234D3C2B9DA5E065866B8C8F605250F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::<DOAnchorPosX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__0_m02BA203D0A6C9D64BC8149C197099DA29370C872 (U3CU3Ec__DisplayClass14_0_t532827BA234D3C2B9DA5E065866B8C8F605250F4 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(endValue, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::<DOAnchorPosX>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__1_m47B6E3E511B7E234B49FDBD4D6BC32E5EC92B1E9 (U3CU3Ec__DisplayClass14_0_t532827BA234D3C2B9DA5E065866B8C8F605250F4 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(endValue, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m011D15F0644147EABAFA4ED415CD3F5E8782CCE8 (U3CU3Ec__DisplayClass15_0_t1E74F8DF7C76B80F85C66967590B72EF52627D1C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::<DOAnchorPosY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__0_mCBF0F2691FBC7AED64284B0FB4CCD75792AAB51C (U3CU3Ec__DisplayClass15_0_t1E74F8DF7C76B80F85C66967590B72EF52627D1C * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(0, endValue), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::<DOAnchorPosY>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__1_m0E6D417FD9062B34D8C0E8B58C4C688B39CD9603 (U3CU3Ec__DisplayClass15_0_t1E74F8DF7C76B80F85C66967590B72EF52627D1C * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(0, endValue), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mF4FDD3E32D1C9FDD48079A148410AAB0CF4855B2 (U3CU3Ec__DisplayClass16_0_t6FE99B74BA758AD9E3C5FA4B81F22E50E2878289 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::<DOAnchorPos3D>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__0_mFBE3FE1AC3F56C148108234A9A1285F87EEF50E8 (U3CU3Ec__DisplayClass16_0_t6FE99B74BA758AD9E3C5FA4B81F22E50E2878289 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::<DOAnchorPos3D>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__1_mFEF34D901D1E18E74D7E93297BDD75ABF146514C (U3CU3Ec__DisplayClass16_0_t6FE99B74BA758AD9E3C5FA4B81F22E50E2878289 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mEEC98B74C2A5EDE984A5A59F4289ADFADAB3F804 (U3CU3Ec__DisplayClass17_0_t161B9E0C9F3AF194B3F6E501D4E253148BFDFEB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::<DOAnchorPos3DX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__0_mC8D86325D798D952B390643A8BAE1D995368D36A (U3CU3Ec__DisplayClass17_0_t161B9E0C9F3AF194B3F6E501D4E253148BFDFEB6 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, new Vector3(endValue, 0, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::<DOAnchorPos3DX>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__1_mAB78FA2C6EEC74D6E259B2ABF94ECBD3CB62DB82 (U3CU3Ec__DisplayClass17_0_t161B9E0C9F3AF194B3F6E501D4E253148BFDFEB6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, new Vector3(endValue, 0, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mE272C380064D4945F3C7FDC2357A8B765BC52841 (U3CU3Ec__DisplayClass18_0_t28369CB684CE937EF263102FBF87D2E7FC952FD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::<DOAnchorPos3DY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__0_m8C53152ED72D09B8F2BE2DE14963561650D0C42B (U3CU3Ec__DisplayClass18_0_t28369CB684CE937EF263102FBF87D2E7FC952FD0 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, new Vector3(0, endValue, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::<DOAnchorPos3DY>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__1_m9E1FC98A6DF461320AC4B6F294F1A69AFD058E3E (U3CU3Ec__DisplayClass18_0_t28369CB684CE937EF263102FBF87D2E7FC952FD0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, new Vector3(0, endValue, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mF4A0F29D8F3315E7DD0BC8103DA0023E16C341CB (U3CU3Ec__DisplayClass19_0_t7047CE2AF01FC75FD677DF4C1C7E4B32EC2452A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::<DOAnchorPos3DZ>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__0_mD27E4DF91E21C64D13997EA12A7659B1E31AA77B (U3CU3Ec__DisplayClass19_0_t7047CE2AF01FC75FD677DF4C1C7E4B32EC2452A5 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, new Vector3(0, 0, endValue), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RectTransform_get_anchoredPosition3D_mA9E9CCB2E97E4DCE93CF7194856F831E48F678A2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::<DOAnchorPos3DZ>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__1_mD6F74CB34BAEA91A512586538770AB27FFB68A1D (U3CU3Ec__DisplayClass19_0_t7047CE2AF01FC75FD677DF4C1C7E4B32EC2452A5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, VectorOptions> t = DOTween.To(() => target.anchoredPosition3D, x => target.anchoredPosition3D = x, new Vector3(0, 0, endValue), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition3D_mD232BFB736C35B6F3367E1D63BBA6FAE098DA761(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mCB63EFBBE399EEB9892054E0FAB2AB42E2BBB886 (U3CU3Ec__DisplayClass1_0_t585165D7235045AD6EACEA96E3084E01A742C936 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__0_mE8D0790E2303D84F8D513854D9F004E5E3127A3C (U3CU3Ec__DisplayClass1_0_t585165D7235045AD6EACEA96E3084E01A742C936 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__1_m07CB6A64D93955BC07E8AE290B01F9F39195A5A9 (U3CU3Ec__DisplayClass1_0_t585165D7235045AD6EACEA96E3084E01A742C936 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mCE70C1CB9A605F65BE4D31D224111EE4C6FB7DE6 (U3CU3Ec__DisplayClass20_0_tB3B621D850CE15CA278C20DAAA2C3C0358206A21 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::<DOAnchorMax>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__0_mAB5724DF7472A7CED2070B75A1B0E12378D5E6DD (U3CU3Ec__DisplayClass20_0_tB3B621D850CE15CA278C20DAAA2C3C0358206A21 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchorMax, x => target.anchorMax = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::<DOAnchorMax>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__1_m7E357679D17273D809A39CDF435B5E64E46A64A0 (U3CU3Ec__DisplayClass20_0_tB3B621D850CE15CA278C20DAAA2C3C0358206A21 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchorMax, x => target.anchorMax = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m47D7A3B4DA7AE2FE2F83164406834CF9150E5308 (U3CU3Ec__DisplayClass21_0_t770F928128D9FC7ADA02EA054C711D60F30E16B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::<DOAnchorMin>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__0_m4804C6D34689DD21311DA86CC22008D3B0774391 (U3CU3Ec__DisplayClass21_0_t770F928128D9FC7ADA02EA054C711D60F30E16B9 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchorMin, x => target.anchorMin = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchorMin_m5CBB2E649A3D4234A7A5A16B1BBAADAC9C033319(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::<DOAnchorMin>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__1_m73EF1691143A0E7E0254A73F52FDC73BB5AAA3E6 (U3CU3Ec__DisplayClass21_0_t770F928128D9FC7ADA02EA054C711D60F30E16B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.anchorMin, x => target.anchorMin = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m0D4210D174301CE26FA7A519B4168E7D87F6D92A (U3CU3Ec__DisplayClass22_0_t97D2AA4FE9552148F7E37D2DFED676A57DFB1351 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::<DOPivot>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__0_mB3D6F3AADE069EED625038A53491AFEA1DAFD9DF (U3CU3Ec__DisplayClass22_0_t97D2AA4FE9552148F7E37D2DFED676A57DFB1351 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.pivot, x => target.pivot = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::<DOPivot>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__1_mDCA8630A9398A411ACB0950973AB99C0723CC074 (U3CU3Ec__DisplayClass22_0_t97D2AA4FE9552148F7E37D2DFED676A57DFB1351 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.pivot, x => target.pivot = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_mA47954A6646E43342880718EE9B5E66A0D18FDF2 (U3CU3Ec__DisplayClass23_0_t26F763CBFD1D4D4EDFFE9BD383DB924D3B6033E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::<DOPivotX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__0_mFC16CCA332D908526AC3DC2BD8B4456969000CF5 (U3CU3Ec__DisplayClass23_0_t26F763CBFD1D4D4EDFFE9BD383DB924D3B6033E7 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.pivot, x => target.pivot = x, new Vector2(endValue, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::<DOPivotX>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__1_m7E0DAFAB836AC4F133B995B50578D8911BA3113B (U3CU3Ec__DisplayClass23_0_t26F763CBFD1D4D4EDFFE9BD383DB924D3B6033E7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.pivot, x => target.pivot = x, new Vector2(endValue, 0), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m0524772292383368F9C9F6BDFF0A114D60A35F8F (U3CU3Ec__DisplayClass24_0_tF09BD80EEE9ECC7296C10982CEDF0DBFD274B895 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::<DOPivotY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__0_m959088FDF2C1CD6EF40EE35BA531719E60C5327D (U3CU3Ec__DisplayClass24_0_tF09BD80EEE9ECC7296C10982CEDF0DBFD274B895 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.pivot, x => target.pivot = x, new Vector2(0, endValue), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::<DOPivotY>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__1_mCECF34E3A27F03AA2DB5719CA1241927DC99BC5B (U3CU3Ec__DisplayClass24_0_tF09BD80EEE9ECC7296C10982CEDF0DBFD274B895 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.pivot, x => target.pivot = x, new Vector2(0, endValue), duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m1ABD5A4A91526CA156C55C23A54822DC898A34AF (U3CU3Ec__DisplayClass25_0_tA347965DD1CA3D351E3B581654CC8128EDFF3061 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::<DOSizeDelta>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__0_mF87E563BB15F601A91B0DA1012A1604A52FCBDA5 (U3CU3Ec__DisplayClass25_0_tA347965DD1CA3D351E3B581654CC8128EDFF3061 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.sizeDelta, x => target.sizeDelta = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::<DOSizeDelta>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__1_m26B3B99EDB1D47D81931CC6CABFED8406BF4E90E (U3CU3Ec__DisplayClass25_0_tA347965DD1CA3D351E3B581654CC8128EDFF3061 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.sizeDelta, x => target.sizeDelta = x, endValue, duration);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mC4836A2FD37334971703D95C49ED35BCAD56AFB8 (U3CU3Ec__DisplayClass26_0_t93DB5B4DF0357D11E4A951B037CFD527BF3B56C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::<DOPunchAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__0_m357B263CA209B3E6EBB7F95AC352AA8B28A5CFC5 (U3CU3Ec__DisplayClass26_0_t93DB5B4DF0357D11E4A951B037CFD527BF3B56C8 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.Punch(() => target.anchoredPosition, x => target.anchoredPosition = x, punch, duration, vibrato, elasticity)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::<DOPunchAnchorPos>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__1_mE7127F5C6AB73DBA7D40F67FD61BA4076E2B8D23 (U3CU3Ec__DisplayClass26_0_t93DB5B4DF0357D11E4A951B037CFD527BF3B56C8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// return DOTween.Punch(() => target.anchoredPosition, x => target.anchoredPosition = x, punch, duration, vibrato, elasticity)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m07ADC405B65035A17DC97097DED9B4C1D21EFB17 (U3CU3Ec__DisplayClass27_0_t4D4A1506D5AC9A010D11414FAD7E48C6A7FBA299 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::<DOShakeAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__0_m1AF2B166591EEA50BEE7FD3C2E9B7EFFC0D39F8E (U3CU3Ec__DisplayClass27_0_t4D4A1506D5AC9A010D11414FAD7E48C6A7FBA299 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.Shake(() => target.anchoredPosition, x => target.anchoredPosition = x, duration, strength, vibrato, randomness, true, fadeOut)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__1_mF7180DEAAB00C14DD6F3DB8B815D0C0B2DB64725 (U3CU3Ec__DisplayClass27_0_t4D4A1506D5AC9A010D11414FAD7E48C6A7FBA299 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// return DOTween.Shake(() => target.anchoredPosition, x => target.anchoredPosition = x, duration, strength, vibrato, randomness, true, fadeOut)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m4969157094B09547B26225881BD87025C928B506 (U3CU3Ec__DisplayClass28_0_tE68276C76E7215C53283D3ADC6A731F1DF29E8C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__0_mB4E05CBCDBD4732D154E1A64678339D3FC5FBCE9 (U3CU3Ec__DisplayClass28_0_tE68276C76E7215C53283D3ADC6A731F1DF29E8C8 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.Shake(() => target.anchoredPosition, x => target.anchoredPosition = x, duration, strength, vibrato, randomness, fadeOut)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__1_mBDA6378719836E14C155B4648BB47429C125590C (U3CU3Ec__DisplayClass28_0_tE68276C76E7215C53283D3ADC6A731F1DF29E8C8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// return DOTween.Shake(() => target.anchoredPosition, x => target.anchoredPosition = x, duration, strength, vibrato, randomness, fadeOut)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m00E6EAFA57923B235554FA8A236AD64992F363FE (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__0_mAE0CBA3D52D03EB2F2C37D85C5832B412F816591 (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, const RuntimeMethod* method)
{
	{
		// Tween yTween = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(0, jumpPower), duration / (numJumps * 2))
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__1_mB685B77262E778382FAF923C04FD328DC494426C (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// Tween yTween = DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(0, jumpPower), duration / (numJumps * 2))
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__2_mB23D92AF70DCD33F838372FF59B1F39DD3775824 (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, const RuntimeMethod* method)
{
	{
		// .OnStart(()=> startPosY = target.anchoredPosition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		__this->set_startPosY_1(L_2);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__3_mB86E86358B9C1671706EA489B6FC30C3874224E7 (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, const RuntimeMethod* method)
{
	{
		// s.Append(DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(endValue.x, 0), duration)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__4(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__4_m1E0D9286E08822DF086E86BA60F0EFF6B62A32C7 (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// s.Append(DOTween.To(() => target.anchoredPosition, x => target.anchoredPosition = x, new Vector2(endValue.x, 0), duration)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__5_m6E6A274B0B852663D3ED8CDD2B4646B9D618E535 (U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * G_B3_0 = NULL;
	U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	U3CU3Ec__DisplayClass29_0_t5555723CB03030A05216BCB8B27846D583B2D84D * G_B4_1 = NULL;
	{
		// if (!offsetYSet) {
		bool L_0 = __this->get_offsetYSet_2();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		// offsetYSet = true;
		__this->set_offsetYSet_2((bool)1);
		// offsetY = s.isRelative ? endValue.y : endValue.y - startPosY;
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_1 = __this->get_s_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline(L_1, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_endValue_5();
		float L_4 = L_3->get_y_1();
		float L_5 = __this->get_startPosY_1();
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_0031:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_endValue_5();
		float L_7 = L_6->get_y_1();
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_offsetY_3(G_B4_0);
	}

IL_0041:
	{
		// Vector2 pos = target.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_target_0();
		NullCheck(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// pos.y += DOVirtual.EasedValue(0, offsetY, s.ElapsedDirectionalPercentage(), Ease.OutQuad);
		float* L_10 = (&V_0)->get_address_of_y_1();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = __this->get_offsetY_3();
		Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * L_14 = __this->get_s_4();
		float L_15;
		L_15 = TweenExtensions_ElapsedDirectionalPercentage_m478ED527B4F86DCC0240987C317231168587F5DF(L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = DOVirtual_EasedValue_m13B1BCEC7154DBD3C6B63DD66BED84E3ACCB3E92((0.0f), L_13, L_15, 6, /*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)L_16));
		// target.anchoredPosition = pos;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_17 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_0;
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_17, L_18, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m61C588C0764BA908B02EBAB1C19076EBB2898A9E (U3CU3Ec__DisplayClass2_0_tD73E62A2224FE13C8F6B52FCE8BD1C5FD313B99F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__0_m85CC4106263DD670C5BF648B8A64C6BA84297B65 (U3CU3Ec__DisplayClass2_0_tD73E62A2224FE13C8F6B52FCE8BD1C5FD313B99F * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__1_m140BDA0B825925A5051A2565C055CCBBF005A680 (U3CU3Ec__DisplayClass2_0_tD73E62A2224FE13C8F6B52FCE8BD1C5FD313B99F * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mCC70550D8AD7B4F88C913940A644E81F11F5898A (U3CU3Ec__DisplayClass30_0_t94F73A3FFC30F6C2558392FF5F07AE2E096BF84F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__0_m92C7B1817960CE4D1D7333872D37C8AF131F68FE (U3CU3Ec__DisplayClass30_0_t94F73A3FFC30F6C2558392FF5F07AE2E096BF84F * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => new Vector2(target.horizontalNormalizedPosition, target.verticalNormalizedPosition),
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_horizontalNormalizedPosition_m2447569D682F6F02D64671B82B64FA9C80EE8FE2(L_0, /*hidden argument*/NULL);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_2 = __this->get_target_0();
		NullCheck(L_2);
		float L_3;
		L_3 = ScrollRect_get_verticalNormalizedPosition_mB5E338D332643DF0B7464F45CC9C04DD9868FBB4(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__1_mFA97248E3617865FEF6C3F36E633266FF044050F (U3CU3Ec__DisplayClass30_0_t94F73A3FFC30F6C2558392FF5F07AE2E096BF84F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// target.horizontalNormalizedPosition = x.x;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		ScrollRect_set_horizontalNormalizedPosition_m3552851D166277D4DEDFCB6B81BF6726666D3AF5(L_0, L_2, /*hidden argument*/NULL);
		// target.verticalNormalizedPosition = x.y;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_3 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___x0;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		ScrollRect_set_verticalNormalizedPosition_m18393A7B91359B013466A984325F233535A6941D(L_3, L_5, /*hidden argument*/NULL);
		// }, endValue, duration)
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m82279F879253DF896CCD126EC0B7E16B295D165A (U3CU3Ec__DisplayClass31_0_t805529EB975D0626EBC97ACAB3880EFC6AB317A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__0_mB33367FCE1348BA9F855A9D1366FA19F5DDA4AEB (U3CU3Ec__DisplayClass31_0_t805529EB975D0626EBC97ACAB3880EFC6AB317A3 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => target.horizontalNormalizedPosition, x => target.horizontalNormalizedPosition = x, endValue, duration)
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_horizontalNormalizedPosition_m2447569D682F6F02D64671B82B64FA9C80EE8FE2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__1_mEBA7CDAA06332B1E56991D8E2299E24B9348D627 (U3CU3Ec__DisplayClass31_0_t805529EB975D0626EBC97ACAB3880EFC6AB317A3 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => target.horizontalNormalizedPosition, x => target.horizontalNormalizedPosition = x, endValue, duration)
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		ScrollRect_set_horizontalNormalizedPosition_m3552851D166277D4DEDFCB6B81BF6726666D3AF5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mD93F08EDF6689C6BA223067191EE8C9E0FBE509C (U3CU3Ec__DisplayClass32_0_tA414D6A179D68B4F320ED1DB2C432127B75AB0E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__0_m83DD02084574CCFB9F26C19BDE6AF6DE2C6387FE (U3CU3Ec__DisplayClass32_0_tA414D6A179D68B4F320ED1DB2C432127B75AB0E9 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => target.verticalNormalizedPosition, x => target.verticalNormalizedPosition = x, endValue, duration)
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = ScrollRect_get_verticalNormalizedPosition_mB5E338D332643DF0B7464F45CC9C04DD9868FBB4(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__1_mAE94A6E7E27147AA530D056E286A00C8EAE56331 (U3CU3Ec__DisplayClass32_0_tA414D6A179D68B4F320ED1DB2C432127B75AB0E9 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => target.verticalNormalizedPosition, x => target.verticalNormalizedPosition = x, endValue, duration)
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		ScrollRect_set_verticalNormalizedPosition_m18393A7B91359B013466A984325F233535A6941D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mB387BC26BCA1B460D5B3B1CE767228FA244B7703 (U3CU3Ec__DisplayClass33_0_t5CB8EE7F07D06E29D59588955B144762AF73E4F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__0_mBB603DBBDA542D7F00142102A667BCB9682EC145 (U3CU3Ec__DisplayClass33_0_t5CB8EE7F07D06E29D59588955B144762AF73E4F6 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.value, x => target.value = x, endValue, duration);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__1_mA3DF76574D5E76992AF228A3C4AFFFC19D6BAE15 (U3CU3Ec__DisplayClass33_0_t5CB8EE7F07D06E29D59588955B144762AF73E4F6 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.value, x => target.value = x, endValue, duration);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mA88FD675FEF2971D3F8145822B844ECFFF59BF17 (U3CU3Ec__DisplayClass34_0_t60E5325D834E607C2110DB690899FC3C7A44D407 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__0_m5DC2ED4C56B0A1D8CFCB8A4E2D2078EA79E8B66F (U3CU3Ec__DisplayClass34_0_t60E5325D834E607C2110DB690899FC3C7A44D407 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__1_m9BA1BADA179249B9F0AD1142BE826798FA114E13 (U3CU3Ec__DisplayClass34_0_t60E5325D834E607C2110DB690899FC3C7A44D407 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m5533AE6A72AB74A97282032790D0DE81F0EAF811 (U3CU3Ec__DisplayClass35_0_t8938338C4A6E58BB25C48A1F318E0458FD3B8CC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass35_0_U3CDOFadeU3Eb__0_m8E531F7061E585AC849F3B6C9CF458C5C0C5A410 (U3CU3Ec__DisplayClass35_0_t8938338C4A6E58BB25C48A1F318E0458FD3B8CC4 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CDOFadeU3Eb__1_m018514D25780FBD3A4D3A83A9209FCA89FCB163E (U3CU3Ec__DisplayClass35_0_t8938338C4A6E58BB25C48A1F318E0458FD3B8CC4 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mE2912C6BF4318E28870DE7AA92E4B05C80D92EE0 (U3CU3Ec__DisplayClass36_0_tCE8E904A62CBD9F143B3D692CA532EFA7A6F777D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOText>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass36_0_U3CDOTextU3Eb__0_m576159CD95104376F24DEFFAC786AC5D91B2036A (U3CU3Ec__DisplayClass36_0_tCE8E904A62CBD9F143B3D692CA532EFA7A6F777D * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<string, string, StringOptions> t = DOTween.To(() => target.text, x => target.text = x, endValue, duration);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOText>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CDOTextU3Eb__1_m564BDB58BF1EE683A9DE9DB1691CDA8216CE34CA (U3CU3Ec__DisplayClass36_0_tCE8E904A62CBD9F143B3D692CA532EFA7A6F777D * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<string, string, StringOptions> t = DOTween.To(() => target.text, x => target.text = x, endValue, duration);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_target_0();
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m59CE3FBA46AF3F7C3597AD84DEC898DB9B84EE39 (U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass37_0_U3CDOBlendableColorU3Eb__0_m7D79A486598AC337B32C2930F8CE462DDF58D961 (U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => to, x => {
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3CDOBlendableColorU3Eb__1_m552CD0C3E6A65CF57519CFAD7B9636DD697E1D47 (U3CU3Ec__DisplayClass37_0_tFAFEF1E41FDD4BAE035F7732E85AA44BBFD9DFD1 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___x0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_to_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// to = x;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___x0;
		__this->set_to_0(L_3);
		// target.color += diff;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_4 = __this->get_target_1();
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_5 = L_4;
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_8);
		// }, endValue, duration)
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_mB3E91AEAFAE65DD5FC36DD530E74CE1F4FA24AEF (U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__0_mB976655AEC70D25B43AAAF577CC953C7EB03D2EE (U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => to, x => {
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__1_mF14436C4F4EEB5B7664C3444B969B694BC6E3E5E (U3CU3Ec__DisplayClass38_0_t25800BA4D30D443A7F92C326FA62E4A0351DD2CA * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___x0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_to_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// to = x;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___x0;
		__this->set_to_0(L_3);
		// target.color += diff;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_target_1();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4;
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_8);
		// }, endValue, duration)
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_m1DB7B55A6B3E4B184E35968EACBF9E214E0CED7D (U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__0_mE93AC95325F69D83EE746421FA5992DC25009961 (U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10 * __this, const RuntimeMethod* method)
{
	{
		// return DOTween.To(() => to, x => {
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__1_m45DD6E7ED579816AC18DF6B88901D9F11DB1B36F (U3CU3Ec__DisplayClass39_0_t51E4686289D218AD17F28EABBF58A0628BFD6B10 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color diff = x - to;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___x0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_to_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_op_Subtraction_m1D412109F3F9264B0A4F1106D2FEB8A2746B3A0F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// to = x;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___x0;
		__this->set_to_0(L_3);
		// target.color += diff;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_target_1();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4;
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_op_Addition_m791A7C77B17D4A49301A7D275E8E4D8B117415A8(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_8);
		// }, endValue, duration)
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m09228DABE56F6866E09591FE27C255A39A71E48D (U3CU3Ec__DisplayClass3_0_t9A0201E5801BCA86E98A5567791D120983EAD387 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__0_mA7BF7CEB8AA94694104E8D048F5045D122A5D980 (U3CU3Ec__DisplayClass3_0_t9A0201E5801BCA86E98A5567791D120983EAD387 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__1_mBC7108789E76320E9507A9087273C7D89227F0F3 (U3CU3Ec__DisplayClass3_0_t9A0201E5801BCA86E98A5567791D120983EAD387 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.To(() => target.color, x => target.color = x, endValue, duration);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5CD451B862F3CC71D8D25BC3A69725FCDD6144C4 (U3CU3Ec__DisplayClass4_0_t9CD30C09F13A8901FBD37CEEE628023A3AC88587 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__0_m507CD55516001BB4A76D7E58CB159B5394D6413C (U3CU3Ec__DisplayClass4_0_t9CD30C09F13A8901FBD37CEEE628023A3AC88587 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__1_mE65F1E4D380EC305AF0AE93E0315B0B23CA36310 (U3CU3Ec__DisplayClass4_0_t9CD30C09F13A8901FBD37CEEE628023A3AC88587 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Color, Color, ColorOptions> t = DOTween.ToAlpha(() => target.color, x => target.color = x, endValue, duration);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_target_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___x0;
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m879B3843E0C43157D8044AD52E2F865EE50FD041 (U3CU3Ec__DisplayClass5_0_tB80886C18986402D46C539623ED89C069D383A01 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::<DOFillAmount>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__0_mAFE3629BC44AE61C84399809F742CEF0235004E1 (U3CU3Ec__DisplayClass5_0_tB80886C18986402D46C539623ED89C069D383A01 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.fillAmount, x => target.fillAmount = x, endValue, duration);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::<DOFillAmount>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__1_m9EB6C21BCE8D1A08FF84815C05A6664637C510CE (U3CU3Ec__DisplayClass5_0_tB80886C18986402D46C539623ED89C069D383A01 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<float, float, FloatOptions> t = DOTween.To(() => target.fillAmount, x => target.fillAmount = x, endValue, duration);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m47B2E10FFFD9FCACC88586DEF6A4E675DC9EC406 (U3CU3Ec__DisplayClass7_0_t3101E53746ED12113974445EFE5F8ED7275D9845 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::<DOFlexibleSize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__0_m7A7EA5F66922413743B8C1AB4234645A32098EA8 (U3CU3Ec__DisplayClass7_0_t3101E53746ED12113974445EFE5F8ED7275D9845 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => new Vector2(target.flexibleWidth, target.flexibleHeight), x => {
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(39 /* System.Single UnityEngine.UI.LayoutElement::get_flexibleWidth() */, L_0);
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_2 = __this->get_target_0();
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(41 /* System.Single UnityEngine.UI.LayoutElement::get_flexibleHeight() */, L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::<DOFlexibleSize>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__1_m0E76B7C6F893FD2F7F24E302CB55882765DD1153 (U3CU3Ec__DisplayClass7_0_t3101E53746ED12113974445EFE5F8ED7275D9845 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// target.flexibleWidth = x.x;
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(40 /* System.Void UnityEngine.UI.LayoutElement::set_flexibleWidth(System.Single) */, L_0, L_2);
		// target.flexibleHeight = x.y;
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_3 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___x0;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(42 /* System.Void UnityEngine.UI.LayoutElement::set_flexibleHeight(System.Single) */, L_3, L_5);
		// }, endValue, duration);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m0953E12771619B6F14FC14CA853AF5CA110A0553 (U3CU3Ec__DisplayClass8_0_tE55619A7933D4E2E6A3AF6BCBAB6B4C17A865A55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::<DOMinSize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__0_m9BD9F63B884498F9AA02C307EB1CA15FA29BD094 (U3CU3Ec__DisplayClass8_0_tE55619A7933D4E2E6A3AF6BCBAB6B4C17A865A55 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => new Vector2(target.minWidth, target.minHeight), x => {
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(31 /* System.Single UnityEngine.UI.LayoutElement::get_minWidth() */, L_0);
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_2 = __this->get_target_0();
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(33 /* System.Single UnityEngine.UI.LayoutElement::get_minHeight() */, L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::<DOMinSize>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__1_m546E530F9DE46CA1359450860E62DCC3BD3D72B3 (U3CU3Ec__DisplayClass8_0_tE55619A7933D4E2E6A3AF6BCBAB6B4C17A865A55 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// target.minWidth = x.x;
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(32 /* System.Void UnityEngine.UI.LayoutElement::set_minWidth(System.Single) */, L_0, L_2);
		// target.minHeight = x.y;
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_3 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___x0;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(34 /* System.Void UnityEngine.UI.LayoutElement::set_minHeight(System.Single) */, L_3, L_5);
		// }, endValue, duration);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m3EB28823EF4D152A06983986C8120490212A8DF7 (U3CU3Ec__DisplayClass9_0_t7A8C490B052492D0F6162243E706C61D6E7EA629 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::<DOPreferredSize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__0_mB87EAB728455B68D07773FA10DCA169804482CBD (U3CU3Ec__DisplayClass9_0_t7A8C490B052492D0F6162243E706C61D6E7EA629 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => new Vector2(target.preferredWidth, target.preferredHeight), x => {
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(35 /* System.Single UnityEngine.UI.LayoutElement::get_preferredWidth() */, L_0);
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_2 = __this->get_target_0();
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(37 /* System.Single UnityEngine.UI.LayoutElement::get_preferredHeight() */, L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::<DOPreferredSize>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__1_m24617F67F48227A961C0543BF7925F8D2F2A90B6 (U3CU3Ec__DisplayClass9_0_t7A8C490B052492D0F6162243E706C61D6E7EA629 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// target.preferredWidth = x.x;
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_0 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___x0;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(36 /* System.Void UnityEngine.UI.LayoutElement::set_preferredWidth(System.Single) */, L_0, L_2);
		// target.preferredHeight = x.y;
		LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * L_3 = __this->get_target_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___x0;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(38 /* System.Void UnityEngine.UI.LayoutElement::set_preferredHeight(System.Single) */, L_3, L_5);
		// }, endValue, duration);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/Utils::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Utils_SwitchToRectTransform_m260A15449F1C7A8F4356730DF4A59A386C45D200 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___from0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector2 fromPivotDerivedOffset = new Vector2(from.rect.width * 0.5f + from.rect.xMin, from.rect.height * 0.5f + from.rect.yMin);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ___from0;
		NullCheck(L_0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		L_1 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_0, /*hidden argument*/NULL);
		V_4 = L_1;
		float L_2;
		L_2 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = ___from0;
		NullCheck(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		L_4 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5;
		L_5 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = ___from0;
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		float L_8;
		L_8 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = ___from0;
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		L_10 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11;
		L_11 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)(0.5f))), (float)L_5)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(0.5f))), (float)L_11)), /*hidden argument*/NULL);
		// Vector2 screenP = RectTransformUtility.WorldToScreenPoint(null, from.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = ___from0;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = RectTransformUtility_WorldToScreenPoint_m92E801861EE14D73219C34A6175847C4A46105E1((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// screenP += fromPivotDerivedOffset;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(to, screenP, null, out localPoint);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = ___to1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_2;
		bool L_20;
		L_20 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_18, L_19, (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		// Vector2 pivotDerivedOffset = new Vector2(to.rect.width * 0.5f + to.rect.xMin, to.rect.height * 0.5f + to.rect.yMin);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21 = ___to1;
		NullCheck(L_21);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22;
		L_22 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23;
		L_23 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_24 = ___to1;
		NullCheck(L_24);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_25;
		L_25 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		float L_26;
		L_26 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_27 = ___to1;
		NullCheck(L_27);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		L_28 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30 = ___to1;
		NullCheck(L_30);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31;
		L_31 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		float L_32;
		L_32 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_4), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_23, (float)(0.5f))), (float)L_26)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_29, (float)(0.5f))), (float)L_32)), /*hidden argument*/NULL);
		// return to.anchoredPosition + localPoint - pivotDerivedOffset;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = ___to1;
		NullCheck(L_33);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_34, L_35, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_36, L_37, /*hidden argument*/NULL);
		return L_38;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m0EACBC706CDB7B8BCE4C21D3AD250FE25CD825CF (U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m6D616025F8610086B30B83BC8ED13213DB2AC7CC (U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Material_GetTextureOffset_m53C54C035DFCB16181F0226D9C41C9EAB2301617(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4171C9EB0226E0E06E574EFD507A8D352EC5B557 (U3CU3Ec__DisplayClass8_0_tE5BFC2D888ECF087A82B3D73CECEAC3525EE4581 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetTextureOffset_mDEE0C861BD2FC8D38924087590BE8FD123195A78(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m6CC810F5A3B1779C2569B21779361FD5F94C2C9C (U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m747CC91BE7EDF7D2644045B72BF689A2552B855F (U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Material_GetTextureScale_mE494CDECFF6B59EDB43D6000608A91A4B7289A9C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m0D5FC9115C0FFE113CA2277BA5A17562550B19F6 (U3CU3Ec__DisplayClass9_0_tACB95D3310A47E0C0B9E503E6931B7F7BAC03551 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetTextureScale_m9F02CF20C15805224119E8A1AE57B1B064CB72C1(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUtils/Physics::SetOrientationOnPath(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SetOrientationOnPath_mCC376173A621DA244564EDF8A6347AB2A0F47816 (PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  ___options0, Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * ___t1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newRot2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (options.isRigidbody) ((Rigidbody)t.target).rotation = newRot;
		PathOptions_tA9BC8C9E92253DB6E8C05DA62E3745EDFC06E32A  L_0 = ___options0;
		bool L_1 = L_0.get_isRigidbody_12();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (options.isRigidbody) ((Rigidbody)t.target).rotation = newRot;
		Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * L_2 = ___t1;
		NullCheck(L_2);
		RuntimeObject * L_3 = L_2->get_target_9();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___newRot2;
		NullCheck(((Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)CastclassClass((RuntimeObject*)L_3, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var)));
		Rigidbody_set_rotation_m3024C151FEC9BB75735DE9B4BA64F16AA779C5D6(((Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)CastclassClass((RuntimeObject*)L_3, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		// else trans.rotation = newRot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___trans3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ___newRot2;
		NullCheck(L_5);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody2D(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_HasRigidbody2D_m86FAA0450979B8AFE6A9EF5E27837387C57765C1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return target.GetComponent<Rigidbody2D>() != null;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___target0;
		NullCheck(L_0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_HasRigidbody_m3082D72A658CCDDF6BB1F3D4A3EFBD6397D6E862 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return target.GetComponent<Rigidbody>() != null;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = ___target0;
		NullCheck(L_0);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_0, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModuleUtils/Physics::CreateDOTweenPathTween(UnityEngine.MonoBehaviour,System.Boolean,System.Boolean,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * Physics_CreateDOTweenPathTween_m94D41B65E37500E5ACCF6B6F3B5D53FB031C4245 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___target0, bool ___tweenRigidbody1, bool ___isLocal2, Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * ___path3, float ___duration4, int32_t ___pathMode5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * V_0 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_1 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B3_0 = NULL;
	TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * G_B8_0 = NULL;
	TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * G_B12_0 = NULL;
	{
		// Rigidbody rBody = tweenRigidbody ? target.GetComponent<Rigidbody>() : null;
		bool L_0 = ___tweenRigidbody1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_1 = ___target0;
		NullCheck(L_1);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2;
		L_2 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_1, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_1 = G_B3_0;
		// if (tweenRigidbody && rBody != null) {
		bool L_3 = ___tweenRigidbody1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// t = isLocal
		//     ? rBody.DOLocalPath(path, duration, pathMode)
		//     : rBody.DOPath(path, duration, pathMode);
		bool L_6 = ___isLocal2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = V_1;
		Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * L_8 = ___path3;
		float L_9 = ___duration4;
		int32_t L_10 = ___pathMode5;
		TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * L_11;
		L_11 = DOTweenModulePhysics_DOPath_m3C49FFEB71D494F474F7223248D7105E90CF5BE7(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		goto IL_0034;
	}

IL_0029:
	{
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_12 = V_1;
		Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * L_13 = ___path3;
		float L_14 = ___duration4;
		int32_t L_15 = ___pathMode5;
		TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * L_16;
		L_16 = DOTweenModulePhysics_DOLocalPath_m6F939DAF66D56DA9B52DA62546C70F3862E14193(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		G_B8_0 = L_16;
	}

IL_0034:
	{
		V_0 = G_B8_0;
		// } else {
		goto IL_005d;
	}

IL_0037:
	{
		// t = isLocal
		//     ? target.transform.DOLocalPath(path, duration, pathMode)
		//     : target.transform.DOPath(path, duration, pathMode);
		bool L_17 = ___isLocal2;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_18 = ___target0;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * L_20 = ___path3;
		float L_21 = ___duration4;
		int32_t L_22 = ___pathMode5;
		TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * L_23;
		L_23 = ShortcutExtensions_DOPath_m7AB84619455A541B79164E1D270A5AB511533B24(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		G_B12_0 = L_23;
		goto IL_005c;
	}

IL_004c:
	{
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_24 = ___target0;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Path_t55184BB3F1BD04C08B77EB5322B0FC2F28B05DE5 * L_26 = ___path3;
		float L_27 = ___duration4;
		int32_t L_28 = ___pathMode5;
		TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * L_29;
		L_29 = ShortcutExtensions_DOLocalPath_m28185CD9787640FBB679A0B46F144E1BB0DB43F8(L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		G_B12_0 = L_29;
	}

IL_005c:
	{
		V_0 = G_B12_0;
	}

IL_005d:
	{
		// return t;
		TweenerCore_3_t3502A54CD60E18ECC9C6BED38B76E85B1EF67C9A * L_30 = V_0;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD8C0F0DD96EB0C83327B024252FCD2D5A091D00E (U3CU3Ec__DisplayClass1_0_t53BDF2E37BFB95287099C6E583DADCA05E3069F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m6FEF3FD704AA755B58F019D70443F2399B72DE0A (U3CU3Ec__DisplayClass1_0_t53BDF2E37BFB95287099C6E583DADCA05E3069F8 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_mC68C87CAC06CF9AEE9F8595CD1228EB925EED82E (U3CU3Ec__DisplayClass1_0_t53BDF2E37BFB95287099C6E583DADCA05E3069F8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___x0, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF13A3D77638A47666CAE1C5284533EE900BC40F1 (U3CU3Ec__DisplayClass2_0_tC860FA7151AA6FCFDF839398CFEDFEBF0713CB61 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mC5AB354BE95B6630AE625385FBFDACCE66F99ED6 (U3CU3Ec__DisplayClass2_0_tC860FA7151AA6FCFDF839398CFEDFEBF0713CB61 * __this, const RuntimeMethod* method)
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_position_m5F429382F610E324F39F33E8498A29D0828AD8E8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlotFruitGame/<IEPlaySymbolSound>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEPlaySymbolSoundU3Ed__26__ctor_mE798980C2E7F3BEFFAA335F33E66FCBBC39E36A1 (U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SlotFruitGame/<IEPlaySymbolSound>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEPlaySymbolSoundU3Ed__26_System_IDisposable_Dispose_m3048C8B51F45A7F9F55BF4F26544EA9C7DAD908F (U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SlotFruitGame/<IEPlaySymbolSound>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIEPlaySymbolSoundU3Ed__26_MoveNext_m7938A8C321ABDD3544655050A60CD52F3873BC3B (U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m011C75C41130DB869B4921B7F4E5F62AE63FA850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m53E4DC3958B90775481A29D35FFFEBFA32E0134B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m64DE9FC4A5963A41457B9E8E3285F5E017EE47AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (symbolTypeWins.Count > 0)
		List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * L_4 = __this->get_symbolTypeWins_2();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m53E4DC3958B90775481A29D35FFFEBFA32E0134B_inline(L_4, /*hidden argument*/List_1_get_Count_m53E4DC3958B90775481A29D35FFFEBFA32E0134B_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// SoundUtility.Instance.Play(GameDefine.GetSymbolSound(symbolTypeWins[0]));
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_6;
		L_6 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * L_7 = __this->get_symbolTypeWins_2();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Item_m64DE9FC4A5963A41457B9E8E3285F5E017EE47AF_inline(L_7, 0, /*hidden argument*/List_1_get_Item_m64DE9FC4A5963A41457B9E8E3285F5E017EE47AF_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = GameDefine_GetSymbolSound_m475EBE5643F6B11A1B621A7E8E56E09172CEBEF3(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10;
		L_10 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_6, L_9, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(GameDefine.TIME_SYMBOL_SOUND);
		float L_11 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_TIME_SYMBOL_SOUND_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_12 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0061:
	{
		__this->set_U3CU3E1__state_0((-1));
		// symbolTypeWins.RemoveAt(0);
		List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * L_13 = __this->get_symbolTypeWins_2();
		NullCheck(L_13);
		List_1_RemoveAt_m011C75C41130DB869B4921B7F4E5F62AE63FA850(L_13, 0, /*hidden argument*/List_1_RemoveAt_m011C75C41130DB869B4921B7F4E5F62AE63FA850_RuntimeMethod_var);
		// StartCoroutine(IEPlaySymbolSound(symbolTypeWins));
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_14 = V_1;
		SlotFruitGame_tAEAF6D45B8556706F32CD9A66560DE7D107E6604 * L_15 = V_1;
		List_1_t8B00894F51893AA766AC7718F2ADC62D6F127B40 * L_16 = __this->get_symbolTypeWins_2();
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = SlotFruitGame_IEPlaySymbolSound_m9660FE49FF6CFC909A61D3D7F708E08CE4FFFC31(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_14, L_17, /*hidden argument*/NULL);
		// }
		goto IL_00ad;
	}

IL_0089:
	{
		// int idSoundWin = Random.Range(0, 5);
		int32_t L_19;
		L_19 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_2 = L_19;
		// SoundUtility.Instance.Play(GameDefine.SOUND_WIN + idSoundWin);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t6FA62D08E599194B0C26587B234ACB37D51AF181_il2cpp_TypeInfo_var);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_20;
		L_20 = MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA(/*hidden argument*/MonoSingleton_1_get_Instance_mCE15CB1C6F4EAE2E9D88664DA8688F47517976CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var);
		String_t* L_21 = ((GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_StaticFields*)il2cpp_codegen_static_fields_for(GameDefine_t63EE72B6134588897374C8358680B5CBCEE9B143_il2cpp_TypeInfo_var))->get_SOUND_WIN_20();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_24;
		L_24 = SoundUtility_Play_mCD41C44A9A0E78552532EF1F22EDCB239002DB23(L_20, L_23, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		// }
		return (bool)0;
	}
}
// System.Object SlotFruitGame/<IEPlaySymbolSound>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEPlaySymbolSoundU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2C99AA0AB1EA278AE03CBB68BDA078A98AF5B94F (U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SlotFruitGame/<IEPlaySymbolSound>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIEPlaySymbolSoundU3Ed__26_System_Collections_IEnumerator_Reset_m19400D8C315B107F5BA11DAAE5712296EEB812B2 (U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIEPlaySymbolSoundU3Ed__26_System_Collections_IEnumerator_Reset_m19400D8C315B107F5BA11DAAE5712296EEB812B2_RuntimeMethod_var)));
	}
}
// System.Object SlotFruitGame/<IEPlaySymbolSound>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIEPlaySymbolSoundU3Ed__26_System_Collections_IEnumerator_get_Current_mFF39DF02A44F32B238B9703BA626B9FD14966F1C (U3CIEPlaySymbolSoundU3Ed__26_t8DAD35F5D8A123227D065A63EB6BEF5C1C4E4AC7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundUtility/<StopLoopSound>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopLoopSoundU3Ed__14__ctor_m173C59769B76C182F547AEC44E149418B38C304B (U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SoundUtility/<StopLoopSound>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopLoopSoundU3Ed__14_System_IDisposable_Dispose_m2B8A6001119EB2C3382DA1BEB1148D198F22305A (U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SoundUtility/<StopLoopSound>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopLoopSoundU3Ed__14_MoveNext_mE81ADFBD0435F9C92C0C421A199E1801CA14222E (U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9986C33D4824878A3C7A1CA2AED6F53395A85218_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF0EA02507554A7566445A1F7B71F93105178094B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(time);
		float L_4 = __this->get_time_2();
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_5 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// source.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_source_3();
		NullCheck(L_6);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_6, /*hidden argument*/NULL);
		// if(this.soundLoopEffects.ContainsKey(key))
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * L_8 = L_7->get_soundLoopEffects_9();
		String_t* L_9 = __this->get_key_5();
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_ContainsKey_m9986C33D4824878A3C7A1CA2AED6F53395A85218(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m9986C33D4824878A3C7A1CA2AED6F53395A85218_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// this.soundLoopEffects.Remove(key);
		SoundUtility_tCBAB87DAF410504F28DF0E66415737B4696D0EA4 * L_11 = V_1;
		NullCheck(L_11);
		Dictionary_2_t8A28ECDC1D121F4E3375CF3690C8279016456074 * L_12 = L_11->get_soundLoopEffects_9();
		String_t* L_13 = __this->get_key_5();
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_Remove_mF0EA02507554A7566445A1F7B71F93105178094B(L_12, L_13, /*hidden argument*/Dictionary_2_Remove_mF0EA02507554A7566445A1F7B71F93105178094B_RuntimeMethod_var);
	}

IL_006f:
	{
		// }
		return (bool)0;
	}
}
// System.Object SoundUtility/<StopLoopSound>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopLoopSoundU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m200D640AE941B20B39F1642DDAC96AC6E0DB9457 (U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SoundUtility/<StopLoopSound>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopLoopSoundU3Ed__14_System_Collections_IEnumerator_Reset_mE4C4EB604B5A06389E5CD8714486647E92D5404A (U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopLoopSoundU3Ed__14_System_Collections_IEnumerator_Reset_mE4C4EB604B5A06389E5CD8714486647E92D5404A_RuntimeMethod_var)));
	}
}
// System.Object SoundUtility/<StopLoopSound>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStopLoopSoundU3Ed__14_System_Collections_IEnumerator_get_Current_mEC1CC51A08FE92F9D73B3B6D0C1ECDC1AE6C8967 (U3CStopLoopSoundU3Ed__14_tAAA47B76B40CC6F388C2CADB494361D03C228553 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserProfile/UpdateValue::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateValue__ctor_mA29B513B5339A0767E9DE23E43705956B88E8E2D (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UserProfile/UpdateValue::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateValue_Invoke_mB9D13F506B9D19555CD4188D496BDEB5F9F05BC0 (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UserProfile/UpdateValue::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateValue_BeginInvoke_m17E277D274023EF2E5953386DEE2BE13B9EDA946 (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * __this, RuntimeObject * ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UserProfile/UpdateValue::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateValue_EndInvoke_mC9B9F05063028C66FAB20CAF1DDCD7DA68D66741 (UpdateValue_t7333886BFFCFA1D7B05B34CF496879157A7F0A0D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_m3E5C04BBDC64A92E4488ECF48BFF68B9E62FF21C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CactiveU3Ek__BackingField_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mD6398F29BFD354FE9D8C9A6870EF82FD6E879C0C_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CpositionU3Ek__BackingField_46();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_mFA82C31BFA8C147EEE916A0C92FD3A705F717F20_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CplayedOnceU3Ek__BackingField_45();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_m2B8146895940DCFAA932D083B4DD54AE5620C7D3_inline (Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisRelativeU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Shadow_get_effectColor_m00C1776542129598C244BB469E7128D60F6BCAC2_inline (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EffectColor; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_EffectColor_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Shadow_get_effectDistance_mD0C417FD305D3F674FB111F38B41C9B94808E7C0_inline (Shadow_t96D9C6FC7BB4D9CBEB5788F2333125365DE12F8E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EffectDistance; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_EffectDistance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->get_m_FillAmount_43();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_2 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
