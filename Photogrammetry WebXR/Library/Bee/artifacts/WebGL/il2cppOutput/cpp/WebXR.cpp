#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { &p1, &p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2, T3, T4, T5, T6, T7>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		void* params[7] = { p1, &p2, &p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		void* params[9] = { &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10<T1*, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		void* params[10] = { p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41;
// System.Collections.Generic.IEqualityComparer`1<WebXR.WebXRController/ButtonTypes>
struct IEqualityComparer_1_tF0363DEDB5881F94975EFB2ECBBD61518D751870;
// System.Collections.Generic.Dictionary`2/KeyCollection<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct KeyCollection_tED60650592D1392A49B4A8E30DFB90B2338044F5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>
struct List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_t0C07FD85B1F9D6B227053620025A06960D8603DA;
// UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>
struct SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D;
// WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA;
// WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>
struct SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8;
// UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>
struct Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668;
// System.Collections.Generic.Dictionary`2/ValueCollection<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct ValueCollection_t28068A736FD0C8F3DCB1A3F2A7BD61A60654B90E;
// System.Collections.Generic.Dictionary`2/Entry<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>[]
struct EntryU5BU5D_t0557029164407CD1AFD0F43694052493461E1049;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
// WebXR.WebXRJointData[]
struct WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F;
// WebXR.WebXRSubsystemDescriptor[]
struct WebXRSubsystemDescriptorU5BU5D_t8E3421AB8E41512A574F19284A3C578CB3F21C27;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebXR.WebXRCamera
struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49;
// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00;
// WebXR.WebXRControllerButton
struct WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4;
// WebXR.WebXRControllerData
struct WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA;
// WebXR.WebXRControllersProfiles
struct WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637;
// WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA;
// WebXR.WebXRHandData
struct WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145;
// WebXR.WebXRHitPoseData
struct WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55;
// WebXR.WebXRLoader
struct WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE;
// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3;
// WebXR.WebXRSettings
struct WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587;
// WebXR.WebXRSubsystem
struct WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06;
// WebXR.WebXRSubsystemDescriptor
struct WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// WebXR.WebXRSubsystem/ControllerUpdate
struct ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989;
// WebXR.WebXRSubsystem/EndXREvent
struct EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424;
// WebXR.WebXRSubsystem/HandUpdate
struct HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8;
// WebXR.WebXRSubsystem/HeadsetUpdate
struct HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751;
// WebXR.WebXRSubsystem/HitTestUpdate
struct HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632;
// WebXR.WebXRSubsystem/InputProfilesEvent
struct InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304;
// WebXR.WebXRSubsystem/StartXREvent
struct StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7;
// WebXR.WebXRSubsystem/VisibilityChange
struct VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85;
// WebXR.WebXRSubsystem/VisibilityChangeEvent
struct VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B;
// WebXR.WebXRSubsystem/XRCapabilitiesEvent
struct XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6;
// WebXR.WebXRSubsystem/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA;
// WebXR.WebXRSubsystem/XRChange
struct XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemRegistration_tBF4BF08A2270D9934F883D9B799E8A033BC28F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebXRVisibilityState_tE6112F24E127290CAAF8AEF8FB6F3BA2779735D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A;
IL2CPP_EXTERN_C String_t* _stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560;
IL2CPP_EXTERN_C String_t* _stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11;
IL2CPP_EXTERN_C String_t* _stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35;
IL2CPP_EXTERN_C String_t* _stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA;
IL2CPP_EXTERN_C String_t* _stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216;
IL2CPP_EXTERN_C String_t* _stringLiteral8D585C0CF017666D27E62797181776A7A1789937;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222;
IL2CPP_EXTERN_C String_t* _stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6BF94FC102CD5BEA116BAB9ADE9ADFFED000861E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFC469267F0A226D0F0EBDDA9F914C2A52F4CD7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnHeadsetUpdate_m4B9099FCF98CB72914B08E46F6C4D607E0D3D9FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m21CA67B8F3D59C2D5AEA38E9587A54418B5A8972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA;;
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke;
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75;
struct WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA5EBFFF6A4591A271A6D45EAF01E09B319926610 
{
};

// System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>
struct Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0557029164407CD1AFD0F43694052493461E1049* ____entries_1;
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
	KeyCollection_tED60650592D1392A49B4A8E30DFB90B2338044F5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28068A736FD0C8F3DCB1A3F2A7BD61A60654B90E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>
struct List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WebXRSubsystemDescriptorU5BU5D_t8E3421AB8E41512A574F19284A3C578CB3F21C27* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WebXRSubsystemDescriptorU5BU5D_t8E3421AB8E41512A574F19284A3C578CB3F21C27* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_0;
};

// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
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

// WebXR.WebXRControllerButton
struct WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4  : public RuntimeObject
{
	// System.Boolean WebXR.WebXRControllerButton::pressed
	bool ___pressed_0;
	// System.Boolean WebXR.WebXRControllerButton::down
	bool ___down_1;
	// System.Boolean WebXR.WebXRControllerButton::up
	bool ___up_2;
	// System.Single WebXR.WebXRControllerButton::value
	float ___value_3;
};

// WebXR.WebXRControllersProfiles
struct WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637  : public RuntimeObject
{
	// System.String[] WebXR.WebXRControllersProfiles::conrtoller1
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___conrtoller1_0;
	// System.String[] WebXR.WebXRControllersProfiles::conrtoller2
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___conrtoller2_1;
};

// WebXR.WebXRHandData
struct WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRHandData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRHandData::enabled
	bool ___enabled_1;
	// System.Int32 WebXR.WebXRHandData::hand
	int32_t ___hand_2;
	// System.Single WebXR.WebXRHandData::trigger
	float ___trigger_3;
	// System.Single WebXR.WebXRHandData::squeeze
	float ___squeeze_4;
	// WebXR.WebXRJointData[] WebXR.WebXRHandData::joints
	WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* ___joints_5;
};

// WebXR.WebXRSubsystem/Native
struct Native_tC2D8D2BE38AC6E3FDCAFF644789C0B38AAD73E72  : public RuntimeObject
{
};

// UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>
struct SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D  : public SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71
{
};

// UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>
struct Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA 
{
	// System.Boolean WebXR.WebXRDisplayCapabilities::canPresentAR
	bool ___canPresentAR_0;
	// System.Boolean WebXR.WebXRDisplayCapabilities::canPresentVR
	bool ___canPresentVR_1;
};
// Native definition for P/Invoke marshalling of WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke
{
	int32_t ___canPresentAR_0;
	int32_t ___canPresentVR_1;
};
// Native definition for COM marshalling of WebXR.WebXRDisplayCapabilities
struct WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com
{
	int32_t ___canPresentAR_0;
	int32_t ___canPresentVR_1;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
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

// WebXR.WebXRControllerData
struct WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRControllerData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRControllerData::enabled
	bool ___enabled_1;
	// System.Int32 WebXR.WebXRControllerData::hand
	int32_t ___hand_2;
	// UnityEngine.Vector3 WebXR.WebXRControllerData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion WebXR.WebXRControllerData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.Vector3 WebXR.WebXRControllerData::gripPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gripPosition_5;
	// UnityEngine.Quaternion WebXR.WebXRControllerData::gripRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___gripRotation_6;
	// System.Single WebXR.WebXRControllerData::trigger
	float ___trigger_7;
	// System.Single WebXR.WebXRControllerData::squeeze
	float ___squeeze_8;
	// System.Single WebXR.WebXRControllerData::thumbstick
	float ___thumbstick_9;
	// System.Single WebXR.WebXRControllerData::thumbstickX
	float ___thumbstickX_10;
	// System.Single WebXR.WebXRControllerData::thumbstickY
	float ___thumbstickY_11;
	// System.Single WebXR.WebXRControllerData::touchpad
	float ___touchpad_12;
	// System.Single WebXR.WebXRControllerData::touchpadX
	float ___touchpadX_13;
	// System.Single WebXR.WebXRControllerData::touchpadY
	float ___touchpadY_14;
	// System.Single WebXR.WebXRControllerData::buttonA
	float ___buttonA_15;
	// System.Single WebXR.WebXRControllerData::buttonB
	float ___buttonB_16;
	// System.String[] WebXR.WebXRControllerData::profiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___profiles_17;
};

// WebXR.WebXRHitPoseData
struct WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55  : public RuntimeObject
{
	// System.Int32 WebXR.WebXRHitPoseData::frame
	int32_t ___frame_0;
	// System.Boolean WebXR.WebXRHitPoseData::available
	bool ___available_1;
	// UnityEngine.Vector3 WebXR.WebXRHitPoseData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion WebXR.WebXRHitPoseData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
};

// WebXR.WebXRJointData
struct WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 
{
	// UnityEngine.Vector3 WebXR.WebXRJointData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion WebXR.WebXRJointData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
	// System.Single WebXR.WebXRJointData::radius
	float ___radius_2;
};

// WebXR.WebXRSubsystem
struct WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06  : public Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668
{
	// System.Boolean WebXR.WebXRSubsystem::_running
	bool ____running_1;
	// WebXR.WebXRState WebXR.WebXRSubsystem::xrState
	int32_t ___xrState_3;
	// System.Int32 WebXR.WebXRSubsystem::viewsCount
	int32_t ___viewsCount_4;
	// UnityEngine.Rect WebXR.WebXRSubsystem::leftRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect_5;
	// UnityEngine.Rect WebXR.WebXRSubsystem::rightRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect_6;
	// System.Boolean WebXR.WebXRSubsystem::reportedXRStateSwitch
	bool ___reportedXRStateSwitch_7;
	// WebXR.WebXRVisibilityState WebXR.WebXRSubsystem::visibilityState
	int32_t ___visibilityState_8;
	// System.Boolean WebXR.WebXRSubsystem::visibilityStateChanged
	bool ___visibilityStateChanged_9;
	// UnityEngine.Matrix4x4 WebXR.WebXRSubsystem::leftProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix_17;
	// UnityEngine.Matrix4x4 WebXR.WebXRSubsystem::rightProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix_18;
	// UnityEngine.Vector3 WebXR.WebXRSubsystem::leftPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition_19;
	// UnityEngine.Vector3 WebXR.WebXRSubsystem::rightPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition_20;
	// UnityEngine.Quaternion WebXR.WebXRSubsystem::leftRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation_21;
	// UnityEngine.Quaternion WebXR.WebXRSubsystem::rightRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation_22;
	// System.Single[] WebXR.WebXRSubsystem::sharedArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sharedArray_23;
	// System.Single[] WebXR.WebXRSubsystem::controllersArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___controllersArray_24;
	// System.Single[] WebXR.WebXRSubsystem::handsArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___handsArray_25;
	// System.Single[] WebXR.WebXRSubsystem::viewerHitTestPoseArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___viewerHitTestPoseArray_26;
	// System.Boolean WebXR.WebXRSubsystem::viewerHitTestOn
	bool ___viewerHitTestOn_27;
	// System.Boolean WebXR.WebXRSubsystem::updatedControllersOnEnd
	bool ___updatedControllersOnEnd_28;
	// WebXR.WebXRHandData WebXR.WebXRSubsystem::leftHand
	WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___leftHand_29;
	// WebXR.WebXRHandData WebXR.WebXRSubsystem::rightHand
	WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___rightHand_30;
	// WebXR.WebXRControllerData WebXR.WebXRSubsystem::controller1
	WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controller1_31;
	// WebXR.WebXRControllerData WebXR.WebXRSubsystem::controller2
	WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controller2_32;
	// WebXR.WebXRHitPoseData WebXR.WebXRSubsystem::viewerHitTestPose
	WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___viewerHitTestPose_33;
	// WebXR.WebXRDisplayCapabilities WebXR.WebXRSubsystem::capabilities
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities_34;
};

struct WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields
{
	// WebXR.WebXRSubsystem WebXR.WebXRSubsystem::Instance
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* ___Instance_2;
	// WebXR.WebXRSubsystem/XRCapabilitiesUpdate WebXR.WebXRSubsystem::OnXRCapabilitiesUpdate
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___OnXRCapabilitiesUpdate_10;
	// WebXR.WebXRSubsystem/XRChange WebXR.WebXRSubsystem::OnXRChange
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___OnXRChange_11;
	// WebXR.WebXRSubsystem/VisibilityChange WebXR.WebXRSubsystem::OnVisibilityChange
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___OnVisibilityChange_12;
	// WebXR.WebXRSubsystem/HeadsetUpdate WebXR.WebXRSubsystem::OnHeadsetUpdate
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___OnHeadsetUpdate_13;
	// WebXR.WebXRSubsystem/ControllerUpdate WebXR.WebXRSubsystem::OnControllerUpdate
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___OnControllerUpdate_14;
	// WebXR.WebXRSubsystem/HandUpdate WebXR.WebXRSubsystem::OnHandUpdate
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___OnHandUpdate_15;
	// WebXR.WebXRSubsystem/HitTestUpdate WebXR.WebXRSubsystem::OnViewerHitTestUpdate
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___OnViewerHitTestUpdate_16;
};

// WebXR.WebXRSubsystemDescriptor
struct WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42  : public SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<WebXR.WebXRHandData>
struct Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B  : public MulticastDelegate_t
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// WebXR.WebXRSettings
struct WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// WebXR.WebXRSettings/ReferenceSpaceTypes WebXR.WebXRSettings::VRRequiredReferenceSpace
	int32_t ___VRRequiredReferenceSpace_4;
	// WebXR.WebXRSettings/ExtraFeatureTypes WebXR.WebXRSettings::VROptionalFeatures
	int32_t ___VROptionalFeatures_5;
	// WebXR.WebXRSettings/ReferenceSpaceTypes WebXR.WebXRSettings::ARRequiredReferenceSpace
	int32_t ___ARRequiredReferenceSpace_6;
	// WebXR.WebXRSettings/ExtraFeatureTypes WebXR.WebXRSettings::AROptionalFeatures
	int32_t ___AROptionalFeatures_7;
};

struct WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields
{
	// WebXR.WebXRSettings WebXR.WebXRSettings::instance
	WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* ___instance_8;
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// WebXR.WebXRSubsystem/ControllerUpdate
struct ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/EndXREvent
struct EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/HandUpdate
struct HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/HeadsetUpdate
struct HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/HitTestUpdate
struct HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/InputProfilesEvent
struct InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/StartXREvent
struct StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/VisibilityChange
struct VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/VisibilityChangeEvent
struct VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/XRCapabilitiesEvent
struct XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/XRCapabilitiesUpdate
struct XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA  : public MulticastDelegate_t
{
};

// WebXR.WebXRSubsystem/XRChange
struct XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF  : public MulticastDelegate_t
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

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem WebXR.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

// WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>
struct SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem WebXR.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* ___U3CsubsystemU3Ek__BackingField_4;
};

// WebXR.WebXRCamera
struct WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera WebXR.WebXRCamera::cameraMain
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraMain_4;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraL
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraL_5;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraR
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraR_6;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraARL
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraARL_7;
	// UnityEngine.Camera WebXR.WebXRCamera::cameraARR
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraARR_8;
	// UnityEngine.Transform WebXR.WebXRCamera::cameraFollower
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraFollower_9;
	// WebXR.WebXRState WebXR.WebXRCamera::xrState
	int32_t ___xrState_10;
	// UnityEngine.Rect WebXR.WebXRCamera::leftRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect_11;
	// UnityEngine.Rect WebXR.WebXRCamera::rightRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect_12;
	// System.Int32 WebXR.WebXRCamera::viewsCount
	int32_t ___viewsCount_13;
	// System.Boolean WebXR.WebXRCamera::hasFollower
	bool ___hasFollower_14;
};

// WebXR.WebXRController
struct WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnControllerActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnControllerActive_4;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnHandActive
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnHandActive_5;
	// System.Action`1<WebXR.WebXRHandData> WebXR.WebXRController::OnHandUpdate
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* ___OnHandUpdate_6;
	// System.Action`1<System.Boolean> WebXR.WebXRController::OnAlwaysUseGripChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnAlwaysUseGripChanged_7;
	// WebXR.WebXRControllerHand WebXR.WebXRController::hand
	int32_t ___hand_8;
	// System.Single WebXR.WebXRController::trigger
	float ___trigger_9;
	// System.Single WebXR.WebXRController::squeeze
	float ___squeeze_10;
	// System.Single WebXR.WebXRController::thumbstick
	float ___thumbstick_11;
	// System.Single WebXR.WebXRController::thumbstickX
	float ___thumbstickX_12;
	// System.Single WebXR.WebXRController::thumbstickY
	float ___thumbstickY_13;
	// System.Single WebXR.WebXRController::touchpad
	float ___touchpad_14;
	// System.Single WebXR.WebXRController::touchpadX
	float ___touchpadX_15;
	// System.Single WebXR.WebXRController::touchpadY
	float ___touchpadY_16;
	// System.Single WebXR.WebXRController::buttonA
	float ___buttonA_17;
	// System.Single WebXR.WebXRController::buttonB
	float ___buttonB_18;
	// System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton> WebXR.WebXRController::buttonStates
	Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* ___buttonStates_19;
	// System.Boolean WebXR.WebXRController::controllerActive
	bool ___controllerActive_20;
	// System.Boolean WebXR.WebXRController::handActive
	bool ___handActive_21;
	// System.String[] WebXR.WebXRController::profiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___profiles_22;
	// System.Int32 WebXR.WebXRController::oculusLinkBugTest
	int32_t ___oculusLinkBugTest_23;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetRay
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetRay_24;
	// UnityEngine.Quaternion WebXR.WebXRController::oculusOffsetGrip
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___oculusOffsetGrip_25;
	// System.Boolean WebXR.WebXRController::alwaysUseGrip
	bool ___alwaysUseGrip_26;
	// UnityEngine.Vector3 WebXR.WebXRController::<gripPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CgripPositionU3Ek__BackingField_27;
	// UnityEngine.Quaternion WebXR.WebXRController::<gripRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CgripRotationU3Ek__BackingField_28;
};

// WebXR.WebXRLoader
struct WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
};

struct WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields
{
	// System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor> WebXR.WebXRLoader::sampleSubsystemDescriptors
	List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* ___sampleSubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> WebXR.WebXRLoader::displaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___displaySubsystemDescriptors_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> WebXR.WebXRLoader::inputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___inputSubsystemDescriptors_7;
};

// WebXR.WebXRManager
struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3  : public SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744
{
};

struct WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields
{
	// WebXR.WebXRManager WebXR.WebXRManager::<Instance>k__BackingField
	WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___U3CInstanceU3Ek__BackingField_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// WebXR.WebXRControllerButton[]
struct WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* m_Items[1];

	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* value)
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
// WebXR.WebXRJointData[]
struct WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F  : public RuntimeArray
{
	ALIGN_FIELD (8) WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 m_Items[1];

	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebXRJointData_t45714550D4DB52036A6660D57A7383FC950C7231 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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

IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_back(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled);
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_cleanup(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::get_isSubsystemAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemLifecycleManager_2_get_isSubsystemAvailable_mE79E8794ADE12DC7CDEDCF7C3F3FBF06691D0B43_gshared (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// TSubsystem WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_2_get_subsystem_m54193127E6CC20F8F77C9D06108EEF370853E4F6_gshared_inline (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2_Awake_m65A0D886D634941488C98008FAF2CE52719E4A1E_gshared (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_2__ctor_mFFFF4844232DC77D884C77A5D0857734C5A15054_gshared (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.String WebXR.WebXRSettings::EnumToString<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_EnumToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m95E41310864411574A1A2B235C94AE96A5466BC1_gshared (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String WebXR.WebXRSettings::FlagsToString<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_FlagsToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m12357A2189460E7FD13B1D9C681C755A5E60FD13_gshared (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m9168CCBA1E269A8AE22E57D9EC02F9064DA336E4_gshared (SubsystemDescriptor_1_t0C07FD85B1F9D6B227053620025A06960D8603DA* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_m30A432477A65110D1B20BB3979E99F6F2BCADE6A_gshared (Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8* __this, const RuntimeMethod* method) ;

// System.Void WebXR.WebXRCamera::SwitchXRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mB05932DFCC1839D8A3325AE6CCF9B0E982F830EE (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m2F64EFDD7FDB1CE43EAC84D2AADA3A93AC081F97 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRCamera::UpdateFollower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_UpdateFollower_m54DB5CCDB5F26B9F253DB2961940056CCB0EFE61 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::SetButtonState(WebXR.WebXRController/ButtonTypes,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_mE5039287BC14D9CAEB033CB3E4A2CD0760D44893 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::TryUpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605 (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::get_Item(TKey)
inline WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682 (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* (*) (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// System.Void WebXR.WebXRControllerButton::UpdateState(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton_UpdateState_mBD33BA7FD892064266995AA395FAADABCD4E6AD5 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::Add(TKey,TValue)
inline void Dictionary_2_Add_m6BF94FC102CD5BEA116BAB9ADE9ADFFED000861E (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* __this, int32_t ___key0, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41*, int32_t, WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void WebXR.WebXRController::SetControllerActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::set_gripRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::set_gripPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRController::CheckOculusLinkBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_CheckOculusLinkBug_mAFC9CD0413DA61487552181CE866EED5912DF4CB (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::HandleOculusLinkBug(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___buttons0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion WebXR.WebXRController::get_gripRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRController::SetHandActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void System.Action`1<WebXR.WebXRHandData>::Invoke(T)
inline void Action_1_Invoke_mE1A8D48E62126CE7EBD8C6BD65BFF6B81381F02A_inline (Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline (const RuntimeMethod* method) ;
// System.Boolean WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::get_isSubsystemAvailable()
inline bool SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70 (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2_get_isSubsystemAvailable_mE79E8794ADE12DC7CDEDCF7C3F3FBF06691D0B43_gshared)(__this, method);
}
// System.Void WebXR.WebXRManager::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_HapticPulse_m026ED038F4C237074F4851B53603CF57BA33070A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m85E134E75244C5DCD7D426AE0744AE4564B82F74 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HandUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHandUpdate_m6C4F0494C3EE8247AAFF50D477B7A578722A8C3F (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_m1D6DC74F45EAF6F342334ECDB0E989E211058F76 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRManager::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHandUpdate_m3C05EA229B042EB18E97D1E9CDECCBA144175B77 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<WebXR.WebXRController/ButtonTypes,WebXR.WebXRControllerButton>::.ctor()
inline void Dictionary_2__ctor_mFC469267F0A226D0F0EBDDA9F914C2A52F4CD7B7 (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TSubsystem WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::get_subsystem()
inline WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	return ((  WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2_get_subsystem_m54193127E6CC20F8F77C9D06108EEF370853E4F6_gshared_inline)(__this, method);
}
// System.Void WebXR.WebXRSubsystem::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRCapabilitiesUpdate_m39BADD1A100FD74622FB37E130F7A60CE5EE6E04 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m7781F48D8554CEFD7D3A142D9047DF256EECB34F (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRChange_m555E21B6DC1FF2777A5EE4C7090C5C467B32F821 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRChange_mCAEB6B5E1477017C8AEEB5F42457DFD8BC0EF482 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnVisibilityChange_m30EDF1BB127B8F79AD5069CA63BD0BA264EC0D56 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnVisibilityChange_m05646DDB5BB319C2AA9EF22D512D5A740AC44386 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnControllerUpdate_m1112712BD26D5ED2A35F378DA2B6C417281CD19F (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnControllerUpdate_m13AC4657CFDB3FEED1297644312F52BC46310927 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHandUpdate_mB10C0C9E482D13D056B7C223CD6BB0C0255F86C6 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHandUpdate_m6172E03FF927837F0466A0ABD2EC1D48D795DDFA (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHeadsetUpdate_m5ECF6D3407F1C997376768516FA51D9E0FAA6C2C (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHeadsetUpdate_m556E3EEAE493C6563E44E2DE2948AC323BFCA766 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewerHitTestUpdate_mA029E56FD44DFC5BF476D791894C774A2C8891DD (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewerHitTestUpdate_m41D5E7578677065DE3D06F94F2675C78874B6DBA (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleAR_m887C2F2C3CA6C771AFC9EFAFAE640FD8911EBF06 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleVR_m7D7EB51D7903F9AF860AED2385168A315A39BA49 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_HapticPulse_m009242D23E2AB23BCB755C8419A36F049001717B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StartViewerHitTest_m7F3262740B6F8BBD08D1D18EB4517FE3E6E560B3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StopViewerHitTest_mE0CB192B22E0C8E327FDBF8FE73B15CBB6D68506 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::Awake()
inline void SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2_Awake_m65A0D886D634941488C98008FAF2CE52719E4A1E_gshared)(__this, method);
}
// System.Void WebXR.WebXRManager::set_Instance(WebXR.WebXRManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA_inline (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___value0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnUpdate_m367E30F7A5D60CCA3789BFACA12A44538BF9BF42 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.SubsystemLifecycleManager`2<WebXR.WebXRSubsystem,WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02 (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_2_t554D3DDAA0C5E80CC162B172182A731708C20744*, const RuntimeMethod*))SubsystemLifecycleManager_2__ctor_mFFFF4844232DC77D884C77A5D0857734C5A15054_gshared)(__this, method);
}
// WebXR.WebXRSettings WebXR.WebXRSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRSettings_get_Instance_m33ECDF5FAEA749BC310D3F36FB6B58B09E44F6CD_inline (const RuntimeMethod* method) ;
// WebXR.WebXRSettings WebXR.WebXRLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRLoader_GetSettings_m4C44CEDACB023EF223DE33C6C3DE2934BA11EAB8 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String WebXR.WebXRSettings::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_ToJson_m093FFB2FFD5907B24347969B5F78E724AD3BAD9A (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRLoader::SetWebXRSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_SetWebXRSettings_m057BE518BCA3CA58B9912C981EBF35DC3F697ECD (String_t* ___settingsJson0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<WebXR.WebXRSubsystemDescriptor,WebXR.WebXRSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// WebXR.WebXRSubsystem WebXR.WebXRLoader::get_WebXRSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97 (XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Subsystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759 (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRLoaderHelper::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB (List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773 (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String WebXR.WebXRSettings::EnumToString<WebXR.WebXRSettings/ReferenceSpaceTypes>(T)
inline String_t* WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587*, int32_t, const RuntimeMethod*))WebXRSettings_EnumToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m95E41310864411574A1A2B235C94AE96A5466BC1_gshared)(__this, ___value0, method);
}
// System.String WebXR.WebXRSettings::FlagsToString<WebXR.WebXRSettings/ExtraFeatureTypes>(T)
inline String_t* WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, int32_t ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587*, int32_t, const RuntimeMethod*))WebXRSettings_FlagsToString_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m12357A2189460E7FD13B1D9C681C755A5E60FD13_gshared)(__this, ___value0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor`1<WebXR.WebXRSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79 (SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t3C9CA0922755C1F7D215E784DE0FF69644CD5D4D*, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m9168CCBA1E269A8AE22E57D9EC02F9064DA336E4_gshared)(__this, method);
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7 (bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3 (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnStartAR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnStartVR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::UpdateVisibilityState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519 (int32_t ___visibilityState0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419 (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystemDescriptor__ctor_m34D7CDDE80E7950CDC5BEA06E9FB43B1AFCD4551 (WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m9EE44E7C8BBF000B1BE2D518620FBBB0F4CB0236_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemDescriptor::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_m3A2FB7296C79FA765F6A6B972B04504D4D3FA359_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemRegistration::CreateDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubsystemRegistration_CreateDescriptor_mCE7479B03E9146CB8F255997DED1572635CD9541 (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* ___descriptor0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::InternalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_InternalStart_mB00924DB77CB2B988996D29CCD3118B3AB08B27F (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRSubsystem::GetHandFromHandsArray(System.Int32,WebXR.WebXRHandData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___handIndex0, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** ___handObject1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HandUpdate::Invoke(WebXR.WebXRHandData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRSubsystem::GetGamepadFromControllersArray(System.Int32,WebXR.WebXRControllerData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___controllerIndex0, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** ___newControllerData1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::Invoke(WebXR.WebXRControllerData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRChange::Invoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_inline (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::UpdateControllersOnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateControllersOnEnd_m6621B68CF27B717E908B2FDBD81A2C9E281DBFFB (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/VisibilityChange::Invoke(WebXR.WebXRVisibilityState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_inline (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::UpdateXRCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateXRCameras_m543AAA7AC495694AC4FED738EED24B02FB8891A0 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) ;
// System.Boolean WebXR.WebXRSubsystem::GetHitTestPoseFromViewerHitTestPoseArray(WebXR.WebXRHitPoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_mE61BA2D5E7DB25938DF78B9FE354F9A02C95211E (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** ___hitPoseData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::Invoke(WebXR.WebXRHitPoseData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_inline (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::GetMatrixFromSharedArray(System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___matrix1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::GetQuaternionFromSharedArray(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetQuaternionFromSharedArray_m0E124BC48C6A79EB967AB6CB7667DF7F0F81E27D (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___quaternion1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::GetVector3FromSharedArray(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vec31, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_inline (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/StartXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent__ctor_mD79D19081CB5888373658432D7A4ADF6FBC0E03E (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent__ctor_m865EFAD1D01ECA43A7574FFDE9003BE918DF9510 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/EndXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent__ctor_mF58E2A752AF32940C04F52F402A26C93D0F446FD (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent__ctor_mD28857E41C6F952467E56AEB559BE1B520767B41 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent__ctor_m21B517477B45852125B3FD4E1202E9923152A921 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::SetWebXREvents(WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/VisibilityChangeEvent,WebXR.WebXRSubsystem/EndXREvent,WebXR.WebXRSubsystem/XRCapabilitiesEvent,WebXR.WebXRSubsystem/InputProfilesEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_SetWebXREvents_mFDAD9F1C04199A34C011555557FBC99DEBA7EEEA (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* ___on_start_ar0, StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* ___on_start_vr1, VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* ___on_visibility_change2, EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* ___on_end_xr3, XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* ___on_xr_capabilities4, InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* ___on_input_profiles5, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::InitControllersArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitControllersArray_m91361A4D436E10BD3B4360A895D1F7172F64632A (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::InitHandsArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitHandsArray_m65F79B3D30CC64F61D67DB8204A26F1BBF4E0E80 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::InitViewerHitTestPoseArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitViewerHitTestPoseArray_m5C9B2834D544560A0ACC172A5658E79502039D79 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::InitXRSharedArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitXRSharedArray_mB4EDD6AF0665CC438BDE94ACF766AE9D5B1E1F2F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m5E31E7810E767BF5342FCE57C857AB3AC49AEFB5 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___cap0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<WebXR.WebXRControllersProfiles>(System.String)
inline WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(WebXR.WebXRControllersProfiles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m5506E87E97B52C6D6E1EAFA4CF7ADB9352B68943 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* ___controllersProfiles0, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::Invoke(WebXR.WebXRDisplayCapabilities)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_inline (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem::setXrState(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleAR_m6F37EAE291F4E79F77CC4C2E6AFC2F2C78B0FD46 (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleVR_mFBAB353F9831D34DB47B0E5F3F111C13EA6C6200 (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::ToggleViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleViewerHitTest_m1AEF90C6BFA10876149C7D7247A3D702492A6006 (const RuntimeMethod* method) ;
// System.Void WebXR.WebXRSubsystem/Native::ControllerPulse(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ControllerPulse_m01F37784C02300E5BD29895B517B6053C4427C08 (int32_t ___controller0, float ___intensity1, float ___duration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* __this, const RuntimeMethod* method) ;
// System.Void WebXR.WebXRHitPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHitPoseData__ctor_m6D4BB2FD0E6DE5FB6762122CCF578A15FCBE471D (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Subsystem`1<WebXR.WebXRSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E (Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668* __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_tDF33FF29DA7FED4082A982276D7F2DF1FA915668*, const RuntimeMethod*))Subsystem_1__ctor_m30A432477A65110D1B20BB3979E99F6F2BCADE6A_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL SetWebXRSettings(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitXRSharedArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitControllersArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitHandsArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL InitViewerHitTestPoseArray(float*);
IL2CPP_EXTERN_C void DEFAULT_CALL ToggleAR();
IL2CPP_EXTERN_C void DEFAULT_CALL ToggleVR();
IL2CPP_EXTERN_C void DEFAULT_CALL ToggleViewerHitTest();
IL2CPP_EXTERN_C void DEFAULT_CALL ControllerPulse(int32_t, float, float);
IL2CPP_EXTERN_C void DEFAULT_CALL SetWebXREvents(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
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
// System.Void WebXR.WebXRCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_Awake_mD7AFF1A25C907CB309E565023B6AEB8F4FD729B8 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// SwitchXRState();
		WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnEnable_m2F901A5797A543AA44F0B913AF66BAE59A9A1744 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnHeadsetUpdate_m4B9099FCF98CB72914B08E46F6C4D607E0D3D9FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange += OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var), NULL);
		WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9(L_0, NULL);
		// WebXRManager.OnHeadsetUpdate += OnHeadsetUpdate;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)il2cpp_codegen_object_new(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F(L_1, __this, (intptr_t)((void*)WebXRCamera_OnHeadsetUpdate_m4B9099FCF98CB72914B08E46F6C4D607E0D3D9FA_RuntimeMethod_var), NULL);
		WebXRManager_add_OnHeadsetUpdate_mB05932DFCC1839D8A3325AE6CCF9B0E982F830EE(L_1, NULL);
		// hasFollower = cameraFollower != null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___cameraFollower_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___hasFollower_14 = L_3;
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnDisable_m5C89615107E9D5CF0E8655B40F531B1C3EC02AA5 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnHeadsetUpdate_m4B9099FCF98CB72914B08E46F6C4D607E0D3D9FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnXRChange -= OnXRChange;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)il2cpp_codegen_object_new(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B(L_0, __this, (intptr_t)((void*)WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8(L_0, NULL);
		// WebXRManager.OnHeadsetUpdate -= OnHeadsetUpdate;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)il2cpp_codegen_object_new(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F(L_1, __this, (intptr_t)((void*)WebXRCamera_OnHeadsetUpdate_m4B9099FCF98CB72914B08E46F6C4D607E0D3D9FA_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnHeadsetUpdate_m2F64EFDD7FDB1CE43EAC84D2AADA3A93AC081F97(L_1, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_Update_m016BB5B4A8ADA69FDC9A02E15034F8DDFDAC3898 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// UpdateFollower();
		WebXRCamera_UpdateFollower_m54DB5CCDB5F26B9F253DB2961940056CCB0EFE61(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::SwitchXRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->___xrState_10;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0089;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_00f8;
			}
		}
	}
	{
		return;
	}

IL_001a:
	{
		// cameraMain.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cameraMain_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// cameraL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraL_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// cameraR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraR_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// cameraARL.enabled = viewsCount > 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraARL_7;
		int32_t L_6 = __this->___viewsCount_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0), NULL);
		// cameraARL.rect = leftRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraARL_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = __this->___leftRect_11;
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_7, L_8, NULL);
		// cameraARR.enabled = viewsCount > 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cameraARR_8;
		int32_t L_10 = __this->___viewsCount_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0), NULL);
		// cameraARR.rect = rightRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___cameraARR_8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12 = __this->___rightRect_12;
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_11, L_12, NULL);
		// break;
		return;
	}

IL_0089:
	{
		// cameraMain.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___cameraMain_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
		// cameraL.enabled = viewsCount > 0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___cameraL_5;
		int32_t L_15 = __this->___viewsCount_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0), NULL);
		// cameraL.rect = leftRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___cameraL_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = __this->___leftRect_11;
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_16, L_17, NULL);
		// cameraR.enabled = viewsCount > 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___cameraR_6;
		int32_t L_19 = __this->___viewsCount_13;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)((((int32_t)L_19) > ((int32_t)1))? 1 : 0), NULL);
		// cameraR.rect = rightRect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___cameraR_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21 = __this->___rightRect_12;
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_20, L_21, NULL);
		// cameraARL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___cameraARL_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
		// cameraARR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___cameraARR_8;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)0, NULL);
		// break;
		return;
	}

IL_00f8:
	{
		// cameraMain.enabled = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___cameraMain_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		// cameraL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cameraL_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)0, NULL);
		// cameraR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___cameraR_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_26, (bool)0, NULL);
		// cameraARL.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = __this->___cameraARL_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)0, NULL);
		// cameraARR.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = __this->___cameraARR_8;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::UpdateFollower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_UpdateFollower_m54DB5CCDB5F26B9F253DB2961940056CCB0EFE61 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!hasFollower)
		bool L_0 = __this->___hasFollower_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// switch (xrState)
		int32_t L_1 = __this->___xrState_10;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_00ee;
		}
	}
	{
		// cameraFollower.localRotation = cameraARL.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_7, NULL);
		// if (viewsCount > 1)
		int32_t L_8 = __this->___viewsCount_13;
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		// cameraFollower.localPosition = (cameraARL.transform.localPosition + cameraARR.transform.localPosition) * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___cameraARR_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, (0.5f), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_17, NULL);
		// return;
		return;
	}

IL_007c:
	{
		// cameraFollower.localPosition = cameraARL.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_21, NULL);
		// return;
		return;
	}

IL_0098:
	{
		// cameraFollower.localRotation = cameraL.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_24, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_25, NULL);
		// cameraFollower.localPosition = (cameraL.transform.localPosition + cameraR.transform.localPosition) * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = __this->___cameraR_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_29, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_33, (0.5f), NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_26, L_34, NULL);
		// return;
		return;
	}

IL_00ee:
	{
		// cameraFollower.localRotation = cameraMain.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = __this->___cameraMain_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_37, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_35, L_38, NULL);
		// cameraFollower.localPosition = cameraMain.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___cameraFollower_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = __this->___cameraMain_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_41, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_39, L_42, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRCamera::GetLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRCamera_GetLocalRotation_m4CD88EC43A5A6EA1F6A2A46A95B189E8B89BFC46 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->___xrState_10;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// return cameraARL.transform.localRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		// return cameraL.transform.localRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		return L_8;
	}

IL_0030:
	{
		// return cameraMain.transform.localRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cameraMain_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 WebXR.WebXRCamera::GetLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRCamera_GetLocalPosition_mA06E276021434C603AC8C70A361C10480E3E663C (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (xrState)
		int32_t L_0 = __this->___xrState_10;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// if (viewsCount > 1)
		int32_t L_3 = __this->___viewsCount_13;
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		// return (cameraARL.transform.localPosition + cameraARR.transform.localPosition) * 0.5f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraARR_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, (0.5f), NULL);
		return L_11;
	}

IL_0047:
	{
		// return cameraARL.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		return L_14;
	}

IL_0058:
	{
		// return (cameraL.transform.localPosition + cameraR.transform.localPosition) * 0.5f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___cameraR_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, (0.5f), NULL);
		return L_22;
	}

IL_0088:
	{
		// return cameraMain.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___cameraMain_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		return L_25;
	}
}
// UnityEngine.Camera WebXR.WebXRCamera::GetCamera(WebXR.WebXRCamera/CameraID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* WebXRCamera_GetCamera_m085EDCD8DB4F8F283F82EB6798A4D156EEADB3B1 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, int32_t ___cameraID0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___cameraID0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_001a:
	{
		// return cameraL;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cameraL_5;
		return L_1;
	}

IL_0021:
	{
		// return cameraR;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cameraR_6;
		return L_2;
	}

IL_0028:
	{
		// return cameraARL;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cameraARL_7;
		return L_3;
	}

IL_002f:
	{
		// return cameraARR;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraARR_8;
		return L_4;
	}

IL_0036:
	{
		// return cameraMain;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cameraMain_4;
		return L_5;
	}
}
// System.Void WebXR.WebXRCamera::OnXRChange(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnXRChange_m9F6ACED89C7796D30632C973E7E4DE71FD515FDA (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	{
		// xrState = state;
		int32_t L_0 = ___state0;
		__this->___xrState_10 = L_0;
		// this.viewsCount = viewsCount;
		int32_t L_1 = ___viewsCount1;
		__this->___viewsCount_13 = L_1;
		// this.leftRect = leftRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___leftRect2;
		__this->___leftRect_11 = L_2;
		// this.rightRect = rightRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___rightRect3;
		__this->___rightRect_12 = L_3;
		// SwitchXRState();
		WebXRCamera_SwitchXRState_m2A4AE3BAE4F2E0129546129B41A8D4ACB12071D7(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::OnHeadsetUpdate(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera_OnHeadsetUpdate_m4B9099FCF98CB72914B08E46F6C4D607E0D3D9FA (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method) 
{
	{
		// if (xrState == WebXRState.VR)
		int32_t L_0 = __this->___xrState_10;
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		// cameraL.transform.localPosition = leftPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___leftPosition4;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
		// cameraL.transform.localRotation = leftRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraL_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___leftRotation2;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_5, L_6, NULL);
		// cameraL.projectionMatrix = leftProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraL_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___leftProjectionMatrix0;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_7, L_8, NULL);
		// cameraR.transform.localPosition = rightPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___cameraR_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___rightPosition5;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_11, NULL);
		// cameraR.transform.localRotation = rightRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___cameraR_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rightRotation3;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_13, L_14, NULL);
		// cameraR.projectionMatrix = rightProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___cameraR_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16 = ___rightProjectionMatrix1;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_15, L_16, NULL);
		return;
	}

IL_0068:
	{
		// else if (xrState == WebXRState.AR)
		int32_t L_17 = __this->___xrState_10;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		// cameraARL.transform.localPosition = leftPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___leftPosition4;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_20, NULL);
		// cameraARL.transform.localRotation = leftRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___cameraARL_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ___leftRotation2;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_23, NULL);
		// cameraARL.projectionMatrix = leftProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___cameraARL_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25 = ___leftProjectionMatrix0;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_24, L_25, NULL);
		// cameraARR.transform.localPosition = rightPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___cameraARR_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___rightPosition5;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_28, NULL);
		// cameraARR.transform.localRotation = rightRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = __this->___cameraARR_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = ___rightRotation3;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		// cameraARR.projectionMatrix = rightProjectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___cameraARR_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = ___rightProjectionMatrix1;
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_32, L_33, NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRCamera__ctor_m441E2544589657E3A86076D665B6E294D0BBA802 (WebXRCamera_tF71506C9F16DA4079C7A162FE63192D941F2EF49* __this, const RuntimeMethod* method) 
{
	{
		// private WebXRState xrState = WebXRState.NORMAL;
		__this->___xrState_10 = 2;
		// private int viewsCount = 1;
		__this->___viewsCount_13 = 1;
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
// UnityEngine.Vector3 WebXR.WebXRController::get_gripPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WebXRController_get_gripPosition_m3BDE33F66EA5424AD41741AC7424845393C2D392 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CgripPositionU3Ek__BackingField_27;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::set_gripPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CgripPositionU3Ek__BackingField_27 = L_0;
		return;
	}
}
// UnityEngine.Quaternion WebXR.WebXRController::get_gripRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CgripRotationU3Ek__BackingField_28;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::set_gripRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CgripRotationU3Ek__BackingField_28 = L_0;
		return;
	}
}
// System.Boolean WebXR.WebXRController::get_isControllerActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_get_isControllerActive_m2B524A03FD6EC3E55CB6C45C9A72400F23903093 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return controllerActive;
		bool L_0 = __this->___controllerActive_20;
		return L_0;
	}
}
// System.Boolean WebXR.WebXRController::get_isHandActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_get_isHandActive_m1B8DCF122339E386B1CD57924535DB3A78311BB0 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return handActive;
		bool L_0 = __this->___handActive_21;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::TryUpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::UpdateButtons(WebXR.WebXRControllerButton[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* ___buttons0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* V_1 = NULL;
	{
		// for (int i = 0; i < buttons.Length; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// WebXRControllerButton button = buttons[i];
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_0 = ___buttons0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// SetButtonState((ButtonTypes)i, button.pressed, button.value);
		int32_t L_4 = V_0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5 = V_1;
		bool L_6 = L_5->___pressed_0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_7 = V_1;
		float L_8 = L_7->___value_3;
		WebXRController_SetButtonState_mE5039287BC14D9CAEB033CB3E4A2CD0760D44893(__this, L_4, L_6, L_8, NULL);
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_10 = V_0;
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_11 = ___buttons0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single WebXR.WebXRController::GetAxis(WebXR.WebXRController/AxisTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxis_m3217D53915071DCF73F9595C6CD8B76E491D41D7 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___action0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___action0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// return squeeze;
		float L_2 = __this->___squeeze_10;
		return L_2;
	}

IL_0014:
	{
		// return trigger;
		float L_3 = __this->___trigger_9;
		return L_3;
	}

IL_001b:
	{
		// return 0;
		return (0.0f);
	}
}
// UnityEngine.Vector2 WebXR.WebXRController::GetAxis2D(WebXR.WebXRController/Axis2DTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WebXRController_GetAxis2D_m46156F5A6BE9647DAAB69C2A4FB94ECA98651A1F (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___action0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___action0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0033;
	}

IL_000f:
	{
		// return new Vector2(thumbstickX, thumbstickY);
		float L_2 = __this->___thumbstickX_12;
		float L_3 = __this->___thumbstickY_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0021:
	{
		// return new Vector2(touchpadX, touchpadY);
		float L_5 = __this->___touchpadX_15;
		float L_6 = __this->___touchpadY_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0033:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_8;
	}
}
// System.Boolean WebXR.WebXRController::GetButton(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButton_m19BA8616C36DCCDF42DF9193599757361A82DA51 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_0 = __this->___buttonStates_19;
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605(L_0, L_1, Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return buttonStates[action].pressed;
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_3 = __this->___buttonStates_19;
		int32_t L_4 = ___action0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682(L_3, L_4, Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		bool L_6 = L_5->___pressed_0;
		return L_6;
	}
}
// System.Void WebXR.WebXRController::SetButtonState(WebXR.WebXRController/ButtonTypes,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetButtonState_mE5039287BC14D9CAEB033CB3E4A2CD0760D44893 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, bool ___isPressed1, float ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6BF94FC102CD5BEA116BAB9ADE9ADFFED000861E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonStates.ContainsKey(action))
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_0 = __this->___buttonStates_19;
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605(L_0, L_1, Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// buttonStates[action].UpdateState(isPressed, value);
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_3 = __this->___buttonStates_19;
		int32_t L_4 = ___action0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682(L_3, L_4, Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		bool L_6 = ___isPressed1;
		float L_7 = ___value2;
		WebXRControllerButton_UpdateState_mBD33BA7FD892064266995AA395FAADABCD4E6AD5(L_5, L_6, L_7, NULL);
		return;
	}

IL_0022:
	{
		// buttonStates.Add(action, new WebXRControllerButton(isPressed, value));
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_8 = __this->___buttonStates_19;
		int32_t L_9 = ___action0;
		bool L_10 = ___isPressed1;
		float L_11 = ___value2;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_12 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_12, L_10, L_11, NULL);
		Dictionary_2_Add_m6BF94FC102CD5BEA116BAB9ADE9ADFFED000861E(L_8, L_9, L_12, Dictionary_2_Add_m6BF94FC102CD5BEA116BAB9ADE9ADFFED000861E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonDown(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonDown_m9CA9D2F940B683105A181D410A8859DEF2FF8342 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_0 = __this->___buttonStates_19;
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605(L_0, L_1, Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return buttonStates[action].down;
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_3 = __this->___buttonStates_19;
		int32_t L_4 = ___action0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682(L_3, L_4, Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		bool L_6 = L_5->___down_1;
		return L_6;
	}
}
// System.Boolean WebXR.WebXRController::GetButtonUp(WebXR.WebXRController/ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetButtonUp_m1CD79E4202AB0AF53B22365BE3D94D2E1D339104 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		// if (!buttonStates.ContainsKey(action))
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_0 = __this->___buttonStates_19;
		int32_t L_1 = ___action0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605(L_0, L_1, Dictionary_2_ContainsKey_m62B721341EE7E55BE227B17A9440807717348605_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return buttonStates[action].up;
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_3 = __this->___buttonStates_19;
		int32_t L_4 = ___action0;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_5;
		L_5 = Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682(L_3, L_4, Dictionary_2_get_Item_mB4CDC968A7C5EDC2F627A332C2E1BCEDA1AC3682_RuntimeMethod_var);
		bool L_6 = L_5->___up_2;
		return L_6;
	}
}
// System.Single WebXR.WebXRController::GetButtonIndexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetButtonIndexValue_mB07E128AF864D84E948480D0FADE9FD20FC33974 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0042;
			}
			case 5:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_0050;
	}

IL_0026:
	{
		// return trigger;
		float L_1 = __this->___trigger_9;
		return L_1;
	}

IL_002d:
	{
		// return squeeze;
		float L_2 = __this->___squeeze_10;
		return L_2;
	}

IL_0034:
	{
		// return touchpad;
		float L_3 = __this->___touchpad_14;
		return L_3;
	}

IL_003b:
	{
		// return thumbstick;
		float L_4 = __this->___thumbstick_11;
		return L_4;
	}

IL_0042:
	{
		// return buttonA;
		float L_5 = __this->___buttonA_17;
		return L_5;
	}

IL_0049:
	{
		// return buttonB;
		float L_6 = __this->___buttonB_18;
		return L_6;
	}

IL_0050:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single WebXR.WebXRController::GetAxisIndexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebXRController_GetAxisIndexValue_mAE73627A062D6F6AF1498394EB7D910DD3F47AB2 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// TryUpdateButtons();
		WebXRController_TryUpdateButtons_mDC509B58AF7847D1B2C612B0ABF58A6A5C2EBAFD(__this, NULL);
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001e:
	{
		// return touchpadX;
		float L_1 = __this->___touchpadX_15;
		return L_1;
	}

IL_0025:
	{
		// return touchpadY;
		float L_2 = __this->___touchpadY_16;
		return L_2;
	}

IL_002c:
	{
		// return thumbstickX;
		float L_3 = __this->___thumbstickX_12;
		return L_3;
	}

IL_0033:
	{
		// return thumbstickY;
		float L_4 = __this->___thumbstickY_13;
		return L_4;
	}

IL_003a:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void WebXR.WebXRController::SetAlwaysUseGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetAlwaysUseGrip_m4ABD6EF29D956CA7D3813A823FCC37A2D95E04B1 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___value0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// alwaysUseGrip = value;
		bool L_0 = ___value0;
		__this->___alwaysUseGrip_26 = L_0;
		// OnAlwaysUseGripChanged?.Invoke(alwaysUseGrip);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = __this->___OnAlwaysUseGripChanged_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_3 = __this->___alwaysUseGrip_26;
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::GetAlwaysUseGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_GetAlwaysUseGrip_m56EBE46621F47C6E389ABE57E826CBFAA86AFBE6 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return alwaysUseGrip;
		bool L_0 = __this->___alwaysUseGrip_26;
		return L_0;
	}
}
// System.String[] WebXR.WebXRController::GetProfiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* WebXRController_GetProfiles_m0264AF7AFA8B8BABE5F2B3A9C51CD3A91D0BB87A (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// return profiles;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___profiles_22;
		return L_0;
	}
}
// System.Void WebXR.WebXRController::OnControllerUpdate(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* V_0 = NULL;
	{
		// if (controllerData.hand == (int)hand)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_0 = ___controllerData0;
		int32_t L_1 = L_0->___hand_2;
		int32_t L_2 = __this->___hand_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0207;
		}
	}
	{
		// if (!controllerData.enabled)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_3 = ___controllerData0;
		bool L_4 = L_3->___enabled_1;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// profiles = controllerData.profiles;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_5 = ___controllerData0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5->___profiles_17;
		__this->___profiles_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profiles_22), (void*)L_6);
		// if (oculusLinkBugTest != 1)
		int32_t L_7 = __this->___oculusLinkBugTest_23;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_00d1;
		}
	}
	{
		// gripRotation = controllerData.gripRotation;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_8 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___gripRotation_6;
		WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline(__this, L_9, NULL);
		// gripPosition = controllerData.gripPosition;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_10 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___gripPosition_5;
		WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline(__this, L_11, NULL);
		// if (alwaysUseGrip)
		bool L_12 = __this->___alwaysUseGrip_26;
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		// transform.localRotation = controllerData.rotation * controllerData.gripRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_14 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14->___rotation_4;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_16 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16->___gripRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_15, L_17, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_13, L_18, NULL);
		// transform.localPosition = controllerData.rotation * (controllerData.position + controllerData.gripPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_20 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20->___rotation_4;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_22 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___position_3;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_24 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___gripPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_21, L_26, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_27, NULL);
		goto IL_00c0;
	}

IL_009e:
	{
		// transform.localRotation = controllerData.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_29 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29->___rotation_4;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_28, L_30, NULL);
		// transform.localPosition = controllerData.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_32 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32->___position_3;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_31, L_33, NULL);
	}

IL_00c0:
	{
		// if (CheckOculusLinkBug())
		bool L_34;
		L_34 = WebXRController_CheckOculusLinkBug_mAFC9CD0413DA61487552181CE866EED5912DF4CB(__this, NULL);
		if (!L_34)
		{
			goto IL_00d8;
		}
	}
	{
		// HandleOculusLinkBug(controllerData);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_35 = ___controllerData0;
		WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883(__this, L_35, NULL);
		goto IL_00d8;
	}

IL_00d1:
	{
		// HandleOculusLinkBug(controllerData);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_36 = ___controllerData0;
		WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883(__this, L_36, NULL);
	}

IL_00d8:
	{
		// trigger = controllerData.trigger;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_37 = ___controllerData0;
		float L_38 = L_37->___trigger_7;
		__this->___trigger_9 = L_38;
		// squeeze = controllerData.squeeze;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_39 = ___controllerData0;
		float L_40 = L_39->___squeeze_8;
		__this->___squeeze_10 = L_40;
		// thumbstick = controllerData.thumbstick;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_41 = ___controllerData0;
		float L_42 = L_41->___thumbstick_9;
		__this->___thumbstick_11 = L_42;
		// thumbstickX = controllerData.thumbstickX;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_43 = ___controllerData0;
		float L_44 = L_43->___thumbstickX_10;
		__this->___thumbstickX_12 = L_44;
		// thumbstickY = controllerData.thumbstickY;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_45 = ___controllerData0;
		float L_46 = L_45->___thumbstickY_11;
		__this->___thumbstickY_13 = L_46;
		// touchpad = controllerData.touchpad;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_47 = ___controllerData0;
		float L_48 = L_47->___touchpad_12;
		__this->___touchpad_14 = L_48;
		// touchpadX = controllerData.touchpadX;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_49 = ___controllerData0;
		float L_50 = L_49->___touchpadX_13;
		__this->___touchpadX_15 = L_50;
		// touchpadY = controllerData.touchpadY;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_51 = ___controllerData0;
		float L_52 = L_51->___touchpadY_14;
		__this->___touchpadY_16 = L_52;
		// buttonA = controllerData.buttonA;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_53 = ___controllerData0;
		float L_54 = L_53->___buttonA_15;
		__this->___buttonA_17 = L_54;
		// buttonB = controllerData.buttonB;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_55 = ___controllerData0;
		float L_56 = L_55->___buttonB_16;
		__this->___buttonB_18 = L_56;
		// WebXRControllerButton[] buttons = new WebXRControllerButton[6];
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_57 = (WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)SZArrayNew(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var, (uint32_t)6);
		V_0 = L_57;
		// buttons[(int)ButtonTypes.Trigger] = new WebXRControllerButton(trigger == 1, trigger);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_58 = V_0;
		float L_59 = __this->___trigger_9;
		float L_60 = __this->___trigger_9;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_61 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_61, (bool)((((float)L_59) == ((float)(1.0f)))? 1 : 0), L_60, NULL);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_61);
		// buttons[(int)ButtonTypes.Grip] = new WebXRControllerButton(squeeze == 1, squeeze);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_62 = V_0;
		float L_63 = __this->___squeeze_10;
		float L_64 = __this->___squeeze_10;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_65 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_65, (bool)((((float)L_63) == ((float)(1.0f)))? 1 : 0), L_64, NULL);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_65);
		// buttons[(int)ButtonTypes.Thumbstick] = new WebXRControllerButton(thumbstick == 1, thumbstick);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_66 = V_0;
		float L_67 = __this->___thumbstick_11;
		float L_68 = __this->___thumbstick_11;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_69 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_69, (bool)((((float)L_67) == ((float)(1.0f)))? 1 : 0), L_68, NULL);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_69);
		// buttons[(int)ButtonTypes.Touchpad] = new WebXRControllerButton(touchpad == 1, touchpad);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_70 = V_0;
		float L_71 = __this->___touchpad_14;
		float L_72 = __this->___touchpad_14;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_73 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_73, (bool)((((float)L_71) == ((float)(1.0f)))? 1 : 0), L_72, NULL);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_73);
		// buttons[(int)ButtonTypes.ButtonA] = new WebXRControllerButton(buttonA == 1, buttonA);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_74 = V_0;
		float L_75 = __this->___buttonA_17;
		float L_76 = __this->___buttonA_17;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_77 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_77, (bool)((((float)L_75) == ((float)(1.0f)))? 1 : 0), L_76, NULL);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_77);
		// buttons[(int)ButtonTypes.ButtonB] = new WebXRControllerButton(buttonB == 1, buttonB);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_78 = V_0;
		float L_79 = __this->___buttonB_18;
		float L_80 = __this->___buttonB_18;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_81 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_81, (bool)((((float)L_79) == ((float)(1.0f)))? 1 : 0), L_80, NULL);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_81);
		// UpdateButtons(buttons);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_82 = V_0;
		WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729(__this, L_82, NULL);
		// SetControllerActive(true);
		WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA(__this, (bool)1, NULL);
	}

IL_0207:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::HandleOculusLinkBug(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_HandleOculusLinkBug_mFE0E66C5E5ECD69C18229672310316461CA3D883 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	{
		// gripRotation = controllerData.gripRotation * oculusOffsetGrip;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_0 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0->___gripRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___oculusOffsetGrip_25;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_2, NULL);
		WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline(__this, L_3, NULL);
		// gripPosition = controllerData.gripPosition;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_4 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___gripPosition_5;
		WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline(__this, L_5, NULL);
		// if (alwaysUseGrip)
		bool L_6 = __this->___alwaysUseGrip_26;
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		// transform.localRotation = controllerData.rotation * controllerData.gripRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_8 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___rotation_4;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_10 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___gripRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_9, L_11, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_12, NULL);
		// transform.localPosition = controllerData.rotation * (controllerData.position + controllerData.gripPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_14 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14->___rotation_4;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_16 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___position_3;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_18 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___gripPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_15, L_20, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_21, NULL);
		return;
	}

IL_006f:
	{
		// transform.localRotation = controllerData.rotation * oculusOffsetRay;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_23 = ___controllerData0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = L_23->___rotation_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = __this->___oculusOffsetRay_24;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_24, L_25, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_26, NULL);
		// transform.localPosition = controllerData.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_28 = ___controllerData0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28->___position_3;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_29, NULL);
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRController::CheckOculusLinkBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRController_CheckOculusLinkBug_mAFC9CD0413DA61487552181CE866EED5912DF4CB (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oculusLinkBugTest == 0
		//     && profiles != null && profiles.Length > 0)
		int32_t L_0 = __this->___oculusLinkBugTest_23;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___profiles_22;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___profiles_22;
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_004f;
		}
	}
	{
		// if (profiles[0] == "oculus-touch" && gripRotation.x > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___profiles_22;
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral49FDE991572340057608BB55A3821B9BFA1E6E35, NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline(__this, NULL);
		float L_8 = L_7.___x_0;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// oculusLinkBugTest = 1;
		__this->___oculusLinkBugTest_23 = 1;
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// oculusLinkBugTest = 2;
		__this->___oculusLinkBugTest_23 = 2;
	}

IL_004f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void WebXR.WebXRController::OnHandUpdateInternal(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* V_0 = NULL;
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* G_B5_0 = NULL;
	Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* G_B4_0 = NULL;
	{
		// if (handData.hand == (int)hand)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_0 = ___handData0;
		int32_t L_1 = L_0->___hand_2;
		int32_t L_2 = __this->___hand_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_00d4;
		}
	}
	{
		// if (!handData.enabled)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_3 = ___handData0;
		bool L_4 = L_3->___enabled_1;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// SetHandActive(false);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA(__this, (bool)0, NULL);
		// SetHandActive(true);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)1, NULL);
		// transform.localPosition = handData.joints[0].position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_6 = ___handData0;
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_7 = L_6->___joints_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_8, NULL);
		// transform.localRotation = handData.joints[0].rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_10 = ___handData0;
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_11 = L_10->___joints_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)))->___rotation_1;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_12, NULL);
		// trigger = handData.trigger;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_13 = ___handData0;
		float L_14 = L_13->___trigger_3;
		__this->___trigger_9 = L_14;
		// squeeze = handData.squeeze;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_15 = ___handData0;
		float L_16 = L_15->___squeeze_4;
		__this->___squeeze_10 = L_16;
		// WebXRControllerButton[] buttons = new WebXRControllerButton[2];
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_17 = (WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75*)SZArrayNew(WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_17;
		// buttons[(int)ButtonTypes.Trigger] = new WebXRControllerButton(trigger == 1, trigger);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_18 = V_0;
		float L_19 = __this->___trigger_9;
		float L_20 = __this->___trigger_9;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_21 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_21, (bool)((((float)L_19) == ((float)(1.0f)))? 1 : 0), L_20, NULL);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_21);
		// buttons[(int)ButtonTypes.Grip] = new WebXRControllerButton(squeeze == 1, squeeze);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_22 = V_0;
		float L_23 = __this->___squeeze_10;
		float L_24 = __this->___squeeze_10;
		WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* L_25 = (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)il2cpp_codegen_object_new(WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4_il2cpp_TypeInfo_var);
		WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1(L_25, (bool)((((float)L_23) == ((float)(1.0f)))? 1 : 0), L_24, NULL);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4*)L_25);
		// UpdateButtons(buttons);
		WebXRControllerButtonU5BU5D_t915FA50DD1DD06576264ABAC3FC33CA4B0FF1A75* L_26 = V_0;
		WebXRController_UpdateButtons_mFC7CCB1D955E6270CB737D8A84A7B8B5D22EF729(__this, L_26, NULL);
		// OnHandUpdate?.Invoke(handData);
		Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* L_27 = __this->___OnHandUpdate_6;
		Action_1_t5260002E06FC4F432F6C18BB7F223A22A891323B* L_28 = L_27;
		G_B4_0 = L_28;
		if (L_28)
		{
			G_B5_0 = L_28;
			goto IL_00ce;
		}
	}
	{
		return;
	}

IL_00ce:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_29 = ___handData0;
		Action_1_Invoke_mE1A8D48E62126CE7EBD8C6BD65BFF6B81381F02A_inline(G_B5_0, L_29, NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetControllerActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B3_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	{
		// if (controllerActive != active)
		bool L_0 = __this->___controllerActive_20;
		bool L_1 = ___active0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		// controllerActive = active;
		bool L_2 = ___active0;
		__this->___controllerActive_20 = L_2;
		// OnControllerActive?.Invoke(controllerActive);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = __this->___OnControllerActive_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		bool L_5 = __this->___controllerActive_20;
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B3_0, L_5, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::SetHandActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, bool ___active0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B4_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B3_0 = NULL;
	{
		// if (handActive == active)
		bool L_0 = __this->___handActive_21;
		bool L_1 = ___active0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// handActive = active;
		bool L_2 = ___active0;
		__this->___handActive_21 = L_2;
		// OnHandActive?.Invoke(handActive);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = __this->___OnHandActive_5;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		bool L_5 = __this->___handActive_21;
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B4_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::Pulse(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_Pulse_mB0F259282CEC935629F1161F930D7427562F143B (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, float ___intensity0, float ___durationMilliseconds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebXRManager.Instance.isSubsystemAvailable)
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0;
		L_0 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		bool L_1;
		L_1 = SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70(L_0, SubsystemLifecycleManager_2_get_isSubsystemAvailable_mD02EAF50C829B553CF4C9FF40E2069225102BF70_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// WebXRManager.Instance.HapticPulse(hand, intensity, durationMilliseconds);
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_2;
		L_2 = WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline(NULL);
		int32_t L_3 = __this->___hand_8;
		float L_4 = ___intensity0;
		float L_5 = ___durationMilliseconds1;
		WebXRManager_HapticPulse_m026ED038F4C237074F4851B53603CF57BA33070A(L_2, L_3, L_4, L_5, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnEnable_mE34A789D462CBE4206D35FBA516A7A8F01C1751C (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnControllerUpdate += OnControllerUpdate;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)il2cpp_codegen_object_new(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC(L_0, __this, (intptr_t)((void*)WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var), NULL);
		WebXRManager_add_OnControllerUpdate_m85E134E75244C5DCD7D426AE0744AE4564B82F74(L_0, NULL);
		// WebXRManager.OnHandUpdate += OnHandUpdateInternal;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)il2cpp_codegen_object_new(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46(L_1, __this, (intptr_t)((void*)WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var), NULL);
		WebXRManager_add_OnHandUpdate_m6C4F0494C3EE8247AAFF50D477B7A578722A8C3F(L_1, NULL);
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA(__this, (bool)0, NULL);
		// SetHandActive(false);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController_OnDisable_m7F65B6B74D51C65D9EB69954B2760643FC5A1866 (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebXRManager.OnControllerUpdate -= OnControllerUpdate;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)il2cpp_codegen_object_new(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC(L_0, __this, (intptr_t)((void*)WebXRController_OnControllerUpdate_mE700CA724E993EDC4577BF0355FE8F130A2B5B19_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnControllerUpdate_m1D6DC74F45EAF6F342334ECDB0E989E211058F76(L_0, NULL);
		// WebXRManager.OnHandUpdate -= OnHandUpdateInternal;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)il2cpp_codegen_object_new(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46(L_1, __this, (intptr_t)((void*)WebXRController_OnHandUpdateInternal_mBC1AD207EEE22D09514F2EBCB33CE9026EBEA503_RuntimeMethod_var), NULL);
		WebXRManager_remove_OnHandUpdate_m3C05EA229B042EB18E97D1E9CDECCBA144175B77(L_1, NULL);
		// SetControllerActive(false);
		WebXRController_SetControllerActive_m30922AF24FCBA22B9FE7C74E0056EB970A89B8AA(__this, (bool)0, NULL);
		// SetHandActive(false);
		WebXRController_SetHandActive_m85225C502ED5D7C1F57E002FEA8F68F4332DFD24(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRController__ctor_mD0A5CA0BA7E554A7C4F3418E189B8BDC5C84B3DD (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFC469267F0A226D0F0EBDDA9F914C2A52F4CD7B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<ButtonTypes, WebXRControllerButton> buttonStates = new Dictionary<ButtonTypes, WebXRControllerButton>();
		Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41* L_0 = (Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41*)il2cpp_codegen_object_new(Dictionary_2_t56D0BBC196ED2A997C74347C5A40A4A19E95DA41_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFC469267F0A226D0F0EBDDA9F914C2A52F4CD7B7(L_0, Dictionary_2__ctor_mFC469267F0A226D0F0EBDDA9F914C2A52F4CD7B7_RuntimeMethod_var);
		__this->___buttonStates_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonStates_19), (void*)L_0);
		// private Quaternion oculusOffsetRay = Quaternion.Euler(90f, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((90.0f), (0.0f), (0.0f), NULL);
		__this->___oculusOffsetRay_24 = L_1;
		// private Quaternion oculusOffsetGrip = Quaternion.Euler(-90f, 0, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-90.0f), (0.0f), (0.0f), NULL);
		__this->___oculusOffsetGrip_25 = L_2;
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___U3CgripPositionU3Ek__BackingField_27 = L_3;
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___U3CgripRotationU3Ek__BackingField_28 = L_4;
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
// System.Void WebXR.WebXRControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* __this, const RuntimeMethod* method) 
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
// System.Void WebXR.WebXRControllersProfiles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllersProfiles__ctor_mA73B89F43212EE2BBC5815CA8B9E9E1F7AC3E126 (WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* __this, const RuntimeMethod* method) 
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
// System.Void WebXR.WebXRHandData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRJointData[] joints = new WebXRJointData[25];
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_0 = (WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F*)(WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F*)SZArrayNew(WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->___joints_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joints_5), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebXR.WebXRHitPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRHitPoseData__ctor_m6D4BB2FD0E6DE5FB6762122CCF578A15FCBE471D (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* __this, const RuntimeMethod* method) 
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
// System.Void WebXR.WebXRControllerButton::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton__ctor_m1D4C0BF750182FE09138967349F138376E61D2B1 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method) 
{
	{
		// public WebXRControllerButton(bool isPressed, float buttonValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// down = false;
		__this->___down_1 = (bool)0;
		// up = false;
		__this->___up_2 = (bool)0;
		// pressed = isPressed;
		bool L_0 = ___isPressed0;
		__this->___pressed_0 = L_0;
		// value = buttonValue;
		float L_1 = ___buttonValue1;
		__this->___value_3 = L_1;
		// }
		return;
	}
}
// System.Void WebXR.WebXRControllerButton::UpdateState(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRControllerButton_UpdateState_mBD33BA7FD892064266995AA395FAADABCD4E6AD5 (WebXRControllerButton_t630587E2D90290CEE687D62CFE34558675C222A4* __this, bool ___isPressed0, float ___buttonValue1, const RuntimeMethod* method) 
{
	{
		// if (isPressed && pressed) // nothing
		bool L_0 = ___isPressed0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->___pressed_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// down = false;
		__this->___down_1 = (bool)0;
		// up = false;
		__this->___up_2 = (bool)0;
		goto IL_006a;
	}

IL_001b:
	{
		// else if (isPressed && !pressed) // up
		bool L_2 = ___isPressed0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		bool L_3 = __this->___pressed_0;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// down = true;
		__this->___down_1 = (bool)1;
		// up = false;
		__this->___up_2 = (bool)0;
		goto IL_006a;
	}

IL_0036:
	{
		// else if (!isPressed && !pressed) // nothing
		bool L_4 = ___isPressed0;
		if (L_4)
		{
			goto IL_0051;
		}
	}
	{
		bool L_5 = __this->___pressed_0;
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		// down = false;
		__this->___down_1 = (bool)0;
		// up = false;
		__this->___up_2 = (bool)0;
		goto IL_006a;
	}

IL_0051:
	{
		// else if (!isPressed && pressed) // down
		bool L_6 = ___isPressed0;
		if (L_6)
		{
			goto IL_006a;
		}
	}
	{
		bool L_7 = __this->___pressed_0;
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// down = false;
		__this->___down_1 = (bool)0;
		// up = true;
		__this->___up_2 = (bool)1;
	}

IL_006a:
	{
		// pressed = isPressed;
		bool L_8 = ___isPressed0;
		__this->___pressed_0 = L_8;
		// value = buttonValue;
		float L_9 = ___buttonValue1;
		__this->___value_3 = L_9;
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
// Conversion methods for marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled)
{
	marshaled.___canPresentAR_0 = static_cast<int32_t>(unmarshaled.___canPresentAR_0);
	marshaled.___canPresentVR_1 = static_cast<int32_t>(unmarshaled.___canPresentVR_1);
}
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_back(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled)
{
	bool unmarshaledcanPresentAR_temp_0 = false;
	unmarshaledcanPresentAR_temp_0 = static_cast<bool>(marshaled.___canPresentAR_0);
	unmarshaled.___canPresentAR_0 = unmarshaledcanPresentAR_temp_0;
	bool unmarshaledcanPresentVR_temp_1 = false;
	unmarshaledcanPresentVR_temp_1 = static_cast<bool>(marshaled.___canPresentVR_1);
	unmarshaled.___canPresentVR_1 = unmarshaledcanPresentVR_temp_1;
}
// Conversion method for clean up from marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_cleanup(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_com(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com& marshaled)
{
	marshaled.___canPresentAR_0 = static_cast<int32_t>(unmarshaled.___canPresentAR_0);
	marshaled.___canPresentVR_1 = static_cast<int32_t>(unmarshaled.___canPresentVR_1);
}
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_com_back(const WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com& marshaled, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA& unmarshaled)
{
	bool unmarshaledcanPresentAR_temp_0 = false;
	unmarshaledcanPresentAR_temp_0 = static_cast<bool>(marshaled.___canPresentAR_0);
	unmarshaled.___canPresentAR_0 = unmarshaledcanPresentAR_temp_0;
	bool unmarshaledcanPresentVR_temp_1 = false;
	unmarshaledcanPresentVR_temp_1 = static_cast<bool>(marshaled.___canPresentVR_1);
	unmarshaled.___canPresentVR_1 = unmarshaledcanPresentVR_temp_1;
}
// Conversion method for clean up from marshalling of: WebXR.WebXRDisplayCapabilities
IL2CPP_EXTERN_C void WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_com_cleanup(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WebXR.WebXRManager WebXR.WebXRManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void WebXR.WebXRManager::set_Instance(WebXR.WebXRManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ___value0;
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// WebXR.WebXRState WebXR.WebXRManager::get_XRState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_XRState_m84B85E3644074DA338AC256400F7A49FA2C638D0 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRState XRState => subsystem.xrState;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		int32_t L_1 = L_0->___xrState_3;
		return L_1;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRCapabilitiesUpdate_mD06E0ACA34562744015739855B342749C11592A5 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnXRCapabilitiesUpdate += value;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ___value0;
		WebXRSubsystem_add_OnXRCapabilitiesUpdate_m39BADD1A100FD74622FB37E130F7A60CE5EE6E04(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRCapabilitiesUpdate_m198AE22A7EB72D6920E57FD184DA4AE902295F0B (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnXRCapabilitiesUpdate -= value;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ___value0;
		WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m7781F48D8554CEFD7D3A142D9047DF256EECB34F(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnXRChange_m269B0CA90483285E1F64B4966F22FFDCC025CCA9 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnXRChange += value;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ___value0;
		WebXRSubsystem_add_OnXRChange_m555E21B6DC1FF2777A5EE4C7090C5C467B32F821(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnXRChange_m428B1DFBD39430FBFAC29A9CD39839448E0C69D8 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnXRChange -= value;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ___value0;
		WebXRSubsystem_remove_OnXRChange_mCAEB6B5E1477017C8AEEB5F42457DFD8BC0EF482(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnVisibilityChange_m265816ADAE8553437260CCBEDB3560A45CC800F7 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnVisibilityChange += value;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ___value0;
		WebXRSubsystem_add_OnVisibilityChange_m30EDF1BB127B8F79AD5069CA63BD0BA264EC0D56(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnVisibilityChange_m6C7AB531F81396E81214AFBA9CE415D7F4C23CF7 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnVisibilityChange -= value;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ___value0;
		WebXRSubsystem_remove_OnVisibilityChange_m05646DDB5BB319C2AA9EF22D512D5A740AC44386(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnControllerUpdate_m85E134E75244C5DCD7D426AE0744AE4564B82F74 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnControllerUpdate += value;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ___value0;
		WebXRSubsystem_add_OnControllerUpdate_m1112712BD26D5ED2A35F378DA2B6C417281CD19F(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnControllerUpdate_m1D6DC74F45EAF6F342334ECDB0E989E211058F76 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnControllerUpdate -= value;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ___value0;
		WebXRSubsystem_remove_OnControllerUpdate_m13AC4657CFDB3FEED1297644312F52BC46310927(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHandUpdate_m6C4F0494C3EE8247AAFF50D477B7A578722A8C3F (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnHandUpdate += value;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ___value0;
		WebXRSubsystem_add_OnHandUpdate_mB10C0C9E482D13D056B7C223CD6BB0C0255F86C6(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHandUpdate_m3C05EA229B042EB18E97D1E9CDECCBA144175B77 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnHandUpdate -= value;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ___value0;
		WebXRSubsystem_remove_OnHandUpdate_m6172E03FF927837F0466A0ABD2EC1D48D795DDFA(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnHeadsetUpdate_mB05932DFCC1839D8A3325AE6CCF9B0E982F830EE (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnHeadsetUpdate += value;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ___value0;
		WebXRSubsystem_add_OnHeadsetUpdate_m5ECF6D3407F1C997376768516FA51D9E0FAA6C2C(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnHeadsetUpdate_m2F64EFDD7FDB1CE43EAC84D2AADA3A93AC081F97 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnHeadsetUpdate -= value;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ___value0;
		WebXRSubsystem_remove_OnHeadsetUpdate_m556E3EEAE493C6563E44E2DE2948AC323BFCA766(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_add_OnViewerHitTestUpdate_m4C5680B9529DC3C51F486F5F380E30818A1B6E40 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	{
		// add => WebXRSubsystem.OnViewerHitTestUpdate += value;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ___value0;
		WebXRSubsystem_add_OnViewerHitTestUpdate_mA029E56FD44DFC5BF476D791894C774A2C8891DD(L_0, NULL);
		return;
	}
}
// System.Void WebXR.WebXRManager::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_remove_OnViewerHitTestUpdate_m4A0A60034A489D4505165AA5447095209B5ECD08 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	{
		// remove => WebXRSubsystem.OnViewerHitTestUpdate -= value;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ___value0;
		WebXRSubsystem_remove_OnViewerHitTestUpdate_m41D5E7578677065DE3D06F94F2675C78874B6DBA(L_0, NULL);
		return;
	}
}
// System.Boolean WebXR.WebXRManager::get_isSupportedAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_get_isSupportedAR_mA5D23A0D12767CC7DFDDCE49C2D3D306DFF02844 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystem.capabilities.canPresentAR;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_1 = (&L_0->___capabilities_34);
		bool L_2 = L_1->___canPresentAR_0;
		return L_2;
	}
}
// System.Boolean WebXR.WebXRManager::get_isSupportedVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRManager_get_isSupportedVR_mDDC76077B325FFA8DCB18C3A0FDFED27F2D103BF (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystem.capabilities.canPresentVR;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_1 = (&L_0->___capabilities_34);
		bool L_2 = L_1->___canPresentVR_1;
		return L_2;
	}
}
// WebXR.WebXRVisibilityState WebXR.WebXRManager::get_visibilityState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebXRManager_get_visibilityState_m550822E92A3F79749EF23DFD548B45C56473B829 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem == null)
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return WebXRVisibilityState.VISIBLE;
		return (int32_t)(0);
	}

IL_000a:
	{
		// return subsystem.visibilityState;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1;
		L_1 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		int32_t L_2 = L_1->___visibilityState_8;
		return L_2;
	}
}
// System.Void WebXR.WebXRManager::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ToggleAR_m53083C9CC424F4D8CF2B7E8826AFCC8A1492D2B1 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.ToggleAR();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_ToggleAR_m887C2F2C3CA6C771AFC9EFAFAE640FD8911EBF06(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_ToggleVR_mAB02BA7909CB30CD59969EB1E621D69BBA6F46FA (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.ToggleVR();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_ToggleVR_m7D7EB51D7903F9AF860AED2385168A315A39BA49(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_HapticPulse_m026ED038F4C237074F4851B53603CF57BA33070A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.HapticPulse(hand, intensity, duration);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___hand0;
		float L_3 = ___intensity1;
		float L_4 = ___duration2;
		WebXRSubsystem_HapticPulse_m009242D23E2AB23BCB755C8419A36F049001717B(G_B2_0, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_StartViewerHitTest_m98D18BDF0DD8F060C68684B0D5F4A648CAF4928F (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.StartViewerHitTest();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_StartViewerHitTest_m7F3262740B6F8BBD08D1D18EB4517FE3E6E560B3(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_StopViewerHitTest_m199EB9EB268948ADC1A21D80AF9077BF6C55C3C0 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B2_0 = NULL;
	WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* G_B1_0 = NULL;
	{
		// subsystem?.StopViewerHitTest();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebXRSubsystem_StopViewerHitTest_mE0CB192B22E0C8E327FDBF8FE73B15CBB6D68506(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Awake_m0842C3BC115C9FE02CF7083B796F92657FFFF529 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E(__this, SubsystemLifecycleManager_2_Awake_mFF3CD8687352A9D2228BF28A71C00AE8F8D8495E_RuntimeMethod_var);
		// Instance = this;
		WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA_inline(__this, NULL);
		// enabled = subsystem != null;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)((!(((RuntimeObject*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager_Update_m47DBA695BA6A522030006E22E82F702ABB878260 (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystem.OnUpdate();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_inline(__this, SubsystemLifecycleManager_2_get_subsystem_m41E2B1C084BE8C8D18FE310457EE939E85AD65CF_RuntimeMethod_var);
		WebXRSubsystem_OnUpdate_m367E30F7A5D60CCA3789BFACA12A44538BF9BF42(L_0, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRManager__ctor_m6BAA6C41AE8694FE4CC8EDFC49014A00F7C7068A (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02(__this, SubsystemLifecycleManager_2__ctor_m9D8DBFE71399D36404B03B76A96961DE6A8FFD02_RuntimeMethod_var);
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
// WebXR.WebXRSubsystem WebXR.WebXRLoader::get_WebXRSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m21CA67B8F3D59C2D5AEA38E9587A54418B5A8972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebXRSubsystem WebXRSubsystem => GetLoadedSubsystem<WebXRSubsystem>();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = GenericVirtualFuncInvoker0< WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m21CA67B8F3D59C2D5AEA38E9587A54418B5A8972_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem WebXR.WebXRLoader::get_XRDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* WebXRLoader_get_XRDisplaySubsystem_m9DE1C65BECCEE7012CD0B0F4A160C1E9B7FB83B6 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRDisplaySubsystem XRDisplaySubsystem => GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem WebXR.WebXRLoader::get_XRInputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* WebXRLoader_get_XRInputSubsystem_m59C6D6032D9F59D5BBF8BB4909E048B15C928656 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRInputSubsystem XRInputSubsystem => GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void WebXR.WebXRLoader::SetWebXRSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader_SetWebXRSettings_m057BE518BCA3CA58B9912C981EBF35DC3F697ECD (String_t* ___settingsJson0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___settingsJson0' to native representation
	char* ____settingsJson0_marshaled = NULL;
	____settingsJson0_marshaled = il2cpp_codegen_marshal_string(___settingsJson0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetWebXRSettings)(____settingsJson0_marshaled);

	// Marshaling cleanup of parameter '___settingsJson0' native representation
	il2cpp_codegen_marshal_free(____settingsJson0_marshaled);
	____settingsJson0_marshaled = NULL;

}
// WebXR.WebXRSettings WebXR.WebXRLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRLoader_GetSettings_m4C44CEDACB023EF223DE33C6C3DE2934BA11EAB8 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// settings = WebXRSettings.Instance;
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0;
		L_0 = WebXRSettings_get_Instance_m33ECDF5FAEA749BC310D3F36FB6B58B09E44F6CD_inline(NULL);
		// return settings;
		return L_0;
	}
}
// System.Boolean WebXR.WebXRLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Initialize_m48A32716032A3BFE82AA96C9FFCD82B99882A325 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D585C0CF017666D27E62797181776A7A1789937);
		s_Il2CppMethodInitialized = true;
	}
	WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* V_0 = NULL;
	{
		// WebXRSettings settings = GetSettings();
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0;
		L_0 = WebXRLoader_GetSettings_m4C44CEDACB023EF223DE33C6C3DE2934BA11EAB8(__this, NULL);
		V_0 = L_0;
		// if (settings != null)
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log($"Got WebXRSettings");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral87A1893D9F40A4929689F53B0A652425CBADD216, NULL);
		// SetWebXRSettings(settings.ToJson());
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_3 = V_0;
		String_t* L_4;
		L_4 = WebXRSettings_ToJson_m093FFB2FFD5907B24347969B5F78E724AD3BAD9A(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		WebXRLoader_SetWebXRSettings_m057BE518BCA3CA58B9912C981EBF35DC3F697ECD(L_4, NULL);
		// Debug.Log($"Sent WebXRSettings");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8D585C0CF017666D27E62797181776A7A1789937, NULL);
	}

IL_002f:
	{
		// CreateSubsystem<WebXRSubsystemDescriptor, WebXRSubsystem>(sampleSubsystemDescriptors, typeof(WebXRSubsystem).FullName);
		il2cpp_codegen_runtime_class_init_inline(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* L_5 = ((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___sampleSubsystemDescriptors_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_7);
		XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813(__this, L_5, L_8, XRLoaderHelper_CreateSubsystem_TisWebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_TisWebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_m6EFE34BC50183EB0A80039D7320C76A851F90813_RuntimeMethod_var);
		// return WebXRSubsystem != null;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_9;
		L_9 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		return (bool)((!(((RuntimeObject*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean WebXR.WebXRLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Start_mE00ABBBFE736175DE489D36DFBF14DFFDAB31E37 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// WebXRSubsystem.Start();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		VirtualActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Start() */, L_0);
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Stop_mE3BEC11797DC9F7B328BBB800069283A0955DA29 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// WebXRSubsystem.Stop();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.Subsystem::Stop() */, L_0);
		// return base.Stop();
		bool L_1;
		L_1 = XRLoader_Stop_m398D1FFBE01D294AD5DFB6DB8D807C1DDEA91C97(__this, NULL);
		return L_1;
	}
}
// System.Boolean WebXR.WebXRLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRLoader_Deinitialize_mC82FBC893C59C9DA0C074CEE06FF966222CBC399 (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		// WebXRSubsystem.Destroy();
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0;
		L_0 = WebXRLoader_get_WebXRSubsystem_m33F1D1E18E30B32D4D663497E1B09C365C5987A7(__this, NULL);
		Subsystem_Destroy_m0CE70A94D9CAD2E4B2528CFE5D9C874FD5BC4759(L_0, NULL);
		// return base.Deinitialize();
		bool L_1;
		L_1 = XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7(__this, NULL);
		return L_1;
	}
}
// System.Void WebXR.WebXRLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader__ctor_m003912C862A952C3A8C2216D546CD8AB7DD2009E (WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE* __this, const RuntimeMethod* method) 
{
	{
		XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699(__this, NULL);
		return;
	}
}
// System.Void WebXR.WebXRLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRLoader__cctor_mDD5D2A6E634AEA4BF994C7407D660E0AF8C96C5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<WebXRSubsystemDescriptor> sampleSubsystemDescriptors = new List<WebXRSubsystemDescriptor>();
		List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A* L_0 = (List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A*)il2cpp_codegen_object_new(List_1_tF91E7330F6FEB1AA3D5E5CEC2EC92A31F8102E0A_il2cpp_TypeInfo_var);
		List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB(L_0, List_1__ctor_mF35EB23A910B85B7C5FADB9B6B88F34093C85FCB_RuntimeMethod_var);
		((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___sampleSubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___sampleSubsystemDescriptors_5), (void*)L_0);
		// static readonly List<XRDisplaySubsystemDescriptor> displaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_1 = (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*)il2cpp_codegen_object_new(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773(L_1, List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___displaySubsystemDescriptors_6), (void*)L_1);
		// static readonly List<XRInputSubsystemDescriptor> inputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_2 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_2, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_StaticFields*)il2cpp_codegen_static_fields_for(WebXRLoader_t35613B7D6387DD521E11F21957BF6E29B2F21EAE_il2cpp_TypeInfo_var))->___inputSubsystemDescriptors_7), (void*)L_2);
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
// System.String WebXR.WebXRSettings::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebXRSettings_ToJson_m093FFB2FFD5907B24347969B5F78E724AD3BAD9A (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		//       string result = $@"{{
		//         ""VRRequiredReferenceSpace"": [""{EnumToString(VRRequiredReferenceSpace)}""],
		//         ""VROptionalFeatures"": {FlagsToString(VROptionalFeatures)},
		//         ""ARRequiredReferenceSpace"": [""{EnumToString(ARRequiredReferenceSpace)}""],
		//         ""AROptionalFeatures"": {FlagsToString(AROptionalFeatures)}
		// }}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1BC205282494EDAD88FEBA407496CDAA04E87325);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3 = __this->___VRRequiredReferenceSpace_4;
		String_t* L_4;
		L_4 = WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F(__this, L_3, WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDCD582124812A5577151DA28727D87A7C1AA2DBE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7 = __this->___VROptionalFeatures_5;
		String_t* L_8;
		L_8 = WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E(__this, L_7, WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF67A84AA24F72BA4244465A82FF0DAE9F0B01BCD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t L_11 = __this->___ARRequiredReferenceSpace_6;
		String_t* L_12;
		L_12 = WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F(__this, L_11, WebXRSettings_EnumToString_TisReferenceSpaceTypes_tC1C6B01D7ACE078F796BAC33B0074D5F0C41A824_mB9775643501E1261B139D429F411E02D65C6CD8F_RuntimeMethod_var);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		ArrayElementTypeCheck (L_13, _stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6B0894ABEAF7E64D2686097C87A687C8FEA277AA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t L_15 = __this->___AROptionalFeatures_7;
		String_t* L_16;
		L_16 = WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E(__this, L_15, WebXRSettings_FlagsToString_TisExtraFeatureTypes_t1A6A831AA5A600396400EA7AB9626360FB5178D7_mB2FBC5AC74900FFB29A7AF3FD7914B173101904E_RuntimeMethod_var);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral0491ADD30E5917C8C04A75C1C1EB6BF687A9409A);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_17, NULL);
		// return result;
		return L_18;
	}
}
// WebXR.WebXRSettings WebXR.WebXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRSettings_get_Instance_m33ECDF5FAEA749BC310D3F36FB6B58B09E44F6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0 = ((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_8;
		return L_0;
	}
}
// System.Void WebXR.WebXRSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings_Awake_m33D8428923ABE6E0E7427A1EFF6DD4EE22F903B2 (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_8), (void*)__this);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSettings__ctor_mB856A579FD13AAB8894BCE783906F8153EF914FB (WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* __this, const RuntimeMethod* method) 
{
	{
		// public ReferenceSpaceTypes VRRequiredReferenceSpace = ReferenceSpaceTypes.local_floor;
		__this->___VRRequiredReferenceSpace_4 = 2;
		// public ExtraFeatureTypes VROptionalFeatures = ExtraFeatureTypes.hand_tracking;
		__this->___VROptionalFeatures_5 = 2;
		// public ReferenceSpaceTypes ARRequiredReferenceSpace = ReferenceSpaceTypes.local_floor;
		__this->___ARRequiredReferenceSpace_6 = 2;
		// public ExtraFeatureTypes AROptionalFeatures = (ExtraFeatureTypes)(-1);
		__this->___AROptionalFeatures_7 = (-1);
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
// System.Void WebXR.WebXRSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystemDescriptor__ctor_m34D7CDDE80E7950CDC5BEA06E9FB43B1AFCD4551 (WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79(__this, SubsystemDescriptor_1__ctor_m72501485D43AC43CE92FF879B3FAA4E1B0EBDF79_RuntimeMethod_var);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7(int32_t ___isARSupported0, int32_t ___isVRSupported1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7(static_cast<bool>(___isARSupported0), static_cast<bool>(___isVRSupported1), NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3(char* ___json0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___json0' to managed representation
	String_t* ____json0_unmarshaled = NULL;
	____json0_unmarshaled = il2cpp_codegen_marshal_string_result(___json0);

	// Managed method invocation
	WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3(____json0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519(int32_t ___visibilityState0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519(___visibilityState0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419(NULL);

}
// System.Void WebXR.WebXRSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_RegisterDescriptor_m014D56E7EC8DEB18D742544C4064F900EE046FF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemRegistration_tBF4BF08A2270D9934F883D9B799E8A033BC28F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var res = SubsystemRegistration.CreateDescriptor(new WebXRSubsystemDescriptor()
		// {
		//   id = typeof(WebXRSubsystem).FullName,
		//   subsystemImplementationType = typeof(WebXRSubsystem)
		// });
		WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* L_0 = (WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42*)il2cpp_codegen_object_new(WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42_il2cpp_TypeInfo_var);
		WebXRSubsystemDescriptor__ctor_m34D7CDDE80E7950CDC5BEA06E9FB43B1AFCD4551(L_0, NULL);
		WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_3);
		SubsystemDescriptor_set_id_m9EE44E7C8BBF000B1BE2D518620FBBB0F4CB0236_inline(L_1, L_4, NULL);
		WebXRSubsystemDescriptor_t737A0623F50DCB7FDCDEC9A2606A977585CCBC42* L_5 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		SubsystemDescriptor_set_subsystemImplementationType_m3A2FB7296C79FA765F6A6B972B04504D4D3FA359_inline(L_5, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemRegistration_tBF4BF08A2270D9934F883D9B799E8A033BC28F21_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SubsystemRegistration_CreateDescriptor_mCE7479B03E9146CB8F255997DED1572635CD9541(L_5, NULL);
		// if (res)
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("Registered " + nameof(WebXRSubsystemDescriptor));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral44A2D1E81273492703A3E72527231CF054E24ED6, NULL);
		return;
	}

IL_003c:
	{
		// else Debug.Log("Failed registering " + nameof(WebXRSubsystemDescriptor));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral58241AA816E08701F7E8CDAA4AE7E1305DD05EAC, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_Start_mDC2E582E30990BCB05785DEDCFFFA1DFCD15A4F5 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (running) return;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, __this);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Start " + nameof(WebXRSubsystem));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral111B20F0F7B41BAAB439CEDD4E3A3BE9E8CB4560, NULL);
		// _running = true;
		__this->____running_1 = (bool)1;
		// Instance = this;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2), (void*)__this);
		// InternalStart();
		WebXRSubsystem_InternalStart_mB00924DB77CB2B988996D29CCD3118B3AB08B27F(__this, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_Stop_m4F264826B6D7FAAC4932792884057B535051909C (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_running) return;
		bool L_0 = __this->____running_1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Stop " + nameof(WebXRSubsystem));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1EBB1A288D1FD2638C9CF918E19C9C00ABEDEC11, NULL);
		// _running = false;
		__this->____running_1 = (bool)0;
		// Instance = null;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2 = (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2), (void*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnDestroy_mC002B65DBCBF155D667DF388119022F917298C61 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!running) return;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.Subsystem::get_running() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!running) return;
		return;
	}

IL_0009:
	{
		// Debug.Log("Destroy " + nameof(WebXRSubsystem));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralE1383DB48A524C3C40C8363BDFBF8E7A18E02222, NULL);
		// _running = false;
		__this->____running_1 = (bool)0;
		// Instance = null;
		((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2 = (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2), (void*)(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06*)NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateControllersOnEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateControllersOnEnd_m6621B68CF27B717E908B2FDBD81A2C9E281DBFFB (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B4_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B3_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B8_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B7_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B13_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B12_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B17_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B16_0 = NULL;
	{
		// if (OnHandUpdate != null)
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (GetHandFromHandsArray(0, ref leftHand))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_1 = (&__this->___leftHand_29);
		bool L_2;
		L_2 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// OnHandUpdate?.Invoke(leftHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0021;
		}
	}
	{
		goto IL_002c;
	}

IL_0021:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_5 = __this->___leftHand_29;
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B4_0, L_5, NULL);
	}

IL_002c:
	{
		// if (GetHandFromHandsArray(1, ref rightHand))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_6 = (&__this->___rightHand_30);
		bool L_7;
		L_7 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 1, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// OnHandUpdate?.Invoke(rightHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_8 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_9 = L_8;
		G_B7_0 = L_9;
		if (L_9)
		{
			G_B8_0 = L_9;
			goto IL_0046;
		}
	}
	{
		goto IL_0051;
	}

IL_0046:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_10 = __this->___rightHand_30;
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B8_0, L_10, NULL);
	}

IL_0051:
	{
		// if (OnControllerUpdate != null)
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_11 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// if (GetGamepadFromControllersArray(0, ref controller1))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_12 = (&__this->___controller1_31);
		bool L_13;
		L_13 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 0, L_12, NULL);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller1);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_14 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_15 = L_14;
		G_B12_0 = L_15;
		if (L_15)
		{
			G_B13_0 = L_15;
			goto IL_0072;
		}
	}
	{
		goto IL_007d;
	}

IL_0072:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_16 = __this->___controller1_31;
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B13_0, L_16, NULL);
	}

IL_007d:
	{
		// if (GetGamepadFromControllersArray(1, ref controller2))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_17 = (&__this->___controller2_32);
		bool L_18;
		L_18 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 1, L_17, NULL);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller2);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_19 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_20 = L_19;
		G_B16_0 = L_20;
		if (L_20)
		{
			G_B17_0 = L_20;
			goto IL_0096;
		}
	}
	{
		return;
	}

IL_0096:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_21 = __this->___controller2_32;
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B17_0, L_21, NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnUpdate_m367E30F7A5D60CCA3789BFACA12A44538BF9BF42 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* G_B3_0 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* G_B2_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* G_B9_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* G_B8_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B17_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B16_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B21_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* G_B20_0 = NULL;
	int32_t G_B25_0 = 0;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B32_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B31_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B36_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* G_B35_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* G_B42_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* G_B41_0 = NULL;
	{
		// if (!reportedXRStateSwitch)
		bool L_0 = __this->___reportedXRStateSwitch_7;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// reportedXRStateSwitch = true;
		__this->___reportedXRStateSwitch_7 = (bool)1;
		// OnXRChange?.Invoke(xrState, viewsCount, leftRect, rightRect);
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_1 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_11;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_001a;
		}
	}
	{
		goto IL_0037;
	}

IL_001a:
	{
		int32_t L_3 = __this->___xrState_3;
		int32_t L_4 = __this->___viewsCount_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = __this->___leftRect_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = __this->___rightRect_6;
		XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_inline(G_B3_0, L_3, L_4, L_5, L_6, NULL);
	}

IL_0037:
	{
		// if (!updatedControllersOnEnd)
		bool L_7 = __this->___updatedControllersOnEnd_28;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// updatedControllersOnEnd = true;
		__this->___updatedControllersOnEnd_28 = (bool)1;
		// UpdateControllersOnEnd();
		WebXRSubsystem_UpdateControllersOnEnd_m6621B68CF27B717E908B2FDBD81A2C9E281DBFFB(__this, NULL);
	}

IL_004c:
	{
		// if (visibilityStateChanged)
		bool L_8 = __this->___visibilityStateChanged_9;
		if (!L_8)
		{
			goto IL_0071;
		}
	}
	{
		// visibilityStateChanged = false;
		__this->___visibilityStateChanged_9 = (bool)0;
		// OnVisibilityChange?.Invoke(visibilityState);
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_9 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_12;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_10 = L_9;
		G_B8_0 = L_10;
		if (L_10)
		{
			G_B9_0 = L_10;
			goto IL_0066;
		}
	}
	{
		goto IL_0071;
	}

IL_0066:
	{
		int32_t L_11 = __this->___visibilityState_8;
		VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_inline(G_B9_0, L_11, NULL);
	}

IL_0071:
	{
		// if (this.xrState == WebXRState.NORMAL)
		int32_t L_12 = __this->___xrState_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		// return;
		return;
	}

IL_007b:
	{
		// UpdateXRCameras();
		WebXRSubsystem_UpdateXRCameras_m543AAA7AC495694AC4FED738EED24B02FB8891A0(__this, NULL);
		// bool hasHandsData = false;
		V_0 = (bool)0;
		// if (OnHandUpdate != null && this.xrState != WebXRState.NORMAL)
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_13 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		if (!L_13)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_14 = __this->___xrState_3;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_00f9;
		}
	}
	{
		// if (GetHandFromHandsArray(0, ref leftHand))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_15 = (&__this->___leftHand_29);
		bool L_16;
		L_16 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 0, L_15, NULL);
		if (!L_16)
		{
			goto IL_00b8;
		}
	}
	{
		// OnHandUpdate?.Invoke(leftHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_17 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_18 = L_17;
		G_B16_0 = L_18;
		if (L_18)
		{
			G_B17_0 = L_18;
			goto IL_00ad;
		}
	}
	{
		goto IL_00b8;
	}

IL_00ad:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_19 = __this->___leftHand_29;
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B17_0, L_19, NULL);
	}

IL_00b8:
	{
		// if (GetHandFromHandsArray(1, ref rightHand))
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_20 = (&__this->___rightHand_30);
		bool L_21;
		L_21 = WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314(__this, 1, L_20, NULL);
		if (!L_21)
		{
			goto IL_00dd;
		}
	}
	{
		// OnHandUpdate?.Invoke(rightHand);
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_22 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_23 = L_22;
		G_B20_0 = L_23;
		if (L_23)
		{
			G_B21_0 = L_23;
			goto IL_00d2;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d2:
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_24 = __this->___rightHand_30;
		HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline(G_B21_0, L_24, NULL);
	}

IL_00dd:
	{
		// hasHandsData = leftHand.enabled || rightHand.enabled;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_25 = __this->___leftHand_29;
		bool L_26 = L_25->___enabled_1;
		if (L_26)
		{
			goto IL_00f7;
		}
	}
	{
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_27 = __this->___rightHand_30;
		bool L_28 = L_27->___enabled_1;
		G_B25_0 = ((int32_t)(L_28));
		goto IL_00f8;
	}

IL_00f7:
	{
		G_B25_0 = 1;
	}

IL_00f8:
	{
		V_0 = (bool)G_B25_0;
	}

IL_00f9:
	{
		// if (!hasHandsData && OnControllerUpdate != null && this.xrState != WebXRState.NORMAL)
		bool L_29 = V_0;
		if (L_29)
		{
			goto IL_0156;
		}
	}
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_30 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		if (!L_30)
		{
			goto IL_0156;
		}
	}
	{
		int32_t L_31 = __this->___xrState_3;
		if ((((int32_t)L_31) == ((int32_t)2)))
		{
			goto IL_0156;
		}
	}
	{
		// if (GetGamepadFromControllersArray(0, ref controller1))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_32 = (&__this->___controller1_31);
		bool L_33;
		L_33 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 0, L_32, NULL);
		if (!L_33)
		{
			goto IL_0131;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller1);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_34 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_35 = L_34;
		G_B31_0 = L_35;
		if (L_35)
		{
			G_B32_0 = L_35;
			goto IL_0126;
		}
	}
	{
		goto IL_0131;
	}

IL_0126:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_36 = __this->___controller1_31;
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B32_0, L_36, NULL);
	}

IL_0131:
	{
		// if (GetGamepadFromControllersArray(1, ref controller2))
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_37 = (&__this->___controller2_32);
		bool L_38;
		L_38 = WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701(__this, 1, L_37, NULL);
		if (!L_38)
		{
			goto IL_0156;
		}
	}
	{
		// OnControllerUpdate?.Invoke(controller2);
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_39 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_40 = L_39;
		G_B35_0 = L_40;
		if (L_40)
		{
			G_B36_0 = L_40;
			goto IL_014b;
		}
	}
	{
		goto IL_0156;
	}

IL_014b:
	{
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_41 = __this->___controller2_32;
		ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline(G_B36_0, L_41, NULL);
	}

IL_0156:
	{
		// if (OnViewerHitTestUpdate != null && this.xrState == WebXRState.AR)
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_42 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_16;
		if (!L_42)
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_43 = __this->___xrState_3;
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_0189;
		}
	}
	{
		// if (GetHitTestPoseFromViewerHitTestPoseArray(ref viewerHitTestPose))
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_44 = (&__this->___viewerHitTestPose_33);
		bool L_45;
		L_45 = WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_mE61BA2D5E7DB25938DF78B9FE354F9A02C95211E(__this, L_44, NULL);
		if (!L_45)
		{
			goto IL_0189;
		}
	}
	{
		// OnViewerHitTestUpdate?.Invoke(viewerHitTestPose);
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_46 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_16;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_47 = L_46;
		G_B41_0 = L_47;
		if (L_47)
		{
			G_B42_0 = L_47;
			goto IL_017e;
		}
	}
	{
		return;
	}

IL_017e:
	{
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_48 = __this->___viewerHitTestPose_33;
		HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_inline(G_B42_0, L_48, NULL);
	}

IL_0189:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateXRCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateXRCameras_m543AAA7AC495694AC4FED738EED24B02FB8891A0 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* G_B4_0 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* G_B3_0 = NULL;
	{
		// if (OnHeadsetUpdate != null && this.xrState != WebXRState.NORMAL)
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_13;
		if (!L_0)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_1 = __this->___xrState_3;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_009c;
		}
	}
	{
		// GetMatrixFromSharedArray(0, ref leftProjectionMatrix);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->___leftProjectionMatrix_17);
		WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3(__this, 0, L_2, NULL);
		// GetMatrixFromSharedArray(16, ref rightProjectionMatrix);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->___rightProjectionMatrix_18);
		WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3(__this, ((int32_t)16), L_3, NULL);
		// GetQuaternionFromSharedArray(32, ref leftRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = (&__this->___leftRotation_21);
		WebXRSubsystem_GetQuaternionFromSharedArray_m0E124BC48C6A79EB967AB6CB7667DF7F0F81E27D(__this, ((int32_t)32), L_4, NULL);
		// GetQuaternionFromSharedArray(36, ref rightRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = (&__this->___rightRotation_22);
		WebXRSubsystem_GetQuaternionFromSharedArray_m0E124BC48C6A79EB967AB6CB7667DF7F0F81E27D(__this, ((int32_t)36), L_5, NULL);
		// GetVector3FromSharedArray(40, ref leftPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___leftPosition_19);
		WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B(__this, ((int32_t)40), L_6, NULL);
		// GetVector3FromSharedArray(43, ref rightPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___rightPosition_20);
		WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B(__this, ((int32_t)43), L_7, NULL);
		// OnHeadsetUpdate?.Invoke(
		//     leftProjectionMatrix,
		//     rightProjectionMatrix,
		//     leftRotation,
		//     rightRotation,
		//     leftPosition,
		//     rightPosition);
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_8 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_13;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = __this->___leftProjectionMatrix_17;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = __this->___rightProjectionMatrix_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___leftRotation_21;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___rightRotation_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___leftPosition_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___rightPosition_20;
		HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_inline(G_B4_0, L_10, L_11, L_12, L_13, L_14, L_15, NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_get_running_m4656527947C2FEF2602FD4ADC5A4D553E7CC4183 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// public override bool running => _running;
		bool L_0 = __this->____running_1;
		return L_0;
	}
}
// System.Void WebXR.WebXRSubsystem::InternalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_InternalStart_mB00924DB77CB2B988996D29CCD3118B3AB08B27F (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Native.SetWebXREvents(OnStartAR, OnStartVR, UpdateVisibilityState, OnEndXR, OnXRCapabilities, OnInputProfiles);
		StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* L_0 = (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7*)il2cpp_codegen_object_new(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7_il2cpp_TypeInfo_var);
		StartXREvent__ctor_mD79D19081CB5888373658432D7A4ADF6FBC0E03E(L_0, NULL, (intptr_t)((void*)WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7_RuntimeMethod_var), NULL);
		StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* L_1 = (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7*)il2cpp_codegen_object_new(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7_il2cpp_TypeInfo_var);
		StartXREvent__ctor_mD79D19081CB5888373658432D7A4ADF6FBC0E03E(L_1, NULL, (intptr_t)((void*)WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054_RuntimeMethod_var), NULL);
		VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* L_2 = (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B*)il2cpp_codegen_object_new(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B_il2cpp_TypeInfo_var);
		VisibilityChangeEvent__ctor_m865EFAD1D01ECA43A7574FFDE9003BE918DF9510(L_2, NULL, (intptr_t)((void*)WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519_RuntimeMethod_var), NULL);
		EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* L_3 = (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424*)il2cpp_codegen_object_new(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424_il2cpp_TypeInfo_var);
		EndXREvent__ctor_mF58E2A752AF32940C04F52F402A26C93D0F446FD(L_3, NULL, (intptr_t)((void*)WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419_RuntimeMethod_var), NULL);
		XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* L_4 = (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6*)il2cpp_codegen_object_new(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6_il2cpp_TypeInfo_var);
		XRCapabilitiesEvent__ctor_mD28857E41C6F952467E56AEB559BE1B520767B41(L_4, NULL, (intptr_t)((void*)WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7_RuntimeMethod_var), NULL);
		InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* L_5 = (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304*)il2cpp_codegen_object_new(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304_il2cpp_TypeInfo_var);
		InputProfilesEvent__ctor_m21B517477B45852125B3FD4E1202E9923152A921(L_5, NULL, (intptr_t)((void*)WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3_RuntimeMethod_var), NULL);
		Native_SetWebXREvents_mFDAD9F1C04199A34C011555557FBC99DEBA7EEEA(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// Native.InitControllersArray(controllersArray);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___controllersArray_24;
		Native_InitControllersArray_m91361A4D436E10BD3B4360A895D1F7172F64632A(L_6, NULL);
		// Native.InitHandsArray(handsArray);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___handsArray_25;
		Native_InitHandsArray_m65F79B3D30CC64F61D67DB8204A26F1BBF4E0E80(L_7, NULL);
		// Native.InitViewerHitTestPoseArray(viewerHitTestPoseArray);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = __this->___viewerHitTestPoseArray_26;
		Native_InitViewerHitTestPoseArray_m5C9B2834D544560A0ACC172A5658E79502039D79(L_8, NULL);
		// Native.InitXRSharedArray(sharedArray);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___sharedArray_23;
		Native_InitXRSharedArray_mB4EDD6AF0665CC438BDE94ACF766AE9D5B1E1F2F(L_9, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRCapabilitiesUpdate_m39BADD1A100FD74622FB37E130F7A60CE5EE6E04 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_0 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_1 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_2 = NULL;
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_10;
		V_0 = L_0;
	}

IL_0006:
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_2 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_5 = V_2;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_6 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_10), L_5, L_6);
		V_0 = L_7;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_8 = V_0;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_8) == ((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnXRCapabilitiesUpdate(WebXR.WebXRSubsystem/XRCapabilitiesUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRCapabilitiesUpdate_m7781F48D8554CEFD7D3A142D9047DF256EECB34F (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_0 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_1 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* V_2 = NULL;
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_10;
		V_0 = L_0;
	}

IL_0006:
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_1 = V_0;
		V_1 = L_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_2 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)CastclassSealed((RuntimeObject*)L_4, XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA_il2cpp_TypeInfo_var));
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_5 = V_2;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_6 = V_1;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_10), L_5, L_6);
		V_0 = L_7;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_8 = V_0;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_8) == ((RuntimeObject*)(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnXRChange_m555E21B6DC1FF2777A5EE4C7090C5C467B32F821 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_0 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_1 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_2 = NULL;
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_11;
		V_0 = L_0;
	}

IL_0006:
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_1 = V_0;
		V_1 = L_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)CastclassSealed((RuntimeObject*)L_4, XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var));
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_5 = V_2;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_6 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_11), L_5, L_6);
		V_0 = L_7;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_8 = V_0;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_8) == ((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnXRChange(WebXR.WebXRSubsystem/XRChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnXRChange_mCAEB6B5E1477017C8AEEB5F42457DFD8BC0EF482 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_0 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_1 = NULL;
	XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* V_2 = NULL;
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_11;
		V_0 = L_0;
	}

IL_0006:
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_1 = V_0;
		V_1 = L_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_2 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)CastclassSealed((RuntimeObject*)L_4, XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF_il2cpp_TypeInfo_var));
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_5 = V_2;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_6 = V_1;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_7;
		L_7 = InterlockedCompareExchangeImpl<XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRChange_11), L_5, L_6);
		V_0 = L_7;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_8 = V_0;
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* L_9 = V_1;
		if ((!(((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_8) == ((RuntimeObject*)(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnVisibilityChange_m30EDF1BB127B8F79AD5069CA63BD0BA264EC0D56 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_1 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_2 = NULL;
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_12;
		V_0 = L_0;
	}

IL_0006:
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_1 = V_0;
		V_1 = L_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_2 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)CastclassSealed((RuntimeObject*)L_4, VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var));
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_5 = V_2;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_6 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_7;
		L_7 = InterlockedCompareExchangeImpl<VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_12), L_5, L_6);
		V_0 = L_7;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_8 = V_0;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_9 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_8) == ((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnVisibilityChange(WebXR.WebXRSubsystem/VisibilityChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnVisibilityChange_m05646DDB5BB319C2AA9EF22D512D5A740AC44386 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_0 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_1 = NULL;
	VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* V_2 = NULL;
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_12;
		V_0 = L_0;
	}

IL_0006:
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_1 = V_0;
		V_1 = L_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_2 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)CastclassSealed((RuntimeObject*)L_4, VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85_il2cpp_TypeInfo_var));
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_5 = V_2;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_6 = V_1;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_7;
		L_7 = InterlockedCompareExchangeImpl<VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnVisibilityChange_12), L_5, L_6);
		V_0 = L_7;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_8 = V_0;
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* L_9 = V_1;
		if ((!(((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_8) == ((RuntimeObject*)(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHeadsetUpdate_m5ECF6D3407F1C997376768516FA51D9E0FAA6C2C (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_0 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_1 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_2 = NULL;
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_13;
		V_0 = L_0;
	}

IL_0006:
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_2 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var));
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_5 = V_2;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_6 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_7;
		L_7 = InterlockedCompareExchangeImpl<HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_13), L_5, L_6);
		V_0 = L_7;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_8 = V_0;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_9 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_8) == ((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnHeadsetUpdate(WebXR.WebXRSubsystem/HeadsetUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHeadsetUpdate_m556E3EEAE493C6563E44E2DE2948AC323BFCA766 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_0 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_1 = NULL;
	HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* V_2 = NULL;
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_13;
		V_0 = L_0;
	}

IL_0006:
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_1 = V_0;
		V_1 = L_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_2 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)CastclassSealed((RuntimeObject*)L_4, HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751_il2cpp_TypeInfo_var));
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_5 = V_2;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_6 = V_1;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_7;
		L_7 = InterlockedCompareExchangeImpl<HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHeadsetUpdate_13), L_5, L_6);
		V_0 = L_7;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_8 = V_0;
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* L_9 = V_1;
		if ((!(((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_8) == ((RuntimeObject*)(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnControllerUpdate_m1112712BD26D5ED2A35F378DA2B6C417281CD19F (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_1 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_2 = NULL;
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		V_0 = L_0;
	}

IL_0006:
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_2 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var));
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_5 = V_2;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_6 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_7;
		L_7 = InterlockedCompareExchangeImpl<ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14), L_5, L_6);
		V_0 = L_7;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_8 = V_0;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_9 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_8) == ((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnControllerUpdate(WebXR.WebXRSubsystem/ControllerUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnControllerUpdate_m13AC4657CFDB3FEED1297644312F52BC46310927 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_0 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_1 = NULL;
	ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* V_2 = NULL;
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14;
		V_0 = L_0;
	}

IL_0006:
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_1 = V_0;
		V_1 = L_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_2 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)CastclassSealed((RuntimeObject*)L_4, ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989_il2cpp_TypeInfo_var));
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_5 = V_2;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_6 = V_1;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_7;
		L_7 = InterlockedCompareExchangeImpl<ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnControllerUpdate_14), L_5, L_6);
		V_0 = L_7;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_8 = V_0;
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* L_9 = V_1;
		if ((!(((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_8) == ((RuntimeObject*)(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnHandUpdate_mB10C0C9E482D13D056B7C223CD6BB0C0255F86C6 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_1 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_2 = NULL;
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		V_0 = L_0;
	}

IL_0006:
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = V_0;
		V_1 = L_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_2 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)CastclassSealed((RuntimeObject*)L_4, HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var));
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_5 = V_2;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_6 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_7;
		L_7 = InterlockedCompareExchangeImpl<HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15), L_5, L_6);
		V_0 = L_7;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_8 = V_0;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_9 = V_1;
		if ((!(((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_8) == ((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnHandUpdate(WebXR.WebXRSubsystem/HandUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnHandUpdate_m6172E03FF927837F0466A0ABD2EC1D48D795DDFA (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_0 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_1 = NULL;
	HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* V_2 = NULL;
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15;
		V_0 = L_0;
	}

IL_0006:
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_1 = V_0;
		V_1 = L_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_2 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)CastclassSealed((RuntimeObject*)L_4, HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8_il2cpp_TypeInfo_var));
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_5 = V_2;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_6 = V_1;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_7;
		L_7 = InterlockedCompareExchangeImpl<HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnHandUpdate_15), L_5, L_6);
		V_0 = L_7;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_8 = V_0;
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* L_9 = V_1;
		if ((!(((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_8) == ((RuntimeObject*)(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::add_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_add_OnViewerHitTestUpdate_mA029E56FD44DFC5BF476D791894C774A2C8891DD (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_1 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_2 = NULL;
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_16;
		V_0 = L_0;
	}

IL_0006:
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_1 = V_0;
		V_1 = L_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_2 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)CastclassSealed((RuntimeObject*)L_4, HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var));
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_5 = V_2;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_6 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_7;
		L_7 = InterlockedCompareExchangeImpl<HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_16), L_5, L_6);
		V_0 = L_7;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_8 = V_0;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_9 = V_1;
		if ((!(((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_8) == ((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::remove_OnViewerHitTestUpdate(WebXR.WebXRSubsystem/HitTestUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_remove_OnViewerHitTestUpdate_m41D5E7578677065DE3D06F94F2675C78874B6DBA (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_0 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_1 = NULL;
	HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* V_2 = NULL;
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_16;
		V_0 = L_0;
	}

IL_0006:
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_1 = V_0;
		V_1 = L_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_2 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)CastclassSealed((RuntimeObject*)L_4, HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632_il2cpp_TypeInfo_var));
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_5 = V_2;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_6 = V_1;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_7;
		L_7 = InterlockedCompareExchangeImpl<HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*>((&((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnViewerHitTestUpdate_16), L_5, L_6);
		V_0 = L_7;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_8 = V_0;
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* L_9 = V_1;
		if ((!(((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_8) == ((RuntimeObject*)(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m2DB701C51E13D72B01F2A23F2642D9E19F608BA7 (bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.capabilities.canPresentAR = isARSupported;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_1 = (&L_0->___capabilities_34);
		bool L_2 = ___isARSupported0;
		L_1->___canPresentAR_0 = L_2;
		// Instance.capabilities.canPresentVR = isVRSupported;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_4 = (&L_3->___capabilities_34);
		bool L_5 = ___isVRSupported1;
		L_4->___canPresentVR_1 = L_5;
		// Instance.OnXRCapabilities(Instance.capabilities);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_6 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_7 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA L_8 = L_7->___capabilities_34;
		WebXRSubsystem_OnXRCapabilities_m5E31E7810E767BF5342FCE57C857AB3AC49AEFB5(L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m899B2EC969051BC5D39367353B8F0D7A84F9AEF3 (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* V_0 = NULL;
	{
		// WebXRControllersProfiles controllersProfiles = JsonUtility.FromJson<WebXRControllersProfiles>(json);
		String_t* L_0 = ___json0;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_1;
		L_1 = JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF(L_0, JsonUtility_FromJson_TisWebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637_m64D41BB8DBA043CBBD512180274CD171147538AF_RuntimeMethod_var);
		V_0 = L_1;
		// Instance.OnInputProfiles(controllersProfiles);
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_2 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_3 = V_0;
		WebXRSubsystem_OnInputProfiles_m5506E87E97B52C6D6E1EAFA4CF7ADB9352B68943(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnXRCapabilities(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnXRCapabilities_m5E31E7810E767BF5342FCE57C857AB3AC49AEFB5 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___cap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* G_B2_0 = NULL;
	XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* G_B1_0 = NULL;
	{
		// this.capabilities = cap;
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA L_0 = ___cap0;
		__this->___capabilities_34 = L_0;
		// OnXRCapabilitiesUpdate?.Invoke(cap);
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_1 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___OnXRCapabilitiesUpdate_10;
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA L_3 = ___cap0;
		XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnInputProfiles(WebXR.WebXRControllersProfiles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnInputProfiles_m5506E87E97B52C6D6E1EAFA4CF7ADB9352B68943 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* ___controllersProfiles0, const RuntimeMethod* method) 
{
	{
		// controller1.profiles = controllersProfiles.conrtoller1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_0 = __this->___controller1_31;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_1 = ___controllersProfiles0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1->___conrtoller1_0;
		L_0->___profiles_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___profiles_17), (void*)L_2);
		// controller2.profiles = controllersProfiles.conrtoller2;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_3 = __this->___controller2_32;
		WebXRControllersProfiles_t1FAC3653AACDD1CEF259FE52D4492E0D4C93B637* L_4 = ___controllersProfiles0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___conrtoller2_1;
		L_3->___profiles_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___profiles_17), (void*)L_5);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::setXrState(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	{
		// visibilityState = WebXRVisibilityState.VISIBLE;
		__this->___visibilityState_8 = 0;
		// this.xrState = state;
		int32_t L_0 = ___state0;
		__this->___xrState_3 = L_0;
		// this.viewsCount = viewsCount;
		int32_t L_1 = ___viewsCount1;
		__this->___viewsCount_4 = L_1;
		// this.leftRect = leftRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___leftRect2;
		__this->___leftRect_5 = L_2;
		// this.rightRect = rightRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___rightRect3;
		__this->___rightRect_6 = L_3;
		// viewerHitTestOn = false;
		__this->___viewerHitTestOn_27 = (bool)0;
		// reportedXRStateSwitch = false;
		__this->___reportedXRStateSwitch_7 = (bool)0;
		// if (state != WebXRState.NORMAL)
		int32_t L_4 = ___state0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		// visibilityStateChanged = true;
		__this->___visibilityStateChanged_9 = (bool)1;
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnStartAR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartAR_mCA6C638A20E411C40F6757C44CA4D9386390CBB7 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.AR, viewsCount,
		//     new Rect(left_x, left_y, left_w, left_h),
		//     new Rect(right_x, right_y, right_w, right_h));
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_1 = ___viewsCount0;
		float L_2 = ___left_x1;
		float L_3 = ___left_y2;
		float L_4 = ___left_w3;
		float L_5 = ___left_h4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = ___right_x5;
		float L_8 = ___right_y6;
		float L_9 = ___right_w7;
		float L_10 = ___right_h8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268(L_0, 1, L_1, L_6, L_11, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnStartVR(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnStartVR_m090FFCF8D178C6126BDE41FBCCA5118D409E1054 (int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.setXrState(WebXRState.VR, viewsCount,
		//     new Rect(left_x, left_y, left_w, left_h),
		//     new Rect(right_x, right_y, right_w, right_h));
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_1 = ___viewsCount0;
		float L_2 = ___left_x1;
		float L_3 = ___left_y2;
		float L_4 = ___left_w3;
		float L_5 = ___left_h4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = ___right_x5;
		float L_8 = ___right_y6;
		float L_9 = ___right_w7;
		float L_10 = ___right_h8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268(L_0, 0, L_1, L_6, L_11, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::UpdateVisibilityState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_UpdateVisibilityState_m4446D949C220E5B048F59439FB011E74A1514519 (int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance.visibilityState != (WebXRVisibilityState)visibilityState)
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_1 = L_0->___visibilityState_8;
		int32_t L_2 = ___visibilityState0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		// Instance.visibilityState = (WebXRVisibilityState)visibilityState;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_3 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		int32_t L_4 = ___visibilityState0;
		L_3->___visibilityState_8 = L_4;
		// Instance.visibilityStateChanged = true;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_5 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		L_5->___visibilityStateChanged_9 = (bool)1;
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::OnEndXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_OnEndXR_m4E847871BE916E7941C3F8470C863696EDA7F419 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Instance.updatedControllersOnEnd = false;
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_0 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		L_0->___updatedControllersOnEnd_28 = (bool)0;
		// Instance.setXrState(WebXRState.NORMAL, 1, new Rect(), new Rect());
		WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* L_1 = ((WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06_il2cpp_TypeInfo_var))->___Instance_2;
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = V_0;
		WebXRSubsystem_setXrState_m05DA358176147E5D6C1E580D9E4D8F792EB7E268(L_1, 2, 1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleAR_m887C2F2C3CA6C771AFC9EFAFAE640FD8911EBF06 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// if (capabilities.canPresentAR)
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_0 = (&__this->___capabilities_34);
		bool L_1 = L_0->___canPresentAR_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Native.ToggleAR();
		Native_ToggleAR_m6F37EAE291F4E79F77CC4C2E6AFC2F2C78B0FD46(NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_ToggleVR_m7D7EB51D7903F9AF860AED2385168A315A39BA49 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// if (capabilities.canPresentVR)
		WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA* L_0 = (&__this->___capabilities_34);
		bool L_1 = L_0->___canPresentVR_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Native.ToggleVR();
		Native_ToggleVR_mFBAB353F9831D34DB47B0E5F3F111C13EA6C6200(NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::StartViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StartViewerHitTest_m7F3262740B6F8BBD08D1D18EB4517FE3E6E560B3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// if (xrState == WebXRState.AR && !viewerHitTestOn)
		int32_t L_0 = __this->___xrState_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->___viewerHitTestOn_27;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// viewerHitTestOn = true;
		__this->___viewerHitTestOn_27 = (bool)1;
		// Native.ToggleViewerHitTest();
		Native_ToggleViewerHitTest_m1AEF90C6BFA10876149C7D7247A3D702492A6006(NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::StopViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_StopViewerHitTest_mE0CB192B22E0C8E327FDBF8FE73B15CBB6D68506 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	{
		// if (xrState == WebXRState.AR && viewerHitTestOn)
		int32_t L_0 = __this->___xrState_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_1 = __this->___viewerHitTestOn_27;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// viewerHitTestOn = false;
		__this->___viewerHitTestOn_27 = (bool)0;
		// Native.ToggleViewerHitTest();
		Native_ToggleViewerHitTest_m1AEF90C6BFA10876149C7D7247A3D702492A6006(NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::HapticPulse(WebXR.WebXRControllerHand,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_HapticPulse_m009242D23E2AB23BCB755C8419A36F049001717B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___hand0, float ___intensity1, float ___duration2, const RuntimeMethod* method) 
{
	{
		// Native.ControllerPulse((int)hand, intensity, duration);
		int32_t L_0 = ___hand0;
		float L_1 = ___intensity1;
		float L_2 = ___duration2;
		Native_ControllerPulse_m01F37784C02300E5BD29895B517B6053C4427C08(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetMatrixFromSharedArray(System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetMatrixFromSharedArray_m1CED913932A7E299FCFA13A64C67198820E0C9C3 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___matrix1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 16; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// matrix[i] = sharedArray[index + i];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___matrix1;
		int32_t L_1 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___sharedArray_23;
		int32_t L_3 = ___index0;
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		float L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_0, L_1, L_6, NULL);
		// for (int i = 0; i < 16; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetQuaternionFromSharedArray(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetQuaternionFromSharedArray_m0E124BC48C6A79EB967AB6CB7667DF7F0F81E27D (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___quaternion1, const RuntimeMethod* method) 
{
	{
		// quaternion.x = sharedArray[index];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___sharedArray_23;
		int32_t L_2 = ___index0;
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		L_0->___x_0 = L_4;
		// quaternion.y = sharedArray[index + 1];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___sharedArray_23;
		int32_t L_7 = ___index0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		L_5->___y_1 = L_9;
		// quaternion.z = sharedArray[index + 2];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_10 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___sharedArray_23;
		int32_t L_12 = ___index0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		float L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		L_10->___z_2 = L_14;
		// quaternion.w = sharedArray[index + 3];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_15 = ___quaternion1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___sharedArray_23;
		int32_t L_17 = ___index0;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		float L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		L_15->___w_3 = L_19;
		// }
		return;
	}
}
// System.Void WebXR.WebXRSubsystem::GetVector3FromSharedArray(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem_GetVector3FromSharedArray_mF5AC2809148A0ED04FDD26FC85D9A1805EB49C1B (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vec31, const RuntimeMethod* method) 
{
	{
		// vec3.x = sharedArray[index];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___vec31;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___sharedArray_23;
		int32_t L_2 = ___index0;
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		L_0->___x_2 = L_4;
		// vec3.y = sharedArray[index + 1];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___vec31;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___sharedArray_23;
		int32_t L_7 = ___index0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		float L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		L_5->___y_3 = L_9;
		// vec3.z = sharedArray[index + 2];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___vec31;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___sharedArray_23;
		int32_t L_12 = ___index0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		float L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		L_10->___z_4 = L_14;
		// }
		return;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetGamepadFromControllersArray(System.Int32,WebXR.WebXRControllerData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetGamepadFromControllersArray_m83EA1B716A41F786E7D2F6A895E84B616B698701 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___controllerIndex0, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** ___newControllerData1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int arrayPosition = controllerIndex * 28;
		int32_t L_0 = ___controllerIndex0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)28)));
		// int frameNumber = (int)controllersArray[arrayPosition++];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___controllersArray_24;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = L_3;
		float L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// if (newControllerData.frame == frameNumber)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_6 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_7 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_6);
		int32_t L_8 = L_7->___frame_0;
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// newControllerData.frame = frameNumber;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_10 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_11 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_10);
		int32_t L_12 = V_1;
		L_11->___frame_0 = L_12;
		// newControllerData.enabled = controllersArray[arrayPosition++] != 0;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_13 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_14 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_13);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___controllersArray_24;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = L_17;
		float L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		L_14->___enabled_1 = (bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// newControllerData.hand = (int)controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_20 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_21 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___controllersArray_24;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		L_21->___hand_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_26);
		// if (!newControllerData.enabled)
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_27 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_28 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_27);
		bool L_29 = L_28->___enabled_1;
		if (L_29)
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// newControllerData.position = new Vector3(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_30 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_31 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___controllersArray_24;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = L_34;
		float L_36 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = __this->___controllersArray_24;
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = L_39;
		float L_41 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___controllersArray_24;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = L_44;
		float L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), L_36, L_41, L_46, /*hidden argument*/NULL);
		L_31->___position_3 = L_47;
		// newControllerData.rotation = new Quaternion(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++],
		//     controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_48 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_49 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_48);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = __this->___controllersArray_24;
		int32_t L_51 = V_0;
		int32_t L_52 = L_51;
		V_0 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = L_52;
		float L_54 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___controllersArray_24;
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t L_58 = L_57;
		float L_59 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = __this->___controllersArray_24;
		int32_t L_61 = V_0;
		int32_t L_62 = L_61;
		V_0 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_63 = L_62;
		float L_64 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = __this->___controllersArray_24;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = L_67;
		float L_69 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_70), L_54, L_59, L_64, L_69, /*hidden argument*/NULL);
		L_49->___rotation_4 = L_70;
		// newControllerData.trigger = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_71 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_72 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_71);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = __this->___controllersArray_24;
		int32_t L_74 = V_0;
		int32_t L_75 = L_74;
		V_0 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = L_75;
		float L_77 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		L_72->___trigger_7 = L_77;
		// newControllerData.squeeze = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_78 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_79 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_78);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_80 = __this->___controllersArray_24;
		int32_t L_81 = V_0;
		int32_t L_82 = L_81;
		V_0 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = L_82;
		float L_84 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		L_79->___squeeze_8 = L_84;
		// newControllerData.thumbstick = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_85 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_86 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_85);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_87 = __this->___controllersArray_24;
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		V_0 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = L_89;
		float L_91 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		L_86->___thumbstick_9 = L_91;
		// newControllerData.thumbstickX = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_92 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_93 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_92);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = __this->___controllersArray_24;
		int32_t L_95 = V_0;
		int32_t L_96 = L_95;
		V_0 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_97 = L_96;
		float L_98 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		L_93->___thumbstickX_10 = L_98;
		// newControllerData.thumbstickY = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_99 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_100 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_99);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_101 = __this->___controllersArray_24;
		int32_t L_102 = V_0;
		int32_t L_103 = L_102;
		V_0 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		int32_t L_104 = L_103;
		float L_105 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		L_100->___thumbstickY_11 = L_105;
		// newControllerData.touchpad = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_106 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_107 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_106);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_108 = __this->___controllersArray_24;
		int32_t L_109 = V_0;
		int32_t L_110 = L_109;
		V_0 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = L_110;
		float L_112 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		L_107->___touchpad_12 = L_112;
		// newControllerData.touchpadX = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_113 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_114 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_113);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_115 = __this->___controllersArray_24;
		int32_t L_116 = V_0;
		int32_t L_117 = L_116;
		V_0 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		int32_t L_118 = L_117;
		float L_119 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		L_114->___touchpadX_13 = L_119;
		// newControllerData.touchpadY = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_120 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_121 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_120);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_122 = __this->___controllersArray_24;
		int32_t L_123 = V_0;
		int32_t L_124 = L_123;
		V_0 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		int32_t L_125 = L_124;
		float L_126 = (L_122)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		L_121->___touchpadY_14 = L_126;
		// newControllerData.buttonA = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_127 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_128 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_127);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = __this->___controllersArray_24;
		int32_t L_130 = V_0;
		int32_t L_131 = L_130;
		V_0 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		int32_t L_132 = L_131;
		float L_133 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		L_128->___buttonA_15 = L_133;
		// newControllerData.buttonB = controllersArray[arrayPosition++];
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_134 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_135 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_134);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_136 = __this->___controllersArray_24;
		int32_t L_137 = V_0;
		int32_t L_138 = L_137;
		V_0 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		int32_t L_139 = L_138;
		float L_140 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		L_135->___buttonB_16 = L_140;
		// if (controllersArray[arrayPosition] == 1)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_141 = __this->___controllersArray_24;
		int32_t L_142 = V_0;
		int32_t L_143 = L_142;
		float L_144 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		if ((!(((float)L_144) == ((float)(1.0f)))))
		{
			goto IL_025d;
		}
	}
	{
		// controllersArray[arrayPosition++] = 2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_145 = __this->___controllersArray_24;
		int32_t L_146 = V_0;
		int32_t L_147 = L_146;
		V_0 = ((int32_t)il2cpp_codegen_add(L_147, 1));
		(L_145)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_147), (float)(2.0f));
		// newControllerData.gripPosition = new Vector3(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_148 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_149 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_148);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = __this->___controllersArray_24;
		int32_t L_151 = V_0;
		int32_t L_152 = L_151;
		V_0 = ((int32_t)il2cpp_codegen_add(L_152, 1));
		int32_t L_153 = L_152;
		float L_154 = (L_150)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_155 = __this->___controllersArray_24;
		int32_t L_156 = V_0;
		int32_t L_157 = L_156;
		V_0 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		int32_t L_158 = L_157;
		float L_159 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = __this->___controllersArray_24;
		int32_t L_161 = V_0;
		int32_t L_162 = L_161;
		V_0 = ((int32_t)il2cpp_codegen_add(L_162, 1));
		int32_t L_163 = L_162;
		float L_164 = (L_160)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_165), L_154, L_159, L_164, /*hidden argument*/NULL);
		L_149->___gripPosition_5 = L_165;
		// newControllerData.gripRotation = new Quaternion(controllersArray[arrayPosition++], controllersArray[arrayPosition++], controllersArray[arrayPosition++],
		//     controllersArray[arrayPosition++]);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_166 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_167 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_166);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_168 = __this->___controllersArray_24;
		int32_t L_169 = V_0;
		int32_t L_170 = L_169;
		V_0 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		int32_t L_171 = L_170;
		float L_172 = (L_168)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_173 = __this->___controllersArray_24;
		int32_t L_174 = V_0;
		int32_t L_175 = L_174;
		V_0 = ((int32_t)il2cpp_codegen_add(L_175, 1));
		int32_t L_176 = L_175;
		float L_177 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_178 = __this->___controllersArray_24;
		int32_t L_179 = V_0;
		int32_t L_180 = L_179;
		V_0 = ((int32_t)il2cpp_codegen_add(L_180, 1));
		int32_t L_181 = L_180;
		float L_182 = (L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_183 = __this->___controllersArray_24;
		int32_t L_184 = V_0;
		int32_t L_185 = L_184;
		V_0 = ((int32_t)il2cpp_codegen_add(L_185, 1));
		int32_t L_186 = L_185;
		float L_187 = (L_183)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_186));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_188;
		memset((&L_188), 0, sizeof(L_188));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_188), L_172, L_177, L_182, L_187, /*hidden argument*/NULL);
		L_167->___gripRotation_6 = L_188;
		// Quaternion rotationOffset = Quaternion.Inverse(newControllerData.rotation);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_189 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_190 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_189);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_191 = L_190->___rotation_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_192;
		L_192 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_191, NULL);
		V_2 = L_192;
		// newControllerData.gripPosition = rotationOffset * (newControllerData.gripPosition - newControllerData.position);
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_193 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_194 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_193);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_195 = V_2;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_196 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_197 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_196);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = L_197->___gripPosition_5;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_199 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_200 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_199);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201 = L_200->___position_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202;
		L_202 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_198, L_201, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203;
		L_203 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_195, L_202, NULL);
		L_194->___gripPosition_5 = L_203;
		// newControllerData.gripRotation = rotationOffset * newControllerData.gripRotation;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_204 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_205 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_204);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_206 = V_2;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA** L_207 = ___newControllerData1;
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_208 = *((WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA**)L_207);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_209 = L_208->___gripRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_210;
		L_210 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_206, L_209, NULL);
		L_205->___gripRotation_6 = L_210;
	}

IL_025d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetHandFromHandsArray(System.Int32,WebXR.WebXRHandData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHandFromHandsArray_m5B806621DC17E1EA004F24E36E0F297B97770314 (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, int32_t ___handIndex0, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** ___handObject1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int arrayPosition = handIndex * 205;
		int32_t L_0 = ___handIndex0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)205)));
		// int frameNumber = (int)handsArray[arrayPosition++];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___handsArray_25;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = L_3;
		float L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// if (handObject.frame == frameNumber)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_6 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_7 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_6);
		int32_t L_8 = L_7->___frame_0;
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0022:
	{
		// handObject.frame = frameNumber;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_10 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_11 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_10);
		int32_t L_12 = V_1;
		L_11->___frame_0 = L_12;
		// handObject.enabled = handsArray[arrayPosition++] != 0;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_13 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_14 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_13);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___handsArray_25;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = L_17;
		float L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		L_14->___enabled_1 = (bool)((((int32_t)((((float)L_19) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// handObject.hand = (int)handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_20 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_21 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___handsArray_25;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = L_24;
		float L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		L_21->___hand_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_26);
		// handObject.trigger = handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_27 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_28 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___handsArray_25;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		L_28->___trigger_3 = L_33;
		// handObject.squeeze = handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_34 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_35 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_34);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = __this->___handsArray_25;
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = L_38;
		float L_40 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		L_35->___squeeze_4 = L_40;
		// if (!handObject.enabled)
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_41 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_42 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_41);
		bool L_43 = L_42->___enabled_1;
		if (L_43)
		{
			goto IL_008c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008c:
	{
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		V_2 = 0;
		goto IL_0137;
	}

IL_0093:
	{
		// handObject.joints[i].position = new Vector3(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++]);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_44 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_45 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_44);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_46 = L_45->___joints_5;
		int32_t L_47 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = __this->___handsArray_25;
		int32_t L_49 = V_0;
		int32_t L_50 = L_49;
		V_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = L_50;
		float L_52 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = __this->___handsArray_25;
		int32_t L_54 = V_0;
		int32_t L_55 = L_54;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = L_55;
		float L_57 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = __this->___handsArray_25;
		int32_t L_59 = V_0;
		int32_t L_60 = L_59;
		V_0 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = L_60;
		float L_62 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), L_52, L_57, L_62, /*hidden argument*/NULL);
		((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___position_0 = L_63;
		// handObject.joints[i].rotation = new Quaternion(handsArray[arrayPosition++], handsArray[arrayPosition++], handsArray[arrayPosition++],
		//     handsArray[arrayPosition++]);
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_64 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_65 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_64);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_66 = L_65->___joints_5;
		int32_t L_67 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_68 = __this->___handsArray_25;
		int32_t L_69 = V_0;
		int32_t L_70 = L_69;
		V_0 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_71 = L_70;
		float L_72 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = __this->___handsArray_25;
		int32_t L_74 = V_0;
		int32_t L_75 = L_74;
		V_0 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = L_75;
		float L_77 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = __this->___handsArray_25;
		int32_t L_79 = V_0;
		int32_t L_80 = L_79;
		V_0 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		int32_t L_81 = L_80;
		float L_82 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = __this->___handsArray_25;
		int32_t L_84 = V_0;
		int32_t L_85 = L_84;
		V_0 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		int32_t L_86 = L_85;
		float L_87 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_88), L_72, L_77, L_82, L_87, /*hidden argument*/NULL);
		((L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_67)))->___rotation_1 = L_88;
		// handObject.joints[i].radius = handsArray[arrayPosition++];
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145** L_89 = ___handObject1;
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_90 = *((WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145**)L_89);
		WebXRJointDataU5BU5D_t9456AE0889802113D9492351CE0545D427A9E14F* L_91 = L_90->___joints_5;
		int32_t L_92 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_93 = __this->___handsArray_25;
		int32_t L_94 = V_0;
		int32_t L_95 = L_94;
		V_0 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		int32_t L_96 = L_95;
		float L_97 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		((L_91)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_92)))->___radius_2 = L_97;
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		int32_t L_98 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0137:
	{
		// for (int i = 0; i <= (int)WebXRHandJoint.pinky_finger_tip; i++)
		int32_t L_99 = V_2;
		if ((((int32_t)L_99) <= ((int32_t)((int32_t)24))))
		{
			goto IL_0093;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean WebXR.WebXRSubsystem::GetHitTestPoseFromViewerHitTestPoseArray(WebXR.WebXRHitPoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebXRSubsystem_GetHitTestPoseFromViewerHitTestPoseArray_mE61BA2D5E7DB25938DF78B9FE354F9A02C95211E (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** ___hitPoseData0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int arrayPosition = 0;
		V_0 = 0;
		// int frameNumber = (int)viewerHitTestPoseArray[arrayPosition++];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___viewerHitTestPoseArray_26;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = L_2;
		float L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
		// if (hitPoseData.frame == frameNumber)
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_5 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_6 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_5);
		int32_t L_7 = L_6->___frame_0;
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
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
		// hitPoseData.frame = frameNumber;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_9 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_10 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_9);
		int32_t L_11 = V_1;
		L_10->___frame_0 = L_11;
		// hitPoseData.available = viewerHitTestPoseArray[arrayPosition++] != 0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_12 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_13 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___viewerHitTestPoseArray_26;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = L_16;
		float L_18 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		L_13->___available_1 = (bool)((((int32_t)((((float)L_18) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (!hitPoseData.available)
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_19 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_20 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_19);
		bool L_21 = L_20->___available_1;
		if (L_21)
		{
			goto IL_004c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// hitPoseData.position = new Vector3(viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++],
		//     viewerHitTestPoseArray[arrayPosition++]);
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_22 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_23 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___viewerHitTestPoseArray_26;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = L_26;
		float L_28 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->___viewerHitTestPoseArray_26;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = L_31;
		float L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___viewerHitTestPoseArray_26;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = L_36;
		float L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), L_28, L_33, L_38, /*hidden argument*/NULL);
		L_23->___position_2 = L_39;
		// hitPoseData.rotation = new Quaternion(viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++],
		//     viewerHitTestPoseArray[arrayPosition++], viewerHitTestPoseArray[arrayPosition++]);
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55** L_40 = ___hitPoseData0;
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_41 = *((WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55**)L_40);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___viewerHitTestPoseArray_26;
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = L_44;
		float L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = __this->___viewerHitTestPoseArray_26;
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = L_49;
		float L_51 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = __this->___viewerHitTestPoseArray_26;
		int32_t L_53 = V_0;
		int32_t L_54 = L_53;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = L_54;
		float L_56 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = __this->___viewerHitTestPoseArray_26;
		int32_t L_58 = V_0;
		int32_t L_59 = L_58;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = L_59;
		float L_61 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_62), L_46, L_51, L_56, L_61, /*hidden argument*/NULL);
		L_41->___rotation_3 = L_62;
		// return true;
		return (bool)1;
	}
}
// System.Void WebXR.WebXRSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebXRSubsystem__ctor_mDEAE7BC186974B99EC74BB9026AC40E033FB35EF (WebXRSubsystem_t91CD5843A5C9B4FF14CB3679B5CB4E91243C8C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal WebXRState xrState = WebXRState.NORMAL;
		__this->___xrState_3 = 2;
		// private int viewsCount = 1;
		__this->___viewsCount_4 = 1;
		// private bool reportedXRStateSwitch = true;
		__this->___reportedXRStateSwitch_7 = (bool)1;
		// private Quaternion leftRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___leftRotation_21 = L_0;
		// private Quaternion rightRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___rightRotation_22 = L_1;
		// float[] sharedArray = new float[(2 * 16) + (2 * 7)];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)46));
		__this->___sharedArray_23 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedArray_23), (void*)L_2);
		// float[] controllersArray = new float[2 * 28];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)56));
		__this->___controllersArray_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controllersArray_24), (void*)L_3);
		// float[] handsArray = new float[2 * (25 * 8 + 5)];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)410));
		__this->___handsArray_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handsArray_25), (void*)L_4);
		// float[] viewerHitTestPoseArray = new float[9];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		__this->___viewerHitTestPoseArray_26 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___viewerHitTestPoseArray_26), (void*)L_5);
		// private bool updatedControllersOnEnd = true;
		__this->___updatedControllersOnEnd_28 = (bool)1;
		// private WebXRHandData leftHand = new WebXRHandData();
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_6 = (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*)il2cpp_codegen_object_new(WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var);
		WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB(L_6, NULL);
		__this->___leftHand_29 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHand_29), (void*)L_6);
		// private WebXRHandData rightHand = new WebXRHandData();
		WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* L_7 = (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*)il2cpp_codegen_object_new(WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145_il2cpp_TypeInfo_var);
		WebXRHandData__ctor_mDF3A9C41B1324D81C4C35E2A4925FAF8C0B49DFB(L_7, NULL);
		__this->___rightHand_30 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHand_30), (void*)L_7);
		// private WebXRControllerData controller1 = new WebXRControllerData();
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_8 = (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*)il2cpp_codegen_object_new(WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var);
		WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA(L_8, NULL);
		__this->___controller1_31 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller1_31), (void*)L_8);
		// private WebXRControllerData controller2 = new WebXRControllerData();
		WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* L_9 = (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*)il2cpp_codegen_object_new(WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA_il2cpp_TypeInfo_var);
		WebXRControllerData__ctor_m676A4BBAC30D2E6D489938E56CF85817C900A2CA(L_9, NULL);
		__this->___controller2_32 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller2_32), (void*)L_9);
		// private WebXRHitPoseData viewerHitTestPose = new WebXRHitPoseData();
		WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* L_10 = (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*)il2cpp_codegen_object_new(WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55_il2cpp_TypeInfo_var);
		WebXRHitPoseData__ctor_m6D4BB2FD0E6DE5FB6762122CCF578A15FCBE471D(L_10, NULL);
		__this->___viewerHitTestPose_33 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___viewerHitTestPose_33), (void*)L_10);
		Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E(__this, Subsystem_1__ctor_m8D581242F552A41F2E91D8A0F793A24574979C1E_RuntimeMethod_var);
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
// System.Void WebXR.WebXRSubsystem/Native::InitXRSharedArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitXRSharedArray_mB4EDD6AF0665CC438BDE94ACF766AE9D5B1E1F2F (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitXRSharedArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::InitControllersArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitControllersArray_m91361A4D436E10BD3B4360A895D1F7172F64632A (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitControllersArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::InitHandsArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitHandsArray_m65F79B3D30CC64F61D67DB8204A26F1BBF4E0E80 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitHandsArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::InitViewerHitTestPoseArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_InitViewerHitTestPoseArray_m5C9B2834D544560A0ACC172A5658E79502039D79 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);

	// Marshaling of parameter '___array0' to native representation
	float* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<float*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitViewerHitTestPoseArray)(____array0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/Native::ToggleAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleAR_m6F37EAE291F4E79F77CC4C2E6AFC2F2C78B0FD46 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ToggleAR)();

}
// System.Void WebXR.WebXRSubsystem/Native::ToggleVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleVR_mFBAB353F9831D34DB47B0E5F3F111C13EA6C6200 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ToggleVR)();

}
// System.Void WebXR.WebXRSubsystem/Native::ToggleViewerHitTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ToggleViewerHitTest_m1AEF90C6BFA10876149C7D7247A3D702492A6006 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ToggleViewerHitTest)();

}
// System.Void WebXR.WebXRSubsystem/Native::ControllerPulse(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_ControllerPulse_m01F37784C02300E5BD29895B517B6053C4427C08 (int32_t ___controller0, float ___intensity1, float ___duration2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, float, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ControllerPulse)(___controller0, ___intensity1, ___duration2);

}
// System.Void WebXR.WebXRSubsystem/Native::SetWebXREvents(WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/StartXREvent,WebXR.WebXRSubsystem/VisibilityChangeEvent,WebXR.WebXRSubsystem/EndXREvent,WebXR.WebXRSubsystem/XRCapabilitiesEvent,WebXR.WebXRSubsystem/InputProfilesEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_SetWebXREvents_mFDAD9F1C04199A34C011555557FBC99DEBA7EEEA (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* ___on_start_ar0, StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* ___on_start_vr1, VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* ___on_visibility_change2, EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* ___on_end_xr3, XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* ___on_xr_capabilities4, InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* ___on_input_profiles5, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___on_start_ar0' to native representation
	Il2CppMethodPointer ____on_start_ar0_marshaled = NULL;
	____on_start_ar0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_start_ar0));

	// Marshaling of parameter '___on_start_vr1' to native representation
	Il2CppMethodPointer ____on_start_vr1_marshaled = NULL;
	____on_start_vr1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_start_vr1));

	// Marshaling of parameter '___on_visibility_change2' to native representation
	Il2CppMethodPointer ____on_visibility_change2_marshaled = NULL;
	____on_visibility_change2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_visibility_change2));

	// Marshaling of parameter '___on_end_xr3' to native representation
	Il2CppMethodPointer ____on_end_xr3_marshaled = NULL;
	____on_end_xr3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_end_xr3));

	// Marshaling of parameter '___on_xr_capabilities4' to native representation
	Il2CppMethodPointer ____on_xr_capabilities4_marshaled = NULL;
	____on_xr_capabilities4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_xr_capabilities4));

	// Marshaling of parameter '___on_input_profiles5' to native representation
	Il2CppMethodPointer ____on_input_profiles5_marshaled = NULL;
	____on_input_profiles5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___on_input_profiles5));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetWebXREvents)(____on_start_ar0_marshaled, ____on_start_vr1_marshaled, ____on_visibility_change2_marshaled, ____on_end_xr3_marshaled, ____on_xr_capabilities4_marshaled, ____on_input_profiles5_marshaled);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Multicast(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* currentDelegate = reinterpret_cast<XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___capabilities0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Open(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___capabilities0, method);
}
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_OpenStaticInvoker(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA >::Invoke(__this->___method_ptr_0, method, NULL, ___capabilities0);
}
void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_ClosedStaticInvoker(XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___capabilities0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___capabilities0' to native representation
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshaled_pinvoke ____capabilities0_marshaled = {};
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke(___capabilities0, ____capabilities0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____capabilities0_marshaled);

	// Marshaling cleanup of parameter '___capabilities0' native representation
	WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_marshal_pinvoke_cleanup(____capabilities0_marshaled);

}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate__ctor_m6CCC6132D765662DC39C5490959F00FECE4D5F9A (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_Multicast;
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::Invoke(WebXR.WebXRDisplayCapabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___capabilities0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRCapabilitiesUpdate::BeginInvoke(WebXR.WebXRDisplayCapabilities,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesUpdate_BeginInvoke_m0385937829DB2B0782407D960A0F888E12FCB4A6 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA_il2cpp_TypeInfo_var, &___capabilities0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_EndInvoke_m29DE4A7793EF0AC3B6008E1C416DF79BA426E093 (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Multicast(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* currentDelegate = reinterpret_cast<XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Open(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___state0, ___viewsCount1, ___leftRect2, ___rightRect3, method);
}
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_OpenStaticInvoker(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(__this->___method_ptr_0, method, NULL, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
}
void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_ClosedStaticInvoker(XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___state0, ___viewsCount1, ___leftRect2, ___rightRect3);

}
// System.Void WebXR.WebXRSubsystem/XRChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange__ctor_mBC0D6C759776702361845048472796906054DC0B (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_Multicast;
}
// System.Void WebXR.WebXRSubsystem/XRChange::Invoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1 (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRChange::BeginInvoke(WebXR.WebXRState,System.Int32,UnityEngine.Rect,UnityEngine.Rect,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRChange_BeginInvoke_m98F292DF4B8336425ED99660E4AF768E3E115C7E (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(WebXRState_t2D8E0267FFD4967F244953A900C0125A95ECA66A_il2cpp_TypeInfo_var, &___state0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___viewsCount1);
	__d_args[2] = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &___leftRect2);
	__d_args[3] = Box(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var, &___rightRect3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void WebXR.WebXRSubsystem/XRChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRChange_EndInvoke_mBB28990CB2CF66A76E3830DA6D50E767AC79C1DB (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Multicast(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* currentDelegate = reinterpret_cast<VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Open(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___visibilityState0, method);
}
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_OpenStaticInvoker(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___visibilityState0);
}
void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_ClosedStaticInvoker(VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___visibilityState0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___visibilityState0);

}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange__ctor_m60599CB863FAFF25545465F770A874CE5110B7D3 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_Multicast;
}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::Invoke(WebXR.WebXRVisibilityState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/VisibilityChange::BeginInvoke(WebXR.WebXRVisibilityState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityChange_BeginInvoke_m51E47B0DA175ADEEF79AC53817349577A7D9F7CE (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRVisibilityState_tE6112F24E127290CAAF8AEF8FB6F3BA2779735D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebXRVisibilityState_tE6112F24E127290CAAF8AEF8FB6F3BA2779735D0_il2cpp_TypeInfo_var, &___visibilityState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/VisibilityChange::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChange_EndInvoke_m613B0389FD1E13311E2770060C4FA4E5C2D30131 (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_Multicast(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* currentDelegate = reinterpret_cast<HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_Open(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, method);
}
void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_OpenStaticInvoker(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);
}
void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_ClosedStaticInvoker(HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5);

}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate__ctor_m8F3299E7227C8F1521F2F0A1C7982F8A53E6F04F (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_Multicast;
}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::Invoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8 (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/HeadsetUpdate::BeginInvoke(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeadsetUpdate_BeginInvoke_m56317DB62A7373329090604D992258C39F4AE3EF (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___leftProjectionMatrix0);
	__d_args[1] = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &___rightProjectionMatrix1);
	__d_args[2] = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &___leftRotation2);
	__d_args[3] = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &___rightRotation3);
	__d_args[4] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___leftPosition4);
	__d_args[5] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___rightPosition5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Void WebXR.WebXRSubsystem/HeadsetUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadsetUpdate_EndInvoke_m0C519D3E01B799B0D760F18C8E989B474BC6DDEF (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Multicast(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* currentDelegate = reinterpret_cast<ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___controllerData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Open(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___controllerData0, method);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenStaticInvoker(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* >::Invoke(__this->___method_ptr_0, method, NULL, ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_ClosedStaticInvoker(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenVirtual(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenInterface(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericVirtual(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___controllerData0);
}
void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericInterface(ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___controllerData0);
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate__ctor_mDEF6D39D27524C71D3CB28DE65C41774DC1B1FEC (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_Multicast;
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::Invoke(WebXR.WebXRControllerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___controllerData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/ControllerUpdate::BeginInvoke(WebXR.WebXRControllerData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerUpdate_BeginInvoke_m929A0089260BBDAC17B2E71B8B6094F5936AC4C3 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___controllerData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/ControllerUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerUpdate_EndInvoke_mC54E32FB65091829B8C9D565CBE3924A8F17F9A4 (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Multicast(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* currentDelegate = reinterpret_cast<HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Open(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handData0, method);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenStaticInvoker(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* >::Invoke(__this->___method_ptr_0, method, NULL, ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_ClosedStaticInvoker(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenVirtual(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenInterface(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericVirtual(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___handData0);
}
void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericInterface(HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___handData0);
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate__ctor_mDBA7FF3F808B0D9C7B755C4746B2A02CA7339A46 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_Multicast;
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::Invoke(WebXR.WebXRHandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/HandUpdate::BeginInvoke(WebXR.WebXRHandData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandUpdate_BeginInvoke_mA2E44E78A3DAC24112A4AC4DAF74F6451A08A483 (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/HandUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandUpdate_EndInvoke_mEAB11B6BFFAB56FCF6282B9472243D2F9F13EBAA (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Multicast(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* currentDelegate = reinterpret_cast<HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___hitPoseData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Open(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___hitPoseData0, method);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenStaticInvoker(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* >::Invoke(__this->___method_ptr_0, method, NULL, ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_ClosedStaticInvoker(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenVirtual(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenInterface(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericVirtual(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___hitPoseData0);
}
void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericInterface(HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___hitPoseData0);
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate__ctor_mCD5E79F84CCBD3706B40295C7409334EF7BE9B2E (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_Multicast;
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::Invoke(WebXR.WebXRHitPoseData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hitPoseData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/HitTestUpdate::BeginInvoke(WebXR.WebXRHitPoseData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HitTestUpdate_BeginInvoke_mBEE24C6D2C78FC2EF56EBFE78E6809159435D130 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___hitPoseData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/HitTestUpdate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTestUpdate_EndInvoke_mC18D6BC3AB3B4C7DC65BA52A3EC439B4961F9D15 (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Multicast(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* currentDelegate = reinterpret_cast<StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Open(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, method);
}
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_OpenStaticInvoker(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	InvokerActionInvoker9< int32_t, float, float, float, float, float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
}
void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_ClosedStaticInvoker(StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	InvokerActionInvoker10< RuntimeObject*, int32_t, float, float, float, float, float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, float, float, float, float, float, float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8);

}
// System.Void WebXR.WebXRSubsystem/StartXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent__ctor_mD79D19081CB5888373658432D7A4ADF6FBC0E03E (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 9;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8_Multicast;
}
// System.Void WebXR.WebXRSubsystem/StartXREvent::Invoke(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent_Invoke_m5B52BC47AB65597F282FBB722CE9B8090527A1B8 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, float, float, float, float, float, float, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___viewsCount0, ___left_x1, ___left_y2, ___left_w3, ___left_h4, ___right_x5, ___right_y6, ___right_w7, ___right_h8, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/StartXREvent::BeginInvoke(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartXREvent_BeginInvoke_mDC2F77C0CA35E78F9C14E249F44DA58903858D04 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback9, RuntimeObject* ___object10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[10] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___viewsCount0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_x1);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_y2);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_w3);
	__d_args[4] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___left_h4);
	__d_args[5] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_x5);
	__d_args[6] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_y6);
	__d_args[7] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_w7);
	__d_args[8] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___right_h8);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback9, (RuntimeObject*)___object10);
}
// System.Void WebXR.WebXRSubsystem/StartXREvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartXREvent_EndInvoke_m22ED6FF0095F7A92E2219C8D79FD863B1E8AEB63 (StartXREvent_tA9A90AFD1F3CB8A7AB04292A00DB11C372A9BBD7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Multicast(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* currentDelegate = reinterpret_cast<VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Open(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___visibilityState0, method);
}
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_OpenStaticInvoker(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___visibilityState0);
}
void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_ClosedStaticInvoker(VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___visibilityState0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___visibilityState0);

}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent__ctor_m865EFAD1D01ECA43A7574FFDE9003BE918DF9510 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279_Multicast;
}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent_Invoke_m6311181A407561234E93B6735D597105EFC60279 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/VisibilityChangeEvent::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityChangeEvent_BeginInvoke_m933EAB33A1939DBA375088FED4F205ACC14EE3A5 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, int32_t ___visibilityState0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___visibilityState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/VisibilityChangeEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeEvent_EndInvoke_m90D4F29CC33D3F32B740F91D1FB44A243E5179B1 (VisibilityChangeEvent_t3410BE7501F96FD6A2411C593CEA42AD7CB21D7B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Multicast(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* currentDelegate = reinterpret_cast<EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Open(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_OpenStaticInvoker(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_ClosedStaticInvoker(EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424 (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void WebXR.WebXRSubsystem/EndXREvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent__ctor_mF58E2A752AF32940C04F52F402A26C93D0F446FD (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510_Multicast;
}
// System.Void WebXR.WebXRSubsystem/EndXREvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent_Invoke_mF0AD7883F758CC7657831C0D2E8E0800450DD510 (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/EndXREvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndXREvent_BeginInvoke_m329D14BF2589D1EE30C6055C1150FEF8E51891CF (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void WebXR.WebXRSubsystem/EndXREvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndXREvent_EndInvoke_m7E5A6847226DE7586E462B2DF99A0468769306A3 (EndXREvent_tBCEDE85A54B99F88F6D87225A56DCEB0B0374424* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Multicast(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* currentDelegate = reinterpret_cast<XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___isARSupported0, ___isVRSupported1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Open(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___isARSupported0, ___isVRSupported1, method);
}
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_OpenStaticInvoker(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< bool, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___isARSupported0, ___isVRSupported1);
}
void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_ClosedStaticInvoker(XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, bool, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___isARSupported0, ___isVRSupported1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isARSupported0), static_cast<int32_t>(___isVRSupported1));

}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent__ctor_mD28857E41C6F952467E56AEB559BE1B520767B41 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC_Multicast;
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::Invoke(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent_Invoke_m9F6C2F64D505366DAAAFEB2D2C380304564A9EEC (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___isARSupported0, ___isVRSupported1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/XRCapabilitiesEvent::BeginInvoke(System.Boolean,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRCapabilitiesEvent_BeginInvoke_m62E73D8C2C635D6D92C2DE2ADC57B064075E6175 (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, bool ___isARSupported0, bool ___isVRSupported1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isARSupported0);
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isVRSupported1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void WebXR.WebXRSubsystem/XRCapabilitiesEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCapabilitiesEvent_EndInvoke_m548234DC7746DD15F71AE57192C335535E16FE0D (XRCapabilitiesEvent_t7CF5CF2804E7AF68F9471DA05463F8E77A1718D6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Multicast(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* currentDelegate = reinterpret_cast<InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___json0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Open(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___json0, method);
}
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_OpenStaticInvoker(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___json0);
}
void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_ClosedStaticInvoker(InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___json0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	il2cppPInvokeFunc(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent__ctor_m21B517477B45852125B3FD4E1202E9923152A921 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F_Multicast;
}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent_Invoke_mF07A5F83762B57AE28194C436317AAE2FA06460F (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___json0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WebXR.WebXRSubsystem/InputProfilesEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputProfilesEvent_BeginInvoke_m56A56D7F422818EEA3759EB81FD49037666C102C (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, String_t* ___json0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___json0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WebXR.WebXRSubsystem/InputProfilesEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputProfilesEvent_EndInvoke_m7AC6A365DB9ACBC09967FC742D48366B7AC81A11 (InputProfilesEvent_t783FF8BC0D33E471A810685E245F4DE0F0D77304* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripRotation_mB31BED39D246A00A338B2DDD8676750E87D42E33_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CgripRotationU3Ek__BackingField_28 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRController_set_gripPosition_m341F0FC5245149FC410AB8A8F2FF56B94D0770B8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 gripPosition { get; private set; } = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CgripPositionU3Ek__BackingField_27 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WebXRController_get_gripRotation_mC4C7CDD583C489B8944806FF825835C05096D3A8_inline (WebXRController_tC38659B5E868FEA08E58A5545C4E4E4F580C3E00* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion gripRotation { get; private set; } = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CgripRotationU3Ek__BackingField_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* WebXRManager_get_Instance_mA331276BDC09E1C3AEB4EA9959E0777766E2B233_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebXRManager_set_Instance_mB4F1D4D8DDC483AC603EDA07E7D2658BBAA297AA_inline (WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WebXRManager Instance { get; private set; }
		WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3* L_0 = ___value0;
		((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_StaticFields*)il2cpp_codegen_static_fields_for(WebXRManager_t8B31929B8D585AA72A11F9FC2102C0EAB24152E3_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* WebXRSettings_get_Instance_m33ECDF5FAEA749BC310D3F36FB6B58B09E44F6CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587* L_0 = ((WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_StaticFields*)il2cpp_codegen_static_fields_for(WebXRSettings_t2B9DEAC8F04464C8BCCAA76F11469F22B9D60587_il2cpp_TypeInfo_var))->___instance_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_m9EE44E7C8BBF000B1BE2D518620FBBB0F4CB0236_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_m3A2FB7296C79FA765F6A6B972B04504D4D3FA359_inline (SubsystemDescriptor_tF417D2751C69A8B0DD86162EBCE55F84D3493A71* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandUpdate_Invoke_m72B6333AF7DCCEDB101466943AB12197E2C1E0DB_inline (HandUpdate_tCDE06BB9E7A1ABDDD4FFE5B760E29CAEB7F9C0F8* __this, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145* ___handData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHandData_t6A798CECD3853EB63E036BAEF13BAA50A2889145*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerUpdate_Invoke_m57B809AD59ED32C27C24A51279E815D6BACA861A_inline (ControllerUpdate_t2BCF6CF27E09C8C21AD2DA439FCEB60B9AC93989* __this, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA* ___controllerData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRControllerData_t64845AE5B73D35EB95309BA9DC0E3EBF491F9EDA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___controllerData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRChange_Invoke_mEADC80076D59CB6DE34F4D7449EFCE7BCF9B58F1_inline (XRChange_t3A604EE757CA07F1CB96F43884DA2804DA4DCDAF* __this, int32_t ___state0, int32_t ___viewsCount1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___leftRect2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rightRect3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, ___viewsCount1, ___leftRect2, ___rightRect3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisibilityChange_Invoke_m65736A43D47106E3CFBE200D12A44D940BF6ED49_inline (VisibilityChange_t842911755B2637711363E5703BF3B314E0D14D85* __this, int32_t ___visibilityState0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___visibilityState0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HitTestUpdate_Invoke_m3D1ADBDB406A353F86697457AEEAA60181385893_inline (HitTestUpdate_t8CAC42B0C8753D91FECFE0399BA0DEAB2F3FA632* __this, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55* ___hitPoseData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRHitPoseData_tCFAD42EB6A4DAD475ACD391A82B0777DFFF2FE55*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___hitPoseData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HeadsetUpdate_Invoke_m405B33B9BDFE0748CE1D09AB96FD1BAE3D6DF1A8_inline (HeadsetUpdate_tC82FD3F19C165AE0549A0FF39F71240FB50E6751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___leftProjectionMatrix0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rightProjectionMatrix1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftRotation2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightRotation3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftPosition4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightPosition5, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___leftProjectionMatrix0, ___rightProjectionMatrix1, ___leftRotation2, ___rightRotation3, ___leftPosition4, ___rightPosition5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCapabilitiesUpdate_Invoke_m4230E0EEEC98922EDB256B5F593FF45239C3034D_inline (XRCapabilitiesUpdate_t37AF11512C233E0C923351363EBDB488EBB4D8AA* __this, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA ___capabilities0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, WebXRDisplayCapabilities_t81380088F3EEF48FBDBF48B6FAC3BD8A88F0BCBA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___capabilities0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_2_get_subsystem_m54193127E6CC20F8F77C9D06108EEF370853E4F6_gshared_inline (SubsystemLifecycleManager_2_t0A618FEC1442E36A8FC99AE2836138F224A709CA* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
