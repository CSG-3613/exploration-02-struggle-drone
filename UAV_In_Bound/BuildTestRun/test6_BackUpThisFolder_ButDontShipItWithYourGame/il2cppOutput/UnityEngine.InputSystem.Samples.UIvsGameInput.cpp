#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// UnityEngine.InputSystem.Gamepad[]
struct GamepadU5BU5D_t907383551E67ACF51B8B4ECCC0E399DAE2AB3762;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.InputSystem.Joystick[]
struct JoystickU5BU5D_tF04167FBAEECAD6E2C47C144DD866A5B5790B8FD;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_t339733075857CFF82B4E43BFB310F2350225836D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.InputSystem.Controls.DeltaControl
struct DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B;
// UnityEngine.InputSystem.Controls.DpadControl
struct DpadControl_t517E87BF3EB22369B71EA1941648079B468A45AB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// UnityEngine.InputSystem.Joystick
struct Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.InputSystem.Controls.StickControl
struct StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.InputSystem.Controls.TouchControl
struct TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079;
// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIvsGameInputHandler
struct UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral004AA7882B8B26188FA6FACCA62F0A774C324AA4;
IL2CPP_EXTERN_C String_t* _stringLiteral02AD5CE0CABDD2082D33DA27473FAEA50183DBFE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C02F1381DA79696626425C4EDA7AF4782DF9842;
IL2CPP_EXTERN_C String_t* _stringLiteral674B82885226ECAE739C68D37BB45083C7DD7A9F;
IL2CPP_EXTERN_C String_t* _stringLiteral7879E74444074783F32AEE70E26DF0A6DD5CC7ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9C058AE5BB263A976CE50BBD9A72AA1563AEB905;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE7571DEF8524A9120ACCE2C57004A9AD3C20A539;
IL2CPP_EXTERN_C String_t* _stringLiteralF67ADE23DF0182464942A3FF34FF21D2CDA8A3D2;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInput_GetDevice_TisGamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_m33B5C7E1468052E7BB3A4F32B3286807661F8489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInput_GetDevice_TisJoystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C_mF4A031894D6F4C7D10377D312306399BC8902C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInput_GetDevice_TisMouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_mF41E806AA23A7EEC9F207177218197BEEB50D46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInput_GetDevice_TisTouchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_m7168208273BAC46AC7BD4DB5C7DB7D70196378A8_RuntimeMethod_var;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAC237D1697D4227A85CD088247B27FF1CD6099E4 
{
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>
struct ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	TouchControlU5BU5D_t339733075857CFF82B4E43BFB310F2350225836D* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.InputSystem.Haptics.DualMotorRumble
struct DualMotorRumble_t7FF13D9599E8A574E5041726BD84CB8897E42701 
{
	// System.Single UnityEngine.InputSystem.Haptics.DualMotorRumble::<lowFrequencyMotorSpeed>k__BackingField
	float ___U3ClowFrequencyMotorSpeedU3Ek__BackingField_0;
	// System.Single UnityEngine.InputSystem.Haptics.DualMotorRumble::<highFrequencyMotorSpeed>k__BackingField
	float ___U3ChighFrequencyMotorSpeedU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_9;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionAsset::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_10;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_11;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonWest>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonWestU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonNorth>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonNorthU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonSouth>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonSouthU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonEast>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonEastU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftStickButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftStickButtonU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightStickButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightStickButtonU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<startButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CstartButtonU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<selectButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CselectButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.DpadControl UnityEngine.InputSystem.Gamepad::<dpad>k__BackingField
	DpadControl_t517E87BF3EB22369B71EA1941648079B468A45AB* ___U3CdpadU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftShoulder>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftShoulderU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightShoulder>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightShoulderU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::<leftStick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CleftStickU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::<rightStick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CrightStickU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftTrigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftTriggerU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightTrigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightTriggerU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Haptics.DualMotorRumble UnityEngine.InputSystem.Gamepad::m_Rumble
	DualMotorRumble_t7FF13D9599E8A574E5041726BD84CB8897E42701 ___m_Rumble_55;
};

// UnityEngine.InputSystem.Joystick
struct Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Joystick::<trigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtriggerU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Joystick::<stick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CstickU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Joystick::<twist>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CtwistU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Joystick::<hatswitch>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3ChatswitchU3Ek__BackingField_42;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CdeltaU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_43;
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
};

// UnityEngine.InputSystem.Controls.DeltaControl
struct DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B  : public Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.DeltaControl::<up>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CupU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.DeltaControl::<down>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CdownU3Ek__BackingField_25;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.DeltaControl::<left>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CleftU3Ek__BackingField_26;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.DeltaControl::<right>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CrightU3Ek__BackingField_27;
};

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Mouse::<scroll>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CscrollU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<leftButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<middleButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddleButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<rightButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightButtonU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<backButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbackButtonU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<forwardButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CforwardButtonU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Mouse::<clickCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CclickCountU3Ek__BackingField_51;
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.TouchControl UnityEngine.InputSystem.Touchscreen::<primaryTouch>k__BackingField
	TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* ___U3CprimaryTouchU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> UnityEngine.InputSystem.Touchscreen::<touches>k__BackingField
	ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E ___U3CtouchesU3Ek__BackingField_46;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIvsGameInputHandler
struct UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text UIvsGameInputHandler::statusBarText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___statusBarText_4;
	// UnityEngine.GameObject UIvsGameInputHandler::inGameUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inGameUI_5;
	// UnityEngine.GameObject UIvsGameInputHandler::mainMenuUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainMenuUI_6;
	// UnityEngine.GameObject UIvsGameInputHandler::menuButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuButton_7;
	// UnityEngine.GameObject UIvsGameInputHandler::firstButtonInMainMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___firstButtonInMainMenu_8;
	// UnityEngine.GameObject UIvsGameInputHandler::firstNavigationSelection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___firstNavigationSelection_9;
	// UnityEngine.InputSystem.PlayerInput UIvsGameInputHandler::playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___playerInput_10;
	// UnityEngine.GameObject UIvsGameInputHandler::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_11;
	// System.Single UIvsGameInputHandler::m_MouseLookSensitivity
	float ___m_MouseLookSensitivity_12;
	// System.Single UIvsGameInputHandler::m_GamepadLookSpeed
	float ___m_GamepadLookSpeed_13;
	// System.Boolean UIvsGameInputHandler::m_OpenMenuActionTriggered
	bool ___m_OpenMenuActionTriggered_14;
	// System.Boolean UIvsGameInputHandler::m_ResetCameraActionTriggered
	bool ___m_ResetCameraActionTriggered_15;
	// System.Boolean UIvsGameInputHandler::m_FireActionTriggered
	bool ___m_FireActionTriggered_16;
	// System.Boolean UIvsGameInputHandler::m_UIEngaged
	bool ___m_UIEngaged_17;
	// UnityEngine.Vector2 UIvsGameInputHandler::m_Rotation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Rotation_18;
	// UnityEngine.InputSystem.InputAction UIvsGameInputHandler::m_LookEngageAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_LookEngageAction_19;
	// UnityEngine.InputSystem.InputAction UIvsGameInputHandler::m_LookAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_LookAction_20;
	// UnityEngine.InputSystem.InputAction UIvsGameInputHandler::m_CancelAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_CancelAction_21;
	// UnityEngine.InputSystem.InputAction UIvsGameInputHandler::m_UIEngageAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UIEngageAction_22;
	// UnityEngine.GameObject UIvsGameInputHandler::m_LastNavigationSelection
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastNavigationSelection_23;
	// UnityEngine.InputSystem.Mouse UIvsGameInputHandler::m_Mouse
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___m_Mouse_24;
	// System.Nullable`1<UnityEngine.Vector2> UIvsGameInputHandler::m_MousePositionToWarpToAfterCursorUnlock
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___m_MousePositionToWarpToAfterCursorUnlock_25;
	// UIvsGameInputHandler/State UIvsGameInputHandler::m_State
	int32_t ___m_State_26;
	// UIvsGameInputHandler/ControlStyle UIvsGameInputHandler::m_ControlStyle
	int32_t ___m_ControlStyle_27;
	// UnityEngine.EventSystems.PointerEventData UIvsGameInputHandler::m_PointerData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_PointerData_28;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UIvsGameInputHandler::m_RaycastResults
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResults_29;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.InputSystem.Haptics.DualMotorRumble

// UnityEngine.InputSystem.Haptics.DualMotorRumble

// UnityEngine.InputSystem.Utilities.FourCC

// UnityEngine.InputSystem.Utilities.FourCC

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.Layouts.InputDeviceDescription

// UnityEngine.InputSystem.Layouts.InputDeviceDescription

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputActionMap/DeviceArray

// UnityEngine.InputSystem.InputActionMap/DeviceArray

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Nullable`1<UnityEngine.Vector2>

// System.Nullable`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.InputSystem.InputActionMap

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.InputSystem.Users.InputUser/GlobalState

// UnityEngine.InputSystem.Users.InputUser/GlobalState

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.InputSystem.InputActionAsset

// UnityEngine.InputSystem.InputActionAsset

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// UnityEngine.InputSystem.Users.InputUser

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_StaticFields
{
	// UnityEngine.InputSystem.Gamepad UnityEngine.InputSystem.Gamepad::<current>k__BackingField
	Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* ___U3CcurrentU3Ek__BackingField_54;
	// System.Int32 UnityEngine.InputSystem.Gamepad::s_GamepadCount
	int32_t ___s_GamepadCount_56;
	// UnityEngine.InputSystem.Gamepad[] UnityEngine.InputSystem.Gamepad::s_Gamepads
	GamepadU5BU5D_t907383551E67ACF51B8B4ECCC0E399DAE2AB3762* ___s_Gamepads_57;
};

// UnityEngine.InputSystem.Gamepad

// UnityEngine.InputSystem.Joystick
struct Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C_StaticFields
{
	// UnityEngine.InputSystem.Joystick UnityEngine.InputSystem.Joystick::<current>k__BackingField
	Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C* ___U3CcurrentU3Ek__BackingField_43;
	// System.Int32 UnityEngine.InputSystem.Joystick::s_JoystickCount
	int32_t ___s_JoystickCount_44;
	// UnityEngine.InputSystem.Joystick[] UnityEngine.InputSystem.Joystick::s_Joysticks
	JoystickU5BU5D_tF04167FBAEECAD6E2C47C144DD866A5B5790B8FD* ___s_Joysticks_45;
};

// UnityEngine.InputSystem.Joystick

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields
{
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* ___U3CcurrentU3Ek__BackingField_44;
};

// UnityEngine.InputSystem.Pointer

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.DeltaControl

// UnityEngine.InputSystem.Controls.DeltaControl

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields
{
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::<current>k__BackingField
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___U3CcurrentU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::s_PlatformMouseDevice
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___s_PlatformMouseDevice_53;
};

// UnityEngine.InputSystem.Mouse

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// UnityEngine.InputSystem.PlayerInput

// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_StaticFields
{
	// UnityEngine.InputSystem.Touchscreen UnityEngine.InputSystem.Touchscreen::<current>k__BackingField
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___U3CcurrentU3Ek__BackingField_47;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapTime
	float ___s_TapTime_48;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapDelayTime
	float ___s_TapDelayTime_49;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapRadiusSquared
	float ___s_TapRadiusSquared_50;
};

// UnityEngine.InputSystem.Touchscreen

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UIvsGameInputHandler

// UIvsGameInputHandler

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TDevice UnityEngine.InputSystem.PlayerInput::GetDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerInput_GetDevice_TisRuntimeObject_m7E64824D0D03091A6469093D48C89F4D5B6D5B24_gshared (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::get_actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___0_actionNameOrId, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.PlayerInput::GetDevice<UnityEngine.InputSystem.Touchscreen>()
inline Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* PlayerInput_GetDevice_TisTouchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_m7168208273BAC46AC7BD4DB5C7DB7D70196378A8 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method)
{
	return ((  Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* (*) (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F*, const RuntimeMethod*))PlayerInput_GetDevice_TisRuntimeObject_m7E64824D0D03091A6469093D48C89F4D5B6D5B24_gshared)(__this, method);
}
// TDevice UnityEngine.InputSystem.PlayerInput::GetDevice<UnityEngine.InputSystem.Pointer>()
inline Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method)
{
	return ((  Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* (*) (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F*, const RuntimeMethod*))PlayerInput_GetDevice_TisRuntimeObject_m7E64824D0D03091A6469093D48C89F4D5B6D5B24_gshared)(__this, method);
}
// TDevice UnityEngine.InputSystem.PlayerInput::GetDevice<UnityEngine.InputSystem.Gamepad>()
inline Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* PlayerInput_GetDevice_TisGamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_m33B5C7E1468052E7BB3A4F32B3286807661F8489 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method)
{
	return ((  Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* (*) (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F*, const RuntimeMethod*))PlayerInput_GetDevice_TisRuntimeObject_m7E64824D0D03091A6469093D48C89F4D5B6D5B24_gshared)(__this, method);
}
// TDevice UnityEngine.InputSystem.PlayerInput::GetDevice<UnityEngine.InputSystem.Joystick>()
inline Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C* PlayerInput_GetDevice_TisJoystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C_mF4A031894D6F4C7D10377D312306399BC8902C98 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method)
{
	return ((  Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C* (*) (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F*, const RuntimeMethod*))PlayerInput_GetDevice_TisRuntimeObject_m7E64824D0D03091A6469093D48C89F4D5B6D5B24_gshared)(__this, method);
}
// System.String UnityEngine.InputSystem.PlayerInput::get_currentControlScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::SetUIEngaged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_SetUIEngaged_mB2468286DAAAE68B81EFEEC71E9C78365AE44B86 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::RepaintInspector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.PlayerInput::DeactivateInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_DeactivateInput_mDC3D6A78B756CC518B4D7FD17516635B15CBA9A1 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_selected, const RuntimeMethod* method) ;
// System.Boolean UIvsGameInputHandler::IsPointerOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIvsGameInputHandler_IsPointerOverUI_mA1D286859C6D6BB82C4C1A324B3A86C2EB53A930 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::WasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean UIvsGameInputHandler::IsPointerInsideScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIvsGameInputHandler_IsPointerInsideScreen_m0839C0CEF55894A2104EA583544173360B5DC9A1 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::EngageCameraControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_EngageCameraControl_mF1B0EEF7D335F6A58D2BDC3B2777156773330FBE (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::ProcessCameraLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_ProcessCameraLook_m71B646F87F9751F51EB1D2D9A6E99E760CB528DB (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_Fire_m6128A834784BF446AD03F6BDE46AE345E367D0E3 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Pointer::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* Pointer_get_delta_mB1F6851275453D4BE23E79F6FD5C5E87D901E569_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541 (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___0_value, method);
}
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::DisengageCameraControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_DisengageCameraControl_mF8FBD6AD1EE2B807A58435348C76D87F82134291 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::OnContinueClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnContinueClicked_m01F6798CA226C830BEF33B80D7E22DD0917EBF02 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.PlayerInput::GetDevice<UnityEngine.InputSystem.Mouse>()
inline Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* PlayerInput_GetDevice_TisMouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_mF41E806AA23A7EEC9F207177218197BEEB50D46D (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method)
{
	return ((  Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* (*) (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F*, const RuntimeMethod*))PlayerInput_GetDevice_TisRuntimeObject_m7E64824D0D03091A6469093D48C89F4D5B6D5B24_gshared)(__this, method);
}
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
// System.Void UnityEngine.InputSystem.Mouse::WarpCursorPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mouse_WarpCursorPosition_m086106C392532E4A86537F6D40576265C69EA37B (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.PlayerInput::ActivateInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_ActivateInput_m6E35933F4FC4D440DB540AFA1A8540D4E11F7B3E (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction/CallbackContext::get_performed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallbackContext_get_performed_mB19EF328AFA329FC9790F01CC339597C52D6D528 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___0_nameOrId, bool ___1_throwIfNotFound, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UIvsGameInputHandler::SetPlayerActionsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_SetPlayerActionsEnabled_m08F455EBEB55BAB807FF41C54663BC5487800D7B (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionMap::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionMap_GetEnumerator_m6801FFB3BA5ADB30DE784B04458ED7061B10F470 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean UIvsGameInputHandler::IsRaycastHittingUIObject(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIvsGameInputHandler_IsRaycastHittingUIObject_mA40BDE0BFE07D3C9BED5B480ABF257B22C042E1A (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_raycastResults, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_point, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void UIvsGameInputHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnEnable_m2EBEABAD862959D0DD8D57F50A0FA0F079A19B6D (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02AD5CE0CABDD2082D33DA27473FAEA50183DBFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C02F1381DA79696626425C4EDA7AF4782DF9842);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C058AE5BB263A976CE50BBD9A72AA1563AEB905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inGameUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___inGameUI_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// mainMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainMenuUI_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// menuButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuButton_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m_LookEngageAction = playerInput.actions["LookEngage"];
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_3 = __this->___playerInput_10;
		NullCheck(L_3);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4;
		L_4 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_3, NULL);
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_4, _stringLiteral02AD5CE0CABDD2082D33DA27473FAEA50183DBFE, NULL);
		__this->___m_LookEngageAction_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LookEngageAction_19), (void*)L_5);
		// m_LookAction = playerInput.actions["Look"];
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_6 = __this->___playerInput_10;
		NullCheck(L_6);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_7;
		L_7 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_6, NULL);
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_7, _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F, NULL);
		__this->___m_LookAction_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LookAction_20), (void*)L_8);
		// m_CancelAction = playerInput.actions["UI/Cancel"];
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_9 = __this->___playerInput_10;
		NullCheck(L_9);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_10;
		L_10 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_9, NULL);
		NullCheck(L_10);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11;
		L_11 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_10, _stringLiteral9C058AE5BB263A976CE50BBD9A72AA1563AEB905, NULL);
		__this->___m_CancelAction_21 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CancelAction_21), (void*)L_11);
		// m_UIEngageAction = playerInput.actions["UIEngage"];
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_12 = __this->___playerInput_10;
		NullCheck(L_12);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_13;
		L_13 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_12, NULL);
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionAsset_get_Item_mF080081A5481241910DCB5A068AAFCE6E69AE581(L_13, _stringLiteral1C02F1381DA79696626425C4EDA7AF4782DF9842, NULL);
		__this->___m_UIEngageAction_22 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UIEngageAction_22), (void*)L_14);
		// m_State = State.InGame;
		__this->___m_State_26 = 0;
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnControlsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnControlsChanged_m59943478337DDFC00CEF1887A2838DB831976E9E (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisGamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_m33B5C7E1468052E7BB3A4F32B3286807661F8489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisJoystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C_mF4A031894D6F4C7D10377D312306399BC8902C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisTouchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_m7168208273BAC46AC7BD4DB5C7DB7D70196378A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7879E74444074783F32AEE70E26DF0A6DD5CC7ED);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (playerInput.GetDevice<Touchscreen>() != null) // Note that Touchscreen is also a Pointer so check this first.
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_10;
		NullCheck(L_0);
		Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* L_1;
		L_1 = PlayerInput_GetDevice_TisTouchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_m7168208273BAC46AC7BD4DB5C7DB7D70196378A8(L_0, PlayerInput_GetDevice_TisTouchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_m7168208273BAC46AC7BD4DB5C7DB7D70196378A8_RuntimeMethod_var);
		V_0 = (bool)((!(((RuntimeObject*)(Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// m_ControlStyle = ControlStyle.Touch;
		__this->___m_ControlStyle_27 = 2;
		goto IL_007d;
	}

IL_001c:
	{
		// else if (playerInput.GetDevice<Pointer>() != null)
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_3 = __this->___playerInput_10;
		NullCheck(L_3);
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_4;
		L_4 = PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4(L_3, PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var);
		V_1 = (bool)((!(((RuntimeObject*)(Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// m_ControlStyle = ControlStyle.KeyboardMouse;
		__this->___m_ControlStyle_27 = 1;
		goto IL_007d;
	}

IL_0037:
	{
		// else if (playerInput.GetDevice<Gamepad>() != null || playerInput.GetDevice<Joystick>() != null)
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_6 = __this->___playerInput_10;
		NullCheck(L_6);
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_7;
		L_7 = PlayerInput_GetDevice_TisGamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_m33B5C7E1468052E7BB3A4F32B3286807661F8489(L_6, PlayerInput_GetDevice_TisGamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_m33B5C7E1468052E7BB3A4F32B3286807661F8489_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0054;
		}
	}
	{
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_8 = __this->___playerInput_10;
		NullCheck(L_8);
		Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C* L_9;
		L_9 = PlayerInput_GetDevice_TisJoystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C_mF4A031894D6F4C7D10377D312306399BC8902C98(L_8, PlayerInput_GetDevice_TisJoystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C_mF4A031894D6F4C7D10377D312306399BC8902C98_RuntimeMethod_var);
		G_B7_0 = ((!(((RuntimeObject*)(Joystick_t2235B6B58C2C6BC3755C8E5852BC6BA9CFD0981C*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_2 = (bool)G_B7_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		// m_ControlStyle = ControlStyle.GamepadJoystick;
		__this->___m_ControlStyle_27 = 3;
		goto IL_007d;
	}

IL_0062:
	{
		// Debug.LogError("Control scheme not recognized: " + playerInput.currentControlScheme);
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_11 = __this->___playerInput_10;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7879E74444074783F32AEE70E26DF0A6DD5CC7ED, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
	}

IL_007d:
	{
		// m_Mouse = default;
		__this->___m_Mouse_24 = (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Mouse_24), (void*)(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F*)NULL);
		// m_MousePositionToWarpToAfterCursorUnlock = default;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_14 = (&__this->___m_MousePositionToWarpToAfterCursorUnlock_25);
		il2cpp_codegen_initobj(L_14, sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		// menuButton.SetActive(m_ControlStyle == ControlStyle.Touch);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___menuButton_7;
		int32_t L_16 = __this->___m_ControlStyle_27;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)((((int32_t)L_16) == ((int32_t)2))? 1 : 0), NULL);
		// if (m_ControlStyle == ControlStyle.GamepadJoystick)
		int32_t L_17 = __this->___m_ControlStyle_27;
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)3))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00ba;
		}
	}
	{
		// SetUIEngaged(false);
		UIvsGameInputHandler_SetUIEngaged_mB2468286DAAAE68B81EFEEC71E9C78365AE44B86(__this, (bool)0, NULL);
	}

IL_00ba:
	{
		// RepaintInspector();
		UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA(__this, NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_Update_m85B40A38A911E8187FFC0BD99DDB91185ED2977D (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B34_0 = 0;
	{
		// switch (m_State)
		int32_t L_0 = __this->___m_State_26;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00fb;
			}
			case 2:
			{
				goto IL_01ba;
			}
		}
	}
	{
		goto IL_01d4;
	}

IL_0021:
	{
		// if (m_OpenMenuActionTriggered)
		bool L_3 = __this->___m_OpenMenuActionTriggered_14;
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		// m_State = State.InMenu;
		__this->___m_State_26 = 2;
		// inGameUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___inGameUI_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// mainMenuUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___mainMenuUI_6;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// playerInput.DeactivateInput();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_7 = __this->___playerInput_10;
		NullCheck(L_7);
		PlayerInput_DeactivateInput_mDC3D6A78B756CC518B4D7FD17516635B15CBA9A1(L_7, NULL);
		// EventSystem.current.SetSelectedGameObject(firstButtonInMainMenu);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8;
		L_8 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___firstButtonInMainMenu_8;
		NullCheck(L_8);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_8, L_9, NULL);
	}

IL_006c:
	{
		// var pointerIsOverUI = IsPointerOverUI();
		bool L_10;
		L_10 = UIvsGameInputHandler_IsPointerOverUI_mA1D286859C6D6BB82C4C1A324B3A86C2EB53A930(__this, NULL);
		V_2 = L_10;
		// if (pointerIsOverUI)
		bool L_11 = V_2;
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		// break;
		goto IL_01d4;
	}

IL_007f:
	{
		// if (m_ResetCameraActionTriggered)
		bool L_13 = __this->___m_ResetCameraActionTriggered_15;
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		// transform.rotation = default;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_initobj((&V_6), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_6;
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_16, NULL);
	}

IL_00a1:
	{
		// if (m_ControlStyle != ControlStyle.GamepadJoystick && m_LookEngageAction.WasPressedThisFrame() && IsPointerInsideScreen())
		int32_t L_17 = __this->___m_ControlStyle_27;
		if ((((int32_t)L_17) == ((int32_t)3)))
		{
			goto IL_00bf;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18 = __this->___m_LookEngageAction_19;
		NullCheck(L_18);
		bool L_19;
		L_19 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_18, NULL);
		if (!L_19)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_20;
		L_20 = UIvsGameInputHandler_IsPointerInsideScreen_m0839C0CEF55894A2104EA583544173360B5DC9A1(__this, NULL);
		G_B12_0 = ((int32_t)(L_20));
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B12_0 = 0;
	}

IL_00c0:
	{
		V_7 = (bool)G_B12_0;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00cd;
		}
	}
	{
		// EngageCameraControl();
		UIvsGameInputHandler_EngageCameraControl_mF1B0EEF7D335F6A58D2BDC3B2777156773330FBE(__this, NULL);
	}

IL_00cd:
	{
		// if (m_ControlStyle == ControlStyle.GamepadJoystick)
		int32_t L_22 = __this->___m_ControlStyle_27;
		V_8 = (bool)((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00e3;
		}
	}
	{
		// ProcessCameraLook();
		UIvsGameInputHandler_ProcessCameraLook_m71B646F87F9751F51EB1D2D9A6E99E760CB528DB(__this, NULL);
	}

IL_00e3:
	{
		// if (m_FireActionTriggered)
		bool L_24 = __this->___m_FireActionTriggered_16;
		V_9 = L_24;
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00f6;
		}
	}
	{
		// Fire();
		UIvsGameInputHandler_Fire_m6128A834784BF446AD03F6BDE46AE345E367D0E3(__this, NULL);
	}

IL_00f6:
	{
		// break;
		goto IL_01d4;
	}

IL_00fb:
	{
		// if (m_ResetCameraActionTriggered && !IsPointerOverUI())
		bool L_26 = __this->___m_ResetCameraActionTriggered_15;
		if (!L_26)
		{
			goto IL_010e;
		}
	}
	{
		bool L_27;
		L_27 = UIvsGameInputHandler_IsPointerOverUI_mA1D286859C6D6BB82C4C1A324B3A86C2EB53A930(__this, NULL);
		G_B22_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_010f;
	}

IL_010e:
	{
		G_B22_0 = 0;
	}

IL_010f:
	{
		V_10 = (bool)G_B22_0;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_012b;
		}
	}
	{
		// transform.rotation = default;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_initobj((&V_6), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_6;
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_30, NULL);
	}

IL_012b:
	{
		// if (m_FireActionTriggered && !IsPointerOverUI())
		bool L_31 = __this->___m_FireActionTriggered_16;
		if (!L_31)
		{
			goto IL_013e;
		}
	}
	{
		bool L_32;
		L_32 = UIvsGameInputHandler_IsPointerOverUI_mA1D286859C6D6BB82C4C1A324B3A86C2EB53A930(__this, NULL);
		G_B27_0 = ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B27_0 = 0;
	}

IL_013f:
	{
		V_11 = (bool)G_B27_0;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_014c;
		}
	}
	{
		// Fire();
		UIvsGameInputHandler_Fire_m6128A834784BF446AD03F6BDE46AE345E367D0E3(__this, NULL);
	}

IL_014c:
	{
		// ProcessCameraLook();
		UIvsGameInputHandler_ProcessCameraLook_m71B646F87F9751F51EB1D2D9A6E99E760CB528DB(__this, NULL);
		// if (m_Mouse != null)
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_34 = __this->___m_Mouse_24;
		V_12 = (bool)((!(((RuntimeObject*)(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_018d;
		}
	}
	{
		// m_MousePositionToWarpToAfterCursorUnlock = m_MousePositionToWarpToAfterCursorUnlock.Value + m_Mouse.delta.ReadValue();
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_36 = (&__this->___m_MousePositionToWarpToAfterCursorUnlock_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_36, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_38 = __this->___m_Mouse_24;
		NullCheck(L_38);
		DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* L_39;
		L_39 = Pointer_get_delta_mB1F6851275453D4BE23E79F6FD5C5E87D901E569_inline(L_38, NULL);
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_39, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_37, L_40, NULL);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_42;
		memset((&L_42), 0, sizeof(L_42));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_42), L_41, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		__this->___m_MousePositionToWarpToAfterCursorUnlock_25 = L_42;
	}

IL_018d:
	{
		// if (m_CancelAction.WasPressedThisFrame() || !m_LookEngageAction.IsPressed())
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_43 = __this->___m_CancelAction_21;
		NullCheck(L_43);
		bool L_44;
		L_44 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_43, NULL);
		if (L_44)
		{
			goto IL_01aa;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45 = __this->___m_LookEngageAction_19;
		NullCheck(L_45);
		bool L_46;
		L_46 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_45, NULL);
		G_B34_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		goto IL_01ab;
	}

IL_01aa:
	{
		G_B34_0 = 1;
	}

IL_01ab:
	{
		V_13 = (bool)G_B34_0;
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_01b8;
		}
	}
	{
		// DisengageCameraControl();
		UIvsGameInputHandler_DisengageCameraControl_mF8FBD6AD1EE2B807A58435348C76D87F82134291(__this, NULL);
	}

IL_01b8:
	{
		// break;
		goto IL_01d4;
	}

IL_01ba:
	{
		// if (m_CancelAction.WasPressedThisFrame())
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_48 = __this->___m_CancelAction_21;
		NullCheck(L_48);
		bool L_49;
		L_49 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_48, NULL);
		V_14 = L_49;
		bool L_50 = V_14;
		if (!L_50)
		{
			goto IL_01d2;
		}
	}
	{
		// OnContinueClicked();
		UIvsGameInputHandler_OnContinueClicked_m01F6798CA226C830BEF33B80D7E22DD0917EBF02(__this, NULL);
	}

IL_01d2:
	{
		// break;
		goto IL_01d4;
	}

IL_01d4:
	{
		// m_ResetCameraActionTriggered = default;
		__this->___m_ResetCameraActionTriggered_15 = (bool)0;
		// m_OpenMenuActionTriggered = default;
		__this->___m_OpenMenuActionTriggered_14 = (bool)0;
		// m_FireActionTriggered = default;
		__this->___m_FireActionTriggered_16 = (bool)0;
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::ProcessCameraLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_ProcessCameraLook_m71B646F87F9751F51EB1D2D9A6E99E760CB528DB (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var rotate = m_LookAction.ReadValue<Vector2>();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___m_LookAction_20;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_0 = L_1;
		// if (!(rotate.sqrMagnitude > 0.01))
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		V_2 = (bool)((((int32_t)((((double)((double)L_2)) > ((double)(0.01)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		goto IL_00a8;
	}

IL_0029:
	{
		// if (m_ControlStyle == ControlStyle.GamepadJoystick)
		int32_t L_4 = __this->___m_ControlStyle_27;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// rotateScaleFactor = m_GamepadLookSpeed * Time.deltaTime;
		float L_6 = __this->___m_GamepadLookSpeed_13;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_6, L_7));
		goto IL_004c;
	}

IL_0045:
	{
		// rotateScaleFactor = m_MouseLookSensitivity;
		float L_8 = __this->___m_MouseLookSensitivity_12;
		V_1 = L_8;
	}

IL_004c:
	{
		// m_Rotation.y += rotate.x * rotateScaleFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___m_Rotation_18);
		float* L_10 = (&L_9->___y_1);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		float L_15 = V_1;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_14, L_15))));
		// m_Rotation.x = Mathf.Clamp(m_Rotation.x - rotate.y * rotateScaleFactor, -89, 89);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___m_Rotation_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___m_Rotation_18);
		float L_18 = L_17->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___y_1;
		float L_21 = V_1;
		float L_22;
		L_22 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(L_20, L_21)))), (-89.0f), (89.0f), NULL);
		L_16->___x_0 = L_22;
		// transform.localEulerAngles = m_Rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___m_Rotation_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_24, NULL);
		NullCheck(L_23);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_23, L_25, NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::EngageCameraControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_EngageCameraControl_mF1B0EEF7D335F6A58D2BDC3B2777156773330FBE (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisMouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_mF41E806AA23A7EEC9F207177218197BEEB50D46D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* G_B2_0 = NULL;
	UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* G_B2_1 = NULL;
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* G_B1_0 = NULL;
	UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* G_B1_1 = NULL;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* G_B3_1 = NULL;
	{
		// m_Mouse = playerInput.GetDevice<Mouse>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_10;
		NullCheck(L_0);
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_1;
		L_1 = PlayerInput_GetDevice_TisMouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_mF41E806AA23A7EEC9F207177218197BEEB50D46D(L_0, PlayerInput_GetDevice_TisMouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_mF41E806AA23A7EEC9F207177218197BEEB50D46D_RuntimeMethod_var);
		__this->___m_Mouse_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Mouse_24), (void*)L_1);
		// m_MousePositionToWarpToAfterCursorUnlock = m_Mouse?.position.ReadValue();
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_2 = __this->___m_Mouse_24;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_4 = V_0;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_1;
		goto IL_0037;
	}

IL_0028:
	{
		NullCheck(G_B2_0);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_5;
		L_5 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(G_B2_0, NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_5, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_MousePositionToWarpToAfterCursorUnlock_25 = G_B3_0;
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// m_State = State.InGameControllingCamera;
		__this->___m_State_26 = 1;
		// RepaintInspector();
		UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA(__this, NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::DisengageCameraControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_DisengageCameraControl_mF8FBD6AD1EE2B807A58435348C76D87F82134291 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* G_B3_0 = NULL;
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* G_B2_0 = NULL;
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// if (m_MousePositionToWarpToAfterCursorUnlock != null)
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_0 = (&__this->___m_MousePositionToWarpToAfterCursorUnlock_25);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_0, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// m_Mouse?.WarpCursorPosition(m_MousePositionToWarpToAfterCursorUnlock.Value);
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_3 = __this->___m_Mouse_24;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0023;
		}
	}
	{
		goto IL_0034;
	}

IL_0023:
	{
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_5 = (&__this->___m_MousePositionToWarpToAfterCursorUnlock_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_5, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		NullCheck(G_B3_0);
		Mouse_WarpCursorPosition_m086106C392532E4A86537F6D40576265C69EA37B(G_B3_0, L_6, NULL);
	}

IL_0034:
	{
		// m_State = State.InGame;
		__this->___m_State_26 = 0;
		// RepaintInspector();
		UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA(__this, NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnTopLeftClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnTopLeftClicked_mFB11A06D07898B815BB20CF7868FEF30990A5A4D (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004AA7882B8B26188FA6FACCA62F0A774C324AA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusBarText.text = "'Top Left' button clicked";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___statusBarText_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral004AA7882B8B26188FA6FACCA62F0A774C324AA4);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnBottomLeftClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnBottomLeftClicked_m161D89884A2B4EA02F6BB7668572EFE2BB72D2AD (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67ADE23DF0182464942A3FF34FF21D2CDA8A3D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusBarText.text = "'Bottom Left' button clicked";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___statusBarText_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF67ADE23DF0182464942A3FF34FF21D2CDA8A3D2);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnTopRightClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnTopRightClicked_mEE6D04BF8F8270ED39D39175DAB33676AC583601 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674B82885226ECAE739C68D37BB45083C7DD7A9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusBarText.text = "'Top Right' button clicked";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___statusBarText_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral674B82885226ECAE739C68D37BB45083C7DD7A9F);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnBottomRightClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnBottomRightClicked_m8C3EDC343A3CB82FFF9360A6369D7C7E4A44B62D (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7571DEF8524A9120ACCE2C57004A9AD3C20A539);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusBarText.text = "'Bottom Right' button clicked";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___statusBarText_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralE7571DEF8524A9120ACCE2C57004A9AD3C20A539);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnMenuClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnMenuClicked_mA1D10D8977B474D01A8E667F069D958019D5ED15 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	{
		// m_OpenMenuActionTriggered = true;
		__this->___m_OpenMenuActionTriggered_14 = (bool)1;
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnContinueClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnContinueClicked_m01F6798CA226C830BEF33B80D7E22DD0917EBF02 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	{
		// mainMenuUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainMenuUI_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// inGameUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___inGameUI_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// playerInput.ActivateInput();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_2 = __this->___playerInput_10;
		NullCheck(L_2);
		PlayerInput_ActivateInput_m6E35933F4FC4D440DB540AFA1A8540D4E11F7B3E(L_2, NULL);
		// m_State = State.InGame;
		__this->___m_State_26 = 0;
		// RepaintInspector();
		UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA(__this, NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnExitClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnExitClicked_mD95D38321E0ECAC32BB189642D70CA7A05814202 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnMenu(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnMenu_m028971E67F3B6ADAA931B5F0D90AEB2927562BAA (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (context.performed)
		bool L_0;
		L_0 = CallbackContext_get_performed_mB19EF328AFA329FC9790F01CC339597C52D6D528((&___0_context), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// m_OpenMenuActionTriggered = true;
		__this->___m_OpenMenuActionTriggered_14 = (bool)1;
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnResetCamera(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnResetCamera_mC70AD6811EF0FB5B07823EA47C26BC2BF1DF0162 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (context.performed)
		bool L_0;
		L_0 = CallbackContext_get_performed_mB19EF328AFA329FC9790F01CC339597C52D6D528((&___0_context), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// m_ResetCameraActionTriggered = true;
		__this->___m_ResetCameraActionTriggered_15 = (bool)1;
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnUIEngage(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnUIEngage_mD9F2034BBD88022F340815CD85331D3725F86600 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!context.performed)
		bool L_0;
		L_0 = CallbackContext_get_performed_mB19EF328AFA329FC9790F01CC339597C52D6D528((&___0_context), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0021;
	}

IL_0011:
	{
		// SetUIEngaged(!m_UIEngaged);
		bool L_2 = __this->___m_UIEngaged_17;
		UIvsGameInputHandler_SetUIEngaged_mB2468286DAAAE68B81EFEEC71E9C78365AE44B86(__this, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::SetUIEngaged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_SetUIEngaged_mB2468286DAAAE68B81EFEEC71E9C78365AE44B86 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value)
		bool L_0 = ___0_value;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// playerInput.actions.FindActionMap("UI").Enable();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_2 = __this->___playerInput_10;
		NullCheck(L_2);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_3;
		L_3 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_2, NULL);
		NullCheck(L_3);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_4;
		L_4 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_3, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, (bool)0, NULL);
		NullCheck(L_4);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_4, NULL);
		// SetPlayerActionsEnabled(false);
		UIvsGameInputHandler_SetPlayerActionsEnabled_m08F455EBEB55BAB807FF41C54663BC5487800D7B(__this, (bool)0, NULL);
		// if (m_LastNavigationSelection == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_LastNavigationSelection_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// m_LastNavigationSelection = firstNavigationSelection;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___firstNavigationSelection_9;
		__this->___m_LastNavigationSelection_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastNavigationSelection_23), (void*)L_8);
	}

IL_0047:
	{
		// EventSystem.current.SetSelectedGameObject(m_LastNavigationSelection);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_9;
		L_9 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_LastNavigationSelection_23;
		NullCheck(L_9);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_9, L_10, NULL);
		goto IL_009d;
	}

IL_005b:
	{
		// m_LastNavigationSelection = EventSystem.current.currentSelectedGameObject; // If this happens to be null, we will automatically pick up firstNavigationSelection again.
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_11;
		L_11 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A(L_11, NULL);
		__this->___m_LastNavigationSelection_23 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastNavigationSelection_23), (void*)L_12);
		// EventSystem.current.SetSelectedGameObject(null);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_13;
		L_13 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_13);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_13, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// playerInput.actions.FindActionMap("UI").Disable();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_14 = __this->___playerInput_10;
		NullCheck(L_14);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_15;
		L_15 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_14, NULL);
		NullCheck(L_15);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_16;
		L_16 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_15, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, (bool)0, NULL);
		NullCheck(L_16);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_16, NULL);
		// SetPlayerActionsEnabled(true);
		UIvsGameInputHandler_SetPlayerActionsEnabled_m08F455EBEB55BAB807FF41C54663BC5487800D7B(__this, (bool)1, NULL);
	}

IL_009d:
	{
		// m_UIEngaged = value;
		bool L_17 = ___0_value;
		__this->___m_UIEngaged_17 = L_17;
		// RepaintInspector();
		UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA(__this, NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::SetPlayerActionsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_SetPlayerActionsEnabled_m08F455EBEB55BAB807FF41C54663BC5487800D7B (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// var actions = playerInput.actions.FindActionMap("Player");
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_10;
		NullCheck(L_0);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = PlayerInput_get_actions_m7A85BC149F2EAE4E7BB0785A08D2AEA6B9F4E183(L_0, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)0, NULL);
		V_0 = L_2;
		// foreach (var action in actions)
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InputActionMap_GetEnumerator_m6801FFB3BA5ADB30DE784B04458ED7061B10F470(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0022_1:
			{
				// foreach (var action in actions)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
				L_8 = InterfaceFuncInvoker0< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>::get_Current() */, IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (action == m_UIEngageAction)
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = V_2;
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10 = __this->___m_UIEngageAction_22;
				V_3 = (bool)((((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_9) == ((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_10))? 1 : 0);
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0039_1;
				}
			}
			{
				// continue;
				goto IL_0051_1;
			}

IL_0039_1:
			{
				// if (value)
				bool L_12 = ___0_value;
				V_4 = L_12;
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_0049_1;
				}
			}
			{
				// action.Enable();
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14 = V_2;
				NullCheck(L_14);
				InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_14, NULL);
				goto IL_0050_1;
			}

IL_0049_1:
			{
				// action.Disable();
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15 = V_2;
				NullCheck(L_15);
				InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_15, NULL);
			}

IL_0050_1:
			{
			}

IL_0051_1:
			{
				// foreach (var action in actions)
				RuntimeObject* L_16 = V_1;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::OnFire(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_OnFire_mAFEC61A314C18ECCE02CD359A392E18F5EF36EFD (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!context.performed)
		bool L_0;
		L_0 = CallbackContext_get_performed_mB19EF328AFA329FC9790F01CC339597C52D6D528((&___0_context), NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0041;
	}

IL_0011:
	{
		// var device = playerInput.GetDevice<Pointer>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_2 = __this->___playerInput_10;
		NullCheck(L_2);
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_3;
		L_3 = PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4(L_2, PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var);
		V_0 = L_3;
		// if (device != null && IsRaycastHittingUIObject(device.position.ReadValue()))
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_5 = V_0;
		NullCheck(L_5);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_6;
		L_6 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_5, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_6, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		bool L_8;
		L_8 = UIvsGameInputHandler_IsRaycastHittingUIObject_mA40BDE0BFE07D3C9BED5B480ABF257B22C042E1A(__this, L_7, NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 0;
	}

IL_0034:
	{
		V_2 = (bool)G_B5_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		goto IL_0041;
	}

IL_003a:
	{
		// Fire();
		UIvsGameInputHandler_Fire_m6128A834784BF446AD03F6BDE46AE345E367D0E3(__this, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Boolean UIvsGameInputHandler::IsRaycastHittingUIObject(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIvsGameInputHandler_IsRaycastHittingUIObject_mA40BDE0BFE07D3C9BED5B480ABF257B22C042E1A (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_PointerData == null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = __this->___m_PointerData_28;
		V_0 = (bool)((((RuntimeObject*)(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_PointerData = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_3, L_2, NULL);
		__this->___m_PointerData_28 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointerData_28), (void*)L_3);
	}

IL_001e:
	{
		// m_PointerData.position = position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = __this->___m_PointerData_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_position;
		NullCheck(L_4);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_4, L_5, NULL);
		// EventSystem.current.RaycastAll(m_PointerData, m_RaycastResults);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = __this->___m_PointerData_28;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_8 = __this->___m_RaycastResults_29;
		NullCheck(L_6);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_6, L_7, L_8, NULL);
		// return m_RaycastResults.Count > 0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_9 = __this->___m_RaycastResults_29;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_9, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0053:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean UIvsGameInputHandler::IsPointerOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIvsGameInputHandler_IsPointerOverUI_mA1D286859C6D6BB82C4C1A324B3A86C2EB53A930 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_ControlStyle == ControlStyle.GamepadJoystick)
		int32_t L_0 = __this->___m_ControlStyle_27;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_001f;
	}

IL_0012:
	{
		// return EventSystem.current.IsPointerOverGameObject();
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_2, NULL);
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UIvsGameInputHandler::IsPointerInsideScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIvsGameInputHandler_IsPointerInsideScreen_m0839C0CEF55894A2104EA583544173360B5DC9A1 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var pointer = playerInput.GetDevice<Pointer>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_10;
		NullCheck(L_0);
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_1;
		L_1 = PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4(L_0, PlayerInput_GetDevice_TisPointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_m429E2671E08B5C245285048F2DA94CD680D34EE4_RuntimeMethod_var);
		V_0 = L_1;
		// if (pointer == null)
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_0019:
	{
		// return Screen.safeArea.Contains(pointer.position.ReadValue());
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525(NULL);
		V_3 = L_4;
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_5 = V_0;
		NullCheck(L_5);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_6;
		L_6 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_5, NULL);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_6, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		bool L_8;
		L_8 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_3), L_7, NULL);
		V_2 = L_8;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void UIvsGameInputHandler::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_Fire_m6128A834784BF446AD03F6BDE46AE345E367D0E3 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// var transform = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_0;
		// var newProjectile = Instantiate(projectile);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___projectile_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_2;
		// newProjectile.transform.position = transform.position + transform.forward * 0.6f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, (0.600000024f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
		// newProjectile.transform.rotation = transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// newProjectile.transform.localScale *= kSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, (1.0f), NULL);
		NullCheck(L_17);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_17, L_19, NULL);
		// newProjectile.GetComponent<Rigidbody>().mass = Mathf.Pow(kSize, 3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21;
		L_21 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_20, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		float L_22;
		L_22 = powf((1.0f), (3.0f));
		NullCheck(L_21);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_21, L_22, NULL);
		// newProjectile.GetComponent<Rigidbody>().AddForce(transform.forward * 20f, ForceMode.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_1;
		NullCheck(L_23);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24;
		L_24 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_23, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_0;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (20.0f), NULL);
		NullCheck(L_24);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_24, L_27, 1, NULL);
		// newProjectile.GetComponent<MeshRenderer>().material.color =
		//     new Color(Random.value, Random.value, Random.value, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_1;
		NullCheck(L_28);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_29;
		L_29 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_28, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_29);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30;
		L_30 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_29, NULL);
		float L_31;
		L_31 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_32;
		L_32 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_33;
		L_33 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_34), L_31, L_32, L_33, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_30, L_34, NULL);
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::RepaintInspector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler_RepaintInspector_m233937D6C8E6357F80F8A4C1BE44783A006521FA (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIvsGameInputHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIvsGameInputHandler__ctor_m458FBC260B44F3B936F20F1CA5D873635C6A80F9 (UIvsGameInputHandler_tBE653C1313C8060A6DA8DD50B6A197956F14658F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float m_MouseLookSensitivity = 0.1f;
		__this->___m_MouseLookSensitivity_12 = (0.100000001f);
		// public float m_GamepadLookSpeed = 10f;
		__this->___m_GamepadLookSpeed_13 = (10.0f);
		// private List<RaycastResult> m_RaycastResults = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_0 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_0, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		__this->___m_RaycastResults_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastResults_29), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* Pointer_get_delta_mB1F6851275453D4BE23E79F6FD5C5E87D901E569_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) 
{
	{
		// public DeltaControl delta { get; protected set; }
		DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* L_0 = __this->___U3CdeltaU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control position { get; protected set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CpositionU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
