#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkPrefab>
struct Dictionary_2_t7E3F7ADC88D549FC0444CEF23D9116E9E7B8F861;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>
struct Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkObject>>
struct Dictionary_2_t8BC1C80A24F4EEF2035E339BE780125813B138F2;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkObject>
struct Dictionary_2_t157A4914F029A406F78B10B4418C1C55A8B74123;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject>
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64>
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct KeyCollection_t828BE28B5AD4F3C0D8AE018C5D91252F5D272E6B;
// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>>
struct List_1_t498347DEA55185643F213F995B74FEE039FAD70F;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour>
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery>
struct List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkPrefab>
struct List_1_tE788305FC69BA0DB2AEFE4DE86FACD7D09507CB6;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase>
struct List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes>
struct NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB;
// Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>
struct NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717;
// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Collections.FixedString128Bytes>
struct OnValueChangedDelegate_t439FD8A620C2CA8A06B84F95137D4FCC52CEB5E0;
// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<UnityEngine.Vector3>
struct OnValueChangedDelegate_t75704459A3B43B4A8F257F0EC4D94FFEC398CCF6;
// System.Collections.Generic.Queue`1<Unity.Netcode.ReleasedNetworkId>
struct Queue_1_tD0B32970076D62B677279D96972006677EEE25A7;
// Singleton`1<InputManager>
struct Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct ValueCollection_tF46BA59A103BBCF077A2A7517084776F6CDD8283;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>[]
struct EntryU5BU5D_t13B5F17F7C1B328C6B687BAECF4A5B17473E98ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HelloWorld.HelloWorldManager
struct HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A;
// HelloWorld.HelloWorldPlayer
struct HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Unity.Netcode.IDeferredMessageManager
struct IDeferredMessageManager_t4090EBA76E1C9A5B841E21584A74976F383AD793;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// NetworkCommandLine
struct NetworkCommandLine_tF5C45447B4DA606CA2A14258379513EDEC2F41FE;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchControls
struct TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Utils
struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
// InputManager/EndTouch
struct EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF;
// InputManager/StartTouch
struct StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724;
// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597;
// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57;
// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// TouchControls/ITouchActions
struct ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01;
IL2CPP_EXTERN_C String_t* _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C;
IL2CPP_EXTERN_C String_t* _stringLiteral24830A0E81B87E9A69EBF89EB5EED52F1C1404E5;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C;
IL2CPP_EXTERN_C String_t* _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2ABC049ED746AB8F9A0A91EA4EDD63E4DB794B;
IL2CPP_EXTERN_C String_t* _stringLiteral65A2296E54440A0BF0DA03AFE9187D9AA44728E1;
IL2CPP_EXTERN_C String_t* _stringLiteral691869D3C717D0781EDF4DB123CF1596C1975A8A;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF987CEE087AAE35B2CD69528CD95DFE12122A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5913F01C4B1F16E8386686D524442A294D2FC3;
IL2CPP_EXTERN_C String_t* _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846;
IL2CPP_EXTERN_C String_t* _stringLiteral9C441C802EFF6FB06F2F2C2C24B9FAA791CB4546;
IL2CPP_EXTERN_C String_t* _stringLiteralB24DFA7A91AE381C3E0E64C13BBFA341657245BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB867965FD962F18AFC6C6FF185255C7F50878999;
IL2CPP_EXTERN_C String_t* _stringLiteralC75C9BA406A69C0311880E2E185034D5342F3CBA;
IL2CPP_EXTERN_C String_t* _stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF3391253AE1076B748993B88770C68B98D227011;
IL2CPP_EXTERN_C String_t* _stringLiteralF7319FD4CF5DC27387E6AC1B4DFEE5AE8B24EFF9;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisNetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_m87AB6AF786A4516B4816CB71E131D3FD49CC0439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloWorldManager_SwipeEnd_mF36DD2665C1C82394F8B93ADC54EE8B267C8C4F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloWorldManager_SwipeStart_m2AF7ED57CAD82BB1FDFD35B4DA774CC62D5FAA31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloWorldPlayer___rpc_handler_1615969000_mBB1AD0527C1CF896C538B67219572877A2C429B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloWorldPlayer___rpc_handler_192107471_mA0FBC916D493EB5FEE7B0CEE385806DBC2EF50D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloWorldPlayer___rpc_handler_2229041440_mC5448AE318E1A7103A51F26F1AC38FFE11100691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HelloWorldPlayer___rpc_handler_2487839671_mCBB5EF1B01EC2DD9C2AAE0C3A261B7F896BB08CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CStartU3Eb__13_0_m5F807CBBFECD559C1CF6CAF3DE9F5CDA4A9CAB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CStartU3Eb__13_1_m4DD13018E2E7463CC9D69177C91825637B777AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t13B5F17F7C1B328C6B687BAECF4A5B17473E98ED* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t828BE28B5AD4F3C0D8AE018C5D91252F5D272E6B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF46BA59A103BBCF077A2A7517084776F6CDD8283* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkObject> Unity.Netcode.NetworkSpawnManager::SpawnedObjects
	Dictionary_2_t157A4914F029A406F78B10B4418C1C55A8B74123* ___SpawnedObjects_0;
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkSpawnManager::SpawnedObjectsList
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList_1;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkObject>> Unity.Netcode.NetworkSpawnManager::OwnershipToObjectsTable
	Dictionary_2_t8BC1C80A24F4EEF2035E339BE780125813B138F2* ___OwnershipToObjectsTable_2;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkSpawnManager::m_ObjectToOwnershipTable
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ObjectToOwnershipTable_3;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkSpawnManager::<NetworkManager>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CNetworkManagerU3Ek__BackingField_4;
	// System.Collections.Generic.Queue`1<Unity.Netcode.ReleasedNetworkId> Unity.Netcode.NetworkSpawnManager::ReleasedNetworkObjectIds
	Queue_1_tD0B32970076D62B677279D96972006677EEE25A7* ___ReleasedNetworkObjectIds_5;
	// System.UInt64 Unity.Netcode.NetworkSpawnManager::m_NetworkObjectIdCounter
	uint64_t ___m_NetworkObjectIdCounter_6;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkSpawnManager::m_TargetClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_TargetClientIds_7;
};

// Unity.Netcode.NetworkVariableBase
struct NetworkVariableBase_t4A303BB3DF935B69594AD8D12B141AA1A1B8D63D  : public RuntimeObject
{
	// Unity.Netcode.NetworkBehaviour Unity.Netcode.NetworkVariableBase::m_NetworkBehaviour
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___m_NetworkBehaviour_1;
	// System.Boolean Unity.Netcode.NetworkVariableBase::m_IsDirty
	bool ___m_IsDirty_4;
	// System.String Unity.Netcode.NetworkVariableBase::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// Unity.Netcode.NetworkVariableReadPermission Unity.Netcode.NetworkVariableBase::ReadPerm
	int32_t ___ReadPerm_6;
	// Unity.Netcode.NetworkVariableWritePermission Unity.Netcode.NetworkVariableBase::WritePerm
	int32_t ___WritePerm_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TouchControls
struct TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset TouchControls::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap TouchControls::m_Touch
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Touch_1;
	// TouchControls/ITouchActions TouchControls::m_TouchActionsCallbackInterface
	RuntimeObject* ___m_TouchActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction TouchControls::m_Touch_PrimaryContact
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Touch_PrimaryContact_3;
	// UnityEngine.InputSystem.InputAction TouchControls::m_Touch_PrimaryPosition
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Touch_PrimaryPosition_4;
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

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
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

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.UInt64>
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint64_t ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Netcode.ClientRpcReceiveParams
struct ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A 
{
	union
	{
		struct
		{
		};
		uint8_t ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A__padding[1];
	};
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.Netcode.FastBufferReader
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	// Unity.Netcode.FastBufferReader/ReaderHandle* Unity.Netcode.FastBufferReader::Handle
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle_0;
};

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};

struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache_1;
};

// Unity.Collections.FixedBytes16
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)

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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Unity.Netcode.ServerRpcReceiveParams
struct ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 
{
	// System.UInt64 Unity.Netcode.ServerRpcReceiveParams::SenderClientId
	uint64_t ___SenderClientId_0;
};

// Unity.Netcode.ServerRpcSendParams
struct ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A 
{
	union
	{
		struct
		{
		};
		uint8_t ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A__padding[1];
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	// System.Byte* Unity.Netcode.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;
};

// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	// System.Byte* Unity.Netcode.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
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

// TouchControls/TouchActions
struct TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E 
{
	// TouchControls TouchControls/TouchActions::m_Wrapper
	TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of TouchControls/TouchActions
struct TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_pinvoke
{
	TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___m_Wrapper_0;
};
// Native definition for COM marshalling of TouchControls/TouchActions
struct TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_com
{
	TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___m_Wrapper_0;
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

// Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>
struct NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717  : public NetworkVariableBase_t4A303BB3DF935B69594AD8D12B141AA1A1B8D63D
{
	// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<T> Unity.Netcode.NetworkVariable`1::OnValueChanged
	OnValueChangedDelegate_t75704459A3B43B4A8F257F0EC4D94FFEC398CCF6* ___OnValueChanged_8;
	// T Unity.Netcode.NetworkVariable`1::m_InternalValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InternalValue_9;
};

// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>>
struct Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Collections.FixedBytes126
#pragma pack(push, tp, 1)
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					// System.Byte Unity.Collections.FixedBytes126::byte0112
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					// System.Byte Unity.Collections.FixedBytes126::byte0113
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					// System.Byte Unity.Collections.FixedBytes126::byte0114
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					// System.Byte Unity.Collections.FixedBytes126::byte0115
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					// System.Byte Unity.Collections.FixedBytes126::byte0116
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					// System.Byte Unity.Collections.FixedBytes126::byte0117
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					// System.Byte Unity.Collections.FixedBytes126::byte0118
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					// System.Byte Unity.Collections.FixedBytes126::byte0119
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					// System.Byte Unity.Collections.FixedBytes126::byte0120
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					// System.Byte Unity.Collections.FixedBytes126::byte0121
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					// System.Byte Unity.Collections.FixedBytes126::byte0122
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					// System.Byte Unity.Collections.FixedBytes126::byte0123
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					// System.Byte Unity.Collections.FixedBytes126::byte0124
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					// System.Byte Unity.Collections.FixedBytes126::byte0125
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
#pragma pack(pop, tp)

// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113  : public RuntimeObject
{
	// System.UInt16 Unity.Netcode.NetworkConfig::ProtocolVersion
	uint16_t ___ProtocolVersion_0;
	// Unity.Netcode.NetworkTransport Unity.Netcode.NetworkConfig::NetworkTransport
	NetworkTransport_t55E07951299283974C86476F46CC977780560B64* ___NetworkTransport_1;
	// UnityEngine.GameObject Unity.Netcode.NetworkConfig::PlayerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerPrefab_2;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkPrefab> Unity.Netcode.NetworkConfig::NetworkPrefabs
	List_1_tE788305FC69BA0DB2AEFE4DE86FACD7D09507CB6* ___NetworkPrefabs_3;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkPrefab> Unity.Netcode.NetworkConfig::NetworkPrefabOverrideLinks
	Dictionary_2_t7E3F7ADC88D549FC0444CEF23D9116E9E7B8F861* ___NetworkPrefabOverrideLinks_4;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32> Unity.Netcode.NetworkConfig::OverrideToNetworkPrefab
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ___OverrideToNetworkPrefab_5;
	// System.UInt32 Unity.Netcode.NetworkConfig::TickRate
	uint32_t ___TickRate_6;
	// System.Int32 Unity.Netcode.NetworkConfig::ClientConnectionBufferTimeout
	int32_t ___ClientConnectionBufferTimeout_7;
	// System.Boolean Unity.Netcode.NetworkConfig::ConnectionApproval
	bool ___ConnectionApproval_8;
	// System.Byte[] Unity.Netcode.NetworkConfig::ConnectionData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectionData_9;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableTimeResync
	bool ___EnableTimeResync_10;
	// System.Int32 Unity.Netcode.NetworkConfig::TimeResyncInterval
	int32_t ___TimeResyncInterval_11;
	// System.Boolean Unity.Netcode.NetworkConfig::EnsureNetworkVariableLengthSafety
	bool ___EnsureNetworkVariableLengthSafety_12;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableSceneManagement
	bool ___EnableSceneManagement_13;
	// System.Boolean Unity.Netcode.NetworkConfig::ForceSamePrefabs
	bool ___ForceSamePrefabs_14;
	// System.Boolean Unity.Netcode.NetworkConfig::RecycleNetworkIds
	bool ___RecycleNetworkIds_15;
	// System.Single Unity.Netcode.NetworkConfig::NetworkIdRecycleDelay
	float ___NetworkIdRecycleDelay_16;
	// Unity.Netcode.HashSize Unity.Netcode.NetworkConfig::RpcHashSize
	uint8_t ___RpcHashSize_17;
	// System.Int32 Unity.Netcode.NetworkConfig::LoadSceneTimeOut
	int32_t ___LoadSceneTimeOut_18;
	// System.Single Unity.Netcode.NetworkConfig::SpawnTimeout
	float ___SpawnTimeout_19;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableNetworkLogs
	bool ___EnableNetworkLogs_20;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkConfig::m_ConfigHash
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_ConfigHash_23;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Netcode.ServerRpcParams
struct ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 
{
	// Unity.Netcode.ServerRpcSendParams Unity.Netcode.ServerRpcParams::Send
	ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A ___Send_0;
	// Unity.Netcode.ServerRpcReceiveParams Unity.Netcode.ServerRpcParams::Receive
	ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 ___Receive_1;
};

// Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB 
{
	// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.ClientRpcSendParams::TargetClientIds
	RuntimeObject* ___TargetClientIds_0;
	// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>> Unity.Netcode.ClientRpcSendParams::TargetClientIdsNativeArray
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.Collections.FixedString128Bytes
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString128Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_1;
			// Unity.Collections.FixedBytes126 Unity.Collections.FixedString128Bytes::bytes
			FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes_2;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
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

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes>
struct NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB  : public NetworkVariableBase_t4A303BB3DF935B69594AD8D12B141AA1A1B8D63D
{
	// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<T> Unity.Netcode.NetworkVariable`1::OnValueChanged
	OnValueChangedDelegate_t439FD8A620C2CA8A06B84F95137D4FCC52CEB5E0* ___OnValueChanged_8;
	// T Unity.Netcode.NetworkVariable`1::m_InternalValue
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___m_InternalValue_9;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 
{
	// Unity.Netcode.ClientRpcSendParams Unity.Netcode.ClientRpcParams::Send
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB ___Send_0;
	// Unity.Netcode.ClientRpcReceiveParams Unity.Netcode.ClientRpcParams::Receive
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
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

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// InputManager/EndTouch
struct EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF  : public MulticastDelegate_t
{
};

// InputManager/StartTouch
struct StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E 
{
	// Unity.Netcode.ServerRpcParams Unity.Netcode.__RpcParams::Server
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	// Unity.Netcode.ClientRpcParams Unity.Netcode.__RpcParams::Client
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___Client_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E_marshaled_pinvoke
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke ___Client_1;
};
// Native definition for COM marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E_marshaled_com
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com ___Client_1;
};

// Singleton`1<InputManager>
struct Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF_StaticFields
{
	// T Singleton`1::_instance
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ____instance_4;
};

// HelloWorld.HelloWorldManager
struct HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera HelloWorld.HelloWorldManager::cameraMain
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraMain_4;
	// System.Single HelloWorld.HelloWorldManager::minimumDistance
	float ___minimumDistance_9;
	// System.Single HelloWorld.HelloWorldManager::maximumTime
	float ___maximumTime_10;
	// InputManager HelloWorld.HelloWorldManager::inputManager
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ___inputManager_11;
	// UnityEngine.Vector2 HelloWorld.HelloWorldManager::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_12;
	// System.Single HelloWorld.HelloWorldManager::startTime
	float ___startTime_13;
	// UnityEngine.Vector2 HelloWorld.HelloWorldManager::endPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endPosition_14;
	// System.Single HelloWorld.HelloWorldManager::endTime
	float ___endTime_15;
};

struct HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields
{
	// UnityEngine.Vector3 HelloWorld.HelloWorldManager::lvelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lvelocity_5;
	// UnityEngine.Vector3 HelloWorld.HelloWorldManager::rvelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rvelocity_6;
	// UnityEngine.Vector3 HelloWorld.HelloWorldManager::uvelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___uvelocity_7;
	// UnityEngine.Vector3 HelloWorld.HelloWorldManager::dvelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dvelocity_8;
};

// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviour/__RpcExecStage Unity.Netcode.NetworkBehaviour::__rpc_exec_stage
	int32_t _____rpc_exec_stage_4;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsLocalPlayer>k__BackingField
	bool ___U3CIsLocalPlayerU3Ek__BackingField_7;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsOwner>k__BackingField
	bool ___U3CIsOwnerU3Ek__BackingField_8;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_9;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_10;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsHost>k__BackingField
	bool ___U3CIsHostU3Ek__BackingField_11;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsOwnedByServer>k__BackingField
	bool ___U3CIsOwnedByServerU3Ek__BackingField_12;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_13;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::m_NetworkObject
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___m_NetworkObject_14;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_15;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::<NetworkBehaviourId>k__BackingField
	uint16_t ___U3CNetworkBehaviourIdU3Ek__BackingField_16;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::NetworkBehaviourIdCache
	uint16_t ___NetworkBehaviourIdCache_17;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_18;
	// System.Boolean Unity.Netcode.NetworkBehaviour::m_VarInit
	bool ___m_VarInit_19;
	// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>> Unity.Netcode.NetworkBehaviour::m_DeliveryMappedNetworkVariableIndices
	List_1_t498347DEA55185643F213F995B74FEE039FAD70F* ___m_DeliveryMappedNetworkVariableIndices_20;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery> Unity.Netcode.NetworkBehaviour::m_DeliveryTypesForNetworkVariableGroups
	List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B* ___m_DeliveryTypesForNetworkVariableGroups_21;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase> Unity.Netcode.NetworkBehaviour::NetworkVariableFields
	List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3* ___NetworkVariableFields_22;
	// System.Collections.Generic.List`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToReset
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___NetworkVariableIndexesToReset_24;
	// System.Collections.Generic.HashSet`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToResetSet
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___NetworkVariableIndexesToResetSet_25;
};

struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> Unity.Netcode.NetworkBehaviour::s_FieldTypes
	Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365* ___s_FieldTypes_23;
};

// NetworkCommandLine
struct NetworkCommandLine_tF5C45447B4DA606CA2A14258379513EDEC2F41FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkManager NetworkCommandLine::netManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___netManager_4;
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_7;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D* ___U3CMessagingSystemU3Ek__BackingField_8;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_9;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::ClientsToApprove
	Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A* ___ClientsToApprove_10;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_11;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_12;
	// System.String Unity.Netcode.NetworkManager::<DisconnectReason>k__BackingField
	String_t* ___U3CDisconnectReasonU3Ek__BackingField_13;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_14;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_15;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_16;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_17;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_19;
	// Unity.Netcode.IDeferredMessageManager Unity.Netcode.NetworkManager::<DeferredMessageManager>k__BackingField
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField_20;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_21;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_22;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_24;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___m_ConnectedClients_25;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_26;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ClientIdToTransportIdMap_27;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_TransportIdToClientIdMap_28;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___m_ConnectedClientsList_29;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_ConnectedClientIds_30;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___U3CLocalClientU3Ek__BackingField_31;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_32;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_33;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_34;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_35;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_36;
	// System.Boolean Unity.Netcode.NetworkManager::<IsApproved>k__BackingField
	bool ___U3CIsApprovedU3Ek__BackingField_37;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_38;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_39;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_40;
	// System.Action Unity.Netcode.NetworkManager::OnTransportFailure
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTransportFailure_41;
	// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::m_ConnectionApprovalCallback
	Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B* ___m_ConnectionApprovalCallback_42;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_43;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_44;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_45;
};

struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_18;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_46;
};

// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt32 Unity.Netcode.NetworkObject::GlobalObjectIdHash
	uint32_t ___GlobalObjectIdHash_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkObject::NetworkManagerOwner
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManagerOwner_5;
	// System.UInt64 Unity.Netcode.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_6;
	// System.UInt64 Unity.Netcode.NetworkObject::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_7;
	// System.Boolean Unity.Netcode.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_8;
	// System.Boolean Unity.Netcode.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_9;
	// System.Boolean Unity.Netcode.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_10;
	// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsSceneObjectU3Ek__BackingField_11;
	// System.Boolean Unity.Netcode.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_12;
	// Unity.Netcode.NetworkObject/VisibilityDelegate Unity.Netcode.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A* ___CheckObjectVisibility_13;
	// Unity.Netcode.NetworkObject/SpawnDelegate Unity.Netcode.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57* ___IncludeTransformWhenSpawning_14;
	// System.Boolean Unity.Netcode.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_15;
	// System.Boolean Unity.Netcode.NetworkObject::AutoObjectParentSync
	bool ___AutoObjectParentSync_16;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::Observers
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___Observers_17;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::m_EmptyULongHashSet
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_EmptyULongHashSet_18;
	// System.Int32 Unity.Netcode.NetworkObject::SceneOriginHandle
	int32_t ___SceneOriginHandle_19;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkObject::m_SceneOrigin
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_SceneOrigin_20;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::m_LatestParent
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_LatestParent_21;
	// UnityEngine.Transform Unity.Netcode.NetworkObject::m_CachedParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedParent_22;
	// System.Boolean Unity.Netcode.NetworkObject::m_CachedWorldPositionStays
	bool ___m_CachedWorldPositionStays_23;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour> Unity.Netcode.NetworkObject::m_ChildNetworkBehaviours
	List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* ___m_ChildNetworkBehaviours_25;
};

struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_StaticFields
{
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkObject::OrphanChildren
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___OrphanChildren_24;
};

// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkTransport::NetworkMetrics
	RuntimeObject* ___NetworkMetrics_4;
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___OnTransportEvent_5;
};

// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SwipeDetection::minimumDistance
	float ___minimumDistance_4;
	// System.Single SwipeDetection::maximumTime
	float ___maximumTime_5;
	// InputManager SwipeDetection::inputManager
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ___inputManager_6;
	// UnityEngine.Vector2 SwipeDetection::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_7;
	// System.Single SwipeDetection::startTime
	float ___startTime_8;
	// UnityEngine.Vector2 SwipeDetection::endPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endPosition_9;
	// System.Single SwipeDetection::endTime
	float ___endTime_10;
};

// Utils
struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597  : public MulticastDelegate_t
{
};

// HelloWorld.HelloWorldPlayer
struct HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3> HelloWorld.HelloWorldPlayer::Position
	NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* ___Position_26;
	// Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes> HelloWorld.HelloWorldPlayer::mode
	NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB* ___mode_27;
};

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677  : public Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF
{
	// InputManager/StartTouch InputManager::OnStartTouch
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___OnStartTouch_5;
	// InputManager/StartTouch InputManager::OnEndTouch
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___OnEndTouch_6;
	// TouchControls InputManager::touchControls
	TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___touchControls_7;
	// UnityEngine.Camera InputManager::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeSerializer_UnmanagedByMemcpy<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeEqualityChecker_UnmanagedIEquatable<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeSerializer_FixedString<Unity.Collections.FixedString128Bytes>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeEqualityChecker_UnmanagedIEquatable<Unity.Collections.FixedString128Bytes>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::.ctor(T,Unity.Netcode.NetworkVariableReadPermission,Unity.Netcode.NetworkVariableWritePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9_gshared (NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, int32_t ___readPerm1, int32_t ___writePerm2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes>::.ctor(T,Unity.Netcode.NetworkVariableReadPermission,Unity.Netcode.NetworkVariableWritePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71_gshared (NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value0, int32_t ___readPerm1, int32_t ___writePerm2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteUnmanagedSafe<UnityEngine.Vector3>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadUnmanagedSafe<UnityEngine.Vector3>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;

// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeSerializer_UnmanagedByMemcpy<UnityEngine.Vector3>()
inline void NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeEqualityChecker_UnmanagedIEquatable<UnityEngine.Vector3>()
inline void NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeSerializer_FixedString<Unity.Collections.FixedString128Bytes>()
inline void NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableSerializationTypes::InitializeEqualityChecker_UnmanagedIEquatable<Unity.Collections.FixedString128Bytes>()
inline void NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B_gshared)(method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void TouchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls__ctor_m22C3B30221CD426DF6C3396A0050B2DE326F61C6 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void TouchControls::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_Enable_m6F14E0C204FB26B59CC6A1A31051BCDD6FC53484 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) ;
// System.Void TouchControls::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_Disable_m8265F03AF84701CA1931BDEE1733DF3E6D396102 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) ;
// TouchControls/TouchActions TouchControls::get_Touch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction TouchControls/TouchActions::get_PrimaryContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction TouchControls/TouchActions::get_PrimaryPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Utils::ScreenToWorld(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_ScreenToWorld_m2544649E834FCA5D814FE300934D778A9621816A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_startTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_startTime_m6F0F9C2CF03CDEFFE81F2E54636A465221AFD39B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void InputManager/StartTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_time_m411EBA76522616EF38FD78341B246EEF94908050 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void Singleton`1<InputManager>::.ctor()
inline void Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C (Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void InputManager::StartTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_StartTouchPrimary_m50149D9CF1159A34374E58F53EED4FDAA32ECC7F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) ;
// System.Void InputManager::EndTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_EndTouchPrimary_mF295B8BC8DD4157F2024A73A5AED591474F595E2 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Unity.Netcode.NetworkManager>()
inline NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* Component_GetComponentInParent_TisNetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_m87AB6AF786A4516B4816CB71E131D3FD49CC0439 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> NetworkCommandLine::GetCommandlineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NetworkCommandLine_GetCommandlineArgs_mC67400DD6EE3B5CFB8457861640864D2E9243533 (NetworkCommandLine_tF5C45447B4DA606CA2A14258379513EDEC2F41FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_StartServer_mAA6814A393D50A8D2589D27445CAEBD3898E7A16 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::StartHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_StartHost_mC5360D94182499D592AB3E51D31E9D662764F31F (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_StartClient_mD484EFEF39F84707CAAC431B658BC79721AB6ACD (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D (const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T Singleton`1<InputManager>::get_Instance()
inline InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264 (const RuntimeMethod* method)
{
	return ((  InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mA9E44B4C4951B6DC9272B74375A0AA8C1B9932A0_gshared)(method);
}
// System.Void InputManager/StartTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InputManager::add_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::add_OnEndTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnEndTouch_mB7048A9F0C8FFC2EF15C3805DEB76743D06CA99D (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::remove_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::remove_OnEndTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnEndTouch_m45C054AB8C1D788C6FDD6BCE2E33C268C264C718 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) ;
// System.Void SwipeDetection::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset TouchControls::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> TouchControls::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchControls_GetEnumerator_m21353231847E5EB3CE699E72101C52F7220783C5 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void TouchControls/TouchActions::.ctor(TouchControls)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchActions__ctor_m6BCA669DBB828942C0824ACB71F38628A9433113_inline (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___wrapper0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap TouchControls/TouchActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void TouchControls/TouchActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Enable_mAB3ECA98FDA49C10415EBB13E4B309AEA8062AE1 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void TouchControls/TouchActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Disable_m97D643D5BE25BC964121E026EE34CFD1FF6DA97F (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean TouchControls/TouchActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchActions_get_enabled_m3A124CAB089D8027BE57DD8FF156F839A17C41CD (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void TouchControls/TouchActions::SetCallbacks(TouchControls/ITouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_SetCallbacks_m23995617B15A1621B59ECF9C778736BE909AE119 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldManager::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_DetectSwipe_m54B94362B2404FF33EB0C01C6B62FC000B8A8DDD (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldManager::setVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_setVectors_m5BF1A81D59D905298DD52A1C599795DC57C77E38 (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldManager::StartButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_StartButtons_m546E9F877E8A2EB8B21B33B8B4078FD8E58958A0 (const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldManager::StatusLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_StatusLabels_m9D22752DC9B5D49A15EAB19DB5DD873D367A3A98 (const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldManager::SubmitNewPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_SubmitNewPosition_mDC80549C9A70829010F32F4D246756B1F04E74DC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.NetworkManager::get_ConnectedClientsIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_ConnectedClientsIds_mAC05454DCEFB717F590830D86FFA869E7201231A (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::get_SpawnManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* NetworkManager_get_SpawnManager_mAE49738D7E37718DABC59F9BBF31E985B7D438F8_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkObject Unity.Netcode.NetworkSpawnManager::GetPlayerNetworkObject(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* NetworkSpawnManager_GetPlayerNetworkObject_mDB5CB1D2ADCCDA0ECFB584EC4F2A974A4351E183 (NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* __this, uint64_t ___clientId0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HelloWorld.HelloWorldPlayer>()
inline HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HelloWorld.HelloWorldPlayer::setRock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_setRock_m1E6FD10D5BF98D7380B3FBE07A946395917FB9A4 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldPlayer::ControlMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_ControlMove_m3B81E5297B30E35F2D2FB1422573B5337D33EF00 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVelocity0, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkObject Unity.Netcode.NetworkSpawnManager::GetLocalPlayerObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* NetworkSpawnManager_GetLocalPlayerObject_m2920A5D06E2917EAD843107BDDDFB76662D644B4 (NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldPlayer::RandomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_RandomMove_mFA18E5218CCDCD6FD50844F010475B0E54AB4CFA (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) ;
// Unity.Collections.FixedString128Bytes Unity.Collections.FixedString128Bytes::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E (String_t* ___b0, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldPlayer::SubmitModeRequestServerRpc(Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_SubmitModeRequestServerRpc_mA83BC29F028257AB45B83FC71C62FF56F2887070 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldPlayer::SubmitMoveRequestServerRpc(UnityEngine.Vector3,Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_SubmitMoveRequestServerRpc_m9EAEE66BA7B084429955FD96E6A9060EB6F12FFF (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVelocity0, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 HelloWorld.HelloWorldPlayer::GetRandomPositionOnPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HelloWorldPlayer_GetRandomPositionOnPlane_mCAA69916BDCE5DD72F53B27AC1FFC796DD2D4146 (const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldPlayer::SubmitPositionRequestServerRpc(Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_SubmitPositionRequestServerRpc_mC26ED006B1BD2ED74A497A9FAC6034AE09B96585 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams0, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkBehaviour::get_NetworkManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkBehaviour::get_OwnerClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Unity.Netcode.FastBufferWriter Unity.Netcode.NetworkBehaviour::__beginSendServerRpc(System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, uint32_t ___rpcMethodId0, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___serverRpcParams1, int32_t ___rpcDelivery2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkBehaviour::__endSendServerRpc(Unity.Netcode.FastBufferWriter&,System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___bufferWriter0, uint32_t ___rpcMethodId1, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___serverRpcParams2, int32_t ___rpcDelivery3, const RuntimeMethod* method) ;
// Unity.Netcode.FastBufferWriter Unity.Netcode.NetworkBehaviour::__beginSendClientRpc(System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC NetworkBehaviour___beginSendClientRpc_mCED583D0CFBAC5802EFF7000B7210FDB64421582 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, uint32_t ___rpcMethodId0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, int32_t ___rpcDelivery2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkBehaviour::__endSendClientRpc(Unity.Netcode.FastBufferWriter&,System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___endSendClientRpc_mAD4E56593D94018049AE53018F989AE61F8C4C4E (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___bufferWriter0, uint32_t ___rpcMethodId1, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams2, int32_t ___rpcDelivery3, const RuntimeMethod* method) ;
// System.Void HelloWorld.HelloWorldPlayer::TestClientRpc(Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_TestClientRpc_mC51BE2C0950FDCE8E77839A35AD6966023785EFD (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___rpcParams0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe(UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_mA82B8C332BFA1FA2C68EF246D68A035DE2A0A5BF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::.ctor(T,Unity.Netcode.NetworkVariableReadPermission,Unity.Netcode.NetworkVariableWritePermission)
inline void NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9 (NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, int32_t ___readPerm1, int32_t ___writePerm2, const RuntimeMethod* method)
{
	((  void (*) (NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, int32_t, const RuntimeMethod*))NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9_gshared)(__this, ___value0, ___readPerm1, ___writePerm2, method);
}
// System.Void Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes>::.ctor(T,Unity.Netcode.NetworkVariableReadPermission,Unity.Netcode.NetworkVariableWritePermission)
inline void NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71 (NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB* __this, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value0, int32_t ___readPerm1, int32_t ___writePerm2, const RuntimeMethod* method)
{
	((  void (*) (NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB*, FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952, int32_t, int32_t, const RuntimeMethod*))NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71_gshared)(__this, ___value0, ___readPerm1, ___writePerm2, method);
}
// System.Void Unity.Netcode.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6 (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>::Add(TKey,TValue)
inline void Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877 (Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* __this, uint32_t ___key0, RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD*, uint32_t, RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*, const RuntimeMethod*))Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe(UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_m0AC55FCF223F84F22F6C9B76AFA340E6591DE59E_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteUnmanagedSafe<UnityEngine.Vector3>(T&)
inline void FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadUnmanagedSafe<UnityEngine.Vector3>(T&)
inline void FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_m75D71476E2FF3F5ABB7BE2ADBF723C07E20A2C63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3(NetworkVariableSerializationTypes_InitializeSerializer_UnmanagedByMemcpy_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mBE7B761593CF31661A14675C28E1E10779E134A3_RuntimeMethod_var);
		NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D(NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD8946930F47ABF5E84B0C7A9915A64BFA28E6B9D_RuntimeMethod_var);
		NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951(NetworkVariableSerializationTypes_InitializeSerializer_FixedString_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m09D9957B00D48E4E2711006C28996E3BFE96F951_RuntimeMethod_var);
		NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B(NetworkVariableSerializationTypes_InitializeEqualityChecker_UnmanagedIEquatable_TisFixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952_m4F17BE4559CFD78AC9641457AF7DA258711BFB4B_RuntimeMethod_var);
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
// System.Void InputManager::add_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_0 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_1 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_2 = NULL;
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnStartTouch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = V_0;
		V_1 = L_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)CastclassSealed((RuntimeObject*)L_4, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var));
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724** L_5 = (&__this->___OnStartTouch_5);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_6 = V_2;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_7 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_9 = V_0;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_9) == ((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::remove_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_0 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_1 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_2 = NULL;
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnStartTouch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = V_0;
		V_1 = L_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)CastclassSealed((RuntimeObject*)L_4, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var));
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724** L_5 = (&__this->___OnStartTouch_5);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_6 = V_2;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_7 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_9 = V_0;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_9) == ((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::add_OnEndTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnEndTouch_mB7048A9F0C8FFC2EF15C3805DEB76743D06CA99D (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_0 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_1 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_2 = NULL;
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnEndTouch_6;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = V_0;
		V_1 = L_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)CastclassSealed((RuntimeObject*)L_4, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var));
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724** L_5 = (&__this->___OnEndTouch_6);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_6 = V_2;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_7 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_9 = V_0;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_9) == ((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::remove_OnEndTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnEndTouch_m45C054AB8C1D788C6FDD6BCE2E33C268C264C718 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_0 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_1 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_2 = NULL;
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnEndTouch_6;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = V_0;
		V_1 = L_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)CastclassSealed((RuntimeObject*)L_4, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var));
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724** L_5 = (&__this->___OnEndTouch_6);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_6 = V_2;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_7 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_9 = V_0;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_9) == ((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_mCFCABAA5EC85B074EEBE8095E9139175D6526D9F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchControls = new TouchControls();
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86*)il2cpp_codegen_object_new(TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TouchControls__ctor_m22C3B30221CD426DF6C3396A0050B2DE326F61C6(L_0, NULL);
		__this->___touchControls_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchControls_7), (void*)L_0);
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void InputManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnEnable_m788646F88BA8D47D800F554CCADD096AA02F10F8 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// touchControls.Enable();
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___touchControls_7;
		NullCheck(L_0);
		TouchControls_Enable_m6F14E0C204FB26B59CC6A1A31051BCDD6FC53484(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnDisable_mCDBA1B46CEBA4C1DCA221F2CD193C36BFC35F29C (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// touchControls.Disable();
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___touchControls_7;
		NullCheck(L_0);
		TouchControls_Disable_m8265F03AF84701CA1931BDEE1733DF3E6D396102(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Start_m1C1F4D73A508DB32B5D6E294F12240923279FB10 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CStartU3Eb__13_0_m5F807CBBFECD559C1CF6CAF3DE9F5CDA4A9CAB9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CStartU3Eb__13_1_m4DD13018E2E7463CC9D69177C91825637B777AF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// touchControls.Touch.PrimaryContact.started += ctx => StartTouchPrimary(ctx);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___touchControls_7;
		NullCheck(L_0);
		TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E L_1;
		L_1 = TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)InputManager_U3CStartU3Eb__13_0_m5F807CBBFECD559C1CF6CAF3DE9F5CDA4A9CAB9F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// touchControls.Touch.PrimaryContact.canceled += ctx => EndTouchPrimary(ctx);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_4 = __this->___touchControls_7;
		NullCheck(L_4);
		TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E L_5;
		L_5 = TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)InputManager_U3CStartU3Eb__13_1_m4DD13018E2E7463CC9D69177C91825637B777AF7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void InputManager::StartTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_StartTouchPrimary_m50149D9CF1159A34374E58F53EED4FDAA32ECC7F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OnStartTouch != null) OnStartTouch(Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>()), (float)context.startTime);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnStartTouch_5;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// if (OnStartTouch != null) OnStartTouch(Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>()), (float)context.startTime);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = __this->___OnStartTouch_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___mainCamera_8;
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_3 = __this->___touchControls_7;
		NullCheck(L_3);
		TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E L_4;
		L_4 = TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C(L_3, NULL);
		V_0 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2((&V_0), NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_5, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Utils_ScreenToWorld_m2544649E834FCA5D814FE300934D778A9621816A(L_2, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		double L_10;
		L_10 = CallbackContext_get_startTime_m6F0F9C2CF03CDEFFE81F2E54636A465221AFD39B((&___context0), NULL);
		NullCheck(L_1);
		StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline(L_1, L_9, ((float)L_10), NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void InputManager::EndTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_EndTouchPrimary_mF295B8BC8DD4157F2024A73A5AED591474F595E2 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OnEndTouch != null) OnEndTouch(Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>()), (float)context.time);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnEndTouch_6;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// if (OnEndTouch != null) OnEndTouch(Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>()), (float)context.time);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = __this->___OnEndTouch_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___mainCamera_8;
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_3 = __this->___touchControls_7;
		NullCheck(L_3);
		TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E L_4;
		L_4 = TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C(L_3, NULL);
		V_0 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2((&V_0), NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_5, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Utils_ScreenToWorld_m2544649E834FCA5D814FE300934D778A9621816A(L_2, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		double L_10;
		L_10 = CallbackContext_get_time_m411EBA76522616EF38FD78341B246EEF94908050((&___context0), NULL);
		NullCheck(L_1);
		StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline(L_1, L_9, ((float)L_10), NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 InputManager::PrimaryPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputManager_PrimaryPosition_m90C08E71C1F13DD687B9AE89F03C317BBA0BD3C8 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Utils.ScreenToWorld(mainCamera, touchControls.Touch.PrimaryPosition.ReadValue<Vector2>());
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___mainCamera_8;
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_1 = __this->___touchControls_7;
		NullCheck(L_1);
		TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E L_2;
		L_2 = TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2((&V_0), NULL);
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_3, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Utils_ScreenToWorld_m2544649E834FCA5D814FE300934D778A9621816A(L_0, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m52D2F3B9FA0D50C52BCC92486F49B300E9334C2A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C(__this, Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C_RuntimeMethod_var);
		return;
	}
}
// System.Void InputManager::<Start>b__13_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CStartU3Eb__13_0_m5F807CBBFECD559C1CF6CAF3DE9F5CDA4A9CAB9F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// touchControls.Touch.PrimaryContact.started += ctx => StartTouchPrimary(ctx);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___ctx0;
		InputManager_StartTouchPrimary_m50149D9CF1159A34374E58F53EED4FDAA32ECC7F(__this, L_0, NULL);
		return;
	}
}
// System.Void InputManager::<Start>b__13_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CStartU3Eb__13_1_m4DD13018E2E7463CC9D69177C91825637B777AF7 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// touchControls.Touch.PrimaryContact.canceled += ctx => EndTouchPrimary(ctx);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___ctx0;
		InputManager_EndTouchPrimary_mF295B8BC8DD4157F2024A73A5AED591474F595E2(__this, L_0, NULL);
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
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_Multicast(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* currentDelegate = reinterpret_cast<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenInst(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, ___time1, method);
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenStatic(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, ___time1, method);
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenStaticInvoker(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___time1);
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_ClosedStaticInvoker(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___time1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0, ___time1);

}
// System.Void InputManager/StartTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_Multicast;
}
// System.Void InputManager/StartTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InputManager/StartTouch::BeginInvoke(UnityEngine.Vector2,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartTouch_BeginInvoke_m63CAB0C9F9F368500960E4EF8F795B74BFF6C672 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void InputManager/StartTouch::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch_EndInvoke_m9845B95B0231C49A94C6194C1232E48BE40B1597 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_Multicast(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* currentDelegate = reinterpret_cast<EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenInst(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, ___time1, method);
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenStatic(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, ___time1, method);
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenStaticInvoker(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___time1);
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_ClosedStaticInvoker(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___time1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0, ___time1);

}
// System.Void InputManager/EndTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch__ctor_mD21EDADCF61BDC23ADF93F9F310D782576FB8FCB (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_Multicast;
}
// System.Void InputManager/EndTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756 (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InputManager/EndTouch::BeginInvoke(UnityEngine.Vector2,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndTouch_BeginInvoke_mBCD326EAD0AD68B7C4B24D6982A5B27E2EF36917 (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void InputManager/EndTouch::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch_EndInvoke_mBC2F9BFC969713DCF0FA76665A7F779734A30AF2 (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetworkCommandLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCommandLine_Start_m1C9C01A2B95D3C3883C3ABFA894FC1391C2BE571 (NetworkCommandLine_tF5C45447B4DA606CA2A14258379513EDEC2F41FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisNetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_m87AB6AF786A4516B4816CB71E131D3FD49CC0439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC75C9BA406A69C0311880E2E185034D5342F3CBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// netManager = GetComponentInParent<NetworkManager>();
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = Component_GetComponentInParent_TisNetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_m87AB6AF786A4516B4816CB71E131D3FD49CC0439(__this, Component_GetComponentInParent_TisNetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_m87AB6AF786A4516B4816CB71E131D3FD49CC0439_RuntimeMethod_var);
		__this->___netManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___netManager_4), (void*)L_0);
		// if (Application.isEditor) return;
		bool L_1;
		L_1 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (Application.isEditor) return;
		return;
	}

IL_0014:
	{
		// var args = GetCommandlineArgs();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = NetworkCommandLine_GetCommandlineArgs_mC67400DD6EE3B5CFB8457861640864D2E9243533(__this, NULL);
		// if (args.TryGetValue("-mode", out string mode))
		NullCheck(L_2);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_2, _stringLiteralC75C9BA406A69C0311880E2E185034D5342F3CBA, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral2AD2D134871309DC88A3988F159A52F91A6CDB4C, NULL);
		if (L_5)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F, NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846, NULL);
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		return;
	}

IL_0050:
	{
		// netManager.StartServer();
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = __this->___netManager_4;
		NullCheck(L_10);
		bool L_11;
		L_11 = NetworkManager_StartServer_mAA6814A393D50A8D2589D27445CAEBD3898E7A16(L_10, NULL);
		// break;
		return;
	}

IL_005d:
	{
		// netManager.StartHost();
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = __this->___netManager_4;
		NullCheck(L_12);
		bool L_13;
		L_13 = NetworkManager_StartHost_mC5360D94182499D592AB3E51D31E9D662764F31F(L_12, NULL);
		// break;
		return;
	}

IL_006a:
	{
		// netManager.StartClient();
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = __this->___netManager_4;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_StartClient_mD484EFEF39F84707CAAC431B658BC79721AB6ACD(L_14, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> NetworkCommandLine::GetCommandlineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NetworkCommandLine_GetCommandlineArgs_mC67400DD6EE3B5CFB8457861640864D2E9243533 (NetworkCommandLine_tF5C45447B4DA606CA2A14258379513EDEC2F41FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B9_0 = NULL;
	{
		// Dictionary<string, string> argDictionary = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// var args = System.Environment.GetCommandLineArgs();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		V_1 = L_1;
		// for (int i = 0; i < args.Length; ++i)
		V_2 = 0;
		goto IL_0063;
	}

IL_0010:
	{
		// var arg = args[i].ToLower();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
		V_3 = L_6;
		// if (arg.StartsWith("-"))
		String_t* L_7 = V_3;
		NullCheck(L_7);
		bool L_8;
		L_8 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_7, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// var value = i < args.Length - 1 ? args[i + 1].ToLower() : null;
		int32_t L_9 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1)))))
		{
			goto IL_0031;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_003b;
	}

IL_0031:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_14, NULL);
		G_B5_0 = L_15;
	}

IL_003b:
	{
		V_4 = G_B5_0;
		// value = (value?.StartsWith("-") ?? false) ? null : value;
		String_t* L_16 = V_4;
		if (!L_16)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_17 = V_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_17, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (L_18)
		{
			goto IL_0053;
		}
	}

IL_004f:
	{
		String_t* L_19 = V_4;
		G_B9_0 = L_19;
		goto IL_0054;
	}

IL_0053:
	{
		G_B9_0 = ((String_t*)(NULL));
	}

IL_0054:
	{
		V_4 = G_B9_0;
		// argDictionary.Add(arg, value);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = V_0;
		String_t* L_21 = V_3;
		String_t* L_22 = V_4;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, L_21, L_22, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_005f:
	{
		// for (int i = 0; i < args.Length; ++i)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < args.Length; ++i)
		int32_t L_24 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// return argDictionary;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = V_0;
		return L_26;
	}
}
// System.Void NetworkCommandLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCommandLine__ctor_mB0850FADCB0BFF0F89326CB7881B1FB117F60259 (NetworkCommandLine_tF5C45447B4DA606CA2A14258379513EDEC2F41FE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SwipeDetection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Awake_m177BA109B7EF174B364372DFA77A3B5BB397421B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager = InputManager.Instance;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0;
		L_0 = Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264(Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264_RuntimeMethod_var);
		__this->___inputManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputManager_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SwipeDetection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_OnEnable_m364402650A1F7E61CE34DE2744ADE62081EFB9C5 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager.OnStartTouch += SwipeStart;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_6;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_1, __this, (intptr_t)((void*)SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200(L_0, L_1, NULL);
		// inputManager.OnEndTouch += SwipeEnd;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_2 = __this->___inputManager_6;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_3, __this, (intptr_t)((void*)SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputManager_add_OnEndTouch_mB7048A9F0C8FFC2EF15C3805DEB76743D06CA99D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_OnDisable_mC5672B43ABB160AE8632DD8E87530684ACB507CD (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager.OnStartTouch -= SwipeStart;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_6;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_1, __this, (intptr_t)((void*)SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267(L_0, L_1, NULL);
		// inputManager.OnEndTouch -= SwipeEnd;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_2 = __this->___inputManager_6;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_3, __this, (intptr_t)((void*)SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputManager_remove_OnEndTouch_m45C054AB8C1D788C6FDD6BCE2E33C268C264C718(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::SwipeStart(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	{
		// startPosition = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		__this->___startPosition_7 = L_0;
		// startTime = time;
		float L_1 = ___time1;
		__this->___startTime_8 = L_1;
		// }
		return;
	}
}
// System.Void SwipeDetection::SwipeEnd(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	{
		// endPosition = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		__this->___endPosition_9 = L_0;
		// endTime = time;
		float L_1 = ___time1;
		__this->___endTime_10 = L_1;
		// DetectSwipe();
		SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E(__this, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector3.Distance(startPosition, endPosition) >= minimumDistance &&
		//     (endTime - startTime) <= maximumTime) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___startPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___endPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		float L_5 = __this->___minimumDistance_4;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = __this->___endTime_10;
		float L_7 = __this->___startTime_8;
		float L_8 = __this->___maximumTime_5;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_6, L_7))) <= ((float)L_8))))
		{
			goto IL_005d;
		}
	}
	{
		// Debug.DrawLine(startPosition, endPosition, Color.red, 5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___startPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___endPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_10, L_12, L_13, (5.0f), NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void SwipeDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection__ctor_m57902E84B7829542CBF0214C71B3F7816129BD9B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// private float minimumDistance = .2f;
		__this->___minimumDistance_4 = (0.200000003f);
		// private float maximumTime = 1f;
		__this->___maximumTime_5 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.InputSystem.InputActionAsset TouchControls::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TouchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls__ctor_m22C3B30221CD426DF6C3396A0050B2DE326F61C6 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24830A0E81B87E9A69EBF89EB5EED52F1C1404E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB867965FD962F18AFC6C6FF185255C7F50878999);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3391253AE1076B748993B88770C68B98D227011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @TouchControls()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""TouchControls"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Touch"",
		//             ""id"": ""5131c292-a5ca-4627-a2c0-27f347fffcce"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""PrimaryContact"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""0d0fbc42-6e09-48c8-9ead-fd7634d43b10"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""PrimaryPosition"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""8d924435-ae73-4058-8947-0d26385023d1"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""37d7706e-24cd-4714-b9d6-02ab8558c1d2"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/press"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""PrimaryContact"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""fb19b6bc-18ae-458c-919f-5a499b57a66a"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""PrimaryPosition"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_m8F7212EB013EF4D853836228D393C0D15BD0433C(_stringLiteral24830A0E81B87E9A69EBF89EB5EED52F1C1404E5, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Touch = asset.FindActionMap("Touch", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7, (bool)1, NULL);
		__this->___m_Touch_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Touch_1), (void*)L_2);
		// m_Touch_PrimaryContact = m_Touch.FindAction("PrimaryContact", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Touch_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteralF3391253AE1076B748993B88770C68B98D227011, (bool)1, NULL);
		__this->___m_Touch_PrimaryContact_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Touch_PrimaryContact_3), (void*)L_4);
		// m_Touch_PrimaryPosition = m_Touch.FindAction("PrimaryPosition", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_Touch_1;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteralB867965FD962F18AFC6C6FF185255C7F50878999, (bool)1, NULL);
		__this->___m_Touch_PrimaryPosition_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Touch_PrimaryPosition_4), (void*)L_6);
		// }
		return;
	}
}
// System.Void TouchControls::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_Dispose_mD5F924DC257FDB889C0EA5809786DBEFF5D9D2ED (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> TouchControls::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 TouchControls_get_bindingMask_mDFEBEDC9D20A49883806026AE440FFD2D91745A5 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void TouchControls::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_set_bindingMask_m532127739B6C58FBF82DE697B80F2A37D2023209 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> TouchControls::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D TouchControls_get_devices_m12E89FCC684F40EA443226C52ADC5ABEC12549B1 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void TouchControls::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_set_devices_m3665B6ECDFB143F8B95B771898B66DBE0FB5B8AB (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> TouchControls::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 TouchControls_get_controlSchemes_m4D6062F683FF562FD4464C0FB3EE681029ED120B (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TouchControls::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchControls_Contains_m3D5FFE001245613E4CEF96AEFC9A9000807ADDA8 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> TouchControls::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchControls_GetEnumerator_m21353231847E5EB3CE699E72101C52F7220783C5 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator TouchControls::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchControls_System_Collections_IEnumerable_GetEnumerator_mFDCBACAE22242AA8AA18A87583AD5C1DDDE1D3CC (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = TouchControls_GetEnumerator_m21353231847E5EB3CE699E72101C52F7220783C5(__this, NULL);
		return L_0;
	}
}
// System.Void TouchControls::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_Enable_m6F14E0C204FB26B59CC6A1A31051BCDD6FC53484 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void TouchControls::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchControls_Disable_m8265F03AF84701CA1931BDEE1733DF3E6D396102 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> TouchControls::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchControls_get_bindings_m66CA61D1F136F5DC01263BB9E3D09780A5AC99B5 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction TouchControls::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchControls_FindAction_m3FBDE54BC467AA12FA24BEAA2A4FABC28AE04D89 (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 TouchControls::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TouchControls_FindBinding_m70AB45576A49532ABD92085F5F1464FEB9A5824B (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// TouchControls/TouchActions TouchControls::get_Touch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E TouchControls_get_Touch_m1BA51F4BD4B4620409C6E88C3499E375B0652B6C (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// public TouchActions @Touch => new TouchActions(this);
		TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E L_0;
		memset((&L_0), 0, sizeof(L_0));
		TouchActions__ctor_m6BCA669DBB828942C0824ACB71F38628A9433113_inline((&L_0), __this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshal_pinvoke(const TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E& unmarshaled, TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshal_pinvoke_back(const TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_pinvoke& marshaled, TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshal_pinvoke_cleanup(TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshal_com(const TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E& unmarshaled, TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshal_com_back(const TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_com& marshaled, TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TouchControls/TouchActions
IL2CPP_EXTERN_C void TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshal_com_cleanup(TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E_marshaled_com& marshaled)
{
}
// System.Void TouchControls/TouchActions::.ctor(TouchControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions__ctor_m6BCA669DBB828942C0824ACB71F38628A9433113 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions__ctor_m6BCA669DBB828942C0824ACB71F38628A9433113_AdjustorThunk (RuntimeObject* __this, TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___wrapper0, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	TouchActions__ctor_m6BCA669DBB828942C0824ACB71F38628A9433113_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction TouchControls/TouchActions::get_PrimaryContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @PrimaryContact => m_Wrapper.m_Touch_PrimaryContact;
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Touch_PrimaryContact_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction TouchControls/TouchActions::get_PrimaryPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @PrimaryPosition => m_Wrapper.m_Touch_PrimaryPosition;
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Touch_PrimaryPosition_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap TouchControls/TouchActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Touch; }
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Touch_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TouchControls/TouchActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Enable_mAB3ECA98FDA49C10415EBB13E4B309AEA8062AE1 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_Enable_mAB3ECA98FDA49C10415EBB13E4B309AEA8062AE1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	TouchActions_Enable_mAB3ECA98FDA49C10415EBB13E4B309AEA8062AE1(_thisAdjusted, method);
}
// System.Void TouchControls/TouchActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Disable_m97D643D5BE25BC964121E026EE34CFD1FF6DA97F (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_Disable_m97D643D5BE25BC964121E026EE34CFD1FF6DA97F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	TouchActions_Disable_m97D643D5BE25BC964121E026EE34CFD1FF6DA97F(_thisAdjusted, method);
}
// System.Boolean TouchControls/TouchActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchActions_get_enabled_m3A124CAB089D8027BE57DD8FF156F839A17C41CD (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TouchActions_get_enabled_m3A124CAB089D8027BE57DD8FF156F839A17C41CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TouchActions_get_enabled_m3A124CAB089D8027BE57DD8FF156F839A17C41CD(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap TouchControls/TouchActions::op_Implicit(TouchControls/TouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_op_Implicit_m481C94A6295124468B87CF0659DF284D31740F8C (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E ___set0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator InputActionMap(TouchActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_m343CEC0BD97FDBFABE30177BF0526B2951B7C9CE((&___set0), NULL);
		return L_0;
	}
}
// System.Void TouchControls/TouchActions::SetCallbacks(TouchControls/ITouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_SetCallbacks_m23995617B15A1621B59ECF9C778736BE909AE119 (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_TouchActionsCallbackInterface != null)
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_TouchActionsCallbackInterface_2;
		if (!L_1)
		{
			goto IL_00dc;
		}
	}
	{
		// @PrimaryContact.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(__this, NULL);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_3 = __this->___m_Wrapper_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_TouchActionsCallbackInterface_2;
		RuntimeObject* L_5 = L_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, L_5, (intptr_t)((void*)GetInterfaceMethodInfo(L_5, 0, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_6, NULL);
		// @PrimaryContact.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(__this, NULL);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_8 = __this->___m_Wrapper_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___m_TouchActionsCallbackInterface_2;
		RuntimeObject* L_10 = L_9;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, L_10, (intptr_t)((void*)GetInterfaceMethodInfo(L_10, 0, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_7);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_7, L_11, NULL);
		// @PrimaryContact.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(__this, NULL);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_13 = __this->___m_Wrapper_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_TouchActionsCallbackInterface_2;
		RuntimeObject* L_15 = L_14;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, L_15, (intptr_t)((void*)GetInterfaceMethodInfo(L_15, 0, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_12);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_12, L_16, NULL);
		// @PrimaryPosition.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17;
		L_17 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(__this, NULL);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_18 = __this->___m_Wrapper_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___m_TouchActionsCallbackInterface_2;
		RuntimeObject* L_20 = L_19;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_21 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_21, L_20, (intptr_t)((void*)GetInterfaceMethodInfo(L_20, 1, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_17, L_21, NULL);
		// @PrimaryPosition.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(__this, NULL);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_23 = __this->___m_Wrapper_0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___m_TouchActionsCallbackInterface_2;
		RuntimeObject* L_25 = L_24;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_26 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_26, L_25, (intptr_t)((void*)GetInterfaceMethodInfo(L_25, 1, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_22);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_22, L_26, NULL);
		// @PrimaryPosition.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(__this, NULL);
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_28 = __this->___m_Wrapper_0;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___m_TouchActionsCallbackInterface_2;
		RuntimeObject* L_30 = L_29;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_31, L_30, (intptr_t)((void*)GetInterfaceMethodInfo(L_30, 1, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_27);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_27, L_31, NULL);
	}

IL_00dc:
	{
		// m_Wrapper.m_TouchActionsCallbackInterface = instance;
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_32 = __this->___m_Wrapper_0;
		RuntimeObject* L_33 = ___instance0;
		NullCheck(L_32);
		L_32->___m_TouchActionsCallbackInterface_2 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___m_TouchActionsCallbackInterface_2), (void*)L_33);
		// if (instance != null)
		RuntimeObject* L_34 = ___instance0;
		if (!L_34)
		{
			goto IL_017e;
		}
	}
	{
		// @PrimaryContact.started += instance.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_35;
		L_35 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(__this, NULL);
		RuntimeObject* L_36 = ___instance0;
		RuntimeObject* L_37 = L_36;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_38 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_38, L_37, (intptr_t)((void*)GetInterfaceMethodInfo(L_37, 0, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_35);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_35, L_38, NULL);
		// @PrimaryContact.performed += instance.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39;
		L_39 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(__this, NULL);
		RuntimeObject* L_40 = ___instance0;
		RuntimeObject* L_41 = L_40;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, L_41, (intptr_t)((void*)GetInterfaceMethodInfo(L_41, 0, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_39);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_39, L_42, NULL);
		// @PrimaryContact.canceled += instance.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_43;
		L_43 = TouchActions_get_PrimaryContact_m5804F2BD428E7B35C25A319DEC2CE7DC5A3D8539(__this, NULL);
		RuntimeObject* L_44 = ___instance0;
		RuntimeObject* L_45 = L_44;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_46 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_46, L_45, (intptr_t)((void*)GetInterfaceMethodInfo(L_45, 0, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_43);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_43, L_46, NULL);
		// @PrimaryPosition.started += instance.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_47;
		L_47 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(__this, NULL);
		RuntimeObject* L_48 = ___instance0;
		RuntimeObject* L_49 = L_48;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_50 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_50, L_49, (intptr_t)((void*)GetInterfaceMethodInfo(L_49, 1, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_47);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_47, L_50, NULL);
		// @PrimaryPosition.performed += instance.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_51;
		L_51 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(__this, NULL);
		RuntimeObject* L_52 = ___instance0;
		RuntimeObject* L_53 = L_52;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_54 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_54, L_53, (intptr_t)((void*)GetInterfaceMethodInfo(L_53, 1, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_51);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_51, L_54, NULL);
		// @PrimaryPosition.canceled += instance.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_55;
		L_55 = TouchActions_get_PrimaryPosition_m1A22A7640F0C888448401EC9F7443514049733C2(__this, NULL);
		RuntimeObject* L_56 = ___instance0;
		RuntimeObject* L_57 = L_56;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_58 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_58, L_57, (intptr_t)((void*)GetInterfaceMethodInfo(L_57, 1, ITouchActions_t0BA207AD1FC69BB3175896F6EE34DD8CA76BCABD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_55);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_55, L_58, NULL);
	}

IL_017e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_SetCallbacks_m23995617B15A1621B59ECF9C778736BE909AE119_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E*>(__this + _offset);
	TouchActions_SetCallbacks_m23995617B15A1621B59ECF9C778736BE909AE119(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Utils::ScreenToWorld(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_ScreenToWorld_m2544649E834FCA5D814FE300934D778A9621816A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	{
		// position.z = camera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_0, NULL);
		(&___position1)->___z_4 = L_1;
		// return camera.ScreenToWorldPoint(position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m419277C5F83D8F73636DE513598E4A5EF9C85A11 (Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void HelloWorld.HelloWorldManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_Awake_m69F1DFD7B809327F703927C18C2CD03096091BAC (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager = InputManager.Instance;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0;
		L_0 = Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264(Singleton_1_get_Instance_mCB55E3DB3547BCD3A3F536C700CA01E484224264_RuntimeMethod_var);
		__this->___inputManager_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputManager_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_OnEnable_m8D39702A636E86A396CB34AF329849A729070C9F (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_SwipeEnd_mF36DD2665C1C82394F8B93ADC54EE8B267C8C4F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_SwipeStart_m2AF7ED57CAD82BB1FDFD35B4DA774CC62D5FAA31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager.OnStartTouch += SwipeStart;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_11;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_1, __this, (intptr_t)((void*)HelloWorldManager_SwipeStart_m2AF7ED57CAD82BB1FDFD35B4DA774CC62D5FAA31_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200(L_0, L_1, NULL);
		// inputManager.OnEndTouch += SwipeEnd;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_2 = __this->___inputManager_11;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_3, __this, (intptr_t)((void*)HelloWorldManager_SwipeEnd_mF36DD2665C1C82394F8B93ADC54EE8B267C8C4F1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputManager_add_OnEndTouch_mB7048A9F0C8FFC2EF15C3805DEB76743D06CA99D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_OnDisable_m2CDF3D3890EAE7C6D33EC6C40F0A015D8EAA2320 (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_SwipeEnd_mF36DD2665C1C82394F8B93ADC54EE8B267C8C4F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_SwipeStart_m2AF7ED57CAD82BB1FDFD35B4DA774CC62D5FAA31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager.OnStartTouch -= SwipeStart;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_11;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_1, __this, (intptr_t)((void*)HelloWorldManager_SwipeStart_m2AF7ED57CAD82BB1FDFD35B4DA774CC62D5FAA31_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267(L_0, L_1, NULL);
		// inputManager.OnEndTouch -= SwipeEnd;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_2 = __this->___inputManager_11;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_3, __this, (intptr_t)((void*)HelloWorldManager_SwipeEnd_mF36DD2665C1C82394F8B93ADC54EE8B267C8C4F1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputManager_remove_OnEndTouch_m45C054AB8C1D788C6FDD6BCE2E33C268C264C718(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::SwipeStart(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_SwipeStart_m2AF7ED57CAD82BB1FDFD35B4DA774CC62D5FAA31 (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	{
		// startPosition = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		__this->___startPosition_12 = L_0;
		// startTime = time;
		float L_1 = ___time1;
		__this->___startTime_13 = L_1;
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::SwipeEnd(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_SwipeEnd_mF36DD2665C1C82394F8B93ADC54EE8B267C8C4F1 (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	{
		// endPosition = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		__this->___endPosition_14 = L_0;
		// endTime = time;
		float L_1 = ___time1;
		__this->___endTime_15 = L_1;
		// DetectSwipe();
		HelloWorldManager_DetectSwipe_m54B94362B2404FF33EB0C01C6B62FC000B8A8DDD(__this, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_DetectSwipe_m54B94362B2404FF33EB0C01C6B62FC000B8A8DDD (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Vector3.Distance(startPosition, endPosition) >= minimumDistance &&
		//     (endTime - startTime) <= maximumTime) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___startPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___endPosition_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		float L_5 = __this->___minimumDistance_9;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = __this->___endTime_15;
		float L_7 = __this->___startTime_13;
		float L_8 = __this->___maximumTime_10;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_6, L_7))) <= ((float)L_8))))
		{
			goto IL_005d;
		}
	}
	{
		// Debug.DrawLine(startPosition, endPosition, Color.red, 5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___startPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___endPosition_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_10, L_12, L_13, (5.0f), NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::setVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_setVectors_m5BF1A81D59D905298DD52A1C599795DC57C77E38 (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lvelocity = new Vector3(-3f, 1f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (-3.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		((HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields*)il2cpp_codegen_static_fields_for(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var))->___lvelocity_5 = L_0;
		// rvelocity = new Vector3(3f, 1f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (3.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields*)il2cpp_codegen_static_fields_for(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var))->___rvelocity_6 = L_1;
		// uvelocity = new Vector3(0f, 1f, 3f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (1.0f), (3.0f), /*hidden argument*/NULL);
		((HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields*)il2cpp_codegen_static_fields_for(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var))->___uvelocity_7 = L_2;
		// dvelocity = new Vector3(0f, 1f, -3f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (1.0f), (-3.0f), /*hidden argument*/NULL);
		((HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields*)il2cpp_codegen_static_fields_for(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var))->___dvelocity_8 = L_3;
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_OnGUI_mB7C1E7659DA2581145860A9699B422266F9DEB7A (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setVectors();
		HelloWorldManager_setVectors_m5BF1A81D59D905298DD52A1C599795DC57C77E38(__this, NULL);
		// GUILayout.BeginArea(new Rect(10, 10, 300, 300));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (10.0f), (10.0f), (300.0f), (300.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_0, NULL);
		// if (!NetworkManager.Singleton.IsClient && !NetworkManager.Singleton.IsServer)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3;
		L_3 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		// StartButtons();
		il2cpp_codegen_runtime_class_init_inline(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		HelloWorldManager_StartButtons_m546E9F877E8A2EB8B21B33B8B4078FD8E58958A0(NULL);
		goto IL_004d;
	}

IL_0043:
	{
		// StatusLabels();
		il2cpp_codegen_runtime_class_init_inline(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		HelloWorldManager_StatusLabels_m9D22752DC9B5D49A15EAB19DB5DD873D367A3A98(NULL);
		// SubmitNewPosition();
		HelloWorldManager_SubmitNewPosition_mDC80549C9A70829010F32F4D246756B1F04E74DC(NULL);
	}

IL_004d:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::StartButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_StartButtons_m546E9F877E8A2EB8B21B33B8B4078FD8E58958A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691869D3C717D0781EDF4DB123CF1596C1975A8A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUILayout.Button("Host")) NetworkManager.Singleton.StartHost();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0;
		L_0 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_1;
		L_1 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3, L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (GUILayout.Button("Host")) NetworkManager.Singleton.StartHost();
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2;
		L_2 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_StartHost_mC5360D94182499D592AB3E51D31E9D662764F31F(L_2, NULL);
	}

IL_001c:
	{
		// if (GUILayout.Button("Client")) NetworkManager.Singleton.StartClient();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4;
		L_4 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_5;
		L_5 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral691869D3C717D0781EDF4DB123CF1596C1975A8A, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// if (GUILayout.Button("Client")) NetworkManager.Singleton.StartClient();
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_6;
		L_6 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkManager_StartClient_mD484EFEF39F84707CAAC431B658BC79721AB6ACD(L_6, NULL);
	}

IL_0038:
	{
		// if (GUILayout.Button("Server")) NetworkManager.Singleton.StartServer();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_8;
		L_8 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_9;
		L_9 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01, L_8, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// if (GUILayout.Button("Server")) NetworkManager.Singleton.StartServer();
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10;
		L_10 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = NetworkManager_StartServer_mAA6814A393D50A8D2589D27445CAEBD3898E7A16(L_10, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::StatusLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_StatusLabels_m9D22752DC9B5D49A15EAB19DB5DD873D367A3A98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2ABC049ED746AB8F9A0A91EA4EDD63E4DB794B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691869D3C717D0781EDF4DB123CF1596C1975A8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C441C802EFF6FB06F2F2C2C24B9FAA791CB4546);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// var mode = NetworkManager.Singleton.IsHost ?
		//     "Host" : NetworkManager.Singleton.IsServer ? "Server" : "Client";
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2;
		L_2 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		G_B5_0 = _stringLiteral691869D3C717D0781EDF4DB123CF1596C1975A8A;
		goto IL_002b;
	}

IL_001f:
	{
		G_B5_0 = _stringLiteral0D0D0C17BC59054E43F2DF1F9E9184032FBFBF01;
		goto IL_002b;
	}

IL_0026:
	{
		G_B5_0 = _stringLiteral0242F31341D314854DB5EA5749448625B0A0AAE3;
	}

IL_002b:
	{
		V_0 = G_B5_0;
		// GUILayout.Label("Transport: " +
		//     NetworkManager.Singleton.NetworkConfig.NetworkTransport.GetType().Name);
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4;
		L_4 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_4);
		NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* L_5 = L_4->___NetworkConfig_43;
		NullCheck(L_5);
		NetworkTransport_t55E07951299283974C86476F46CC977780560B64* L_6 = L_5->___NetworkTransport_1;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4D2ABC049ED746AB8F9A0A91EA4EDD63E4DB794B, L_8, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_10;
		L_10 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_9, L_10, NULL);
		// GUILayout.Label("Mode: " + mode);
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9C441C802EFF6FB06F2F2C2C24B9FAA791CB4546, L_11, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_13;
		L_13 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::SubmitNewPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager_SubmitNewPosition_mDC80549C9A70829010F32F4D246756B1F04E74DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A2296E54440A0BF0DA03AFE9187D9AA44728E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7319FD4CF5DC27387E6AC1B4DFEE5AE8B24EFF9);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	String_t* G_B3_0 = NULL;
	{
		// if (GUILayout.Button(NetworkManager.Singleton.IsServer ? "Rock" : "Rock"))
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C;
		goto IL_0018;
	}

IL_0013:
	{
		G_B3_0 = _stringLiteral0F10C8F01816F23DEE001DE0E3A831AAB792D49C;
	}

IL_0018:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2;
		L_2 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_3;
		L_3 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(G_B3_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0110;
		}
	}
	{
		// if (NetworkManager.Singleton.IsServer && !NetworkManager.Singleton.IsClient )
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4;
		L_4 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_00e2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_6;
		L_6 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_00e2;
		}
	}
	{
		// Debug.Log("Server setRock");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF7319FD4CF5DC27387E6AC1B4DFEE5AE8B24EFF9, NULL);
		// foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_8;
		L_8 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = NetworkManager_get_ConnectedClientsIds_mAC05454DCEFB717F590830D86FFA869E7201231A(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator() */, IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var, L_9);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_0;
					if (!L_11)
					{
						goto IL_0095;
					}
				}
				{
					RuntimeObject* L_12 = V_0;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0095:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0082_1;
			}

IL_0061_1:
			{
				// foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				uint64_t L_14;
				L_14 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current() */, IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var, L_13);
				V_1 = L_14;
				// NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<HelloWorldPlayer>().setRock();
				il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
				NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_15;
				L_15 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
				NullCheck(L_15);
				NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* L_16;
				L_16 = NetworkManager_get_SpawnManager_mAE49738D7E37718DABC59F9BBF31E985B7D438F8_inline(L_15, NULL);
				uint64_t L_17 = V_1;
				NullCheck(L_16);
				NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_18;
				L_18 = NetworkSpawnManager_GetPlayerNetworkObject_mDB5CB1D2ADCCDA0ECFB584EC4F2A974A4351E183(L_16, L_17, NULL);
				NullCheck(L_18);
				HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* L_19;
				L_19 = Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632(L_18, Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632_RuntimeMethod_var);
				NullCheck(L_19);
				HelloWorldPlayer_setRock_m1E6FD10D5BF98D7380B3FBE07A946395917FB9A4(L_19, NULL);
			}

IL_0082_1:
			{
				// foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0061_1;
				}
			}
			{
				goto IL_0096;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0096:
	{
		// foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_22;
		L_22 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = NetworkManager_get_ConnectedClientsIds_mAC05454DCEFB717F590830D86FFA869E7201231A(L_22, NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator() */, IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525_il2cpp_TypeInfo_var, L_23);
		V_0 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_0;
					if (!L_25)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_26 = V_0;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_00e1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ce_1;
			}

IL_00a8_1:
			{
				// foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
				RuntimeObject* L_27 = V_0;
				NullCheck(L_27);
				uint64_t L_28;
				L_28 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current() */, IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E_il2cpp_TypeInfo_var, L_27);
				V_2 = L_28;
				// NetworkManager.Singleton.SpawnManager.GetPlayerNetworkObject(uid).GetComponent<HelloWorldPlayer>().ControlMove(rvelocity);
				il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
				NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_29;
				L_29 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
				NullCheck(L_29);
				NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* L_30;
				L_30 = NetworkManager_get_SpawnManager_mAE49738D7E37718DABC59F9BBF31E985B7D438F8_inline(L_29, NULL);
				uint64_t L_31 = V_2;
				NullCheck(L_30);
				NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_32;
				L_32 = NetworkSpawnManager_GetPlayerNetworkObject_mDB5CB1D2ADCCDA0ECFB584EC4F2A974A4351E183(L_30, L_31, NULL);
				NullCheck(L_32);
				HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* L_33;
				L_33 = Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632(L_32, Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ((HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields*)il2cpp_codegen_static_fields_for(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var))->___rvelocity_6;
				NullCheck(L_33);
				HelloWorldPlayer_ControlMove_m3B81E5297B30E35F2D2FB1422573B5337D33EF00(L_33, L_34, NULL);
			}

IL_00ce_1:
			{
				// foreach (ulong uid in NetworkManager.Singleton.ConnectedClientsIds)
				RuntimeObject* L_35 = V_0;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_00a8_1;
				}
			}
			{
				goto IL_0110;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// var playerObject = NetworkManager.Singleton.SpawnManager.GetLocalPlayerObject();
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_37;
		L_37 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_37);
		NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* L_38;
		L_38 = NetworkManager_get_SpawnManager_mAE49738D7E37718DABC59F9BBF31E985B7D438F8_inline(L_37, NULL);
		NullCheck(L_38);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_39;
		L_39 = NetworkSpawnManager_GetLocalPlayerObject_m2920A5D06E2917EAD843107BDDDFB76662D644B4(L_38, NULL);
		// Debug.Log("Client setRock");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral65A2296E54440A0BF0DA03AFE9187D9AA44728E1, NULL);
		// var player = playerObject.GetComponent<HelloWorldPlayer>();
		NullCheck(L_39);
		HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* L_40;
		L_40 = Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632(L_39, Component_GetComponent_TisHelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_mD30F9E9AD66B436BC79BF27A916522323A793632_RuntimeMethod_var);
		// player.setRock();
		HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* L_41 = L_40;
		NullCheck(L_41);
		HelloWorldPlayer_setRock_m1E6FD10D5BF98D7380B3FBE07A946395917FB9A4(L_41, NULL);
		// player.ControlMove(lvelocity);
		il2cpp_codegen_runtime_class_init_inline(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ((HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_StaticFields*)il2cpp_codegen_static_fields_for(HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A_il2cpp_TypeInfo_var))->___lvelocity_5;
		NullCheck(L_41);
		HelloWorldPlayer_ControlMove_m3B81E5297B30E35F2D2FB1422573B5337D33EF00(L_41, L_42, NULL);
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager__ctor_mBB615E1BF7EAAF15D263EAD9C189C2E911C7B29B (HelloWorldManager_t975692E63741E58B32FC8E6E7FE7B45D25CBC33A* __this, const RuntimeMethod* method) 
{
	{
		// private float minimumDistance = .2f;
		__this->___minimumDistance_9 = (0.200000003f);
		// private float maximumTime = 1f;
		__this->___maximumTime_10 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void HelloWorld.HelloWorldManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldManager__cctor_m507527AD9D278800862D780CA6E0AEAA54B85093 (const RuntimeMethod* method) 
{
	{
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
// System.Void HelloWorld.HelloWorldPlayer::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_OnNetworkSpawn_mD19A51F5D47B6B6686B140DFD7D3527FADD98215 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) 
{
	{
		// if (IsOwner)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RandomMove();
		HelloWorldPlayer_RandomMove_mFA18E5218CCDCD6FD50844F010475B0E54AB4CFA(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::setRock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_setRock_m1E6FD10D5BF98D7380B3FBE07A946395917FB9A4 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB24DFA7A91AE381C3E0E64C13BBFA341657245BB);
		s_Il2CppMethodInitialized = true;
	}
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (NetworkManager.Singleton.IsServer)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// mode.Value = "rock";
		NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB* L_2 = __this->___mode_27;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_3;
		L_3 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes>::set_Value(T) */, L_2, L_3);
		// Debug.Log("Mode set to rock");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB24DFA7A91AE381C3E0E64C13BBFA341657245BB, NULL);
		return;
	}

IL_002c:
	{
		// SubmitModeRequestServerRpc();
		il2cpp_codegen_initobj((&V_0), sizeof(ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558));
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_4 = V_0;
		HelloWorldPlayer_SubmitModeRequestServerRpc_mA83BC29F028257AB45B83FC71C62FF56F2887070(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::ControlMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_ControlMove_m3B81E5297B30E35F2D2FB1422573B5337D33EF00 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVelocity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (NetworkManager.Singleton.IsServer)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// var newPosition = Position.Value + newVelocity;
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_2 = __this->___Position_26;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(13 /* T Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::get_Value() */, L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___newVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		// Position.Value = newPosition;
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_8 = __this->___Position_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::set_Value(T) */, L_8, L_9);
		return;
	}

IL_0037:
	{
		// SubmitMoveRequestServerRpc(newVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___newVelocity0;
		il2cpp_codegen_initobj((&V_1), sizeof(ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558));
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_11 = V_1;
		HelloWorldPlayer_SubmitMoveRequestServerRpc_m9EAEE66BA7B084429955FD96E6A9060EB6F12FFF(__this, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::RandomMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_RandomMove_mFA18E5218CCDCD6FD50844F010475B0E54AB4CFA (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (NetworkManager.Singleton.IsServer)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// var randomPosition = GetRandomPositionOnPlane();
		il2cpp_codegen_runtime_class_init_inline(HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = HelloWorldPlayer_GetRandomPositionOnPlane_mCAA69916BDCE5DD72F53B27AC1FFC796DD2D4146(NULL);
		V_0 = L_2;
		// transform.position = randomPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// Position.Value = randomPosition;
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_5 = __this->___Position_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::set_Value(T) */, L_5, L_6);
		return;
	}

IL_002b:
	{
		// SubmitPositionRequestServerRpc();
		il2cpp_codegen_initobj((&V_1), sizeof(ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558));
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_7 = V_1;
		HelloWorldPlayer_SubmitPositionRequestServerRpc_mC26ED006B1BD2ED74A497A9FAC6034AE09B96585(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::SubmitPositionRequestServerRpc(Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_SubmitPositionRequestServerRpc_mC26ED006B1BD2ED74A497A9FAC6034AE09B96585 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00d0;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00d0;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(__this, NULL);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = V_0;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_10, NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = ___rpcParams0;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_15;
		L_15 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)192107471), L_14, ((int32_t)0), NULL);
		V_1 = L_15;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_16 = ___rpcParams0;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_1), ((int32_t)192107471), L_16, ((int32_t)0), NULL);
	}

IL_00d0:
	{
		int32_t L_17 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_17) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00ff;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0100;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_20, NULL);
		if (L_21)
		{
			goto IL_0100;
		}
	}

IL_00ff:
	{
		return;
	}

IL_0100:
	{
		// Position.Value = GetRandomPositionOnPlane();
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_22 = __this->___Position_26;
		il2cpp_codegen_runtime_class_init_inline(HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = HelloWorldPlayer_GetRandomPositionOnPlane_mCAA69916BDCE5DD72F53B27AC1FFC796DD2D4146(NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::set_Value(T) */, L_22, L_23);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::TestClientRpc(Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_TestClientRpc_mC51BE2C0950FDCE8E77839A35AD6966023785EFD (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___rpcParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EF987CEE087AAE35B2CD69528CD95DFE12122A5);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_008a;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_008a;
		}
	}

IL_0058:
	{
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_9 = ___rpcParams0;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_10;
		L_10 = NetworkBehaviour___beginSendClientRpc_mCED583D0CFBAC5802EFF7000B7210FDB64421582(__this, ((int32_t)1615969000), L_9, ((int32_t)0), NULL);
		V_1 = L_10;
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_11 = ___rpcParams0;
		NetworkBehaviour___endSendClientRpc_mAD4E56593D94018049AE53018F989AE61F8C4C4E(__this, (&V_1), ((int32_t)1615969000), L_11, ((int32_t)0), NULL);
	}

IL_008a:
	{
		int32_t L_12 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_12) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00b9;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_00ba;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_15, NULL);
		if (L_16)
		{
			goto IL_00ba;
		}
	}

IL_00b9:
	{
		return;
	}

IL_00ba:
	{
		// Debug.Log("Client test");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6EF987CEE087AAE35B2CD69528CD95DFE12122A5, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::SubmitModeRequestServerRpc(Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_SubmitModeRequestServerRpc_mA83BC29F028257AB45B83FC71C62FF56F2887070 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB24DFA7A91AE381C3E0E64C13BBFA341657245BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_1 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_1 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00d0;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00d0;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(__this, NULL);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = V_1;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_10, NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = ___rpcParams0;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_15;
		L_15 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)-1807127625), L_14, ((int32_t)0), NULL);
		V_2 = L_15;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_16 = ___rpcParams0;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_2), ((int32_t)-1807127625), L_16, ((int32_t)0), NULL);
	}

IL_00d0:
	{
		int32_t L_17 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_17) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00ff;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_0100;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_20, NULL);
		if (L_21)
		{
			goto IL_0100;
		}
	}

IL_00ff:
	{
		return;
	}

IL_0100:
	{
		// mode.Value = "rock";
		NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB* L_22 = __this->___mode_27;
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_23;
		L_23 = FixedString128Bytes_op_Implicit_mC1EF3D019A34577624853F21B956303E569C116E(_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<Unity.Collections.FixedString128Bytes>::set_Value(T) */, L_22, L_23);
		// Debug.Log("Mode set to rock");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB24DFA7A91AE381C3E0E64C13BBFA341657245BB, NULL);
		// TestClientRpc();
		il2cpp_codegen_initobj((&V_0), sizeof(ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9));
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_24 = V_0;
		HelloWorldPlayer_TestClientRpc_mC51BE2C0950FDCE8E77839A35AD6966023785EFD(__this, L_24, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::SubmitMoveRequestServerRpc(UnityEngine.Vector3,Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_SubmitMoveRequestServerRpc_m9EAEE66BA7B084429955FD96E6A9060EB6F12FFF (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newVelocity0, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_1 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_1 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_00dd;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(__this, NULL);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = V_1;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_10, NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = ___rpcParams1;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_15;
		L_15 = NetworkBehaviour___beginSendServerRpc_m4A2F11DDFFDA210CA349A21652A185BA75379429(__this, ((int32_t)-2065925856), L_14, ((int32_t)0), NULL);
		V_2 = L_15;
		FastBufferWriter_WriteValueSafe_mA82B8C332BFA1FA2C68EF246D68A035DE2A0A5BF_inline((&V_2), (&___newVelocity0), NULL);
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_16 = ___rpcParams1;
		NetworkBehaviour___endSendServerRpc_m012C05F43A55FCBC009562DA6EE207AAF38AD32C(__this, (&V_2), ((int32_t)-2065925856), L_16, ((int32_t)0), NULL);
	}

IL_00dd:
	{
		int32_t L_17 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_17) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_010c;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_18, NULL);
		if (L_19)
		{
			goto IL_010d;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_20, NULL);
		if (L_21)
		{
			goto IL_010d;
		}
	}

IL_010c:
	{
		return;
	}

IL_010d:
	{
		// Position.Value = Position.Value + newVelocity;
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_22 = __this->___Position_26;
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_23 = __this->___Position_26;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(13 /* T Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::get_Value() */, L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___newVelocity0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_25, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::set_Value(T) */, L_22, L_26);
		// TestClientRpc();
		il2cpp_codegen_initobj((&V_0), sizeof(ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9));
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_27 = V_0;
		HelloWorldPlayer_TestClientRpc_mC51BE2C0950FDCE8E77839A35AD6966023785EFD(__this, L_27, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 HelloWorld.HelloWorldPlayer::GetRandomPositionOnPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HelloWorldPlayer_GetRandomPositionOnPlane_mCAA69916BDCE5DD72F53B27AC1FFC796DD2D4146 (const RuntimeMethod* method) 
{
	{
		// return new Vector3(Random.Range(-3f, 3f), 1f, Random.Range(-3f, 3f));
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-3.0f), (3.0f), NULL);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-3.0f), (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (1.0f), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer_Update_m41884A4E6ED0884F7FAB266D657CEA9773EED2C3 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Position.Value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_1 = __this->___Position_26;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(13 /* T Unity.Netcode.NetworkVariable`1<UnityEngine.Vector3>::get_Value() */, L_1);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer__ctor_m36710BA71D04F120DED9F7BE633ECCA54DF22DA6 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public NetworkVariable<Vector3> Position = new NetworkVariable<Vector3>();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717* L_1 = (NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717*)il2cpp_codegen_object_new(NetworkVariable_1_tB3914592680C5E231D7E171688C745C0AD6EE717_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9(L_1, L_0, 0, 0, NetworkVariable_1__ctor_mD62902EA4E717EE3EDDFF2524F3A7E43E638D1D9_RuntimeMethod_var);
		__this->___Position_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Position_26), (void*)L_1);
		// private NetworkVariable<FixedString128Bytes> mode = new NetworkVariable<FixedString128Bytes>();
		il2cpp_codegen_initobj((&V_1), sizeof(FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952));
		FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 L_2 = V_1;
		NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB* L_3 = (NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB*)il2cpp_codegen_object_new(NetworkVariable_1_t4F12E4D0943860F9D786373734F871AA1450B8DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71(L_3, L_2, 0, 0, NetworkVariable_1__ctor_m4E3A455D8FCE78BDDCCF0A51C2D948E7366FED71_RuntimeMethod_var);
		__this->___mode_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mode_27), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer__cctor_m6B41882537FF669F3D31D531893965E247C3BAAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer___rpc_handler_1615969000_mBB1AD0527C1CF896C538B67219572877A2C429B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer___rpc_handler_192107471_mA0FBC916D493EB5FEE7B0CEE385806DBC2EF50D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer___rpc_handler_2229041440_mC5448AE318E1A7103A51F26F1AC38FFE11100691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer___rpc_handler_2487839671_mCBB5EF1B01EC2DD9C2AAE0C3A261B7F896BB08CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)HelloWorldPlayer___rpc_handler_192107471_mA0FBC916D493EB5FEE7B0CEE385806DBC2EF50D1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)192107471), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_2 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_3 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_3, NULL, (intptr_t)((void*)HelloWorldPlayer___rpc_handler_1615969000_mBB1AD0527C1CF896C538B67219572877A2C429B0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_2, ((int32_t)1615969000), L_3, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_4 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_5 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_5, NULL, (intptr_t)((void*)HelloWorldPlayer___rpc_handler_2487839671_mCBB5EF1B01EC2DD9C2AAE0C3A261B7F896BB08CC_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_4, ((int32_t)-1807127625), L_5, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_6 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_7 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_7, NULL, (intptr_t)((void*)HelloWorldPlayer___rpc_handler_2229041440_mC5448AE318E1A7103A51F26F1AC38FFE11100691_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_6, ((int32_t)-2065925856), L_7, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::__rpc_handler_192107471(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer___rpc_handler_192107471_mA0FBC916D493EB5FEE7B0CEE385806DBC2EF50D1 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
		ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_7 = L_6.___Receive_1;
		uint64_t L_8 = L_7.___SenderClientId_0;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(L_9, NULL);
		if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_006d:
	{
		return;
	}

IL_006f:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_13 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = L_13.___Server_0;
		V_1 = L_14;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_16 = ___target0;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_17 = V_1;
		NullCheck(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_16, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)));
		HelloWorldPlayer_SubmitPositionRequestServerRpc_mC26ED006B1BD2ED74A497A9FAC6034AE09B96585(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_16, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)), L_17, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_18 = ___target0;
		NullCheck(L_18);
		L_18->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::__rpc_handler_1615969000(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer___rpc_handler_1615969000_mBB1AD0527C1CF896C538B67219572877A2C429B0 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_6 = L_5.___Client_1;
		V_1 = L_6;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
		NullCheck(L_7);
		L_7->_____rpc_exec_stage_4 = ((int32_t)2);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_8 = ___target0;
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_9 = V_1;
		NullCheck(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_8, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)));
		HelloWorldPlayer_TestClientRpc_mC51BE2C0950FDCE8E77839A35AD6966023785EFD(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_8, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)), L_9, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_10 = ___target0;
		NullCheck(L_10);
		L_10->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::__rpc_handler_2487839671(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer___rpc_handler_2487839671_mCBB5EF1B01EC2DD9C2AAE0C3A261B7F896BB08CC (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
		ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_7 = L_6.___Receive_1;
		uint64_t L_8 = L_7.___SenderClientId_0;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(L_9, NULL);
		if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_006d:
	{
		return;
	}

IL_006f:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_13 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = L_13.___Server_0;
		V_1 = L_14;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_16 = ___target0;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_17 = V_1;
		NullCheck(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_16, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)));
		HelloWorldPlayer_SubmitModeRequestServerRpc_mA83BC29F028257AB45B83FC71C62FF56F2887070(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_16, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)), L_17, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_18 = ___target0;
		NullCheck(L_18);
		L_18->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.Void HelloWorld.HelloWorldPlayer::__rpc_handler_2229041440(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelloWorldPlayer___rpc_handler_2229041440_mC5448AE318E1A7103A51F26F1AC38FFE11100691 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
		V_0 = L_1;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
		ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_7 = L_6.___Receive_1;
		uint64_t L_8 = L_7.___SenderClientId_0;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline(L_9, NULL);
		if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_006d:
	{
		return;
	}

IL_006f:
	{
		FastBufferReader_ReadValueSafe_m0AC55FCF223F84F22F6C9B76AFA340E6591DE59E_inline((&___reader1), (&V_1), NULL);
		__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_13 = ___rpcParams2;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_14 = L_13.___Server_0;
		V_2 = L_14;
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)1);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_16 = ___target0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_18 = V_2;
		NullCheck(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_16, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)));
		HelloWorldPlayer_SubmitMoveRequestServerRpc_m9EAEE66BA7B084429955FD96E6A9060EB6F12FFF(((HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB*)CastclassClass((RuntimeObject*)L_16, HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB_il2cpp_TypeInfo_var)), L_17, L_18, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_19 = ___target0;
		NullCheck(L_19);
		L_19->_____rpc_exec_stage_4 = ((int32_t)0);
		return;
	}
}
// System.String HelloWorld.HelloWorldPlayer::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HelloWorldPlayer___getTypeName_mCE28CA68854CFBC65A556B355BE62D48EDCC01C2 (HelloWorldPlayer_tC1C4657929E9226D705AB5370FD25A4C695B13DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5913F01C4B1F16E8386686D524442A294D2FC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7D5913F01C4B1F16E8386686D524442A294D2FC3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* TouchControls_get_asset_m0E3C6C46163EC640F6C7D6BCE4C9F113754632B8_inline (TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchActions__ctor_m6BCA669DBB828942C0824ACB71F38628A9433113_inline (TouchActions_t848473C481D0A19BACDBD9BD2280EA2FA6B7083E* __this, TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		TouchControls_t9A0CFBE6B2F7850EBBE9EAB1EDC79EC8C4FB7A86* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public TouchActions(@TouchControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager Singleton { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsClient { get; internal set; }
		bool L_0 = __this->___U3CIsClientU3Ek__BackingField_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->___U3CIsServerU3Ek__BackingField_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* NetworkManager_get_SpawnManager_mAE49738D7E37718DABC59F9BBF31E985B7D438F8_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkSpawnManager SpawnManager { get; private set; }
		NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* L_0 = __this->___U3CSpawnManagerU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOwner { get; internal set; }
		bool L_0 = __this->___U3CIsOwnerU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsListening { get; internal set; }
		bool L_0 = __this->___U3CIsListeningU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF_inline (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) 
{
	{
		// public ulong OwnerClientId { get; internal set; }
		uint64_t L_0 = __this->___U3COwnerClientIdU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_mA82B8C332BFA1FA2C68EF246D68A035DE2A0A5BF_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void WriteValueSafe(in Vector3 value) => WriteUnmanagedSafe(value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___value0;
		FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_inline(__this, L_0, FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_m0AC55FCF223F84F22F6C9B76AFA340E6591DE59E_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ReadValueSafe(out Vector3 value) => ReadUnmanagedSafe(out value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___value0;
		FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_inline(__this, L_0, FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_RuntimeMethod_var);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m24083F73D425C912B88197F4A020CB58FED2F9A4_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___value0;
		V_0 = L_0;
		// fixed (T* ptr = &value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = V_0;
		// byte* bytes = (byte*)ptr;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// WriteBytesSafe(bytes, sizeof(T));
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((uintptr_t)0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadUnmanagedSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8C7F2244FD383A6616E71FE07F260E8350B8C640_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		// {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___value0;
		V_0 = L_0;
		// fixed (T* ptr = &value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = V_0;
		// byte* bytes = (byte*)ptr;
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// ReadBytesSafe(bytes, sizeof(T));
		uint8_t* L_2 = V_1;
		uint32_t L_3 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline(__this, L_2, (int32_t)L_3, 0, NULL);
		V_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((uintptr_t)0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginWriteInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_mD6983BBB2B1A249EA173F6CF20B1B2D93B1079F6_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___BufferPointer_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		uint8_t* L_7 = ___value0;
		int32_t L_8 = ___offset2;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_6)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		// if (!TryBeginReadInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadBytesSafe_m109629AE2B684CFCCFF9111790DE4E1E26445649_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy(value + offset, (Handle->BufferPointer + Handle->Position), size);
		uint8_t* L_3 = ___value0;
		int32_t L_4 = ___offset2;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___BufferPointer_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Position_1;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)), ((int64_t)L_9), NULL);
		// Handle->Position += size;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___Position_1);
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
