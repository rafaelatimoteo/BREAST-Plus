#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>>
struct IEnumerator_1_tB2F9F212D4DE89F44807A373DCC85C8191925AA6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>
struct List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>
struct List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE;
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344;
// UnityEngine.Rendering.Universal.XRPass[]
struct XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E;
// UnityEngine.Rendering.Universal.XRView[]
struct XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// UnityEngine.Rendering.RTHandle
struct RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6;
// UnityEngine.Profiling.Recorder
struct Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture2DArray
struct Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C;
// UnityEngine.Texture3D
struct Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A;
// UnityEngine.Rendering.Universal.XRSystem
struct XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836;
// UnityEngine.Rendering.Universal.XRSystemData
struct XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView
struct CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027;
// UnityEngine.Rendering.Universal.XRSystemData/ShaderResources
struct ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6;

IL2CPP_EXTERN_C RuntimeClass* CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericPool_1_t8CDC3A4DF13BFD0C9F10B45951AF366E6DF57C01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral036462E760D1953050197A6F33FE443041B98AA2;
IL2CPP_EXTERN_C String_t* _stringLiteral0988CDC29FE43C9FCECF6E06147485DAEFB5CB68;
IL2CPP_EXTERN_C String_t* _stringLiteral16E59EDD2FD454E9711E0B96F4D5EA57CE3A8EF4;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1B687052634F31BE298096FC81FF2A498F00CE;
IL2CPP_EXTERN_C String_t* _stringLiteral32D998EC1E1EEBF95E629E3A1B6AEE6436A29F49;
IL2CPP_EXTERN_C String_t* _stringLiteral355871A53683A0CE41651908009466DB1F5FEBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3F1BFCACEFDC98F691CA4EEA7601E20BEAA9CD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral3F33523076D7B2B54E8E2D8B8C07500867A53E03;
IL2CPP_EXTERN_C String_t* _stringLiteral442C93593DCE45765B4642894C14D3F5BDE87878;
IL2CPP_EXTERN_C String_t* _stringLiteral45EE4883CDE67FE6B013C71176B61EE1D2154200;
IL2CPP_EXTERN_C String_t* _stringLiteral6891DA37646EA8B10F72C0231D10C07EC76BD7E1;
IL2CPP_EXTERN_C String_t* _stringLiteral714C549745DBC54EAD30BE566C9DDF760E04C4E2;
IL2CPP_EXTERN_C String_t* _stringLiteral731ACC839320B944A000E491F021EB50F744916E;
IL2CPP_EXTERN_C String_t* _stringLiteral7910A12450F64B7A24CD13C4495D7B05CAFBD6F2;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD3B8F0AE03B30E7EF1A150A08259397F2A7D50;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8AA39EEAF586AAE4B49BE920B4A7420EF396E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5ABEA0DE440062A503032385105586D84A1347;
IL2CPP_EXTERN_C String_t* _stringLiteral8341454AEAF0EEBD367796750F70DE5C0EFC7571;
IL2CPP_EXTERN_C String_t* _stringLiteral845A032E741942F26C6947E92954A9A322797F64;
IL2CPP_EXTERN_C String_t* _stringLiteral8A21527D31B72E8920CB85275444917DF715D499;
IL2CPP_EXTERN_C String_t* _stringLiteral93487196057F6E4926F465D21E418EE45A1EFFDA;
IL2CPP_EXTERN_C String_t* _stringLiteralA17366220E713ADFBBB8558BF7AEB7BAA4CD1702;
IL2CPP_EXTERN_C String_t* _stringLiteralB4062A50E83D6C81F02245FB93BA96971B6172F3;
IL2CPP_EXTERN_C String_t* _stringLiteralB7819A6199852A134A275F4EC18ABACB7F17BDB7;
IL2CPP_EXTERN_C String_t* _stringLiteralC38CF2CD6231CE06AEB54D4B70DB605A6FEF8DC0;
IL2CPP_EXTERN_C String_t* _stringLiteralCA495353BC1816C45C8FD14193FB92D99FA2B717;
IL2CPP_EXTERN_C String_t* _stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFBE4E9F4B58426174A6C84ABCC0E871E3BCB6A;
IL2CPP_EXTERN_C String_t* _stringLiteralD2F568F113E6FF8BE250156E84F8FFFC0887DCA5;
IL2CPP_EXTERN_C String_t* _stringLiteralD85AC00227C36E624B90B07A2C7749C601623D03;
IL2CPP_EXTERN_C String_t* _stringLiteralE04F4BC040E2A02DEA7F8D225F917AC188A96D19;
IL2CPP_EXTERN_C String_t* _stringLiteralE2DC1C4F67F18CAF79E60F4F78FA88811E5E36C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3843B7079FCEA5763232F15A870E3FC92C10421;
IL2CPP_EXTERN_C String_t* _stringLiteralE3CA9F603D523F1FA0E6DBC23800329D6D136C7F;
IL2CPP_EXTERN_C String_t* _stringLiteralE73F9AD79FDB771F17F1CA3F3769CE7D2DA34058;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB52736AE2F33ADF09CE012609472608586D5B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF38B47313DFB6C4F2825EFAE354BF4BC7D6DF904;
IL2CPP_EXTERN_C String_t* _stringLiteralF55941A88527B807C3B4BC84AD93366529254BAC;
IL2CPP_EXTERN_C String_t* _stringLiteralF5998FBF74D2BE8FF5EE60F1E0421CFC19511DE9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF10F8462DB3339998CC265624610CF436D453AF;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m898E05781BDDF5426BFEEF54FFF881F68A7C0C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE2A866BD285A9E433D5008E2CFA130DBB8E5EEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8521D4A619F6BBB2FBB88B1EE5BD22E1B6F97B9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericPool_1_Get_m26F4DD74EEC5053F177D2255B8C70D1639AE899A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericPool_1_Release_mFE1BB04F80C0424B30D03EEB28C3FE99E51A5862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m173CBA6925E49D9B6FE04048D5A9727E7A83D055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m67F27C91654BDFD595DE281983715D71077B8B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCD4D8DCA3196CE51041240DD01A5577D37828222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB3FD56A5D370A33CDBB550F5CD75BEA464078AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPass_AddViewInternal_m61BD6957BF5925AD65CA954BB04385BDF4D42047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPass_UpdateView_m0818F95E7AF7C1763B807C508F7095D3348D7E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPass_UpdateView_m236A460DEDE22C366FCAF5BFF2EEA4BFD6E27EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSystem_RefreshXrSdk_m30A7FD07FFC08ED83A1C4D2D59730A79653CFACD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
struct XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7C14447926E3734C07AE14B14AD56B3A45B5FB33 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____items_1)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>
struct List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555, ____items_1)); }
	inline XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E* get__items_1() const { return ____items_1; }
	inline XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555_StaticFields, ____emptyArray_5)); }
	inline XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRPassU5BU5D_t156FFF1C4637F5C179E268A2B147581B4430FD4E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>
struct List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE, ____items_1)); }
	inline XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* get__items_1() const { return ____items_1; }
	inline XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE_StaticFields, ____emptyArray_5)); }
	inline XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92  : public RuntimeObject
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_Recorder
	Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * ___m_Recorder_3;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_InlineRecorder
	Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * ___m_InlineRecorder_4;

public:
	inline static int32_t get_offset_of_U3CsamplerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CsamplerU3Ek__BackingField_0)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_U3CsamplerU3Ek__BackingField_0() const { return ___U3CsamplerU3Ek__BackingField_0; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_U3CsamplerU3Ek__BackingField_0() { return &___U3CsamplerU3Ek__BackingField_0; }
	inline void set_U3CsamplerU3Ek__BackingField_0(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___U3CsamplerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsamplerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinlineSamplerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CinlineSamplerU3Ek__BackingField_1)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_U3CinlineSamplerU3Ek__BackingField_1() const { return ___U3CinlineSamplerU3Ek__BackingField_1; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_U3CinlineSamplerU3Ek__BackingField_1() { return &___U3CinlineSamplerU3Ek__BackingField_1; }
	inline void set_U3CinlineSamplerU3Ek__BackingField_1(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___U3CinlineSamplerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinlineSamplerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recorder_3() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___m_Recorder_3)); }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * get_m_Recorder_3() const { return ___m_Recorder_3; }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 ** get_address_of_m_Recorder_3() { return &___m_Recorder_3; }
	inline void set_m_Recorder_3(Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * value)
	{
		___m_Recorder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Recorder_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_InlineRecorder_4() { return static_cast<int32_t>(offsetof(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92, ___m_InlineRecorder_4)); }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * get_m_InlineRecorder_4() const { return ___m_InlineRecorder_4; }
	inline Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 ** get_address_of_m_InlineRecorder_4() { return &___m_InlineRecorder_4; }
	inline void set_m_InlineRecorder_4(Recorder_tE699CB09736E50BC3E2BBE782CECD59A4B9C7DA7 * value)
	{
		___m_InlineRecorder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InlineRecorder_4), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133  : public RuntimeObject
{
public:

public:
};

struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.ScriptableRenderer::current
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___current_0;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachments
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_ActiveColorAttachments_1;
	// UnityEngine.Rendering.RenderTargetIdentifier[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_TrimmedColorAttachmentCopies
	RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* ___m_TrimmedColorAttachmentCopies_2;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___current_0)); }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * get_current_0() const { return ___current_0; }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveColorAttachments_1() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveColorAttachments_1)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_ActiveColorAttachments_1() const { return ___m_ActiveColorAttachments_1; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_ActiveColorAttachments_1() { return &___m_ActiveColorAttachments_1; }
	inline void set_m_ActiveColorAttachments_1(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_ActiveColorAttachments_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveColorAttachments_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrimmedColorAttachmentCopies_2() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_TrimmedColorAttachmentCopies_2)); }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* get_m_TrimmedColorAttachmentCopies_2() const { return ___m_TrimmedColorAttachmentCopies_2; }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE** get_address_of_m_TrimmedColorAttachmentCopies_2() { return &___m_TrimmedColorAttachmentCopies_2; }
	inline void set_m_TrimmedColorAttachmentCopies_2(RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* value)
	{
		___m_TrimmedColorAttachmentCopies_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrimmedColorAttachmentCopies_2), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ShaderPropertyId
struct ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642  : public RuntimeObject
{
public:

public:
};

struct ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::glossyEnvironmentColor
	int32_t ___glossyEnvironmentColor_0;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::subtractiveShadowColor
	int32_t ___subtractiveShadowColor_1;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::ambientSkyColor
	int32_t ___ambientSkyColor_2;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::ambientEquatorColor
	int32_t ___ambientEquatorColor_3;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::ambientGroundColor
	int32_t ___ambientGroundColor_4;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::time
	int32_t ___time_5;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::sinTime
	int32_t ___sinTime_6;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cosTime
	int32_t ___cosTime_7;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::deltaTime
	int32_t ___deltaTime_8;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::timeParameters
	int32_t ___timeParameters_9;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::scaledScreenParams
	int32_t ___scaledScreenParams_10;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::worldSpaceCameraPos
	int32_t ___worldSpaceCameraPos_11;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::screenParams
	int32_t ___screenParams_12;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::projectionParams
	int32_t ___projectionParams_13;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::zBufferParams
	int32_t ___zBufferParams_14;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::orthoParams
	int32_t ___orthoParams_15;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::viewMatrix
	int32_t ___viewMatrix_16;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::projectionMatrix
	int32_t ___projectionMatrix_17;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::viewAndProjectionMatrix
	int32_t ___viewAndProjectionMatrix_18;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseViewMatrix
	int32_t ___inverseViewMatrix_19;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseProjectionMatrix
	int32_t ___inverseProjectionMatrix_20;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseViewAndProjectionMatrix
	int32_t ___inverseViewAndProjectionMatrix_21;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cameraProjectionMatrix
	int32_t ___cameraProjectionMatrix_22;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseCameraProjectionMatrix
	int32_t ___inverseCameraProjectionMatrix_23;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::worldToCameraMatrix
	int32_t ___worldToCameraMatrix_24;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cameraToWorldMatrix
	int32_t ___cameraToWorldMatrix_25;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::sourceTex
	int32_t ___sourceTex_26;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::scaleBias
	int32_t ___scaleBias_27;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::scaleBiasRt
	int32_t ___scaleBiasRt_28;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::rendererColor
	int32_t ___rendererColor_29;

public:
	inline static int32_t get_offset_of_glossyEnvironmentColor_0() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___glossyEnvironmentColor_0)); }
	inline int32_t get_glossyEnvironmentColor_0() const { return ___glossyEnvironmentColor_0; }
	inline int32_t* get_address_of_glossyEnvironmentColor_0() { return &___glossyEnvironmentColor_0; }
	inline void set_glossyEnvironmentColor_0(int32_t value)
	{
		___glossyEnvironmentColor_0 = value;
	}

	inline static int32_t get_offset_of_subtractiveShadowColor_1() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___subtractiveShadowColor_1)); }
	inline int32_t get_subtractiveShadowColor_1() const { return ___subtractiveShadowColor_1; }
	inline int32_t* get_address_of_subtractiveShadowColor_1() { return &___subtractiveShadowColor_1; }
	inline void set_subtractiveShadowColor_1(int32_t value)
	{
		___subtractiveShadowColor_1 = value;
	}

	inline static int32_t get_offset_of_ambientSkyColor_2() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___ambientSkyColor_2)); }
	inline int32_t get_ambientSkyColor_2() const { return ___ambientSkyColor_2; }
	inline int32_t* get_address_of_ambientSkyColor_2() { return &___ambientSkyColor_2; }
	inline void set_ambientSkyColor_2(int32_t value)
	{
		___ambientSkyColor_2 = value;
	}

	inline static int32_t get_offset_of_ambientEquatorColor_3() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___ambientEquatorColor_3)); }
	inline int32_t get_ambientEquatorColor_3() const { return ___ambientEquatorColor_3; }
	inline int32_t* get_address_of_ambientEquatorColor_3() { return &___ambientEquatorColor_3; }
	inline void set_ambientEquatorColor_3(int32_t value)
	{
		___ambientEquatorColor_3 = value;
	}

	inline static int32_t get_offset_of_ambientGroundColor_4() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___ambientGroundColor_4)); }
	inline int32_t get_ambientGroundColor_4() const { return ___ambientGroundColor_4; }
	inline int32_t* get_address_of_ambientGroundColor_4() { return &___ambientGroundColor_4; }
	inline void set_ambientGroundColor_4(int32_t value)
	{
		___ambientGroundColor_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___time_5)); }
	inline int32_t get_time_5() const { return ___time_5; }
	inline int32_t* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(int32_t value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_sinTime_6() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___sinTime_6)); }
	inline int32_t get_sinTime_6() const { return ___sinTime_6; }
	inline int32_t* get_address_of_sinTime_6() { return &___sinTime_6; }
	inline void set_sinTime_6(int32_t value)
	{
		___sinTime_6 = value;
	}

	inline static int32_t get_offset_of_cosTime_7() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___cosTime_7)); }
	inline int32_t get_cosTime_7() const { return ___cosTime_7; }
	inline int32_t* get_address_of_cosTime_7() { return &___cosTime_7; }
	inline void set_cosTime_7(int32_t value)
	{
		___cosTime_7 = value;
	}

	inline static int32_t get_offset_of_deltaTime_8() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___deltaTime_8)); }
	inline int32_t get_deltaTime_8() const { return ___deltaTime_8; }
	inline int32_t* get_address_of_deltaTime_8() { return &___deltaTime_8; }
	inline void set_deltaTime_8(int32_t value)
	{
		___deltaTime_8 = value;
	}

	inline static int32_t get_offset_of_timeParameters_9() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___timeParameters_9)); }
	inline int32_t get_timeParameters_9() const { return ___timeParameters_9; }
	inline int32_t* get_address_of_timeParameters_9() { return &___timeParameters_9; }
	inline void set_timeParameters_9(int32_t value)
	{
		___timeParameters_9 = value;
	}

	inline static int32_t get_offset_of_scaledScreenParams_10() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___scaledScreenParams_10)); }
	inline int32_t get_scaledScreenParams_10() const { return ___scaledScreenParams_10; }
	inline int32_t* get_address_of_scaledScreenParams_10() { return &___scaledScreenParams_10; }
	inline void set_scaledScreenParams_10(int32_t value)
	{
		___scaledScreenParams_10 = value;
	}

	inline static int32_t get_offset_of_worldSpaceCameraPos_11() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___worldSpaceCameraPos_11)); }
	inline int32_t get_worldSpaceCameraPos_11() const { return ___worldSpaceCameraPos_11; }
	inline int32_t* get_address_of_worldSpaceCameraPos_11() { return &___worldSpaceCameraPos_11; }
	inline void set_worldSpaceCameraPos_11(int32_t value)
	{
		___worldSpaceCameraPos_11 = value;
	}

	inline static int32_t get_offset_of_screenParams_12() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___screenParams_12)); }
	inline int32_t get_screenParams_12() const { return ___screenParams_12; }
	inline int32_t* get_address_of_screenParams_12() { return &___screenParams_12; }
	inline void set_screenParams_12(int32_t value)
	{
		___screenParams_12 = value;
	}

	inline static int32_t get_offset_of_projectionParams_13() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___projectionParams_13)); }
	inline int32_t get_projectionParams_13() const { return ___projectionParams_13; }
	inline int32_t* get_address_of_projectionParams_13() { return &___projectionParams_13; }
	inline void set_projectionParams_13(int32_t value)
	{
		___projectionParams_13 = value;
	}

	inline static int32_t get_offset_of_zBufferParams_14() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___zBufferParams_14)); }
	inline int32_t get_zBufferParams_14() const { return ___zBufferParams_14; }
	inline int32_t* get_address_of_zBufferParams_14() { return &___zBufferParams_14; }
	inline void set_zBufferParams_14(int32_t value)
	{
		___zBufferParams_14 = value;
	}

	inline static int32_t get_offset_of_orthoParams_15() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___orthoParams_15)); }
	inline int32_t get_orthoParams_15() const { return ___orthoParams_15; }
	inline int32_t* get_address_of_orthoParams_15() { return &___orthoParams_15; }
	inline void set_orthoParams_15(int32_t value)
	{
		___orthoParams_15 = value;
	}

	inline static int32_t get_offset_of_viewMatrix_16() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___viewMatrix_16)); }
	inline int32_t get_viewMatrix_16() const { return ___viewMatrix_16; }
	inline int32_t* get_address_of_viewMatrix_16() { return &___viewMatrix_16; }
	inline void set_viewMatrix_16(int32_t value)
	{
		___viewMatrix_16 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_17() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___projectionMatrix_17)); }
	inline int32_t get_projectionMatrix_17() const { return ___projectionMatrix_17; }
	inline int32_t* get_address_of_projectionMatrix_17() { return &___projectionMatrix_17; }
	inline void set_projectionMatrix_17(int32_t value)
	{
		___projectionMatrix_17 = value;
	}

	inline static int32_t get_offset_of_viewAndProjectionMatrix_18() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___viewAndProjectionMatrix_18)); }
	inline int32_t get_viewAndProjectionMatrix_18() const { return ___viewAndProjectionMatrix_18; }
	inline int32_t* get_address_of_viewAndProjectionMatrix_18() { return &___viewAndProjectionMatrix_18; }
	inline void set_viewAndProjectionMatrix_18(int32_t value)
	{
		___viewAndProjectionMatrix_18 = value;
	}

	inline static int32_t get_offset_of_inverseViewMatrix_19() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___inverseViewMatrix_19)); }
	inline int32_t get_inverseViewMatrix_19() const { return ___inverseViewMatrix_19; }
	inline int32_t* get_address_of_inverseViewMatrix_19() { return &___inverseViewMatrix_19; }
	inline void set_inverseViewMatrix_19(int32_t value)
	{
		___inverseViewMatrix_19 = value;
	}

	inline static int32_t get_offset_of_inverseProjectionMatrix_20() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___inverseProjectionMatrix_20)); }
	inline int32_t get_inverseProjectionMatrix_20() const { return ___inverseProjectionMatrix_20; }
	inline int32_t* get_address_of_inverseProjectionMatrix_20() { return &___inverseProjectionMatrix_20; }
	inline void set_inverseProjectionMatrix_20(int32_t value)
	{
		___inverseProjectionMatrix_20 = value;
	}

	inline static int32_t get_offset_of_inverseViewAndProjectionMatrix_21() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___inverseViewAndProjectionMatrix_21)); }
	inline int32_t get_inverseViewAndProjectionMatrix_21() const { return ___inverseViewAndProjectionMatrix_21; }
	inline int32_t* get_address_of_inverseViewAndProjectionMatrix_21() { return &___inverseViewAndProjectionMatrix_21; }
	inline void set_inverseViewAndProjectionMatrix_21(int32_t value)
	{
		___inverseViewAndProjectionMatrix_21 = value;
	}

	inline static int32_t get_offset_of_cameraProjectionMatrix_22() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___cameraProjectionMatrix_22)); }
	inline int32_t get_cameraProjectionMatrix_22() const { return ___cameraProjectionMatrix_22; }
	inline int32_t* get_address_of_cameraProjectionMatrix_22() { return &___cameraProjectionMatrix_22; }
	inline void set_cameraProjectionMatrix_22(int32_t value)
	{
		___cameraProjectionMatrix_22 = value;
	}

	inline static int32_t get_offset_of_inverseCameraProjectionMatrix_23() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___inverseCameraProjectionMatrix_23)); }
	inline int32_t get_inverseCameraProjectionMatrix_23() const { return ___inverseCameraProjectionMatrix_23; }
	inline int32_t* get_address_of_inverseCameraProjectionMatrix_23() { return &___inverseCameraProjectionMatrix_23; }
	inline void set_inverseCameraProjectionMatrix_23(int32_t value)
	{
		___inverseCameraProjectionMatrix_23 = value;
	}

	inline static int32_t get_offset_of_worldToCameraMatrix_24() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___worldToCameraMatrix_24)); }
	inline int32_t get_worldToCameraMatrix_24() const { return ___worldToCameraMatrix_24; }
	inline int32_t* get_address_of_worldToCameraMatrix_24() { return &___worldToCameraMatrix_24; }
	inline void set_worldToCameraMatrix_24(int32_t value)
	{
		___worldToCameraMatrix_24 = value;
	}

	inline static int32_t get_offset_of_cameraToWorldMatrix_25() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___cameraToWorldMatrix_25)); }
	inline int32_t get_cameraToWorldMatrix_25() const { return ___cameraToWorldMatrix_25; }
	inline int32_t* get_address_of_cameraToWorldMatrix_25() { return &___cameraToWorldMatrix_25; }
	inline void set_cameraToWorldMatrix_25(int32_t value)
	{
		___cameraToWorldMatrix_25 = value;
	}

	inline static int32_t get_offset_of_sourceTex_26() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___sourceTex_26)); }
	inline int32_t get_sourceTex_26() const { return ___sourceTex_26; }
	inline int32_t* get_address_of_sourceTex_26() { return &___sourceTex_26; }
	inline void set_sourceTex_26(int32_t value)
	{
		___sourceTex_26 = value;
	}

	inline static int32_t get_offset_of_scaleBias_27() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___scaleBias_27)); }
	inline int32_t get_scaleBias_27() const { return ___scaleBias_27; }
	inline int32_t* get_address_of_scaleBias_27() { return &___scaleBias_27; }
	inline void set_scaleBias_27(int32_t value)
	{
		___scaleBias_27 = value;
	}

	inline static int32_t get_offset_of_scaleBiasRt_28() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___scaleBiasRt_28)); }
	inline int32_t get_scaleBiasRt_28() const { return ___scaleBiasRt_28; }
	inline int32_t* get_address_of_scaleBiasRt_28() { return &___scaleBiasRt_28; }
	inline void set_scaleBiasRt_28(int32_t value)
	{
		___scaleBiasRt_28 = value;
	}

	inline static int32_t get_offset_of_rendererColor_29() { return static_cast<int32_t>(offsetof(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields, ___rendererColor_29)); }
	inline int32_t get_rendererColor_29() const { return ___rendererColor_29; }
	inline int32_t* get_address_of_rendererColor_29() { return &___rendererColor_29; }
	inline void set_rendererColor_29(int32_t value)
	{
		___rendererColor_29 = value;
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


// UnityEngine.Rendering.TextureXR
struct TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B  : public RuntimeObject
{
public:

public:
};

struct TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.TextureXR::m_MaxViews
	int32_t ___m_MaxViews_0;
	// UnityEngine.Texture UnityEngine.Rendering.TextureXR::m_BlackUIntTexture2DArray
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_BlackUIntTexture2DArray_1;
	// UnityEngine.Texture UnityEngine.Rendering.TextureXR::m_BlackUIntTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_BlackUIntTexture_2;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_BlackUIntTexture2DArrayRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_BlackUIntTexture2DArrayRTH_3;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_BlackUIntTextureRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_BlackUIntTextureRTH_4;
	// UnityEngine.Texture2DArray UnityEngine.Rendering.TextureXR::m_ClearTexture2DArray
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___m_ClearTexture2DArray_5;
	// UnityEngine.Texture2D UnityEngine.Rendering.TextureXR::m_ClearTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_ClearTexture_6;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_ClearTexture2DArrayRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_ClearTexture2DArrayRTH_7;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_ClearTextureRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_ClearTextureRTH_8;
	// UnityEngine.Texture2DArray UnityEngine.Rendering.TextureXR::m_MagentaTexture2DArray
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___m_MagentaTexture2DArray_9;
	// UnityEngine.Texture2D UnityEngine.Rendering.TextureXR::m_MagentaTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_MagentaTexture_10;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_MagentaTexture2DArrayRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_MagentaTexture2DArrayRTH_11;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_MagentaTextureRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_MagentaTextureRTH_12;
	// UnityEngine.Texture2D UnityEngine.Rendering.TextureXR::m_BlackTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_BlackTexture_13;
	// UnityEngine.Texture3D UnityEngine.Rendering.TextureXR::m_BlackTexture3D
	Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * ___m_BlackTexture3D_14;
	// UnityEngine.Texture2DArray UnityEngine.Rendering.TextureXR::m_BlackTexture2DArray
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___m_BlackTexture2DArray_15;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_BlackTexture2DArrayRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_BlackTexture2DArrayRTH_16;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_BlackTextureRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_BlackTextureRTH_17;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_BlackTexture3DRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_BlackTexture3DRTH_18;
	// UnityEngine.Texture2DArray UnityEngine.Rendering.TextureXR::m_WhiteTexture2DArray
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___m_WhiteTexture2DArray_19;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_WhiteTexture2DArrayRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_WhiteTexture2DArrayRTH_20;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.TextureXR::m_WhiteTextureRTH
	RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * ___m_WhiteTextureRTH_21;

public:
	inline static int32_t get_offset_of_m_MaxViews_0() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_MaxViews_0)); }
	inline int32_t get_m_MaxViews_0() const { return ___m_MaxViews_0; }
	inline int32_t* get_address_of_m_MaxViews_0() { return &___m_MaxViews_0; }
	inline void set_m_MaxViews_0(int32_t value)
	{
		___m_MaxViews_0 = value;
	}

	inline static int32_t get_offset_of_m_BlackUIntTexture2DArray_1() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackUIntTexture2DArray_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_BlackUIntTexture2DArray_1() const { return ___m_BlackUIntTexture2DArray_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_BlackUIntTexture2DArray_1() { return &___m_BlackUIntTexture2DArray_1; }
	inline void set_m_BlackUIntTexture2DArray_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_BlackUIntTexture2DArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackUIntTexture2DArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackUIntTexture_2() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackUIntTexture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_BlackUIntTexture_2() const { return ___m_BlackUIntTexture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_BlackUIntTexture_2() { return &___m_BlackUIntTexture_2; }
	inline void set_m_BlackUIntTexture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_BlackUIntTexture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackUIntTexture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackUIntTexture2DArrayRTH_3() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackUIntTexture2DArrayRTH_3)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_BlackUIntTexture2DArrayRTH_3() const { return ___m_BlackUIntTexture2DArrayRTH_3; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_BlackUIntTexture2DArrayRTH_3() { return &___m_BlackUIntTexture2DArrayRTH_3; }
	inline void set_m_BlackUIntTexture2DArrayRTH_3(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_BlackUIntTexture2DArrayRTH_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackUIntTexture2DArrayRTH_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackUIntTextureRTH_4() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackUIntTextureRTH_4)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_BlackUIntTextureRTH_4() const { return ___m_BlackUIntTextureRTH_4; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_BlackUIntTextureRTH_4() { return &___m_BlackUIntTextureRTH_4; }
	inline void set_m_BlackUIntTextureRTH_4(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_BlackUIntTextureRTH_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackUIntTextureRTH_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClearTexture2DArray_5() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_ClearTexture2DArray_5)); }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * get_m_ClearTexture2DArray_5() const { return ___m_ClearTexture2DArray_5; }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C ** get_address_of_m_ClearTexture2DArray_5() { return &___m_ClearTexture2DArray_5; }
	inline void set_m_ClearTexture2DArray_5(Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * value)
	{
		___m_ClearTexture2DArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClearTexture2DArray_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClearTexture_6() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_ClearTexture_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_ClearTexture_6() const { return ___m_ClearTexture_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_ClearTexture_6() { return &___m_ClearTexture_6; }
	inline void set_m_ClearTexture_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_ClearTexture_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClearTexture_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClearTexture2DArrayRTH_7() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_ClearTexture2DArrayRTH_7)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_ClearTexture2DArrayRTH_7() const { return ___m_ClearTexture2DArrayRTH_7; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_ClearTexture2DArrayRTH_7() { return &___m_ClearTexture2DArrayRTH_7; }
	inline void set_m_ClearTexture2DArrayRTH_7(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_ClearTexture2DArrayRTH_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClearTexture2DArrayRTH_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClearTextureRTH_8() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_ClearTextureRTH_8)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_ClearTextureRTH_8() const { return ___m_ClearTextureRTH_8; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_ClearTextureRTH_8() { return &___m_ClearTextureRTH_8; }
	inline void set_m_ClearTextureRTH_8(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_ClearTextureRTH_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClearTextureRTH_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagentaTexture2DArray_9() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_MagentaTexture2DArray_9)); }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * get_m_MagentaTexture2DArray_9() const { return ___m_MagentaTexture2DArray_9; }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C ** get_address_of_m_MagentaTexture2DArray_9() { return &___m_MagentaTexture2DArray_9; }
	inline void set_m_MagentaTexture2DArray_9(Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * value)
	{
		___m_MagentaTexture2DArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MagentaTexture2DArray_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagentaTexture_10() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_MagentaTexture_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_MagentaTexture_10() const { return ___m_MagentaTexture_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_MagentaTexture_10() { return &___m_MagentaTexture_10; }
	inline void set_m_MagentaTexture_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_MagentaTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MagentaTexture_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagentaTexture2DArrayRTH_11() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_MagentaTexture2DArrayRTH_11)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_MagentaTexture2DArrayRTH_11() const { return ___m_MagentaTexture2DArrayRTH_11; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_MagentaTexture2DArrayRTH_11() { return &___m_MagentaTexture2DArrayRTH_11; }
	inline void set_m_MagentaTexture2DArrayRTH_11(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_MagentaTexture2DArrayRTH_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MagentaTexture2DArrayRTH_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagentaTextureRTH_12() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_MagentaTextureRTH_12)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_MagentaTextureRTH_12() const { return ___m_MagentaTextureRTH_12; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_MagentaTextureRTH_12() { return &___m_MagentaTextureRTH_12; }
	inline void set_m_MagentaTextureRTH_12(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_MagentaTextureRTH_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MagentaTextureRTH_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackTexture_13() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackTexture_13)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_BlackTexture_13() const { return ___m_BlackTexture_13; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_BlackTexture_13() { return &___m_BlackTexture_13; }
	inline void set_m_BlackTexture_13(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_BlackTexture_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackTexture_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackTexture3D_14() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackTexture3D_14)); }
	inline Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * get_m_BlackTexture3D_14() const { return ___m_BlackTexture3D_14; }
	inline Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 ** get_address_of_m_BlackTexture3D_14() { return &___m_BlackTexture3D_14; }
	inline void set_m_BlackTexture3D_14(Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * value)
	{
		___m_BlackTexture3D_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackTexture3D_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackTexture2DArray_15() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackTexture2DArray_15)); }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * get_m_BlackTexture2DArray_15() const { return ___m_BlackTexture2DArray_15; }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C ** get_address_of_m_BlackTexture2DArray_15() { return &___m_BlackTexture2DArray_15; }
	inline void set_m_BlackTexture2DArray_15(Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * value)
	{
		___m_BlackTexture2DArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackTexture2DArray_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackTexture2DArrayRTH_16() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackTexture2DArrayRTH_16)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_BlackTexture2DArrayRTH_16() const { return ___m_BlackTexture2DArrayRTH_16; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_BlackTexture2DArrayRTH_16() { return &___m_BlackTexture2DArrayRTH_16; }
	inline void set_m_BlackTexture2DArrayRTH_16(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_BlackTexture2DArrayRTH_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackTexture2DArrayRTH_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackTextureRTH_17() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackTextureRTH_17)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_BlackTextureRTH_17() const { return ___m_BlackTextureRTH_17; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_BlackTextureRTH_17() { return &___m_BlackTextureRTH_17; }
	inline void set_m_BlackTextureRTH_17(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_BlackTextureRTH_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackTextureRTH_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlackTexture3DRTH_18() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_BlackTexture3DRTH_18)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_BlackTexture3DRTH_18() const { return ___m_BlackTexture3DRTH_18; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_BlackTexture3DRTH_18() { return &___m_BlackTexture3DRTH_18; }
	inline void set_m_BlackTexture3DRTH_18(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_BlackTexture3DRTH_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlackTexture3DRTH_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_WhiteTexture2DArray_19() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_WhiteTexture2DArray_19)); }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * get_m_WhiteTexture2DArray_19() const { return ___m_WhiteTexture2DArray_19; }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C ** get_address_of_m_WhiteTexture2DArray_19() { return &___m_WhiteTexture2DArray_19; }
	inline void set_m_WhiteTexture2DArray_19(Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * value)
	{
		___m_WhiteTexture2DArray_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WhiteTexture2DArray_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_WhiteTexture2DArrayRTH_20() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_WhiteTexture2DArrayRTH_20)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_WhiteTexture2DArrayRTH_20() const { return ___m_WhiteTexture2DArrayRTH_20; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_WhiteTexture2DArrayRTH_20() { return &___m_WhiteTexture2DArrayRTH_20; }
	inline void set_m_WhiteTexture2DArrayRTH_20(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_WhiteTexture2DArrayRTH_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WhiteTexture2DArrayRTH_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_WhiteTextureRTH_21() { return static_cast<int32_t>(offsetof(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields, ___m_WhiteTextureRTH_21)); }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * get_m_WhiteTextureRTH_21() const { return ___m_WhiteTextureRTH_21; }
	inline RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 ** get_address_of_m_WhiteTextureRTH_21() { return &___m_WhiteTextureRTH_21; }
	inline void set_m_WhiteTextureRTH_21(RTHandle_t2E47719EB0807C3A23D79B1CDE881D0A112C13D6 * value)
	{
		___m_WhiteTextureRTH_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WhiteTextureRTH_21), (void*)value);
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

// UnityEngine.Rendering.XRGraphicsAutomatedTests
struct XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426  : public RuntimeObject
{
public:

public:
};

struct XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_StaticFields
{
public:
	// System.Boolean UnityEngine.Rendering.XRGraphicsAutomatedTests::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Rendering.XRGraphicsAutomatedTests::running
	bool ___running_1;

public:
	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_StaticFields, ___U3CenabledU3Ek__BackingField_0)); }
	inline bool get_U3CenabledU3Ek__BackingField_0() const { return ___U3CenabledU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_0() { return &___U3CenabledU3Ek__BackingField_0; }
	inline void set_U3CenabledU3Ek__BackingField_0(bool value)
	{
		___U3CenabledU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_running_1() { return static_cast<int32_t>(offsetof(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_StaticFields, ___running_1)); }
	inline bool get_running_1() const { return ___running_1; }
	inline bool* get_address_of_running_1() { return &___running_1; }
	inline void set_running_1(bool value)
	{
		___running_1 = value;
	}
};


// UnityEngine.Rendering.Universal.XRSystem
struct XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.XRSystem::emptyPass
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___emptyPass_0;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass> UnityEngine.Rendering.Universal.XRSystem::framePasses
	List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * ___framePasses_1;
	// UnityEngine.XR.XRDisplaySubsystem UnityEngine.Rendering.Universal.XRSystem::display
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * ___display_3;
	// UnityEngine.Material UnityEngine.Rendering.Universal.XRSystem::occlusionMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMeshMaterial_5;
	// UnityEngine.Material UnityEngine.Rendering.Universal.XRSystem::mirrorViewMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mirrorViewMaterial_6;
	// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.Universal.XRSystem::mirrorViewMaterialProperty
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___mirrorViewMaterialProperty_7;
	// UnityEngine.RenderTexture UnityEngine.Rendering.Universal.XRSystem::testRenderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___testRenderTexture_8;

public:
	inline static int32_t get_offset_of_emptyPass_0() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___emptyPass_0)); }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * get_emptyPass_0() const { return ___emptyPass_0; }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** get_address_of_emptyPass_0() { return &___emptyPass_0; }
	inline void set_emptyPass_0(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * value)
	{
		___emptyPass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyPass_0), (void*)value);
	}

	inline static int32_t get_offset_of_framePasses_1() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___framePasses_1)); }
	inline List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * get_framePasses_1() const { return ___framePasses_1; }
	inline List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 ** get_address_of_framePasses_1() { return &___framePasses_1; }
	inline void set_framePasses_1(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * value)
	{
		___framePasses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framePasses_1), (void*)value);
	}

	inline static int32_t get_offset_of_display_3() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___display_3)); }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * get_display_3() const { return ___display_3; }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 ** get_address_of_display_3() { return &___display_3; }
	inline void set_display_3(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * value)
	{
		___display_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___display_3), (void*)value);
	}

	inline static int32_t get_offset_of_occlusionMeshMaterial_5() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___occlusionMeshMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMeshMaterial_5() const { return ___occlusionMeshMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMeshMaterial_5() { return &___occlusionMeshMaterial_5; }
	inline void set_occlusionMeshMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMeshMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMeshMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_mirrorViewMaterial_6() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___mirrorViewMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mirrorViewMaterial_6() const { return ___mirrorViewMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mirrorViewMaterial_6() { return &___mirrorViewMaterial_6; }
	inline void set_mirrorViewMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mirrorViewMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mirrorViewMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_mirrorViewMaterialProperty_7() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___mirrorViewMaterialProperty_7)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_mirrorViewMaterialProperty_7() const { return ___mirrorViewMaterialProperty_7; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_mirrorViewMaterialProperty_7() { return &___mirrorViewMaterialProperty_7; }
	inline void set_mirrorViewMaterialProperty_7(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___mirrorViewMaterialProperty_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mirrorViewMaterialProperty_7), (void*)value);
	}

	inline static int32_t get_offset_of_testRenderTexture_8() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836, ___testRenderTexture_8)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_testRenderTexture_8() const { return ___testRenderTexture_8; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_testRenderTexture_8() { return &___testRenderTexture_8; }
	inline void set_testRenderTexture_8(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___testRenderTexture_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testRenderTexture_8), (void*)value);
	}
};

struct XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem> UnityEngine.Rendering.Universal.XRSystem::displayList
	List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___displayList_2;
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem::msaaLevel
	int32_t ___msaaLevel_4;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRSystem::_XRMirrorProfilingSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ____XRMirrorProfilingSampler_10;

public:
	inline static int32_t get_offset_of_displayList_2() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields, ___displayList_2)); }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 * get_displayList_2() const { return ___displayList_2; }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 ** get_address_of_displayList_2() { return &___displayList_2; }
	inline void set_displayList_2(List_1_t56455D217921470E52E7D33A1794256E31084DD8 * value)
	{
		___displayList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayList_2), (void*)value);
	}

	inline static int32_t get_offset_of_msaaLevel_4() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields, ___msaaLevel_4)); }
	inline int32_t get_msaaLevel_4() const { return ___msaaLevel_4; }
	inline int32_t* get_address_of_msaaLevel_4() { return &___msaaLevel_4; }
	inline void set_msaaLevel_4(int32_t value)
	{
		___msaaLevel_4 = value;
	}

	inline static int32_t get_offset_of__XRMirrorProfilingSampler_10() { return static_cast<int32_t>(offsetof(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields, ____XRMirrorProfilingSampler_10)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get__XRMirrorProfilingSampler_10() const { return ____XRMirrorProfilingSampler_10; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of__XRMirrorProfilingSampler_10() { return &____XRMirrorProfilingSampler_10; }
	inline void set__XRMirrorProfilingSampler_10(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		____XRMirrorProfilingSampler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____XRMirrorProfilingSampler_10), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs
struct XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB  : public RuntimeObject
{
public:

public:
};

struct XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::_SourceTexArraySlice
	int32_t ____SourceTexArraySlice_0;
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::_SRGBRead
	int32_t ____SRGBRead_1;
	// System.Int32 UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::_SRGBWrite
	int32_t ____SRGBWrite_2;

public:
	inline static int32_t get_offset_of__SourceTexArraySlice_0() { return static_cast<int32_t>(offsetof(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields, ____SourceTexArraySlice_0)); }
	inline int32_t get__SourceTexArraySlice_0() const { return ____SourceTexArraySlice_0; }
	inline int32_t* get_address_of__SourceTexArraySlice_0() { return &____SourceTexArraySlice_0; }
	inline void set__SourceTexArraySlice_0(int32_t value)
	{
		____SourceTexArraySlice_0 = value;
	}

	inline static int32_t get_offset_of__SRGBRead_1() { return static_cast<int32_t>(offsetof(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields, ____SRGBRead_1)); }
	inline int32_t get__SRGBRead_1() const { return ____SRGBRead_1; }
	inline int32_t* get_address_of__SRGBRead_1() { return &____SRGBRead_1; }
	inline void set__SRGBRead_1(int32_t value)
	{
		____SRGBRead_1 = value;
	}

	inline static int32_t get_offset_of__SRGBWrite_2() { return static_cast<int32_t>(offsetof(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields, ____SRGBWrite_2)); }
	inline int32_t get__SRGBWrite_2() const { return ____SRGBWrite_2; }
	inline int32_t* get_address_of__SRGBWrite_2() { return &____SRGBWrite_2; }
	inline void set__SRGBWrite_2(int32_t value)
	{
		____SRGBWrite_2 = value;
	}
};


// UnityEngine.Rendering.Universal.XRSystemData/ShaderResources
struct ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityEngine.Rendering.Universal.XRSystemData/ShaderResources::xrOcclusionMeshPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___xrOcclusionMeshPS_0;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.XRSystemData/ShaderResources::xrMirrorViewPS
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___xrMirrorViewPS_1;

public:
	inline static int32_t get_offset_of_xrOcclusionMeshPS_0() { return static_cast<int32_t>(offsetof(ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6, ___xrOcclusionMeshPS_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_xrOcclusionMeshPS_0() const { return ___xrOcclusionMeshPS_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_xrOcclusionMeshPS_0() { return &___xrOcclusionMeshPS_0; }
	inline void set_xrOcclusionMeshPS_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___xrOcclusionMeshPS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrOcclusionMeshPS_0), (void*)value);
	}

	inline static int32_t get_offset_of_xrMirrorViewPS_1() { return static_cast<int32_t>(offsetof(ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6, ___xrMirrorViewPS_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_xrMirrorViewPS_1() const { return ___xrMirrorViewPS_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_xrMirrorViewPS_1() { return &___xrMirrorViewPS_1; }
	inline void set_xrMirrorViewPS_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___xrMirrorViewPS_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrMirrorViewPS_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.XRPass>
struct Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295, ___list_0)); }
	inline List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * get_list_0() const { return ___list_0; }
	inline List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295, ___current_3)); }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * get_current_3() const { return ___current_3; }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// UnityEngine.Rendering.CoreCameraValues
struct CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94 
{
public:
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::filterMode
	int32_t ___filterMode_0;
	// System.UInt32 UnityEngine.Rendering.CoreCameraValues::cullingMask
	uint32_t ___cullingMask_1;
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::instanceID
	int32_t ___instanceID_2;

public:
	inline static int32_t get_offset_of_filterMode_0() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___filterMode_0)); }
	inline int32_t get_filterMode_0() const { return ___filterMode_0; }
	inline int32_t* get_address_of_filterMode_0() { return &___filterMode_0; }
	inline void set_filterMode_0(int32_t value)
	{
		___filterMode_0 = value;
	}

	inline static int32_t get_offset_of_cullingMask_1() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___cullingMask_1)); }
	inline uint32_t get_cullingMask_1() const { return ___cullingMask_1; }
	inline uint32_t* get_address_of_cullingMask_1() { return &___cullingMask_1; }
	inline void set_cullingMask_1(uint32_t value)
	{
		___cullingMask_1 = value;
	}

	inline static int32_t get_offset_of_instanceID_2() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___instanceID_2)); }
	inline int32_t get_instanceID_2() const { return ___instanceID_2; }
	inline int32_t* get_address_of_instanceID_2() { return &___instanceID_2; }
	inline void set_instanceID_2(int32_t value)
	{
		___instanceID_2 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rendering.ProfilingScope
struct ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A__padding[1];
	};

public:
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
struct U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
struct U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
struct U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490__padding[160];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
struct U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.Universal.XRSystem/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5 
{
public:
	// UnityEngine.Camera UnityEngine.Rendering.Universal.XRSystem/<>c__DisplayClass24_0::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_0;

public:
	inline static int32_t get_offset_of_camera_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5, ___camera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_0() const { return ___camera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_0() { return &___camera_0; }
	inline void set_camera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_0), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.AntialiasingMode
struct AntialiasingMode_t336A7E5CB797088B903DAE8FA35985B5E8254E6E 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.AntialiasingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AntialiasingMode_t336A7E5CB797088B903DAE8FA35985B5E8254E6E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.AntialiasingQuality
struct AntialiasingQuality_tA9250E9D89BFE78494D4A9445A7BACEF547AB8C8 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.AntialiasingQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AntialiasingQuality_tA9250E9D89BFE78494D4A9445A7BACEF547AB8C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CameraProperties
struct CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A 
{
public:
	// UnityEngine.Rect UnityEngine.Rendering.CameraProperties::screenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::viewDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___viewDir_1;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionNear
	float ___projectionNear_2;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionFar
	float ___projectionFar_3;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraNear
	float ___cameraNear_4;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraFar
	float ___cameraFar_5;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraAspect
	float ___cameraAspect_6;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraToWorld_7;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::actualWorldToClip
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___actualWorldToClip_8;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraClipToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraClipToWorld_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraWorldToClip
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraWorldToClip_10;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::implicitProjection
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___implicitProjection_11;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipLeft
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___stereoWorldToClipLeft_12;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipRight
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___stereoWorldToClipRight_13;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::worldToCamera
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___worldToCamera_14;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_15;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::right
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___right_16;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::transformDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___transformDirection_17;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::cameraEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraEuler_18;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_19;
	// System.Single UnityEngine.Rendering.CameraProperties::farPlaneWorldSpaceLength
	float ___farPlaneWorldSpaceLength_20;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::rendererCount
	uint32_t ___rendererCount_21;
	// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_ShadowCullPlanes
	U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  ___m_ShadowCullPlanes_22;
	// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_CameraCullPlanes
	U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  ___m_CameraCullPlanes_23;
	// System.Single UnityEngine.Rendering.CameraProperties::baseFarDistance
	float ___baseFarDistance_24;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::shadowCullCenter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___shadowCullCenter_25;
	// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer UnityEngine.Rendering.CameraProperties::layerCullDistances
	U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  ___layerCullDistances_26;
	// System.Int32 UnityEngine.Rendering.CameraProperties::layerCullSpherical
	int32_t ___layerCullSpherical_27;
	// UnityEngine.Rendering.CoreCameraValues UnityEngine.Rendering.CameraProperties::coreCameraValues
	CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  ___coreCameraValues_28;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::cameraType
	uint32_t ___cameraType_29;
	// System.Int32 UnityEngine.Rendering.CameraProperties::projectionIsOblique
	int32_t ___projectionIsOblique_30;
	// System.Int32 UnityEngine.Rendering.CameraProperties::isImplicitProjectionMatrix
	int32_t ___isImplicitProjectionMatrix_31;

public:
	inline static int32_t get_offset_of_screenRect_0() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___screenRect_0)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_screenRect_0() const { return ___screenRect_0; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_screenRect_0() { return &___screenRect_0; }
	inline void set_screenRect_0(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___screenRect_0 = value;
	}

	inline static int32_t get_offset_of_viewDir_1() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___viewDir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_viewDir_1() const { return ___viewDir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_viewDir_1() { return &___viewDir_1; }
	inline void set_viewDir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___viewDir_1 = value;
	}

	inline static int32_t get_offset_of_projectionNear_2() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionNear_2)); }
	inline float get_projectionNear_2() const { return ___projectionNear_2; }
	inline float* get_address_of_projectionNear_2() { return &___projectionNear_2; }
	inline void set_projectionNear_2(float value)
	{
		___projectionNear_2 = value;
	}

	inline static int32_t get_offset_of_projectionFar_3() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionFar_3)); }
	inline float get_projectionFar_3() const { return ___projectionFar_3; }
	inline float* get_address_of_projectionFar_3() { return &___projectionFar_3; }
	inline void set_projectionFar_3(float value)
	{
		___projectionFar_3 = value;
	}

	inline static int32_t get_offset_of_cameraNear_4() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraNear_4)); }
	inline float get_cameraNear_4() const { return ___cameraNear_4; }
	inline float* get_address_of_cameraNear_4() { return &___cameraNear_4; }
	inline void set_cameraNear_4(float value)
	{
		___cameraNear_4 = value;
	}

	inline static int32_t get_offset_of_cameraFar_5() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraFar_5)); }
	inline float get_cameraFar_5() const { return ___cameraFar_5; }
	inline float* get_address_of_cameraFar_5() { return &___cameraFar_5; }
	inline void set_cameraFar_5(float value)
	{
		___cameraFar_5 = value;
	}

	inline static int32_t get_offset_of_cameraAspect_6() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraAspect_6)); }
	inline float get_cameraAspect_6() const { return ___cameraAspect_6; }
	inline float* get_address_of_cameraAspect_6() { return &___cameraAspect_6; }
	inline void set_cameraAspect_6(float value)
	{
		___cameraAspect_6 = value;
	}

	inline static int32_t get_offset_of_cameraToWorld_7() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraToWorld_7)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraToWorld_7() const { return ___cameraToWorld_7; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraToWorld_7() { return &___cameraToWorld_7; }
	inline void set_cameraToWorld_7(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraToWorld_7 = value;
	}

	inline static int32_t get_offset_of_actualWorldToClip_8() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___actualWorldToClip_8)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_actualWorldToClip_8() const { return ___actualWorldToClip_8; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_actualWorldToClip_8() { return &___actualWorldToClip_8; }
	inline void set_actualWorldToClip_8(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___actualWorldToClip_8 = value;
	}

	inline static int32_t get_offset_of_cameraClipToWorld_9() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraClipToWorld_9)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraClipToWorld_9() const { return ___cameraClipToWorld_9; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraClipToWorld_9() { return &___cameraClipToWorld_9; }
	inline void set_cameraClipToWorld_9(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraClipToWorld_9 = value;
	}

	inline static int32_t get_offset_of_cameraWorldToClip_10() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraWorldToClip_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraWorldToClip_10() const { return ___cameraWorldToClip_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraWorldToClip_10() { return &___cameraWorldToClip_10; }
	inline void set_cameraWorldToClip_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraWorldToClip_10 = value;
	}

	inline static int32_t get_offset_of_implicitProjection_11() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___implicitProjection_11)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_implicitProjection_11() const { return ___implicitProjection_11; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_implicitProjection_11() { return &___implicitProjection_11; }
	inline void set_implicitProjection_11(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___implicitProjection_11 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipLeft_12() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___stereoWorldToClipLeft_12)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_stereoWorldToClipLeft_12() const { return ___stereoWorldToClipLeft_12; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_stereoWorldToClipLeft_12() { return &___stereoWorldToClipLeft_12; }
	inline void set_stereoWorldToClipLeft_12(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___stereoWorldToClipLeft_12 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipRight_13() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___stereoWorldToClipRight_13)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_stereoWorldToClipRight_13() const { return ___stereoWorldToClipRight_13; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_stereoWorldToClipRight_13() { return &___stereoWorldToClipRight_13; }
	inline void set_stereoWorldToClipRight_13(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___stereoWorldToClipRight_13 = value;
	}

	inline static int32_t get_offset_of_worldToCamera_14() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___worldToCamera_14)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_worldToCamera_14() const { return ___worldToCamera_14; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_worldToCamera_14() { return &___worldToCamera_14; }
	inline void set_worldToCamera_14(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___worldToCamera_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___up_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_15() const { return ___up_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_15 = value;
	}

	inline static int32_t get_offset_of_right_16() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___right_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_right_16() const { return ___right_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_right_16() { return &___right_16; }
	inline void set_right_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___right_16 = value;
	}

	inline static int32_t get_offset_of_transformDirection_17() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___transformDirection_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_transformDirection_17() const { return ___transformDirection_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_transformDirection_17() { return &___transformDirection_17; }
	inline void set_transformDirection_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___transformDirection_17 = value;
	}

	inline static int32_t get_offset_of_cameraEuler_18() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraEuler_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraEuler_18() const { return ___cameraEuler_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraEuler_18() { return &___cameraEuler_18; }
	inline void set_cameraEuler_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraEuler_18 = value;
	}

	inline static int32_t get_offset_of_velocity_19() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___velocity_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_19() const { return ___velocity_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_19() { return &___velocity_19; }
	inline void set_velocity_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_19 = value;
	}

	inline static int32_t get_offset_of_farPlaneWorldSpaceLength_20() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___farPlaneWorldSpaceLength_20)); }
	inline float get_farPlaneWorldSpaceLength_20() const { return ___farPlaneWorldSpaceLength_20; }
	inline float* get_address_of_farPlaneWorldSpaceLength_20() { return &___farPlaneWorldSpaceLength_20; }
	inline void set_farPlaneWorldSpaceLength_20(float value)
	{
		___farPlaneWorldSpaceLength_20 = value;
	}

	inline static int32_t get_offset_of_rendererCount_21() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___rendererCount_21)); }
	inline uint32_t get_rendererCount_21() const { return ___rendererCount_21; }
	inline uint32_t* get_address_of_rendererCount_21() { return &___rendererCount_21; }
	inline void set_rendererCount_21(uint32_t value)
	{
		___rendererCount_21 = value;
	}

	inline static int32_t get_offset_of_m_ShadowCullPlanes_22() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___m_ShadowCullPlanes_22)); }
	inline U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  get_m_ShadowCullPlanes_22() const { return ___m_ShadowCullPlanes_22; }
	inline U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2 * get_address_of_m_ShadowCullPlanes_22() { return &___m_ShadowCullPlanes_22; }
	inline void set_m_ShadowCullPlanes_22(U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  value)
	{
		___m_ShadowCullPlanes_22 = value;
	}

	inline static int32_t get_offset_of_m_CameraCullPlanes_23() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___m_CameraCullPlanes_23)); }
	inline U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  get_m_CameraCullPlanes_23() const { return ___m_CameraCullPlanes_23; }
	inline U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715 * get_address_of_m_CameraCullPlanes_23() { return &___m_CameraCullPlanes_23; }
	inline void set_m_CameraCullPlanes_23(U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  value)
	{
		___m_CameraCullPlanes_23 = value;
	}

	inline static int32_t get_offset_of_baseFarDistance_24() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___baseFarDistance_24)); }
	inline float get_baseFarDistance_24() const { return ___baseFarDistance_24; }
	inline float* get_address_of_baseFarDistance_24() { return &___baseFarDistance_24; }
	inline void set_baseFarDistance_24(float value)
	{
		___baseFarDistance_24 = value;
	}

	inline static int32_t get_offset_of_shadowCullCenter_25() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___shadowCullCenter_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_shadowCullCenter_25() const { return ___shadowCullCenter_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_shadowCullCenter_25() { return &___shadowCullCenter_25; }
	inline void set_shadowCullCenter_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___shadowCullCenter_25 = value;
	}

	inline static int32_t get_offset_of_layerCullDistances_26() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___layerCullDistances_26)); }
	inline U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  get_layerCullDistances_26() const { return ___layerCullDistances_26; }
	inline U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D * get_address_of_layerCullDistances_26() { return &___layerCullDistances_26; }
	inline void set_layerCullDistances_26(U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  value)
	{
		___layerCullDistances_26 = value;
	}

	inline static int32_t get_offset_of_layerCullSpherical_27() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___layerCullSpherical_27)); }
	inline int32_t get_layerCullSpherical_27() const { return ___layerCullSpherical_27; }
	inline int32_t* get_address_of_layerCullSpherical_27() { return &___layerCullSpherical_27; }
	inline void set_layerCullSpherical_27(int32_t value)
	{
		___layerCullSpherical_27 = value;
	}

	inline static int32_t get_offset_of_coreCameraValues_28() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___coreCameraValues_28)); }
	inline CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  get_coreCameraValues_28() const { return ___coreCameraValues_28; }
	inline CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94 * get_address_of_coreCameraValues_28() { return &___coreCameraValues_28; }
	inline void set_coreCameraValues_28(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  value)
	{
		___coreCameraValues_28 = value;
	}

	inline static int32_t get_offset_of_cameraType_29() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraType_29)); }
	inline uint32_t get_cameraType_29() const { return ___cameraType_29; }
	inline uint32_t* get_address_of_cameraType_29() { return &___cameraType_29; }
	inline void set_cameraType_29(uint32_t value)
	{
		___cameraType_29 = value;
	}

	inline static int32_t get_offset_of_projectionIsOblique_30() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionIsOblique_30)); }
	inline int32_t get_projectionIsOblique_30() const { return ___projectionIsOblique_30; }
	inline int32_t* get_address_of_projectionIsOblique_30() { return &___projectionIsOblique_30; }
	inline void set_projectionIsOblique_30(int32_t value)
	{
		___projectionIsOblique_30 = value;
	}

	inline static int32_t get_offset_of_isImplicitProjectionMatrix_31() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___isImplicitProjectionMatrix_31)); }
	inline int32_t get_isImplicitProjectionMatrix_31() const { return ___isImplicitProjectionMatrix_31; }
	inline int32_t* get_address_of_isImplicitProjectionMatrix_31() { return &___isImplicitProjectionMatrix_31; }
	inline void set_isImplicitProjectionMatrix_31(int32_t value)
	{
		___isImplicitProjectionMatrix_31 = value;
	}
};


// UnityEngine.Rendering.Universal.CameraRenderType
struct CameraRenderType_tEBC464390BF6189A8FFB881742F5F1FECA40249D 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.CameraRenderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraRenderType_tEBC464390BF6189A8FFB881742F5F1FECA40249D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraType
struct CameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22 
{
public:
	// System.Int32 UnityEngine.CameraType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraType_t0413BE9A6F2DEB9A65FBB8C1ECC9C74DBB684B22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CullingOptions
struct CullingOptions_t36EEEF842AD217C369EA02DF85EFD28957A87109 
{
public:
	// System.Int32 UnityEngine.Rendering.CullingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullingOptions_t36EEEF842AD217C369EA02DF85EFD28957A87109, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.IndexFormat
struct IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20 
{
public:
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD 
{
public:
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.MeshTopology
struct MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6, ___value___2)); }
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

// UnityEngine.Rendering.ReflectionProbeSortingCriteria
struct ReflectionProbeSortingCriteria_tAD2F76EF0ECBDCA0334296568300D724E7905708 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeSortingCriteria::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeSortingCriteria_tAD2F76EF0ECBDCA0334296568300D724E7905708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureCreationFlags
struct RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.SortingCriteria
struct SortingCriteria_tB1A065A1776F58E38A1749487F833F09CACEB92F 
{
public:
	// System.Int32 UnityEngine.Rendering.SortingCriteria::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SortingCriteria_tB1A065A1776F58E38A1749487F833F09CACEB92F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.XRView
struct XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.XRView::projMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projMatrix_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.XRView::viewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix_1;
	// UnityEngine.Rect UnityEngine.Rendering.Universal.XRView::viewport
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	// UnityEngine.Mesh UnityEngine.Rendering.Universal.XRView::occlusionMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	// System.Int32 UnityEngine.Rendering.Universal.XRView::textureArraySlice
	int32_t ___textureArraySlice_4;

public:
	inline static int32_t get_offset_of_projMatrix_0() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___projMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_projMatrix_0() const { return ___projMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_projMatrix_0() { return &___projMatrix_0; }
	inline void set_projMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___projMatrix_0 = value;
	}

	inline static int32_t get_offset_of_viewMatrix_1() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___viewMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_viewMatrix_1() const { return ___viewMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_viewMatrix_1() { return &___viewMatrix_1; }
	inline void set_viewMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___viewMatrix_1 = value;
	}

	inline static int32_t get_offset_of_viewport_2() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___viewport_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_viewport_2() const { return ___viewport_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_viewport_2() { return &___viewport_2; }
	inline void set_viewport_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___viewport_2 = value;
	}

	inline static int32_t get_offset_of_occlusionMesh_3() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___occlusionMesh_3)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_occlusionMesh_3() const { return ___occlusionMesh_3; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_occlusionMesh_3() { return &___occlusionMesh_3; }
	inline void set_occlusionMesh_3(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___occlusionMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_textureArraySlice_4() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___textureArraySlice_4)); }
	inline int32_t get_textureArraySlice_4() const { return ___textureArraySlice_4; }
	inline int32_t* get_address_of_textureArraySlice_4() { return &___textureArraySlice_4; }
	inline void set_textureArraySlice_4(int32_t value)
	{
		___textureArraySlice_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.XRView
struct XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.XRView
struct XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
};

// UnityEngine.XR.XRDisplaySubsystem/TextureLayout
struct TextureLayout_t2DC1FB6C58C201E0A23B62B2B1E74843D506DF66 
{
public:
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/TextureLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureLayout_t2DC1FB6C58C201E0A23B62B2B1E74843D506DF66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 
{
public:
	// UnityEngine.RenderTexture UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::srcTex
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___srcTex_0;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::srcTexArraySlice
	int32_t ___srcTexArraySlice_1;
	// UnityEngine.Rect UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::srcRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___srcRect_2;
	// UnityEngine.Rect UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::destRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___destRect_3;

public:
	inline static int32_t get_offset_of_srcTex_0() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___srcTex_0)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_srcTex_0() const { return ___srcTex_0; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_srcTex_0() { return &___srcTex_0; }
	inline void set_srcTex_0(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___srcTex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___srcTex_0), (void*)value);
	}

	inline static int32_t get_offset_of_srcTexArraySlice_1() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___srcTexArraySlice_1)); }
	inline int32_t get_srcTexArraySlice_1() const { return ___srcTexArraySlice_1; }
	inline int32_t* get_address_of_srcTexArraySlice_1() { return &___srcTexArraySlice_1; }
	inline void set_srcTexArraySlice_1(int32_t value)
	{
		___srcTexArraySlice_1 = value;
	}

	inline static int32_t get_offset_of_srcRect_2() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___srcRect_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_srcRect_2() const { return ___srcRect_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_srcRect_2() { return &___srcRect_2; }
	inline void set_srcRect_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___srcRect_2 = value;
	}

	inline static int32_t get_offset_of_destRect_3() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___destRect_3)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_destRect_3() const { return ___destRect_3; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_destRect_3() { return &___destRect_3; }
	inline void set_destRect_3(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___destRect_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_pinvoke
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___srcTex_0;
	int32_t ___srcTexArraySlice_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___srcRect_2;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___destRect_3;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_com
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___srcTex_0;
	int32_t ___srcTexArraySlice_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___srcRect_2;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___destRect_3;
};

// UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 
{
public:
	// System.IntPtr UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::displaySubsystemInstance
	intptr_t ___displaySubsystemInstance_0;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::nativeBlitAvailable
	bool ___nativeBlitAvailable_1;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::nativeBlitInvalidStates
	bool ___nativeBlitInvalidStates_2;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::blitParamsCount
	int32_t ___blitParamsCount_3;

public:
	inline static int32_t get_offset_of_displaySubsystemInstance_0() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___displaySubsystemInstance_0)); }
	inline intptr_t get_displaySubsystemInstance_0() const { return ___displaySubsystemInstance_0; }
	inline intptr_t* get_address_of_displaySubsystemInstance_0() { return &___displaySubsystemInstance_0; }
	inline void set_displaySubsystemInstance_0(intptr_t value)
	{
		___displaySubsystemInstance_0 = value;
	}

	inline static int32_t get_offset_of_nativeBlitAvailable_1() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___nativeBlitAvailable_1)); }
	inline bool get_nativeBlitAvailable_1() const { return ___nativeBlitAvailable_1; }
	inline bool* get_address_of_nativeBlitAvailable_1() { return &___nativeBlitAvailable_1; }
	inline void set_nativeBlitAvailable_1(bool value)
	{
		___nativeBlitAvailable_1 = value;
	}

	inline static int32_t get_offset_of_nativeBlitInvalidStates_2() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___nativeBlitInvalidStates_2)); }
	inline bool get_nativeBlitInvalidStates_2() const { return ___nativeBlitInvalidStates_2; }
	inline bool* get_address_of_nativeBlitInvalidStates_2() { return &___nativeBlitInvalidStates_2; }
	inline void set_nativeBlitInvalidStates_2(bool value)
	{
		___nativeBlitInvalidStates_2 = value;
	}

	inline static int32_t get_offset_of_blitParamsCount_3() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___blitParamsCount_3)); }
	inline int32_t get_blitParamsCount_3() const { return ___blitParamsCount_3; }
	inline int32_t* get_address_of_blitParamsCount_3() { return &___blitParamsCount_3; }
	inline void set_blitParamsCount_3(int32_t value)
	{
		___blitParamsCount_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_pinvoke
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___nativeBlitAvailable_1;
	int32_t ___nativeBlitInvalidStates_2;
	int32_t ___blitParamsCount_3;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_com
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___nativeBlitAvailable_1;
	int32_t ___nativeBlitInvalidStates_2;
	int32_t ___blitParamsCount_3;
};

// UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::view
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::projection
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projection_1;
	// UnityEngine.Rect UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::viewport
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	// UnityEngine.Mesh UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::occlusionMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::textureArraySlice
	int32_t ___textureArraySlice_4;

public:
	inline static int32_t get_offset_of_view_0() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___view_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_view_0() const { return ___view_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_view_0() { return &___view_0; }
	inline void set_view_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___view_0 = value;
	}

	inline static int32_t get_offset_of_projection_1() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___projection_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_projection_1() const { return ___projection_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_projection_1() { return &___projection_1; }
	inline void set_projection_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___projection_1 = value;
	}

	inline static int32_t get_offset_of_viewport_2() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___viewport_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_viewport_2() const { return ___viewport_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_viewport_2() { return &___viewport_2; }
	inline void set_viewport_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___viewport_2 = value;
	}

	inline static int32_t get_offset_of_occlusionMesh_3() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___occlusionMesh_3)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_occlusionMesh_3() const { return ___occlusionMesh_3; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_occlusionMesh_3() { return &___occlusionMesh_3; }
	inline void set_occlusionMesh_3(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___occlusionMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_textureArraySlice_4() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___textureArraySlice_4)); }
	inline int32_t get_textureArraySlice_4() const { return ___textureArraySlice_4; }
	inline int32_t* get_address_of_textureArraySlice_4() { return &___textureArraySlice_4; }
	inline void set_textureArraySlice_4(int32_t value)
	{
		___textureArraySlice_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projection_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projection_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
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


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 
{
public:
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.ScriptableCullingParameters::m_LODParameters
	LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  ___m_LODParameters_1;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlanes
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  ___m_CullingPlanes_3;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_4;
	// System.UInt32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMask
	uint32_t ___m_CullingMask_5;
	// System.UInt64 UnityEngine.Rendering.ScriptableCullingParameters::m_SceneMask
	uint64_t ___m_SceneMask_6;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_LayerFarCullDistances
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  ___m_LayerFarCullDistances_8;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_LayerCull
	int32_t ___m_LayerCull_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_CullingMatrix_10;
	// UnityEngine.Vector3 UnityEngine.Rendering.ScriptableCullingParameters::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_11;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowDistance
	float ___m_ShadowDistance_12;
	// UnityEngine.Rendering.CullingOptions UnityEngine.Rendering.ScriptableCullingParameters::m_CullingOptions
	int32_t ___m_CullingOptions_13;
	// UnityEngine.Rendering.ReflectionProbeSortingCriteria UnityEngine.Rendering.ScriptableCullingParameters::m_ReflectionProbeSortingCriteria
	int32_t ___m_ReflectionProbeSortingCriteria_14;
	// UnityEngine.Rendering.CameraProperties UnityEngine.Rendering.ScriptableCullingParameters::m_CameraProperties
	CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  ___m_CameraProperties_15;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_AccurateOcclusionThreshold
	float ___m_AccurateOcclusionThreshold_16;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_MaximumPortalCullingJobs
	int32_t ___m_MaximumPortalCullingJobs_17;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoViewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_StereoViewMatrix_18;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_StereoProjectionMatrix_19;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_StereoSeparationDistance
	float ___m_StereoSeparationDistance_20;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_maximumVisibleLights
	int32_t ___m_maximumVisibleLights_21;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_LODParameters_1() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LODParameters_1)); }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  get_m_LODParameters_1() const { return ___m_LODParameters_1; }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD * get_address_of_m_LODParameters_1() { return &___m_LODParameters_1; }
	inline void set_m_LODParameters_1(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  value)
	{
		___m_LODParameters_1 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlanes_3() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingPlanes_3)); }
	inline U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  get_m_CullingPlanes_3() const { return ___m_CullingPlanes_3; }
	inline U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490 * get_address_of_m_CullingPlanes_3() { return &___m_CullingPlanes_3; }
	inline void set_m_CullingPlanes_3(U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  value)
	{
		___m_CullingPlanes_3 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlaneCount_4() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingPlaneCount_4)); }
	inline int32_t get_m_CullingPlaneCount_4() const { return ___m_CullingPlaneCount_4; }
	inline int32_t* get_address_of_m_CullingPlaneCount_4() { return &___m_CullingPlaneCount_4; }
	inline void set_m_CullingPlaneCount_4(int32_t value)
	{
		___m_CullingPlaneCount_4 = value;
	}

	inline static int32_t get_offset_of_m_CullingMask_5() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingMask_5)); }
	inline uint32_t get_m_CullingMask_5() const { return ___m_CullingMask_5; }
	inline uint32_t* get_address_of_m_CullingMask_5() { return &___m_CullingMask_5; }
	inline void set_m_CullingMask_5(uint32_t value)
	{
		___m_CullingMask_5 = value;
	}

	inline static int32_t get_offset_of_m_SceneMask_6() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_SceneMask_6)); }
	inline uint64_t get_m_SceneMask_6() const { return ___m_SceneMask_6; }
	inline uint64_t* get_address_of_m_SceneMask_6() { return &___m_SceneMask_6; }
	inline void set_m_SceneMask_6(uint64_t value)
	{
		___m_SceneMask_6 = value;
	}

	inline static int32_t get_offset_of_m_LayerFarCullDistances_8() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LayerFarCullDistances_8)); }
	inline U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  get_m_LayerFarCullDistances_8() const { return ___m_LayerFarCullDistances_8; }
	inline U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884 * get_address_of_m_LayerFarCullDistances_8() { return &___m_LayerFarCullDistances_8; }
	inline void set_m_LayerFarCullDistances_8(U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  value)
	{
		___m_LayerFarCullDistances_8 = value;
	}

	inline static int32_t get_offset_of_m_LayerCull_9() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LayerCull_9)); }
	inline int32_t get_m_LayerCull_9() const { return ___m_LayerCull_9; }
	inline int32_t* get_address_of_m_LayerCull_9() { return &___m_LayerCull_9; }
	inline void set_m_LayerCull_9(int32_t value)
	{
		___m_LayerCull_9 = value;
	}

	inline static int32_t get_offset_of_m_CullingMatrix_10() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingMatrix_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_CullingMatrix_10() const { return ___m_CullingMatrix_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_CullingMatrix_10() { return &___m_CullingMatrix_10; }
	inline void set_m_CullingMatrix_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_CullingMatrix_10 = value;
	}

	inline static int32_t get_offset_of_m_Origin_11() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_Origin_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_11() const { return ___m_Origin_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_11() { return &___m_Origin_11; }
	inline void set_m_Origin_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_11 = value;
	}

	inline static int32_t get_offset_of_m_ShadowDistance_12() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_ShadowDistance_12)); }
	inline float get_m_ShadowDistance_12() const { return ___m_ShadowDistance_12; }
	inline float* get_address_of_m_ShadowDistance_12() { return &___m_ShadowDistance_12; }
	inline void set_m_ShadowDistance_12(float value)
	{
		___m_ShadowDistance_12 = value;
	}

	inline static int32_t get_offset_of_m_CullingOptions_13() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingOptions_13)); }
	inline int32_t get_m_CullingOptions_13() const { return ___m_CullingOptions_13; }
	inline int32_t* get_address_of_m_CullingOptions_13() { return &___m_CullingOptions_13; }
	inline void set_m_CullingOptions_13(int32_t value)
	{
		___m_CullingOptions_13 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionProbeSortingCriteria_14() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_ReflectionProbeSortingCriteria_14)); }
	inline int32_t get_m_ReflectionProbeSortingCriteria_14() const { return ___m_ReflectionProbeSortingCriteria_14; }
	inline int32_t* get_address_of_m_ReflectionProbeSortingCriteria_14() { return &___m_ReflectionProbeSortingCriteria_14; }
	inline void set_m_ReflectionProbeSortingCriteria_14(int32_t value)
	{
		___m_ReflectionProbeSortingCriteria_14 = value;
	}

	inline static int32_t get_offset_of_m_CameraProperties_15() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CameraProperties_15)); }
	inline CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  get_m_CameraProperties_15() const { return ___m_CameraProperties_15; }
	inline CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A * get_address_of_m_CameraProperties_15() { return &___m_CameraProperties_15; }
	inline void set_m_CameraProperties_15(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  value)
	{
		___m_CameraProperties_15 = value;
	}

	inline static int32_t get_offset_of_m_AccurateOcclusionThreshold_16() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_AccurateOcclusionThreshold_16)); }
	inline float get_m_AccurateOcclusionThreshold_16() const { return ___m_AccurateOcclusionThreshold_16; }
	inline float* get_address_of_m_AccurateOcclusionThreshold_16() { return &___m_AccurateOcclusionThreshold_16; }
	inline void set_m_AccurateOcclusionThreshold_16(float value)
	{
		___m_AccurateOcclusionThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_MaximumPortalCullingJobs_17() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_MaximumPortalCullingJobs_17)); }
	inline int32_t get_m_MaximumPortalCullingJobs_17() const { return ___m_MaximumPortalCullingJobs_17; }
	inline int32_t* get_address_of_m_MaximumPortalCullingJobs_17() { return &___m_MaximumPortalCullingJobs_17; }
	inline void set_m_MaximumPortalCullingJobs_17(int32_t value)
	{
		___m_MaximumPortalCullingJobs_17 = value;
	}

	inline static int32_t get_offset_of_m_StereoViewMatrix_18() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoViewMatrix_18)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_StereoViewMatrix_18() const { return ___m_StereoViewMatrix_18; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_StereoViewMatrix_18() { return &___m_StereoViewMatrix_18; }
	inline void set_m_StereoViewMatrix_18(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_StereoViewMatrix_18 = value;
	}

	inline static int32_t get_offset_of_m_StereoProjectionMatrix_19() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoProjectionMatrix_19)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_StereoProjectionMatrix_19() const { return ___m_StereoProjectionMatrix_19; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_StereoProjectionMatrix_19() { return &___m_StereoProjectionMatrix_19; }
	inline void set_m_StereoProjectionMatrix_19(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_StereoProjectionMatrix_19 = value;
	}

	inline static int32_t get_offset_of_m_StereoSeparationDistance_20() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoSeparationDistance_20)); }
	inline float get_m_StereoSeparationDistance_20() const { return ___m_StereoSeparationDistance_20; }
	inline float* get_address_of_m_StereoSeparationDistance_20() { return &___m_StereoSeparationDistance_20; }
	inline void set_m_StereoSeparationDistance_20(float value)
	{
		___m_StereoSeparationDistance_20 = value;
	}

	inline static int32_t get_offset_of_m_maximumVisibleLights_21() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_maximumVisibleLights_21)); }
	inline int32_t get_m_maximumVisibleLights_21() const { return ___m_maximumVisibleLights_21; }
	inline int32_t* get_address_of_m_maximumVisibleLights_21() { return &___m_maximumVisibleLights_21; }
	inline void set_m_maximumVisibleLights_21(int32_t value)
	{
		___m_maximumVisibleLights_21 = value;
	}
};

struct ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::maximumCullingPlaneCount
	int32_t ___maximumCullingPlaneCount_2;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::layerCount
	int32_t ___layerCount_7;

public:
	inline static int32_t get_offset_of_maximumCullingPlaneCount_2() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields, ___maximumCullingPlaneCount_2)); }
	inline int32_t get_maximumCullingPlaneCount_2() const { return ___maximumCullingPlaneCount_2; }
	inline int32_t* get_address_of_maximumCullingPlaneCount_2() { return &___maximumCullingPlaneCount_2; }
	inline void set_maximumCullingPlaneCount_2(int32_t value)
	{
		___maximumCullingPlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_layerCount_7() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields, ___layerCount_7)); }
	inline int32_t get_layerCount_7() const { return ___layerCount_7; }
	inline int32_t* get_address_of_layerCount_7() { return &___layerCount_7; }
	inline void set_layerCount_7(int32_t value)
	{
		___layerCount_7 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
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


// UnityEngine.Rendering.Universal.CameraData
struct CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ViewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ViewMatrix_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_1;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.CameraData::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.CameraData::renderType
	int32_t ___renderType_3;
	// UnityEngine.RenderTexture UnityEngine.Rendering.Universal.CameraData::targetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.CameraData::cameraTargetDescriptor
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___cameraTargetDescriptor_5;
	// UnityEngine.Rect UnityEngine.Rendering.Universal.CameraData::pixelRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_6;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelWidth
	int32_t ___pixelWidth_7;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelHeight
	int32_t ___pixelHeight_8;
	// System.Single UnityEngine.Rendering.Universal.CameraData::aspectRatio
	float ___aspectRatio_9;
	// System.Single UnityEngine.Rendering.Universal.CameraData::renderScale
	float ___renderScale_10;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::clearDepth
	bool ___clearDepth_11;
	// UnityEngine.CameraType UnityEngine.Rendering.Universal.CameraData::cameraType
	int32_t ___cameraType_12;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDefaultViewport
	bool ___isDefaultViewport_13;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isHdrEnabled
	bool ___isHdrEnabled_14;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresDepthTexture
	bool ___requiresDepthTexture_15;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresOpaqueTexture
	bool ___requiresOpaqueTexture_16;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::xrRendering
	bool ___xrRendering_17;
	// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.Universal.CameraData::defaultOpaqueSortFlags
	int32_t ___defaultOpaqueSortFlags_18;
	// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.CameraData::xr
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xr_19;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStereoEnabled
	bool ___isStereoEnabled_20;
	// System.Single UnityEngine.Rendering.Universal.CameraData::maxShadowDistance
	float ___maxShadowDistance_21;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::postProcessEnabled
	bool ___postProcessEnabled_22;
	// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>> UnityEngine.Rendering.Universal.CameraData::captureActions
	RuntimeObject* ___captureActions_23;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.CameraData::volumeLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___volumeLayerMask_24;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.CameraData::volumeTrigger
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___volumeTrigger_25;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStopNaNEnabled
	bool ___isStopNaNEnabled_26;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDitheringEnabled
	bool ___isDitheringEnabled_27;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.CameraData::antialiasing
	int32_t ___antialiasing_28;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.CameraData::antialiasingQuality
	int32_t ___antialiasingQuality_29;
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.CameraData::renderer
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer_30;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::resolveFinalTarget
	bool ___resolveFinalTarget_31;

public:
	inline static int32_t get_offset_of_m_ViewMatrix_0() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___m_ViewMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ViewMatrix_0() const { return ___m_ViewMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ViewMatrix_0() { return &___m_ViewMatrix_0; }
	inline void set_m_ViewMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ViewMatrix_0 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_1() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___m_ProjectionMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_ProjectionMatrix_1() const { return ___m_ProjectionMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_ProjectionMatrix_1() { return &___m_ProjectionMatrix_1; }
	inline void set_m_ProjectionMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_ProjectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___camera_2)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_2() const { return ___camera_2; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_2), (void*)value);
	}

	inline static int32_t get_offset_of_renderType_3() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___renderType_3)); }
	inline int32_t get_renderType_3() const { return ___renderType_3; }
	inline int32_t* get_address_of_renderType_3() { return &___renderType_3; }
	inline void set_renderType_3(int32_t value)
	{
		___renderType_3 = value;
	}

	inline static int32_t get_offset_of_targetTexture_4() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___targetTexture_4)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_targetTexture_4() const { return ___targetTexture_4; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_targetTexture_4() { return &___targetTexture_4; }
	inline void set_targetTexture_4(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___targetTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraTargetDescriptor_5() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___cameraTargetDescriptor_5)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_cameraTargetDescriptor_5() const { return ___cameraTargetDescriptor_5; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_cameraTargetDescriptor_5() { return &___cameraTargetDescriptor_5; }
	inline void set_cameraTargetDescriptor_5(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___cameraTargetDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_pixelRect_6() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___pixelRect_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_pixelRect_6() const { return ___pixelRect_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_pixelRect_6() { return &___pixelRect_6; }
	inline void set_pixelRect_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___pixelRect_6 = value;
	}

	inline static int32_t get_offset_of_pixelWidth_7() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___pixelWidth_7)); }
	inline int32_t get_pixelWidth_7() const { return ___pixelWidth_7; }
	inline int32_t* get_address_of_pixelWidth_7() { return &___pixelWidth_7; }
	inline void set_pixelWidth_7(int32_t value)
	{
		___pixelWidth_7 = value;
	}

	inline static int32_t get_offset_of_pixelHeight_8() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___pixelHeight_8)); }
	inline int32_t get_pixelHeight_8() const { return ___pixelHeight_8; }
	inline int32_t* get_address_of_pixelHeight_8() { return &___pixelHeight_8; }
	inline void set_pixelHeight_8(int32_t value)
	{
		___pixelHeight_8 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_9() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___aspectRatio_9)); }
	inline float get_aspectRatio_9() const { return ___aspectRatio_9; }
	inline float* get_address_of_aspectRatio_9() { return &___aspectRatio_9; }
	inline void set_aspectRatio_9(float value)
	{
		___aspectRatio_9 = value;
	}

	inline static int32_t get_offset_of_renderScale_10() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___renderScale_10)); }
	inline float get_renderScale_10() const { return ___renderScale_10; }
	inline float* get_address_of_renderScale_10() { return &___renderScale_10; }
	inline void set_renderScale_10(float value)
	{
		___renderScale_10 = value;
	}

	inline static int32_t get_offset_of_clearDepth_11() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___clearDepth_11)); }
	inline bool get_clearDepth_11() const { return ___clearDepth_11; }
	inline bool* get_address_of_clearDepth_11() { return &___clearDepth_11; }
	inline void set_clearDepth_11(bool value)
	{
		___clearDepth_11 = value;
	}

	inline static int32_t get_offset_of_cameraType_12() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___cameraType_12)); }
	inline int32_t get_cameraType_12() const { return ___cameraType_12; }
	inline int32_t* get_address_of_cameraType_12() { return &___cameraType_12; }
	inline void set_cameraType_12(int32_t value)
	{
		___cameraType_12 = value;
	}

	inline static int32_t get_offset_of_isDefaultViewport_13() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isDefaultViewport_13)); }
	inline bool get_isDefaultViewport_13() const { return ___isDefaultViewport_13; }
	inline bool* get_address_of_isDefaultViewport_13() { return &___isDefaultViewport_13; }
	inline void set_isDefaultViewport_13(bool value)
	{
		___isDefaultViewport_13 = value;
	}

	inline static int32_t get_offset_of_isHdrEnabled_14() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isHdrEnabled_14)); }
	inline bool get_isHdrEnabled_14() const { return ___isHdrEnabled_14; }
	inline bool* get_address_of_isHdrEnabled_14() { return &___isHdrEnabled_14; }
	inline void set_isHdrEnabled_14(bool value)
	{
		___isHdrEnabled_14 = value;
	}

	inline static int32_t get_offset_of_requiresDepthTexture_15() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___requiresDepthTexture_15)); }
	inline bool get_requiresDepthTexture_15() const { return ___requiresDepthTexture_15; }
	inline bool* get_address_of_requiresDepthTexture_15() { return &___requiresDepthTexture_15; }
	inline void set_requiresDepthTexture_15(bool value)
	{
		___requiresDepthTexture_15 = value;
	}

	inline static int32_t get_offset_of_requiresOpaqueTexture_16() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___requiresOpaqueTexture_16)); }
	inline bool get_requiresOpaqueTexture_16() const { return ___requiresOpaqueTexture_16; }
	inline bool* get_address_of_requiresOpaqueTexture_16() { return &___requiresOpaqueTexture_16; }
	inline void set_requiresOpaqueTexture_16(bool value)
	{
		___requiresOpaqueTexture_16 = value;
	}

	inline static int32_t get_offset_of_xrRendering_17() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___xrRendering_17)); }
	inline bool get_xrRendering_17() const { return ___xrRendering_17; }
	inline bool* get_address_of_xrRendering_17() { return &___xrRendering_17; }
	inline void set_xrRendering_17(bool value)
	{
		___xrRendering_17 = value;
	}

	inline static int32_t get_offset_of_defaultOpaqueSortFlags_18() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___defaultOpaqueSortFlags_18)); }
	inline int32_t get_defaultOpaqueSortFlags_18() const { return ___defaultOpaqueSortFlags_18; }
	inline int32_t* get_address_of_defaultOpaqueSortFlags_18() { return &___defaultOpaqueSortFlags_18; }
	inline void set_defaultOpaqueSortFlags_18(int32_t value)
	{
		___defaultOpaqueSortFlags_18 = value;
	}

	inline static int32_t get_offset_of_xr_19() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___xr_19)); }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * get_xr_19() const { return ___xr_19; }
	inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** get_address_of_xr_19() { return &___xr_19; }
	inline void set_xr_19(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * value)
	{
		___xr_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xr_19), (void*)value);
	}

	inline static int32_t get_offset_of_isStereoEnabled_20() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isStereoEnabled_20)); }
	inline bool get_isStereoEnabled_20() const { return ___isStereoEnabled_20; }
	inline bool* get_address_of_isStereoEnabled_20() { return &___isStereoEnabled_20; }
	inline void set_isStereoEnabled_20(bool value)
	{
		___isStereoEnabled_20 = value;
	}

	inline static int32_t get_offset_of_maxShadowDistance_21() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___maxShadowDistance_21)); }
	inline float get_maxShadowDistance_21() const { return ___maxShadowDistance_21; }
	inline float* get_address_of_maxShadowDistance_21() { return &___maxShadowDistance_21; }
	inline void set_maxShadowDistance_21(float value)
	{
		___maxShadowDistance_21 = value;
	}

	inline static int32_t get_offset_of_postProcessEnabled_22() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___postProcessEnabled_22)); }
	inline bool get_postProcessEnabled_22() const { return ___postProcessEnabled_22; }
	inline bool* get_address_of_postProcessEnabled_22() { return &___postProcessEnabled_22; }
	inline void set_postProcessEnabled_22(bool value)
	{
		___postProcessEnabled_22 = value;
	}

	inline static int32_t get_offset_of_captureActions_23() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___captureActions_23)); }
	inline RuntimeObject* get_captureActions_23() const { return ___captureActions_23; }
	inline RuntimeObject** get_address_of_captureActions_23() { return &___captureActions_23; }
	inline void set_captureActions_23(RuntimeObject* value)
	{
		___captureActions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captureActions_23), (void*)value);
	}

	inline static int32_t get_offset_of_volumeLayerMask_24() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___volumeLayerMask_24)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_volumeLayerMask_24() const { return ___volumeLayerMask_24; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_volumeLayerMask_24() { return &___volumeLayerMask_24; }
	inline void set_volumeLayerMask_24(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___volumeLayerMask_24 = value;
	}

	inline static int32_t get_offset_of_volumeTrigger_25() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___volumeTrigger_25)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_volumeTrigger_25() const { return ___volumeTrigger_25; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_volumeTrigger_25() { return &___volumeTrigger_25; }
	inline void set_volumeTrigger_25(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___volumeTrigger_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volumeTrigger_25), (void*)value);
	}

	inline static int32_t get_offset_of_isStopNaNEnabled_26() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isStopNaNEnabled_26)); }
	inline bool get_isStopNaNEnabled_26() const { return ___isStopNaNEnabled_26; }
	inline bool* get_address_of_isStopNaNEnabled_26() { return &___isStopNaNEnabled_26; }
	inline void set_isStopNaNEnabled_26(bool value)
	{
		___isStopNaNEnabled_26 = value;
	}

	inline static int32_t get_offset_of_isDitheringEnabled_27() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___isDitheringEnabled_27)); }
	inline bool get_isDitheringEnabled_27() const { return ___isDitheringEnabled_27; }
	inline bool* get_address_of_isDitheringEnabled_27() { return &___isDitheringEnabled_27; }
	inline void set_isDitheringEnabled_27(bool value)
	{
		___isDitheringEnabled_27 = value;
	}

	inline static int32_t get_offset_of_antialiasing_28() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___antialiasing_28)); }
	inline int32_t get_antialiasing_28() const { return ___antialiasing_28; }
	inline int32_t* get_address_of_antialiasing_28() { return &___antialiasing_28; }
	inline void set_antialiasing_28(int32_t value)
	{
		___antialiasing_28 = value;
	}

	inline static int32_t get_offset_of_antialiasingQuality_29() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___antialiasingQuality_29)); }
	inline int32_t get_antialiasingQuality_29() const { return ___antialiasingQuality_29; }
	inline int32_t* get_address_of_antialiasingQuality_29() { return &___antialiasingQuality_29; }
	inline void set_antialiasingQuality_29(int32_t value)
	{
		___antialiasingQuality_29 = value;
	}

	inline static int32_t get_offset_of_renderer_30() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___renderer_30)); }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * get_renderer_30() const { return ___renderer_30; }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 ** get_address_of_renderer_30() { return &___renderer_30; }
	inline void set_renderer_30(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * value)
	{
		___renderer_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_30), (void*)value);
	}

	inline static int32_t get_offset_of_resolveFinalTarget_31() { return static_cast<int32_t>(offsetof(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7, ___resolveFinalTarget_31)); }
	inline bool get_resolveFinalTarget_31() const { return ___resolveFinalTarget_31; }
	inline bool* get_address_of_resolveFinalTarget_31() { return &___resolveFinalTarget_31; }
	inline void set_resolveFinalTarget_31(bool value)
	{
		___resolveFinalTarget_31 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ViewMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_1;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___cameraTargetDescriptor_5;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___clearDepth_11;
	int32_t ___cameraType_12;
	int32_t ___isDefaultViewport_13;
	int32_t ___isHdrEnabled_14;
	int32_t ___requiresDepthTexture_15;
	int32_t ___requiresOpaqueTexture_16;
	int32_t ___xrRendering_17;
	int32_t ___defaultOpaqueSortFlags_18;
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xr_19;
	int32_t ___isStereoEnabled_20;
	float ___maxShadowDistance_21;
	int32_t ___postProcessEnabled_22;
	RuntimeObject* ___captureActions_23;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___volumeLayerMask_24;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___volumeTrigger_25;
	int32_t ___isStopNaNEnabled_26;
	int32_t ___isDitheringEnabled_27;
	int32_t ___antialiasing_28;
	int32_t ___antialiasingQuality_29;
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer_30;
	int32_t ___resolveFinalTarget_31;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ViewMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_ProjectionMatrix_1;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_4;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___cameraTargetDescriptor_5;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___clearDepth_11;
	int32_t ___cameraType_12;
	int32_t ___isDefaultViewport_13;
	int32_t ___isHdrEnabled_14;
	int32_t ___requiresDepthTexture_15;
	int32_t ___requiresOpaqueTexture_16;
	int32_t ___xrRendering_17;
	int32_t ___defaultOpaqueSortFlags_18;
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xr_19;
	int32_t ___isStereoEnabled_20;
	float ___maxShadowDistance_21;
	int32_t ___postProcessEnabled_22;
	RuntimeObject* ___captureActions_23;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___volumeLayerMask_24;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___volumeTrigger_25;
	int32_t ___isStopNaNEnabled_26;
	int32_t ___isDitheringEnabled_27;
	int32_t ___antialiasing_28;
	int32_t ___antialiasingQuality_29;
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___renderer_30;
	int32_t ___resolveFinalTarget_31;
};

// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView> UnityEngine.Rendering.Universal.XRPass::views
	List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * ___views_0;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<xrSdkEnabled>k__BackingField
	bool ___U3CxrSdkEnabledU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<copyDepth>k__BackingField
	bool ___U3CcopyDepthU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::<multipassId>k__BackingField
	int32_t ___U3CmultipassIdU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::<cullingPassId>k__BackingField
	int32_t ___U3CcullingPassIdU3Ek__BackingField_4;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::<renderTarget>k__BackingField
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___U3CrenderTargetU3Ek__BackingField_5;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.XRPass::<renderTargetDesc>k__BackingField
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___U3CrenderTargetDescU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<renderTargetIsRenderTexture>k__BackingField
	bool ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8;
	// UnityEngine.Rendering.ScriptableCullingParameters UnityEngine.Rendering.Universal.XRPass::<cullingParams>k__BackingField
	ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___U3CcullingParamsU3Ek__BackingField_9;
	// UnityEngine.Material UnityEngine.Rendering.Universal.XRPass::occlusionMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMeshMaterial_10;
	// UnityEngine.Mesh UnityEngine.Rendering.Universal.XRPass::occlusionMeshCombined
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMeshCombined_11;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::occlusionMeshCombinedHashCode
	int32_t ___occlusionMeshCombinedHashCode_12;
	// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView UnityEngine.Rendering.Universal.XRPass::customMirrorView
	CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * ___customMirrorView_13;
	// UnityEngine.Vector4[] UnityEngine.Rendering.Universal.XRPass::stereoEyeIndices
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___stereoEyeIndices_16;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoProjectionMatrix
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___stereoProjectionMatrix_17;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoViewMatrix
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___stereoViewMatrix_18;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoCameraProjectionMatrix
	Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* ___stereoCameraProjectionMatrix_19;

public:
	inline static int32_t get_offset_of_views_0() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___views_0)); }
	inline List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * get_views_0() const { return ___views_0; }
	inline List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE ** get_address_of_views_0() { return &___views_0; }
	inline void set_views_0(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * value)
	{
		___views_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___views_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CxrSdkEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CxrSdkEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CxrSdkEnabledU3Ek__BackingField_1() const { return ___U3CxrSdkEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CxrSdkEnabledU3Ek__BackingField_1() { return &___U3CxrSdkEnabledU3Ek__BackingField_1; }
	inline void set_U3CxrSdkEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CxrSdkEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CcopyDepthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcopyDepthU3Ek__BackingField_2)); }
	inline bool get_U3CcopyDepthU3Ek__BackingField_2() const { return ___U3CcopyDepthU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CcopyDepthU3Ek__BackingField_2() { return &___U3CcopyDepthU3Ek__BackingField_2; }
	inline void set_U3CcopyDepthU3Ek__BackingField_2(bool value)
	{
		___U3CcopyDepthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmultipassIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CmultipassIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CmultipassIdU3Ek__BackingField_3() const { return ___U3CmultipassIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmultipassIdU3Ek__BackingField_3() { return &___U3CmultipassIdU3Ek__BackingField_3; }
	inline void set_U3CmultipassIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CmultipassIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcullingPassIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcullingPassIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CcullingPassIdU3Ek__BackingField_4() const { return ___U3CcullingPassIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcullingPassIdU3Ek__BackingField_4() { return &___U3CcullingPassIdU3Ek__BackingField_4; }
	inline void set_U3CcullingPassIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CcullingPassIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrenderTargetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CrenderTargetU3Ek__BackingField_5)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_U3CrenderTargetU3Ek__BackingField_5() const { return ___U3CrenderTargetU3Ek__BackingField_5; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_U3CrenderTargetU3Ek__BackingField_5() { return &___U3CrenderTargetU3Ek__BackingField_5; }
	inline void set_U3CrenderTargetU3Ek__BackingField_5(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___U3CrenderTargetU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrenderTargetDescU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CrenderTargetDescU3Ek__BackingField_6)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_U3CrenderTargetDescU3Ek__BackingField_6() const { return ___U3CrenderTargetDescU3Ek__BackingField_6; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_U3CrenderTargetDescU3Ek__BackingField_6() { return &___U3CrenderTargetDescU3Ek__BackingField_6; }
	inline void set_U3CrenderTargetDescU3Ek__BackingField_6(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___U3CrenderTargetDescU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8)); }
	inline bool get_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8() const { return ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8() { return &___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8; }
	inline void set_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8(bool value)
	{
		___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CcullingParamsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___U3CcullingParamsU3Ek__BackingField_9)); }
	inline ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  get_U3CcullingParamsU3Ek__BackingField_9() const { return ___U3CcullingParamsU3Ek__BackingField_9; }
	inline ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * get_address_of_U3CcullingParamsU3Ek__BackingField_9() { return &___U3CcullingParamsU3Ek__BackingField_9; }
	inline void set_U3CcullingParamsU3Ek__BackingField_9(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  value)
	{
		___U3CcullingParamsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_occlusionMeshMaterial_10() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___occlusionMeshMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMeshMaterial_10() const { return ___occlusionMeshMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMeshMaterial_10() { return &___occlusionMeshMaterial_10; }
	inline void set_occlusionMeshMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMeshMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMeshMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_occlusionMeshCombined_11() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___occlusionMeshCombined_11)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_occlusionMeshCombined_11() const { return ___occlusionMeshCombined_11; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_occlusionMeshCombined_11() { return &___occlusionMeshCombined_11; }
	inline void set_occlusionMeshCombined_11(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___occlusionMeshCombined_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMeshCombined_11), (void*)value);
	}

	inline static int32_t get_offset_of_occlusionMeshCombinedHashCode_12() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___occlusionMeshCombinedHashCode_12)); }
	inline int32_t get_occlusionMeshCombinedHashCode_12() const { return ___occlusionMeshCombinedHashCode_12; }
	inline int32_t* get_address_of_occlusionMeshCombinedHashCode_12() { return &___occlusionMeshCombinedHashCode_12; }
	inline void set_occlusionMeshCombinedHashCode_12(int32_t value)
	{
		___occlusionMeshCombinedHashCode_12 = value;
	}

	inline static int32_t get_offset_of_customMirrorView_13() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___customMirrorView_13)); }
	inline CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * get_customMirrorView_13() const { return ___customMirrorView_13; }
	inline CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 ** get_address_of_customMirrorView_13() { return &___customMirrorView_13; }
	inline void set_customMirrorView_13(CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * value)
	{
		___customMirrorView_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMirrorView_13), (void*)value);
	}

	inline static int32_t get_offset_of_stereoEyeIndices_16() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoEyeIndices_16)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_stereoEyeIndices_16() const { return ___stereoEyeIndices_16; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_stereoEyeIndices_16() { return &___stereoEyeIndices_16; }
	inline void set_stereoEyeIndices_16(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___stereoEyeIndices_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoEyeIndices_16), (void*)value);
	}

	inline static int32_t get_offset_of_stereoProjectionMatrix_17() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoProjectionMatrix_17)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_stereoProjectionMatrix_17() const { return ___stereoProjectionMatrix_17; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_stereoProjectionMatrix_17() { return &___stereoProjectionMatrix_17; }
	inline void set_stereoProjectionMatrix_17(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___stereoProjectionMatrix_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoProjectionMatrix_17), (void*)value);
	}

	inline static int32_t get_offset_of_stereoViewMatrix_18() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoViewMatrix_18)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_stereoViewMatrix_18() const { return ___stereoViewMatrix_18; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_stereoViewMatrix_18() { return &___stereoViewMatrix_18; }
	inline void set_stereoViewMatrix_18(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___stereoViewMatrix_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoViewMatrix_18), (void*)value);
	}

	inline static int32_t get_offset_of_stereoCameraProjectionMatrix_19() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A, ___stereoCameraProjectionMatrix_19)); }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* get_stereoCameraProjectionMatrix_19() const { return ___stereoCameraProjectionMatrix_19; }
	inline Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82** get_address_of_stereoCameraProjectionMatrix_19() { return &___stereoCameraProjectionMatrix_19; }
	inline void set_stereoCameraProjectionMatrix_19(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* value)
	{
		___stereoCameraProjectionMatrix_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stereoCameraProjectionMatrix_19), (void*)value);
	}
};

struct XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields
{
public:
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::invalidRT
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___invalidRT_7;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRPass::_XRCustomMirrorProfilingSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ____XRCustomMirrorProfilingSampler_14;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRPass::_XROcclusionProfilingSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ____XROcclusionProfilingSampler_15;

public:
	inline static int32_t get_offset_of_invalidRT_7() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ___invalidRT_7)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_invalidRT_7() const { return ___invalidRT_7; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_invalidRT_7() { return &___invalidRT_7; }
	inline void set_invalidRT_7(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___invalidRT_7 = value;
	}

	inline static int32_t get_offset_of__XRCustomMirrorProfilingSampler_14() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ____XRCustomMirrorProfilingSampler_14)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get__XRCustomMirrorProfilingSampler_14() const { return ____XRCustomMirrorProfilingSampler_14; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of__XRCustomMirrorProfilingSampler_14() { return &____XRCustomMirrorProfilingSampler_14; }
	inline void set__XRCustomMirrorProfilingSampler_14(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		____XRCustomMirrorProfilingSampler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____XRCustomMirrorProfilingSampler_14), (void*)value);
	}

	inline static int32_t get_offset_of__XROcclusionProfilingSampler_15() { return static_cast<int32_t>(offsetof(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields, ____XROcclusionProfilingSampler_15)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get__XROcclusionProfilingSampler_15() const { return ____XROcclusionProfilingSampler_15; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of__XROcclusionProfilingSampler_15() { return &____XROcclusionProfilingSampler_15; }
	inline void set__XROcclusionProfilingSampler_15(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		____XROcclusionProfilingSampler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____XROcclusionProfilingSampler_15), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.XRSystemData
struct XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Rendering.Universal.XRSystemData/ShaderResources UnityEngine.Rendering.Universal.XRSystemData::shaders
	ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * ___shaders_4;

public:
	inline static int32_t get_offset_of_shaders_4() { return static_cast<int32_t>(offsetof(XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035, ___shaders_4)); }
	inline ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * get_shaders_4() const { return ___shaders_4; }
	inline ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 ** get_address_of_shaders_4() { return &___shaders_4; }
	inline void set_shaders_4(ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * value)
	{
		___shaders_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaders_4), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB 
{
public:
	// System.IntPtr UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::displaySubsystemInstance
	intptr_t ___displaySubsystemInstance_0;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderPassIndex
	int32_t ___renderPassIndex_1;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTarget_2;
	// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderTargetDesc
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTargetDesc_3;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::shouldFillOutDepth
	bool ___shouldFillOutDepth_4;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::cullingPassIndex
	int32_t ___cullingPassIndex_5;

public:
	inline static int32_t get_offset_of_displaySubsystemInstance_0() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___displaySubsystemInstance_0)); }
	inline intptr_t get_displaySubsystemInstance_0() const { return ___displaySubsystemInstance_0; }
	inline intptr_t* get_address_of_displaySubsystemInstance_0() { return &___displaySubsystemInstance_0; }
	inline void set_displaySubsystemInstance_0(intptr_t value)
	{
		___displaySubsystemInstance_0 = value;
	}

	inline static int32_t get_offset_of_renderPassIndex_1() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___renderPassIndex_1)); }
	inline int32_t get_renderPassIndex_1() const { return ___renderPassIndex_1; }
	inline int32_t* get_address_of_renderPassIndex_1() { return &___renderPassIndex_1; }
	inline void set_renderPassIndex_1(int32_t value)
	{
		___renderPassIndex_1 = value;
	}

	inline static int32_t get_offset_of_renderTarget_2() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___renderTarget_2)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_renderTarget_2() const { return ___renderTarget_2; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_renderTarget_2() { return &___renderTarget_2; }
	inline void set_renderTarget_2(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___renderTarget_2 = value;
	}

	inline static int32_t get_offset_of_renderTargetDesc_3() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___renderTargetDesc_3)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_renderTargetDesc_3() const { return ___renderTargetDesc_3; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_renderTargetDesc_3() { return &___renderTargetDesc_3; }
	inline void set_renderTargetDesc_3(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___renderTargetDesc_3 = value;
	}

	inline static int32_t get_offset_of_shouldFillOutDepth_4() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___shouldFillOutDepth_4)); }
	inline bool get_shouldFillOutDepth_4() const { return ___shouldFillOutDepth_4; }
	inline bool* get_address_of_shouldFillOutDepth_4() { return &___shouldFillOutDepth_4; }
	inline void set_shouldFillOutDepth_4(bool value)
	{
		___shouldFillOutDepth_4 = value;
	}

	inline static int32_t get_offset_of_cullingPassIndex_5() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___cullingPassIndex_5)); }
	inline int32_t get_cullingPassIndex_5() const { return ___cullingPassIndex_5; }
	inline int32_t* get_address_of_cullingPassIndex_5() { return &___cullingPassIndex_5; }
	inline void set_cullingPassIndex_5(int32_t value)
	{
		___cullingPassIndex_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_pinvoke
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___renderPassIndex_1;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTarget_2;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTargetDesc_3;
	int32_t ___shouldFillOutDepth_4;
	int32_t ___cullingPassIndex_5;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_com
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___renderPassIndex_1;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTarget_2;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTargetDesc_3;
	int32_t ___shouldFillOutDepth_4;
	int32_t ___cullingPassIndex_5;
};

// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView
struct CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027  : public MulticastDelegate_t
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  m_Items[1];

public:
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* m_Items[1];

public:
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  m_Items[1];

public:
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.Rendering.Universal.XRView[]
struct XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  m_Items[1];

public:
	inline XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___occlusionMesh_3), (void*)NULL);
	}
	inline XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___occlusionMesh_3), (void*)NULL);
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


// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_gshared_inline (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_gshared_inline (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_gshared (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___index0, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  ___value1, const RuntimeMethod* method);
// !0 UnityEngine.Rendering.GenericPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GenericPool_1_Get_m83513922C875CB6D1CB260D4473105D98BBB029F_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71_gshared (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.GenericPool`1<System.Object>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPool_1_Release_m17D5B1C038C1338871A498B69FD0C2AF166C509E_gshared (RuntimeObject * ___toRelease0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A_gshared (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA_gshared (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B (int32_t ___nameID0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::get_Count()
inline int32_t List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_inline (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *, const RuntimeMethod*))List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::get_Item(System.Int32)
inline XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_inline (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  (*) (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *, int32_t, const RuntimeMethod*))List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Rendering.Universal.XRPass::get_viewCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPass_get_viewCount_m057B8D5B4F9E1945FAAB5E4F02A9966CEE36F297 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_enabled_m29320181846F74E0DCF77D4D897479362D2273CA (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_xrSdkEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRPass_get_xrSdkEnabled_m382436041060A68DD4DCC122B48E4F8BEDC1EB64_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRView::.ctor(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRView__ctor_mBD2BA2F6548FD9780A2EA656E186BE6AB02FA411 (XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * __this, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___renderPass0, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___renderParameter1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6 (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___index0, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *, int32_t, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 , const RuntimeMethod*))List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.Rendering.Universal.XRView::.ctor(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRView__ctor_m26697ACC489FE20A5ABE57491F5266BBEAD8DA61 (XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___proj0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___vp2, int32_t ___dstSlice3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_cullingPassId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_cullingParams(UnityEngine.Rendering.ScriptableCullingParameters)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___value0, const RuntimeMethod* method);
// !0 UnityEngine.Rendering.GenericPool`1<UnityEngine.Rendering.Universal.XRPass>::Get()
inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * GenericPool_1_Get_m26F4DD74EEC5053F177D2255B8C70D1639AE899A (const RuntimeMethod* method)
{
	return ((  XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * (*) (const RuntimeMethod*))GenericPool_1_Get_m83513922C875CB6D1CB260D4473105D98BBB029F_gshared)(method);
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_multipassId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_multipassId_mBF5A78EF00B1DEB40F3315D446BFDA15B5677F07_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::Clear()
inline void List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71 (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *, const RuntimeMethod*))List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,UnityEngine.CubemapFace,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_mDBFAB9845573B33D9CCF6E9BDAF5866BDD815D0C (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTargetIdentifier0, int32_t ___mipLevel1, int32_t ___cubeFace2, int32_t ___depthSlice3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_renderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_renderTarget_m528BDC7E91273283D86C9F1543CCE551E09F0A29_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_m5DD56A0652453FDDB51FF030FC5ED914F83F5E31_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m661881AD8E078D6C1FD6C549207AACC2B179D201_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::get_colorFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_colorFormat_m8DEB83CC5B5BD5737AA9FBE8E3B02A4967E3B098 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_depthBufferBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_depthBufferBits_m92A95D5A1DCA7B844B3AC81AADCDFDD37D26333C (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_mipCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_mipCount_m7712C0C03EFAABB3B40528018FE5A5CE07ACA5FE_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_m64ED776461CF27E7A5E0DBC1E0B6BC579AC1D5E2 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthBufferBits3, int32_t ___mipCount4, const RuntimeMethod* method);
// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::get_dimension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_dimension_mC7CB3DA0E163E4C7C3C4BC14B5B92C4EAADC87D3_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_dimension(UnityEngine.Rendering.TextureDimension)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_m4D3F1486F761F3C52308F00267B918BD7DB8137F_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_volumeDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_volumeDepth_m05E4A20A05286909E65D394D0BA5F6904D653688_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_volumeDepth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mC4D9C6B86B6799BA752855DE5C385CC24F6E3733_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::get_vrUsage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_vrUsage_m51AC5C8A266689B8E69E91A1531F4F9408928197_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_vrUsage(UnityEngine.VRTextureUsage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_vrUsage_m5E4F43CB35EF142D55AC22996B641483566A2097_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTextureDescriptor::get_sRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTextureDescriptor_get_sRGB_m2CE40C33A7051CA5F2AC87F579A28CA617BDA88F (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_m92925430C9C202528AA56DC9E01FCD382FCEB1D2 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_renderTargetDesc(UnityEngine.RenderTextureDescriptor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_renderTargetDesc_mB21461AD204A490E0568E8E126590F59DF6DB07A_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_renderTargetIsRenderTexture(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_renderTargetIsRenderTexture_m93DAA821EB43DAC5BEC6E454B5E995B3F2147393_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_xrSdkEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_xrSdkEnabled_m6C320B4690D3C05225AC8A456AA1DB38CCECDB16_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::set_copyDepth(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_copyDepth_mABAD1DE38CB40CFB7971ED1D5A507FB046BFAECE_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::AddViewInternal(UnityEngine.Rendering.Universal.XRView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_AddViewInternal_m61BD6957BF5925AD65CA954BB04385BDF4D42047 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  ___xrView0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.GenericPool`1<UnityEngine.Rendering.Universal.XRPass>::Release(!0)
inline void GenericPool_1_Release_mFE1BB04F80C0424B30D03EEB28C3FE99E51A5862 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___toRelease0, const RuntimeMethod* method)
{
	((  void (*) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, const RuntimeMethod*))GenericPool_1_Release_m17D5B1C038C1338871A498B69FD0C2AF166C509E_gshared)(___toRelease0, method);
}
// System.Int32 UnityEngine.Rendering.TextureXR::get_slices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureXR_get_slices_mB7DD753858EACB54625860E7B7521046D20C8F21_inline (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::Add(!0)
inline void List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 , const RuntimeMethod*))List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_isOcclusionMeshSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_isOcclusionMeshSupported_m3D4CE92972FA8DB21FD2EBF02CEBF687AE828853 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_singlePassEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_singlePassEnabled_mE9467F40CAF6B34B853C1D352FF7256E1F762FC2 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRPass::TryGetOcclusionMeshCombinedHashCode(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_TryGetOcclusionMeshCombinedHashCode_m667C57572358A2527469A4986F9EDCC37BFB28DE (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t* ___hashCode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::CreateOcclusionMeshCombined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_CreateOcclusionMeshCombined_mF3DBCA8C5D4A7A6577099DCF5739C62CCC4FF534 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Mesh::GetIndexCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mesh_GetIndexCount_m3ADD772F77C8EDE1CC2ABD9BA58BC70F0AD18EC0 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___submesh0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Mesh_GetIndices_m8C8D25ABFA9D8A7AE23DAEB6FD7142E6BB46C49D (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___submesh0, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetIndices(System.UInt16[],UnityEngine.MeshTopology,System.Int32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_mF87D553F149D07CCC7B270B792801A040A40C6C2 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___indices0, int32_t ___topology1, int32_t ___submesh2, bool ___calculateBounds3, int32_t ___baseVertex4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>::.ctor(System.Int32)
inline void List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *, int32_t, const RuntimeMethod*))List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA_gshared)(__this, ___capacity0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200 (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ProfilingSampler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89 (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass__ctor_mCA55DA5C03B0479EE54DCA7EA94E5FF36FED7732 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>::.ctor()
inline void List_1__ctor_mDB3FD56A5D370A33CDBB550F5CD75BEA464078AD (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRSystem::RefreshXrSdk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSystem_RefreshXrSdk_m30A7FD07FFC08ED83A1C4D2D59730A79653CFACD (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.Universal.XRSystem::GetMaxViews()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSystem_GetMaxViews_m2F0885AEB08405FB58E24642602B253F7F674B1C (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.TextureXR::set_maxViews(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureXR_set_maxViews_m19D596C4FD8DB0FB226728F60E419B75255904AC_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CoreUtils::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreUtils_Destroy_m6345256E0F0115675EBEC44EE2E6D6B6075A8388 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Rendering.CoreUtils::CreateEngineMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CoreUtils_CreateEngineMaterial_m31F7E75C11E58A77F38741F5A85E6018CF4F3864 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.GraphicsSettings::get_currentRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * GraphicsSettings_get_currentRenderPipeline_mDEBD1CD71B0917F918D9860C9351943A9677ADCA (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRSystem::GetDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_GetDisplaySubsystem_m1176C00E95F9FCE7674FC344CB2EB7B8942CF91E (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::get_Item(System.Int32)
inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_disableLegacyRenderer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_textureLayout(UnityEngine.XR.XRDisplaySubsystem/TextureLayout)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::get_Count()
inline int32_t List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_inline (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::SetMSAALevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_SetMSAALevel_m82744B20121EF877A3E6FFB67EC4FFB8E0636D5C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_scaleOfAllRenderTargets(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_scaleOfAllRenderTargets_m787040A0FC0B1557EC5B3417D314FD0414066AC9 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_zNear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_zNear_m28900D13CE8FC3AA9478AF1826E2AC012214397F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_zFar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_zFar_m65A9D02251604E84D5AB1E5C92B8E341A739815C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>::get_Count()
inline int32_t List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_inline (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRSystem::ReleaseFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_ReleaseFrame_mE9046CA23B4BCFDD5DD555748D2ECAC1C30740D8 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method);
// UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRSystem::CreateLayoutFromXrSdk(UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_CreateLayoutFromXrSdk_mD46049C4F7A08CFD6E5C88C5F31058B55F0B4E9B (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, bool ___singlePassAllowed1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRSystem::AddPassToFrame(UnityEngine.Rendering.Universal.XRPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_AddPassToFrame_m9E95DC808E61B996871908A4052717D1A665C2D4 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xrPass0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>::GetEnumerator()
inline Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295  List_1_GetEnumerator_mCD4D8DCA3196CE51041240DD01A5577D37828222 (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295  (*) (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.XRPass>::get_Current()
inline XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * Enumerator_get_Current_m8521D4A619F6BBB2FBB88B1EE5BD22E1B6F97B9E_inline (Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 * __this, const RuntimeMethod* method)
{
	return ((  XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * (*) (Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.XRPass::Release(UnityEngine.Rendering.Universal.XRPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_Release_m2B844EE45248EB9AF52CF82EAFC15E15A92D44FB (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xrPass0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.XRPass>::MoveNext()
inline bool Enumerator_MoveNext_mE2A866BD285A9E433D5008E2CFA130DBB8E5EEA5 (Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.XRPass>::Dispose()
inline void Enumerator_Dispose_m898E05781BDDF5426BFEEF54FFF881F68A7C0C56 (Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>::Clear()
inline void List_1_Clear_m67F27C91654BDFD595DE281983715D71077B8B19 (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rendering.Universal.XRPass::GetViewport(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  XRPass_GetViewport_m86B907AD139BF56872DB6826CF0C981A344BB4D5 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___viewIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.XRPass::get_renderTargetDesc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::get_graphicsFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_graphicsFormat_m9D77E42E017808FE3181673152A69CBC9A9B8B85 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_graphicsFormat_m946B6FE4422E8CD33EB13ADAFDB53669EBD361C4 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RenderTextureDescriptor::get_msaaSamples()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_m332912610A1FF2B7C05B0BA9939D733F2E7F0646_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m84320452D8BF3A8DD5662F6229FE666C299B5AEF_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m8D4BAEBB8089FD77F4DC81088ACB511F2BCA41EA_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1300AF31BCDCF2E14E86A598AFDC5569B682A46D_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.XRGraphicsAutomatedTests::get_enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRGraphicsAutomatedTests_get_enabled_mF072F12B6825BD0B7A262221D15B33F803B4B37D_inline (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateView(System.Int32,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateView_m236A460DEDE22C366FCAF5BFF2EEA4BFD6E27EBE (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___viewId0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___proj1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___vp3, int32_t ___textureArraySlice4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::TryGetCullingParameters(System.Boolean,UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_TryGetCullingParameters_mBC64805978FA39F8D0FD0A99474E08030E728697 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___stereoAware0, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * ___cullingParameters1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ScriptableCullingParameters::set_stereoProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableCullingParameters_set_stereoProjectionMatrix_m379838C991578CB21E3439AD45A6901D4DB95437 (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ScriptableCullingParameters::set_stereoViewMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableCullingParameters_set_stereoViewMatrix_m90FE292147863E3114E9313DC1444AE4E2D5223E (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Rendering.CullingOptions UnityEngine.Rendering.ScriptableCullingParameters::get_cullingOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScriptableCullingParameters_get_cullingOptions_m024AC47E3641D47847C4B67457BA398B9814D86B (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ScriptableCullingParameters::set_cullingOptions(UnityEngine.Rendering.CullingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableCullingParameters_set_cullingOptions_m03942DACE93C8F2F705D306984D3F42D18670D6D (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateCullingParams(System.Int32,UnityEngine.Rendering.ScriptableCullingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateCullingParams_mA7D560B027CD211FC86B4419BED46010489DF06A (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___cullingPassId0, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___cullingParams1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.Universal.XRPass::get_multipassId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRPass_get_multipassId_mD4A8E396F5B8E3EA3E5FA642A95948614CB19C1D_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::GetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_GetRenderPass_m2DCDDACE964B4F6CEAAD5DF4387CEDF9CACA83AD (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___renderPassIndex0, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ___renderPass1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::GetCullingParameters(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___cullingPassIndex1, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * ___scriptableCullingParameters2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter(UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___renderParameterIndex1, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * ___renderParameter2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateView(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateView_m0818F95E7AF7C1763B807C508F7095D3348D7E20 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___viewId0, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___xrSdkRenderPass1, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___xrSdkRenderParameter2, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.Universal.XRSystem::<CreateLayoutFromXrSdk>g__CanUseSinglePass|24_0(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.Rendering.Universal.XRSystem/<>c__DisplayClass24_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSystem_U3CCreateLayoutFromXrSdkU3Eg__CanUseSinglePassU7C24_0_mC086FCBD276F4990745BA9168A14F4301F3914A6 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___renderPass0, U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5 * p1, const RuntimeMethod* method);
// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.XRPass::Create(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * XRPass_Create_mB49E75C77DF62A1DFD8FAEDB2CDC924739EC802C (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___xrRenderPass0, int32_t ___multipassId1, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___cullingParameters2, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMeshMaterial3, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::AddView(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_AddView_m4FB7F1B1148E42FD55AEDBF364FA7600C8BA6DDC (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___xrSdkRenderPass0, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___xrSdkRenderParameter1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetRenderPassCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDisplaySubsystem_GetRenderPassCount_m68A61A55A72FAC483A67981F12451D45576A860D (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateOcclusionMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateOcclusionMesh_m2288932ABD0F00CE1DDE099452CD19540687B433 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass>::Add(!0)
inline void List_1_Add_m173CBA6925E49D9B6FE04048D5A9727E7A83D055 (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 *, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Rendering.ProfilingScope::.ctor(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope__ctor_mCFCBA7418FE2083888D60C7BDB9C6B1CF1AF82CA (ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___sampler1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Rendering.BuiltinRenderTextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m8F174D7C9A3172B5C5D0C5C8933973801157CDBB (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * __this, int32_t ___type0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___tex0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_mCDFEB57580AF2EC11E02BA87EFB6CF18AD3AC840 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___rt0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetPreferredMirrorBlitMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDisplaySubsystem_GetPreferredMirrorBlitMode_m6312460A737308417E27461459BFF33B252FD37A (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::GetMirrorViewBlitDesc(UnityEngine.RenderTexture,UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_GetMirrorViewBlitDesc_m5C9F5DC8113A3D149D25F0A5CE4B71C208BC80E9 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___mirrorRt0, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * ___outDesc1, int32_t ___mode2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::AddGraphicsThreadMirrorViewBlit(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit_m6BCCEE01F4F2E4F42B0E9751F3EAE92B5A63A14A (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, bool ___allowGraphicsStateInvalidate1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMirrorViewBlitDesc_GetBlitParameter_m99A6EB66BCF56061E6964F27FDEA9D57481CC7A4 (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * __this, int32_t ___blitParameterIndex0, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * ___blitParameter1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Boolean UnityEngine.RenderTexture::get_sRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_get_sRGB_m53EE975EDE763A0CC5B2CF5B347D5FC6E1FE3B21 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetInt_mD1967761896ABFD2853C85113D31F28D1BCC273D (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m8F81CA94E5261618BEDD93EC02DAA2412E732C04 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::DrawProcedural(UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.MeshTopology,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawProcedural_m3F0D474890F8766A12B6871C63C0C40CD0AC4C36 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, int32_t ___shaderPass2, int32_t ___topology3, int32_t ___vertexCount4, int32_t ___instanceCount5, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties6, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mD911CD9DACD86BB1A9734235E6D55AF9BE844CA0 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, bool ___clearDepth0, bool ___clearColor1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor2, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ProfilingScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope_Dispose_m5153A8FD4370211B57DFF29BE2F20E39CC61CEAF (ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Rendering.Universal.CameraData
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke(const CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7& unmarshaled, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___camera_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'camera' of type 'CameraData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___camera_2Exception, NULL);
}
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_back(const CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_pinvoke& marshaled, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7& unmarshaled)
{
	Exception_t* ___camera_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'camera' of type 'CameraData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___camera_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.Universal.CameraData
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_pinvoke_cleanup(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.Universal.CameraData
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_com(const CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7& unmarshaled, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_com& marshaled)
{
	Exception_t* ___camera_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'camera' of type 'CameraData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___camera_2Exception, NULL);
}
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_com_back(const CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_com& marshaled, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7& unmarshaled)
{
	Exception_t* ___camera_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'camera' of type 'CameraData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___camera_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.Universal.CameraData
IL2CPP_EXTERN_C void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshal_com_cleanup(CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderer__cctor_m0470CA064570E7675DBBF61BFAF1B91AFA8D51C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ScriptableRenderer current = null;
		((ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_il2cpp_TypeInfo_var))->set_current_0((ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 *)NULL);
		// static RenderTargetIdentifier[] m_ActiveColorAttachments = new RenderTargetIdentifier[]{0, 0, 0, 0, 0, 0, 0, 0 };
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_0 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)8);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_1 = L_0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_2;
		L_2 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_2);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_3 = L_1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_4;
		L_4 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_4);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_5 = L_3;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_6;
		L_6 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_6);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_7 = L_5;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_8;
		L_8 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_8);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_9 = L_7;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_10;
		L_10 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_10);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_11 = L_9;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_12;
		L_12 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_12);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_13 = L_11;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_14;
		L_14 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_14);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_15 = L_13;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_16;
		L_16 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_16);
		((ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_il2cpp_TypeInfo_var))->set_m_ActiveColorAttachments_1(L_15);
		// static RenderTargetIdentifier[][] m_TrimmedColorAttachmentCopies = new RenderTargetIdentifier[][]
		// {
		//     new RenderTargetIdentifier[0],                          // m_TrimmedColorAttachmentCopies[0] is an array of 0 RenderTargetIdentifier - only used to make indexing code easier to read
		//     new RenderTargetIdentifier[]{0},                        // m_TrimmedColorAttachmentCopies[1] is an array of 1 RenderTargetIdentifier
		//     new RenderTargetIdentifier[]{0, 0},                     // m_TrimmedColorAttachmentCopies[2] is an array of 2 RenderTargetIdentifiers
		//     new RenderTargetIdentifier[]{0, 0, 0},                  // m_TrimmedColorAttachmentCopies[3] is an array of 3 RenderTargetIdentifiers
		//     new RenderTargetIdentifier[]{0, 0, 0, 0},               // m_TrimmedColorAttachmentCopies[4] is an array of 4 RenderTargetIdentifiers
		//     new RenderTargetIdentifier[]{0, 0, 0, 0, 0},            // m_TrimmedColorAttachmentCopies[5] is an array of 5 RenderTargetIdentifiers
		//     new RenderTargetIdentifier[]{0, 0, 0, 0, 0, 0},         // m_TrimmedColorAttachmentCopies[6] is an array of 6 RenderTargetIdentifiers
		//     new RenderTargetIdentifier[]{0, 0, 0, 0, 0, 0, 0},      // m_TrimmedColorAttachmentCopies[7] is an array of 7 RenderTargetIdentifiers
		//     new RenderTargetIdentifier[]{0, 0, 0, 0, 0, 0, 0, 0 },  // m_TrimmedColorAttachmentCopies[8] is an array of 8 RenderTargetIdentifiers
		// };
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_17 = (RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE*)(RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE*)SZArrayNew(RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_18 = L_17;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_19 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_19);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_20 = L_18;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_21 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_22 = L_21;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_23;
		L_23 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_23);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_22);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_24 = L_20;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_25 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)2);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_26 = L_25;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_27;
		L_27 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_27);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_28 = L_26;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_29;
		L_29 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_29);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_28);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_30 = L_24;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_31 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)3);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_32 = L_31;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_33;
		L_33 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_33);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_34 = L_32;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_35;
		L_35 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_35);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_36 = L_34;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_37;
		L_37 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_37);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_36);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_36);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_38 = L_30;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_39 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)4);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_40 = L_39;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_41;
		L_41 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_41);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_42 = L_40;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_43;
		L_43 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_43);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_44 = L_42;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_45;
		L_45 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_45);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_46 = L_44;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_47;
		L_47 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_47);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_46);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_46);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_48 = L_38;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_49 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)5);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_50 = L_49;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_51;
		L_51 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_51);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_52 = L_50;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_53;
		L_53 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_53);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_54 = L_52;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_55;
		L_55 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_55);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_56 = L_54;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_57;
		L_57 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_57);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_58 = L_56;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_59;
		L_59 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_59);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_58);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(5), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_58);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_60 = L_48;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_61 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)6);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_62 = L_61;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_63;
		L_63 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_63);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_64 = L_62;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_65;
		L_65 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_65);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_66 = L_64;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_67;
		L_67 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_67);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_68 = L_66;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_69;
		L_69 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_69);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_70 = L_68;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_71;
		L_71 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_71);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_72 = L_70;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_73;
		L_73 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(5), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_73);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_72);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(6), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_72);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_74 = L_60;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_75 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)7);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_76 = L_75;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_77;
		L_77 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_77);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_78 = L_76;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_79;
		L_79 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_79);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_80 = L_78;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_81;
		L_81 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_81);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_82 = L_80;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_83;
		L_83 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_83);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_84 = L_82;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_85;
		L_85 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_85);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_86 = L_84;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_87;
		L_87 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(5), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_87);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_88 = L_86;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_89;
		L_89 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_89);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_88);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(7), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_88);
		RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* L_90 = L_74;
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_91 = (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)SZArrayNew(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17_il2cpp_TypeInfo_var, (uint32_t)8);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_92 = L_91;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_93;
		L_93 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_93);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_94 = L_92;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_95;
		L_95 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_95);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_96 = L_94;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_97;
		L_97 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(2), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_97);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_98 = L_96;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_99;
		L_99 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(3), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_99);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_100 = L_98;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_101;
		L_101 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(4), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_101);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_102 = L_100;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_103;
		L_103 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(5), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_103);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_104 = L_102;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_105;
		L_105 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(6), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_105);
		RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* L_106 = L_104;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_107;
		L_107 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B(0, /*hidden argument*/NULL);
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(7), (RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 )L_107);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_106);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(8), (RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17*)L_106);
		((ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_il2cpp_TypeInfo_var))->set_m_TrimmedColorAttachmentCopies_2(L_90);
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
// System.Void UnityEngine.Rendering.Universal.ShaderPropertyId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderPropertyId__cctor_mA37312BCBED320DA89B602712197A2C596431789 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036462E760D1953050197A6F33FE443041B98AA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0988CDC29FE43C9FCECF6E06147485DAEFB5CB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16E59EDD2FD454E9711E0B96F4D5EA57CE3A8EF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1B687052634F31BE298096FC81FF2A498F00CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32D998EC1E1EEBF95E629E3A1B6AEE6436A29F49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F33523076D7B2B54E8E2D8B8C07500867A53E03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C93593DCE45765B4642894C14D3F5BDE87878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EE4883CDE67FE6B013C71176B61EE1D2154200);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral714C549745DBC54EAD30BE566C9DDF760E04C4E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral731ACC839320B944A000E491F021EB50F744916E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7910A12450F64B7A24CD13C4495D7B05CAFBD6F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AD3B8F0AE03B30E7EF1A150A08259397F2A7D50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B8AA39EEAF586AAE4B49BE920B4A7420EF396E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A21527D31B72E8920CB85275444917DF715D499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93487196057F6E4926F465D21E418EE45A1EFFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4062A50E83D6C81F02245FB93BA96971B6172F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7819A6199852A134A275F4EC18ABACB7F17BDB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC38CF2CD6231CE06AEB54D4B70DB605A6FEF8DC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA495353BC1816C45C8FD14193FB92D99FA2B717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFBE4E9F4B58426174A6C84ABCC0E871E3BCB6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2F568F113E6FF8BE250156E84F8FFFC0887DCA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE04F4BC040E2A02DEA7F8D225F917AC188A96D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3843B7079FCEA5763232F15A870E3FC92C10421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3CA9F603D523F1FA0E6DBC23800329D6D136C7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73F9AD79FDB771F17F1CA3F3769CE7D2DA34058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDB52736AE2F33ADF09CE012609472608586D5B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38B47313DFB6C4F2825EFAE354BF4BC7D6DF904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5998FBF74D2BE8FF5EE60F1E0421CFC19511DE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF10F8462DB3339998CC265624610CF436D453AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int glossyEnvironmentColor = Shader.PropertyToID("_GlossyEnvironmentColor");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral16E59EDD2FD454E9711E0B96F4D5EA57CE3A8EF4, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_glossyEnvironmentColor_0(L_0);
		// public static readonly int subtractiveShadowColor = Shader.PropertyToID("_SubtractiveShadowColor");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE3CA9F603D523F1FA0E6DBC23800329D6D136C7F, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_subtractiveShadowColor_1(L_1);
		// public static readonly int ambientSkyColor = Shader.PropertyToID("unity_AmbientSky");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF38B47313DFB6C4F2825EFAE354BF4BC7D6DF904, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_ambientSkyColor_2(L_2);
		// public static readonly int ambientEquatorColor = Shader.PropertyToID("unity_AmbientEquator");
		int32_t L_3;
		L_3 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral32D998EC1E1EEBF95E629E3A1B6AEE6436A29F49, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_ambientEquatorColor_3(L_3);
		// public static readonly int ambientGroundColor = Shader.PropertyToID("unity_AmbientGround");
		int32_t L_4;
		L_4 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral7910A12450F64B7A24CD13C4495D7B05CAFBD6F2, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_ambientGroundColor_4(L_4);
		// public static readonly int time = Shader.PropertyToID("_Time");
		int32_t L_5;
		L_5 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral45EE4883CDE67FE6B013C71176B61EE1D2154200, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_time_5(L_5);
		// public static readonly int sinTime = Shader.PropertyToID("_SinTime");
		int32_t L_6;
		L_6 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral3F33523076D7B2B54E8E2D8B8C07500867A53E03, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_sinTime_6(L_6);
		// public static readonly int cosTime = Shader.PropertyToID("_CosTime");
		int32_t L_7;
		L_7 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral93487196057F6E4926F465D21E418EE45A1EFFDA, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_cosTime_7(L_7);
		// public static readonly int deltaTime = Shader.PropertyToID("unity_DeltaTime");
		int32_t L_8;
		L_8 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCCFBE4E9F4B58426174A6C84ABCC0E871E3BCB6A, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_deltaTime_8(L_8);
		// public static readonly int timeParameters = Shader.PropertyToID("_TimeParameters");
		int32_t L_9;
		L_9 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral442C93593DCE45765B4642894C14D3F5BDE87878, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_timeParameters_9(L_9);
		// public static readonly int scaledScreenParams = Shader.PropertyToID("_ScaledScreenParams");
		int32_t L_10;
		L_10 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral7B8AA39EEAF586AAE4B49BE920B4A7420EF396E3, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_scaledScreenParams_10(L_10);
		// public static readonly int worldSpaceCameraPos = Shader.PropertyToID("_WorldSpaceCameraPos");
		int32_t L_11;
		L_11 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCC755BAA1D6CD9058F3A8FAF0C73B9922AEC608B, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_worldSpaceCameraPos_11(L_11);
		// public static readonly int screenParams = Shader.PropertyToID("_ScreenParams");
		int32_t L_12;
		L_12 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE73F9AD79FDB771F17F1CA3F3769CE7D2DA34058, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_screenParams_12(L_12);
		// public static readonly int projectionParams = Shader.PropertyToID("_ProjectionParams");
		int32_t L_13;
		L_13 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralC38CF2CD6231CE06AEB54D4B70DB605A6FEF8DC0, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_projectionParams_13(L_13);
		// public static readonly int zBufferParams = Shader.PropertyToID("_ZBufferParams");
		int32_t L_14;
		L_14 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB7819A6199852A134A275F4EC18ABACB7F17BDB7, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_zBufferParams_14(L_14);
		// public static readonly int orthoParams = Shader.PropertyToID("unity_OrthoParams");
		int32_t L_15;
		L_15 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralCA495353BC1816C45C8FD14193FB92D99FA2B717, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_orthoParams_15(L_15);
		// public static readonly int viewMatrix = Shader.PropertyToID("unity_MatrixV");
		int32_t L_16;
		L_16 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralF5998FBF74D2BE8FF5EE60F1E0421CFC19511DE9, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_viewMatrix_16(L_16);
		// public static readonly int projectionMatrix = Shader.PropertyToID("glstate_matrix_projection");
		int32_t L_17;
		L_17 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral731ACC839320B944A000E491F021EB50F744916E, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_projectionMatrix_17(L_17);
		// public static readonly int viewAndProjectionMatrix = Shader.PropertyToID("unity_MatrixVP");
		int32_t L_18;
		L_18 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral0988CDC29FE43C9FCECF6E06147485DAEFB5CB68, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_viewAndProjectionMatrix_18(L_18);
		// public static readonly int inverseViewMatrix = Shader.PropertyToID("unity_MatrixInvV");
		int32_t L_19;
		L_19 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralB4062A50E83D6C81F02245FB93BA96971B6172F3, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_inverseViewMatrix_19(L_19);
		// public static readonly int inverseProjectionMatrix = Shader.PropertyToID("unity_MatrixInvP");
		int32_t L_20;
		L_20 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE04F4BC040E2A02DEA7F8D225F917AC188A96D19, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_inverseProjectionMatrix_20(L_20);
		// public static readonly int inverseViewAndProjectionMatrix = Shader.PropertyToID("unity_MatrixInvVP");
		int32_t L_21;
		L_21 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralEDB52736AE2F33ADF09CE012609472608586D5B9, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_inverseViewAndProjectionMatrix_21(L_21);
		// public static readonly int cameraProjectionMatrix = Shader.PropertyToID("unity_CameraProjection");
		int32_t L_22;
		L_22 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralFF10F8462DB3339998CC265624610CF436D453AF, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_cameraProjectionMatrix_22(L_22);
		// public static readonly int inverseCameraProjectionMatrix = Shader.PropertyToID("unity_CameraInvProjection");
		int32_t L_23;
		L_23 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral714C549745DBC54EAD30BE566C9DDF760E04C4E2, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_inverseCameraProjectionMatrix_23(L_23);
		// public static readonly int worldToCameraMatrix = Shader.PropertyToID("unity_WorldToCamera");
		int32_t L_24;
		L_24 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral1F1B687052634F31BE298096FC81FF2A498F00CE, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_worldToCameraMatrix_24(L_24);
		// public static readonly int cameraToWorldMatrix = Shader.PropertyToID("unity_CameraToWorld");
		int32_t L_25;
		L_25 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE3843B7079FCEA5763232F15A870E3FC92C10421, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_cameraToWorldMatrix_25(L_25);
		// public static readonly int sourceTex = Shader.PropertyToID("_SourceTex");
		int32_t L_26;
		L_26 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralD2F568F113E6FF8BE250156E84F8FFFC0887DCA5, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_sourceTex_26(L_26);
		// public static readonly int scaleBias = Shader.PropertyToID("_ScaleBias");
		int32_t L_27;
		L_27 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral8A21527D31B72E8920CB85275444917DF715D499, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_scaleBias_27(L_27);
		// public static readonly int scaleBiasRt = Shader.PropertyToID("_ScaleBiasRt");
		int32_t L_28;
		L_28 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral7AD3B8F0AE03B30E7EF1A150A08259397F2A7D50, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_scaleBiasRt_28(L_28);
		// public static readonly int rendererColor = Shader.PropertyToID("_RendererColor");
		int32_t L_29;
		L_29 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral036462E760D1953050197A6F33FE443041B98AA2, /*hidden argument*/NULL);
		((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->set_rendererColor_29(L_29);
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
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_enabled_m29320181846F74E0DCF77D4D897479362D2273CA (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal bool enabled      { get => views.Count > 0; }
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_0 = __this->get_views_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_inline(L_0, /*hidden argument*/List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_xrSdkEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_xrSdkEnabled_m382436041060A68DD4DCC122B48E4F8BEDC1EB64 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal bool xrSdkEnabled { get; private set; }
		bool L_0 = __this->get_U3CxrSdkEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_xrSdkEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_xrSdkEnabled_m6C320B4690D3C05225AC8A456AA1DB38CCECDB16 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool xrSdkEnabled { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CxrSdkEnabledU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_copyDepth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_copyDepth_mABAD1DE38CB40CFB7971ED1D5A507FB046BFAECE (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool copyDepth    { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CcopyDepthU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.XRPass::get_multipassId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPass_get_multipassId_mD4A8E396F5B8E3EA3E5FA642A95948614CB19C1D (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal int multipassId    { get; private set; }
		int32_t L_0 = __this->get_U3CmultipassIdU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_multipassId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_multipassId_mBF5A78EF00B1DEB40F3315D446BFDA15B5677F07 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int multipassId    { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmultipassIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_cullingPassId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int cullingPassId  { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcullingPassIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_renderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_renderTarget_m528BDC7E91273283D86C9F1543CCE551E09F0A29 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___value0, const RuntimeMethod* method)
{
	{
		// internal RenderTargetIdentifier  renderTarget     { get; private set; }
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_0 = ___value0;
		__this->set_U3CrenderTargetU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.XRPass::get_renderTargetDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal RenderTextureDescriptor renderTargetDesc { get; private set; }
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_0 = __this->get_U3CrenderTargetDescU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_renderTargetDesc(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_renderTargetDesc_mB21461AD204A490E0568E8E126590F59DF6DB07A (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___value0, const RuntimeMethod* method)
{
	{
		// internal RenderTextureDescriptor renderTargetDesc { get; private set; }
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_0 = ___value0;
		__this->set_U3CrenderTargetDescU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_renderTargetIsRenderTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_renderTargetIsRenderTexture_m93DAA821EB43DAC5BEC6E454B5E995B3F2147393 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool                    renderTargetIsRenderTexture { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.Rect UnityEngine.Rendering.Universal.XRPass::GetViewport(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  XRPass_GetViewport_m86B907AD139BF56872DB6826CF0C981A344BB4D5 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___viewIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Rect GetViewport(int viewIndex = 0)         { return views[viewIndex].viewport; }
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_0 = __this->get_views_0();
		int32_t L_1 = ___viewIndex0;
		NullCheck(L_0);
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_2;
		L_2 = List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = L_2.get_viewport_2();
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::set_cullingParams(UnityEngine.Rendering.ScriptableCullingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___value0, const RuntimeMethod* method)
{
	{
		// internal ScriptableCullingParameters cullingParams { get; private set; }
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_0 = ___value0;
		__this->set_U3CcullingParamsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.XRPass::get_viewCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPass_get_viewCount_m057B8D5B4F9E1945FAAB5E4F02A9966CEE36F297 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal int viewCount { get => views.Count; }
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_0 = __this->get_views_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_inline(L_0, /*hidden argument*/List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_singlePassEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_singlePassEnabled_mE9467F40CAF6B34B853C1D352FF7256E1F762FC2 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal bool singlePassEnabled { get => viewCount > 1; }
		int32_t L_0;
		L_0 = XRPass_get_viewCount_m057B8D5B4F9E1945FAAB5E4F02A9966CEE36F297(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_isOcclusionMeshSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_isOcclusionMeshSupported_m3D4CE92972FA8DB21FD2EBF02CEBF687AE828853 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal bool isOcclusionMeshSupported { get => enabled && xrSdkEnabled && occlusionMeshMaterial != null; }
		bool L_0;
		L_0 = XRPass_get_enabled_m29320181846F74E0DCF77D4D897479362D2273CA(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1;
		L_1 = XRPass_get_xrSdkEnabled_m382436041060A68DD4DCC122B48E4F8BEDC1EB64_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_occlusionMeshMaterial_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateView(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateView_m0818F95E7AF7C1763B807C508F7095D3348D7E20 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___viewId0, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___xrSdkRenderPass1, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___xrSdkRenderParameter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (viewId >= views.Count)
		int32_t L_0 = ___viewId0;
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_1 = __this->get_views_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_inline(L_1, /*hidden argument*/List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		// throw new NotImplementedException($"Invalid XR setup to update, trying to update non-existing xr view.");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_3 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF55941A88527B807C3B4BC84AD93366529254BAC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPass_UpdateView_m0818F95E7AF7C1763B807C508F7095D3348D7E20_RuntimeMethod_var)));
	}

IL_0019:
	{
		// views[viewId] = new XRView(xrSdkRenderPass, xrSdkRenderParameter);
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_4 = __this->get_views_0();
		int32_t L_5 = ___viewId0;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_6 = ___xrSdkRenderPass1;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_7 = ___xrSdkRenderParameter2;
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_8;
		memset((&L_8), 0, sizeof(L_8));
		XRView__ctor_mBD2BA2F6548FD9780A2EA656E186BE6AB02FA411((&L_8), L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6(L_4, L_5, L_8, /*hidden argument*/List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateView(System.Int32,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateView_m236A460DEDE22C366FCAF5BFF2EEA4BFD6E27EBE (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___viewId0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___proj1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___vp3, int32_t ___textureArraySlice4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (viewId >= views.Count)
		int32_t L_0 = ___viewId0;
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_1 = __this->get_views_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_inline(L_1, /*hidden argument*/List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		// throw new NotImplementedException($"Invalid XR setup to update, trying to update non-existing xr view.");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_3 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF55941A88527B807C3B4BC84AD93366529254BAC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPass_UpdateView_m236A460DEDE22C366FCAF5BFF2EEA4BFD6E27EBE_RuntimeMethod_var)));
	}

IL_0019:
	{
		// views[viewId] = new XRView(proj, view, vp, textureArraySlice);
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_4 = __this->get_views_0();
		int32_t L_5 = ___viewId0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___proj1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_7 = ___view2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = ___vp3;
		int32_t L_9 = ___textureArraySlice4;
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_10;
		memset((&L_10), 0, sizeof(L_10));
		XRView__ctor_m26697ACC489FE20A5ABE57491F5266BBEAD8DA61((&L_10), L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6(L_4, L_5, L_10, /*hidden argument*/List_1_set_Item_mD194955BCCB437523B09132CBF1D1F0557FF8BE6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateCullingParams(System.Int32,UnityEngine.Rendering.ScriptableCullingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateCullingParams_mA7D560B027CD211FC86B4419BED46010489DF06A (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___cullingPassId0, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___cullingParams1, const RuntimeMethod* method)
{
	{
		// this.cullingPassId = cullingPassId;
		int32_t L_0 = ___cullingPassId0;
		XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90_inline(__this, L_0, /*hidden argument*/NULL);
		// this.cullingParams = cullingParams;
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_1 = ___cullingParams1;
		XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.XRPass::Create(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * XRPass_Create_mB49E75C77DF62A1DFD8FAEDB2CDC924739EC802C (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___xrRenderPass0, int32_t ___multipassId1, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___cullingParameters2, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMeshMaterial3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPool_1_Get_m26F4DD74EEC5053F177D2255B8C70D1639AE899A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPool_1_t8CDC3A4DF13BFD0C9F10B45951AF366E6DF57C01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// XRPass passInfo = GenericPool<XRPass>.Get();
		IL2CPP_RUNTIME_CLASS_INIT(GenericPool_1_t8CDC3A4DF13BFD0C9F10B45951AF366E6DF57C01_il2cpp_TypeInfo_var);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_0;
		L_0 = GenericPool_1_Get_m26F4DD74EEC5053F177D2255B8C70D1639AE899A(/*hidden argument*/GenericPool_1_Get_m26F4DD74EEC5053F177D2255B8C70D1639AE899A_RuntimeMethod_var);
		// passInfo.multipassId = multipassId;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_1 = L_0;
		int32_t L_2 = ___multipassId1;
		NullCheck(L_1);
		XRPass_set_multipassId_mBF5A78EF00B1DEB40F3315D446BFDA15B5677F07_inline(L_1, L_2, /*hidden argument*/NULL);
		// passInfo.cullingPassId = xrRenderPass.cullingPassIndex;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_3 = L_1;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_4 = ___xrRenderPass0;
		int32_t L_5 = L_4.get_cullingPassIndex_5();
		NullCheck(L_3);
		XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90_inline(L_3, L_5, /*hidden argument*/NULL);
		// passInfo.cullingParams = cullingParameters;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_6 = L_3;
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_7 = ___cullingParameters2;
		NullCheck(L_6);
		XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D_inline(L_6, L_7, /*hidden argument*/NULL);
		// passInfo.views.Clear();
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_8 = L_6;
		NullCheck(L_8);
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_9 = L_8->get_views_0();
		NullCheck(L_9);
		List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71(L_9, /*hidden argument*/List_1_Clear_m228D95BBB094E58353B9A7AE5481E7BDA0CAEC71_RuntimeMethod_var);
		// passInfo.renderTarget = new RenderTargetIdentifier(xrRenderPass.renderTarget, 0, CubemapFace.Unknown, -1);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_10 = L_8;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_11 = ___xrRenderPass0;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_12 = L_11.get_renderTarget_2();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_13;
		memset((&L_13), 0, sizeof(L_13));
		RenderTargetIdentifier__ctor_mDBFAB9845573B33D9CCF6E9BDAF5866BDD815D0C((&L_13), L_12, 0, (-1), (-1), /*hidden argument*/NULL);
		NullCheck(L_10);
		XRPass_set_renderTarget_m528BDC7E91273283D86C9F1543CCE551E09F0A29_inline(L_10, L_13, /*hidden argument*/NULL);
		// RenderTextureDescriptor xrDesc = xrRenderPass.renderTargetDesc;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_14 = ___xrRenderPass0;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_15 = L_14.get_renderTargetDesc_3();
		V_0 = L_15;
		// RenderTextureDescriptor rtDesc = new RenderTextureDescriptor(xrDesc.width, xrDesc.height, xrDesc.colorFormat, xrDesc.depthBufferBits, xrDesc.mipCount);
		int32_t L_16;
		L_16 = RenderTextureDescriptor_get_width_m5DD56A0652453FDDB51FF030FC5ED914F83F5E31_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = RenderTextureDescriptor_get_height_m661881AD8E078D6C1FD6C549207AACC2B179D201_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = RenderTextureDescriptor_get_colorFormat_m8DEB83CC5B5BD5737AA9FBE8E3B02A4967E3B098((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = RenderTextureDescriptor_get_depthBufferBits_m92A95D5A1DCA7B844B3AC81AADCDFDD37D26333C((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = RenderTextureDescriptor_get_mipCount_m7712C0C03EFAABB3B40528018FE5A5CE07ACA5FE_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_0), /*hidden argument*/NULL);
		RenderTextureDescriptor__ctor_m64ED776461CF27E7A5E0DBC1E0B6BC579AC1D5E2((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_1), L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		// rtDesc.dimension   = xrRenderPass.renderTargetDesc.dimension;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_21 = (&___xrRenderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_22;
		L_22 = RenderTextureDescriptor_get_dimension_mC7CB3DA0E163E4C7C3C4BC14B5B92C4EAADC87D3_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_21, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_dimension_m4D3F1486F761F3C52308F00267B918BD7DB8137F_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_1), L_22, /*hidden argument*/NULL);
		// rtDesc.volumeDepth = xrRenderPass.renderTargetDesc.volumeDepth;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_23 = (&___xrRenderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_24;
		L_24 = RenderTextureDescriptor_get_volumeDepth_m05E4A20A05286909E65D394D0BA5F6904D653688_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_23, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_volumeDepth_mC4D9C6B86B6799BA752855DE5C385CC24F6E3733_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_1), L_24, /*hidden argument*/NULL);
		// rtDesc.vrUsage     = xrRenderPass.renderTargetDesc.vrUsage;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_25 = (&___xrRenderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_26;
		L_26 = RenderTextureDescriptor_get_vrUsage_m51AC5C8A266689B8E69E91A1531F4F9408928197_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_25, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_vrUsage_m5E4F43CB35EF142D55AC22996B641483566A2097_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_1), L_26, /*hidden argument*/NULL);
		// rtDesc.sRGB        = xrRenderPass.renderTargetDesc.sRGB;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_27 = (&___xrRenderPass0)->get_address_of_renderTargetDesc_3();
		bool L_28;
		L_28 = RenderTextureDescriptor_get_sRGB_m2CE40C33A7051CA5F2AC87F579A28CA617BDA88F((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_27, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_sRGB_m92925430C9C202528AA56DC9E01FCD382FCEB1D2((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_1), L_28, /*hidden argument*/NULL);
		// passInfo.renderTargetDesc = rtDesc;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_29 = L_10;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_30 = V_1;
		NullCheck(L_29);
		XRPass_set_renderTargetDesc_mB21461AD204A490E0568E8E126590F59DF6DB07A_inline(L_29, L_30, /*hidden argument*/NULL);
		// passInfo.renderTargetIsRenderTexture = false;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_31 = L_29;
		NullCheck(L_31);
		XRPass_set_renderTargetIsRenderTexture_m93DAA821EB43DAC5BEC6E454B5E995B3F2147393_inline(L_31, (bool)0, /*hidden argument*/NULL);
		// passInfo.occlusionMeshMaterial = occlusionMeshMaterial;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_32 = L_31;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = ___occlusionMeshMaterial3;
		NullCheck(L_32);
		L_32->set_occlusionMeshMaterial_10(L_33);
		// passInfo.xrSdkEnabled = true;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_34 = L_32;
		NullCheck(L_34);
		XRPass_set_xrSdkEnabled_m6C320B4690D3C05225AC8A456AA1DB38CCECDB16_inline(L_34, (bool)1, /*hidden argument*/NULL);
		// passInfo.copyDepth = xrRenderPass.shouldFillOutDepth;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_35 = L_34;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_36 = ___xrRenderPass0;
		bool L_37 = L_36.get_shouldFillOutDepth_4();
		NullCheck(L_35);
		XRPass_set_copyDepth_mABAD1DE38CB40CFB7971ED1D5A507FB046BFAECE_inline(L_35, L_37, /*hidden argument*/NULL);
		// passInfo.customMirrorView = null;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_38 = L_35;
		NullCheck(L_38);
		L_38->set_customMirrorView_13((CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 *)NULL);
		// return passInfo;
		return L_38;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::AddView(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_AddView_m4FB7F1B1148E42FD55AEDBF364FA7600C8BA6DDC (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___xrSdkRenderPass0, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___xrSdkRenderParameter1, const RuntimeMethod* method)
{
	{
		// AddViewInternal(new XRView(xrSdkRenderPass, xrSdkRenderParameter));
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_0 = ___xrSdkRenderPass0;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_1 = ___xrSdkRenderParameter1;
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_2;
		memset((&L_2), 0, sizeof(L_2));
		XRView__ctor_mBD2BA2F6548FD9780A2EA656E186BE6AB02FA411((&L_2), L_0, L_1, /*hidden argument*/NULL);
		XRPass_AddViewInternal_m61BD6957BF5925AD65CA954BB04385BDF4D42047(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::Release(UnityEngine.Rendering.Universal.XRPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_Release_m2B844EE45248EB9AF52CF82EAFC15E15A92D44FB (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xrPass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPool_1_Release_mFE1BB04F80C0424B30D03EEB28C3FE99E51A5862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPool_1_t8CDC3A4DF13BFD0C9F10B45951AF366E6DF57C01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GenericPool<XRPass>.Release(xrPass);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_0 = ___xrPass0;
		IL2CPP_RUNTIME_CLASS_INIT(GenericPool_1_t8CDC3A4DF13BFD0C9F10B45951AF366E6DF57C01_il2cpp_TypeInfo_var);
		GenericPool_1_Release_mFE1BB04F80C0424B30D03EEB28C3FE99E51A5862(L_0, /*hidden argument*/GenericPool_1_Release_mFE1BB04F80C0424B30D03EEB28C3FE99E51A5862_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::AddViewInternal(UnityEngine.Rendering.Universal.XRView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_AddViewInternal_m61BD6957BF5925AD65CA954BB04385BDF4D42047 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  ___xrView0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int maxSupportedViews = Math.Min(TextureXR.slices, 2/*ShaderConfig.s_XrMaxViews*/);
		IL2CPP_RUNTIME_CLASS_INIT(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = TextureXR_get_slices_mB7DD753858EACB54625860E7B7521046D20C8F21_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (views.Count < maxSupportedViews)
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_2 = __this->get_views_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_inline(L_2, /*hidden argument*/List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_RuntimeMethod_var);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		// views.Add(xrView);
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_5 = __this->get_views_0();
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_6 = ___xrView0;
		NullCheck(L_5);
		List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A(L_5, L_6, /*hidden argument*/List_1_Add_mFA81165C1233E75643B3B96F2568AC480FDA5F5A_RuntimeMethod_var);
		// }
		return;
	}

IL_0027:
	{
		// throw new NotImplementedException($"Invalid XR setup for single-pass, trying to add too many views! Max supported: {maxSupportedViews}");
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral845A032E741942F26C6947E92954A9A322797F64)), L_9, /*hidden argument*/NULL);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_11 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPass_AddViewInternal_m61BD6957BF5925AD65CA954BB04385BDF4D42047_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::UpdateOcclusionMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_UpdateOcclusionMesh_m2288932ABD0F00CE1DDE099452CD19540687B433 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (isOcclusionMeshSupported && singlePassEnabled && TryGetOcclusionMeshCombinedHashCode(out var hashCode))
		bool L_0;
		L_0 = XRPass_get_isOcclusionMeshSupported_m3D4CE92972FA8DB21FD2EBF02CEBF687AE828853(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		bool L_1;
		L_1 = XRPass_get_singlePassEnabled_mE9467F40CAF6B34B853C1D352FF7256E1F762FC2(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		bool L_2;
		L_2 = XRPass_TryGetOcclusionMeshCombinedHashCode_m667C57572358A2527469A4986F9EDCC37BFB28DE(__this, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// if (occlusionMeshCombined == null || hashCode != occlusionMeshCombinedHashCode)
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = __this->get_occlusionMeshCombined_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_occlusionMeshCombinedHashCode_12();
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_004d;
		}
	}

IL_0031:
	{
		// CreateOcclusionMeshCombined();
		XRPass_CreateOcclusionMeshCombined_mF3DBCA8C5D4A7A6577099DCF5739C62CCC4FF534(__this, /*hidden argument*/NULL);
		// occlusionMeshCombinedHashCode = hashCode;
		int32_t L_7 = V_0;
		__this->set_occlusionMeshCombinedHashCode_12(L_7);
		// }
		return;
	}

IL_003f:
	{
		// occlusionMeshCombined = null;
		__this->set_occlusionMeshCombined_11((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
		// occlusionMeshCombinedHashCode = 0;
		__this->set_occlusionMeshCombinedHashCode_12(0);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.XRPass::TryGetOcclusionMeshCombinedHashCode(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_TryGetOcclusionMeshCombinedHashCode_m667C57572358A2527469A4986F9EDCC37BFB28DE (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t* ___hashCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// hashCode = 17;
		int32_t* L_0 = ___hashCode0;
		*((int32_t*)L_0) = (int32_t)((int32_t)17);
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		V_0 = 0;
		goto IL_004a;
	}

IL_0008:
	{
		// if (views[viewId].occlusionMesh != null)
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_1 = __this->get_views_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_3;
		L_3 = List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = L_3.get_occlusionMesh_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// hashCode = hashCode * 23 + views[viewId].occlusionMesh.GetHashCode();
		int32_t* L_6 = ___hashCode0;
		int32_t* L_7 = ___hashCode0;
		int32_t L_8 = *((int32_t*)L_7);
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_9 = __this->get_views_0();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_11;
		L_11 = List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12 = L_11.get_occlusionMesh_3();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_12);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)23))), (int32_t)L_13));
		// }
		goto IL_0046;
	}

IL_0041:
	{
		// hashCode = 0;
		int32_t* L_14 = ___hashCode0;
		*((int32_t*)L_14) = (int32_t)0;
		// return false;
		return (bool)0;
	}

IL_0046:
	{
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004a:
	{
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = XRPass_get_viewCount_m057B8D5B4F9E1945FAAB5E4F02A9966CEE36F297(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0008;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::CreateOcclusionMeshCombined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass_CreateOcclusionMeshCombined_mF3DBCA8C5D4A7A6577099DCF5739C62CCC4FF534 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_2 = NULL;
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_7 = NULL;
	int32_t V_8 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_9 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		// occlusionMeshCombined = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_0, /*hidden argument*/NULL);
		__this->set_occlusionMeshCombined_11(L_0);
		// occlusionMeshCombined.indexFormat = IndexFormat.UInt16;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = __this->get_occlusionMeshCombined_11();
		NullCheck(L_1);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_1, 0, /*hidden argument*/NULL);
		// int combinedVertexCount = 0;
		V_0 = 0;
		// uint combinedIndexCount = 0;
		V_1 = 0;
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		V_6 = 0;
		goto IL_004f;
	}

IL_0020:
	{
		// Mesh mesh = views[viewId].occlusionMesh;
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_2 = __this->get_views_0();
		int32_t L_3 = V_6;
		NullCheck(L_2);
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_4;
		L_4 = List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = L_4.get_occlusionMesh_3();
		V_7 = L_5;
		// combinedVertexCount += mesh.vertexCount;
		int32_t L_6 = V_0;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = V_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_8));
		// combinedIndexCount += mesh.GetIndexCount(0);
		uint32_t L_9 = V_1;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_10 = V_7;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = Mesh_GetIndexCount_m3ADD772F77C8EDE1CC2ABD9BA58BC70F0AD18EC0(L_10, 0, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11));
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		int32_t L_12 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		int32_t L_13 = V_6;
		int32_t L_14;
		L_14 = XRPass_get_viewCount_m057B8D5B4F9E1945FAAB5E4F02A9966CEE36F297(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0020;
		}
	}
	{
		// Vector3[] vertices = new Vector3[combinedVertexCount];
		int32_t L_15 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_2 = L_16;
		// ushort[] indices = new ushort[combinedIndexCount];
		uint32_t L_17 = V_1;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_18 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_3 = L_18;
		// int vertexStart = 0;
		V_4 = 0;
		// int indexStart = 0;
		V_5 = 0;
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		V_8 = 0;
		goto IL_010f;
	}

IL_0075:
	{
		// Mesh mesh = views[viewId].occlusionMesh;
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_19 = __this->get_views_0();
		int32_t L_20 = V_8;
		NullCheck(L_19);
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_21;
		L_21 = List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_RuntimeMethod_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_22 = L_21.get_occlusionMesh_3();
		V_9 = L_22;
		// var meshIndices = mesh.GetIndices(0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_23 = V_9;
		NullCheck(L_23);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24;
		L_24 = Mesh_GetIndices_m8C8D25ABFA9D8A7AE23DAEB6FD7142E6BB46C49D(L_23, 0, /*hidden argument*/NULL);
		V_10 = L_24;
		// mesh.vertices.CopyTo(vertices, vertexStart);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_25 = V_9;
		NullCheck(L_25);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26;
		L_26 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_25, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_27 = V_2;
		int32_t L_28 = V_4;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_26);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_26, (RuntimeArray *)(RuntimeArray *)L_27, L_28, /*hidden argument*/NULL);
		// for (int i = 0; i < mesh.vertices.Length; i++)
		V_11 = 0;
		goto IL_00c0;
	}

IL_00a7:
	{
		// vertices[vertexStart + i].z = viewId;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_29 = V_2;
		int32_t L_30 = V_4;
		int32_t L_31 = V_11;
		NullCheck(L_29);
		int32_t L_32 = V_8;
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31)))))->set_z_4(((float)((float)L_32)));
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_33 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c0:
	{
		// for (int i = 0; i < mesh.vertices.Length; i++)
		int32_t L_34 = V_11;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_35 = V_9;
		NullCheck(L_35);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_36;
		L_36 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_00a7;
		}
	}
	{
		// for (int i = 0; i < meshIndices.Length; i++)
		V_12 = 0;
		goto IL_00ec;
	}

IL_00d2:
	{
		// int newIndex = vertexStart + meshIndices[i];
		int32_t L_37 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = V_10;
		int32_t L_39 = V_12;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_41));
		// indices[indexStart + i] = (ushort)newIndex;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_42 = V_3;
		int32_t L_43 = V_5;
		int32_t L_44 = V_12;
		int32_t L_45 = V_13;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44))), (uint16_t)((int32_t)((uint16_t)L_45)));
		// for (int i = 0; i < meshIndices.Length; i++)
		int32_t L_46 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00ec:
	{
		// for (int i = 0; i < meshIndices.Length; i++)
		int32_t L_47 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_10;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		// vertexStart += mesh.vertexCount;
		int32_t L_49 = V_4;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F(L_50, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_51));
		// indexStart += meshIndices.Length;
		int32_t L_52 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_10;
		NullCheck(L_53);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))));
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_010f:
	{
		// for (int viewId = 0; viewId < viewCount; ++viewId)
		int32_t L_55 = V_8;
		int32_t L_56;
		L_56 = XRPass_get_viewCount_m057B8D5B4F9E1945FAAB5E4F02A9966CEE36F297(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0075;
		}
	}
	{
		// occlusionMeshCombined.vertices = vertices;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_57 = __this->get_occlusionMeshCombined_11();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_58 = V_2;
		NullCheck(L_57);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_57, L_58, /*hidden argument*/NULL);
		// occlusionMeshCombined.SetIndices(indices, MeshTopology.Triangles, 0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_59 = __this->get_occlusionMeshCombined_11();
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_60 = V_3;
		NullCheck(L_59);
		Mesh_SetIndices_mF87D553F149D07CCC7B270B792801A040A40C6C2(L_59, L_60, 0, 0, (bool)1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass__ctor_mCA55DA5C03B0479EE54DCA7EA94E5FF36FED7732 (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal List<XRView> views = new List<XRView>(2);
		List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * L_0 = (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE *)il2cpp_codegen_object_new(List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE_il2cpp_TypeInfo_var);
		List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA(L_0, 2, /*hidden argument*/List_1__ctor_m9626420B3B261F64C1CCE59C808A3817CDB585DA_RuntimeMethod_var);
		__this->set_views_0(L_0);
		// Vector4[] stereoEyeIndices = new Vector4[2] { Vector4.zero , Vector4.one };
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_1 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)SZArrayNew(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_2 = L_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3);
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_4 = L_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5;
		L_5 = Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4(/*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_5);
		__this->set_stereoEyeIndices_16(L_4);
		// private Matrix4x4[] stereoProjectionMatrix = new Matrix4x4[2];
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_6 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_stereoProjectionMatrix_17(L_6);
		// private Matrix4x4[] stereoViewMatrix = new Matrix4x4[2];
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_7 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_stereoViewMatrix_18(L_7);
		// private Matrix4x4[] stereoCameraProjectionMatrix = new Matrix4x4[2];
		Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82* L_8 = (Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82*)SZArrayNew(Matrix4x4U5BU5D_tE53F71E9C9110DD439281A6AB8B699F9F85D8F82_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_stereoCameraProjectionMatrix_19(L_8);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRPass::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPass__cctor_mD947D8A47464164323DF9ADE78C89E2811CBAD9D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6891DA37646EA8B10F72C0231D10C07EC76BD7E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5ABEA0DE440062A503032385105586D84A1347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static   RenderTargetIdentifier  invalidRT = -1;
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_0;
		L_0 = RenderTargetIdentifier_op_Implicit_m065F5C06D85EAF99A60942A197E4CB25FB38B20B((-1), /*hidden argument*/NULL);
		((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields*)il2cpp_codegen_static_fields_for(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var))->set_invalidRT_7(L_0);
		// static ProfilingSampler _XRCustomMirrorProfilingSampler = new ProfilingSampler(k_XRCustomMirrorTag);
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_1 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_1, _stringLiteral6891DA37646EA8B10F72C0231D10C07EC76BD7E1, /*hidden argument*/NULL);
		((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields*)il2cpp_codegen_static_fields_for(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var))->set__XRCustomMirrorProfilingSampler_14(L_1);
		// static ProfilingSampler _XROcclusionProfilingSampler = new ProfilingSampler(k_XROcclusionTag);
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_2 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_2, _stringLiteral7F5ABEA0DE440062A503032385105586D84A1347, /*hidden argument*/NULL);
		((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_StaticFields*)il2cpp_codegen_static_fields_for(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var))->set__XROcclusionProfilingSampler_15(L_2);
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
// System.Void UnityEngine.Rendering.Universal.XRSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem__ctor_mA584B8E34EDA1F815E22DDB15AEE3D0DF1C27278 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB3FD56A5D370A33CDBB550F5CD75BEA464078AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal readonly XRPass emptyPass = new XRPass();
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_0 = (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *)il2cpp_codegen_object_new(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		XRPass__ctor_mCA55DA5C03B0479EE54DCA7EA94E5FF36FED7732(L_0, /*hidden argument*/NULL);
		__this->set_emptyPass_0(L_0);
		// List<XRPass> framePasses = new List<XRPass>();
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_1 = (List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 *)il2cpp_codegen_object_new(List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555_il2cpp_TypeInfo_var);
		List_1__ctor_mDB3FD56A5D370A33CDBB550F5CD75BEA464078AD(L_1, /*hidden argument*/List_1__ctor_mDB3FD56A5D370A33CDBB550F5CD75BEA464078AD_RuntimeMethod_var);
		__this->set_framePasses_1(L_1);
		// MaterialPropertyBlock           mirrorViewMaterialProperty = new MaterialPropertyBlock();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_2 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_2, /*hidden argument*/NULL);
		__this->set_mirrorViewMaterialProperty_7(L_2);
		// internal XRSystem()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// RefreshXrSdk();
		bool L_3;
		L_3 = XRSystem_RefreshXrSdk_m30A7FD07FFC08ED83A1C4D2D59730A79653CFACD(__this, /*hidden argument*/NULL);
		// TextureXR.maxViews = Math.Max(TextureXR.slices, GetMaxViews());
		IL2CPP_RUNTIME_CLASS_INIT(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = TextureXR_get_slices_mB7DD753858EACB54625860E7B7521046D20C8F21_inline(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = XRSystem_GetMaxViews_m2F0885AEB08405FB58E24642602B253F7F674B1C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_4, L_5, /*hidden argument*/NULL);
		TextureXR_set_maxViews_m19D596C4FD8DB0FB226728F60E419B75255904AC_inline(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::InitializeXRSystemData(UnityEngine.Rendering.Universal.XRSystemData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_InitializeXRSystemData_m8FF5784CC5608FB7A9CACF6DF2A0DA7CA70E7B18 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (data)
		XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// if (occlusionMeshMaterial != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_occlusionMeshMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// CoreUtils.Destroy(occlusionMeshMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_occlusionMeshMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		CoreUtils_Destroy_m6345256E0F0115675EBEC44EE2E6D6B6075A8388(L_4, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (mirrorViewMaterial != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_mirrorViewMaterial_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// CoreUtils.Destroy(mirrorViewMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_mirrorViewMaterial_6();
		IL2CPP_RUNTIME_CLASS_INIT(CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		CoreUtils_Destroy_m6345256E0F0115675EBEC44EE2E6D6B6075A8388(L_7, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// occlusionMeshMaterial = CoreUtils.CreateEngineMaterial(data.shaders.xrOcclusionMeshPS);
		XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * L_8 = ___data0;
		NullCheck(L_8);
		ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * L_9 = L_8->get_shaders_4();
		NullCheck(L_9);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = L_9->get_xrOcclusionMeshPS_0();
		IL2CPP_RUNTIME_CLASS_INIT(CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = CoreUtils_CreateEngineMaterial_m31F7E75C11E58A77F38741F5A85E6018CF4F3864(L_10, /*hidden argument*/NULL);
		__this->set_occlusionMeshMaterial_5(L_11);
		// mirrorViewMaterial = CoreUtils.CreateEngineMaterial(data.shaders.xrMirrorViewPS);
		XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * L_12 = ___data0;
		NullCheck(L_12);
		ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * L_13 = L_12->get_shaders_4();
		NullCheck(L_13);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_14 = L_13->get_xrMirrorViewPS_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = CoreUtils_CreateEngineMaterial_m31F7E75C11E58A77F38741F5A85E6018CF4F3864(L_14, /*hidden argument*/NULL);
		__this->set_mirrorViewMaterial_6(L_15);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::GetDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_GetDisplaySubsystem_m1176C00E95F9FCE7674FC344CB2EB7B8942CF91E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemManager.GetInstances(displayList);
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_0 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::XRSystemInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_XRSystemInit_m5A01FCB59B5AF7FD207E117C9BEEA5C723685DD4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (GraphicsSettings.currentRenderPipeline == null)
		RenderPipelineAsset_tA4DBD0F0DD583DF3C9F85AF41F49308D167864EF * L_0;
		L_0 = GraphicsSettings_get_currentRenderPipeline_mDEBD1CD71B0917F918D9860C9351943A9677ADCA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// GetDisplaySubsystem();
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		XRSystem_GetDisplaySubsystem_m1176C00E95F9FCE7674FC344CB2EB7B8942CF91E(/*hidden argument*/NULL);
		// for (int i = 0; i < displayList.Count; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_0017:
	{
		// displayList[i].disableLegacyRenderer = true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_2 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_4;
		L_4 = List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		NullCheck(L_4);
		XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3(L_4, (bool)1, /*hidden argument*/NULL);
		// displayList[i].textureLayout = XRDisplaySubsystem.TextureLayout.Texture2DArray;
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_5 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_7;
		L_7 = List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		NullCheck(L_7);
		XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C(L_7, 1, /*hidden argument*/NULL);
		// displayList[i].sRGB = QualitySettings.activeColorSpace == ColorSpace.Linear;
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_8 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_10;
		L_10 = List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		int32_t L_11;
		L_11 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		NullCheck(L_10);
		XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C(L_10, (bool)((((int32_t)L_11) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// for (int i = 0; i < displayList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < displayList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_14 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_inline(L_14, /*hidden argument*/List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::UpdateMSAALevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_UpdateMSAALevel_m37D6C30265B675A37895D8A4A81F6750AA86C2EC (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (msaaLevel == level)
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_msaaLevel_4();
		int32_t L_1 = ___level0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
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
		// level = Mathf.NextPowerOfTwo(level);
		int32_t L_2 = ___level0;
		int32_t L_3;
		L_3 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5(L_2, /*hidden argument*/NULL);
		___level0 = L_3;
		// level = Mathf.Clamp(level, (int)MsaaQuality.Disabled, (int)MsaaQuality._8x);
		int32_t L_4 = ___level0;
		int32_t L_5;
		L_5 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_4, 1, 8, /*hidden argument*/NULL);
		___level0 = L_5;
		// GetDisplaySubsystem();
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		XRSystem_GetDisplaySubsystem_m1176C00E95F9FCE7674FC344CB2EB7B8942CF91E(/*hidden argument*/NULL);
		// for (int i = 0; i < displayList.Count; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0024:
	{
		// displayList[i].SetMSAALevel(level);
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_6 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_8;
		L_8 = List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		int32_t L_9 = ___level0;
		NullCheck(L_8);
		XRDisplaySubsystem_SetMSAALevel_m82744B20121EF877A3E6FFB67EC4FFB8E0636D5C(L_8, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < displayList.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < displayList.Count; i++)
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_12 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_inline(L_12, /*hidden argument*/List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0024;
		}
	}
	{
		// msaaLevel = level;
		int32_t L_14 = ___level0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->set_msaaLevel_4(L_14);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.XRSystem::GetMSAALevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSystem_GetMSAALevel_m7B1213F7688F34D95D65A5AD8CE2DAA261C9B42D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return msaaLevel;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_msaaLevel_4();
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::UpdateRenderScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_UpdateRenderScale_m4456D89C0E7CD079B68BF564DD8ABFD170F0C6A3 (float ___renderScale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GetDisplaySubsystem();
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		XRSystem_GetDisplaySubsystem_m1176C00E95F9FCE7674FC344CB2EB7B8942CF91E(/*hidden argument*/NULL);
		// for (int i = 0; i < displayList.Count; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0009:
	{
		// displayList[i].scaleOfAllRenderTargets = renderScale;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_0 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_2;
		L_2 = List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		float L_3 = ___renderScale0;
		NullCheck(L_2);
		XRDisplaySubsystem_set_scaleOfAllRenderTargets_m787040A0FC0B1557EC5B3417D314FD0414066AC9(L_2, L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < displayList.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < displayList.Count; i++)
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_6 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_inline(L_6, /*hidden argument*/List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.XRSystem::GetMaxViews()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSystem_GetMaxViews_m2F0885AEB08405FB58E24642602B253F7F674B1C (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int maxViews = 1;
		V_0 = 1;
		// if (display != null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0 = __this->get_display_3();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// maxViews = 2;
		V_0 = 2;
	}

IL_000c:
	{
		// return maxViews;
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRPass> UnityEngine.Rendering.Universal.XRSystem::SetupFrame(UnityEngine.Rendering.Universal.CameraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * XRSystem_SetupFrame_m9A10E388C0F65B456AFB4E1E45639F06A835ABB3 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  ___cameraData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8341454AEAF0EEBD367796750F70DE5C0EFC7571);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// Camera camera = cameraData.camera;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_0 = ___cameraData0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0.get_camera_2();
		V_0 = L_1;
		// bool xrEnabled = RefreshXrSdk();
		bool L_2;
		L_2 = XRSystem_RefreshXrSdk_m30A7FD07FFC08ED83A1C4D2D59730A79653CFACD(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (display != null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_3 = __this->get_display_3();
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// display.textureLayout = XRDisplaySubsystem.TextureLayout.Texture2DArray;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_4 = __this->get_display_3();
		NullCheck(L_4);
		XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C(L_4, 1, /*hidden argument*/NULL);
		// display.zNear = camera.nearClipPlane;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5 = __this->get_display_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = V_0;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		XRDisplaySubsystem_set_zNear_m28900D13CE8FC3AA9478AF1826E2AC012214397F(L_5, L_7, /*hidden argument*/NULL);
		// display.zFar  = camera.farClipPlane;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_8 = __this->get_display_3();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = V_0;
		NullCheck(L_9);
		float L_10;
		L_10 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		XRDisplaySubsystem_set_zFar_m65A9D02251604E84D5AB1E5C92B8E341A739815C(L_8, L_10, /*hidden argument*/NULL);
		// display.sRGB  = QualitySettings.activeColorSpace == ColorSpace.Linear;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_11 = __this->get_display_3();
		int32_t L_12;
		L_12 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		NullCheck(L_11);
		XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C(L_11, (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0057:
	{
		// if (framePasses.Count > 0)
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_13 = __this->get_framePasses_1();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_inline(L_13, /*hidden argument*/List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		// Debug.LogWarning("XRSystem.ReleaseFrame() was not called!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral8341454AEAF0EEBD367796750F70DE5C0EFC7571, /*hidden argument*/NULL);
		// ReleaseFrame();
		XRSystem_ReleaseFrame_mE9046CA23B4BCFDD5DD555748D2ECAC1C30740D8(__this, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// if (camera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0085;
		}
	}
	{
		// return framePasses;
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_17 = __this->get_framePasses_1();
		return L_17;
	}

IL_0085:
	{
		// bool isGameCamera = (camera.cameraType == CameraType.Game || camera.cameraType == CameraType.VR);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_0099;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_20, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_21) == ((int32_t)8))? 1 : 0);
		goto IL_009a;
	}

IL_0099:
	{
		G_B9_0 = 1;
	}

IL_009a:
	{
		// bool xrSupported = isGameCamera && camera.targetTexture == null && cameraData.xrRendering;
		if (!G_B9_0)
		{
			goto IL_00b2;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22 = V_0;
		NullCheck(L_22);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23;
		L_23 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b2;
		}
	}
	{
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_25 = ___cameraData0;
		bool L_26 = L_25.get_xrRendering_17();
		G_B13_0 = ((int32_t)(L_26));
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B13_0 = 0;
	}

IL_00b3:
	{
		V_2 = (bool)G_B13_0;
		// if (xrEnabled && xrSupported)
		bool L_27 = V_1;
		bool L_28 = V_2;
		if (!((int32_t)((int32_t)L_27&(int32_t)L_28)))
		{
			goto IL_00da;
		}
	}
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_29;
		L_29 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00ca;
		}
	}
	{
		// QualitySettings.vSyncCount = 1;
		QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E(1, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_00ca:
	{
		// QualitySettings.vSyncCount = 0;
		QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E(0, /*hidden argument*/NULL);
	}

IL_00d0:
	{
		// CreateLayoutFromXrSdk(camera, singlePassAllowed: true);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = V_0;
		XRSystem_CreateLayoutFromXrSdk_mD46049C4F7A08CFD6E5C88C5F31058B55F0B4E9B(__this, L_30, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00e6;
	}

IL_00da:
	{
		// AddPassToFrame(emptyPass);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_31 = __this->get_emptyPass_0();
		XRSystem_AddPassToFrame_m9E95DC808E61B996871908A4052717D1A665C2D4(__this, L_31, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		// return framePasses;
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_32 = __this->get_framePasses_1();
		return L_32;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::ReleaseFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_ReleaseFrame_mE9046CA23B4BCFDD5DD555748D2ECAC1C30740D8 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m898E05781BDDF5426BFEEF54FFF881F68A7C0C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE2A866BD285A9E433D5008E2CFA130DBB8E5EEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8521D4A619F6BBB2FBB88B1EE5BD22E1B6F97B9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m67F27C91654BDFD595DE281983715D71077B8B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCD4D8DCA3196CE51041240DD01A5577D37828222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (XRPass xrPass in framePasses)
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_0 = __this->get_framePasses_1();
		NullCheck(L_0);
		Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295  L_1;
		L_1 = List_1_GetEnumerator_mCD4D8DCA3196CE51041240DD01A5577D37828222(L_0, /*hidden argument*/List_1_GetEnumerator_mCD4D8DCA3196CE51041240DD01A5577D37828222_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_000e:
		{
			// foreach (XRPass xrPass in framePasses)
			XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_2;
			L_2 = Enumerator_get_Current_m8521D4A619F6BBB2FBB88B1EE5BD22E1B6F97B9E_inline((Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8521D4A619F6BBB2FBB88B1EE5BD22E1B6F97B9E_RuntimeMethod_var);
			V_1 = L_2;
			// if (xrPass != emptyPass)
			XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_3 = V_1;
			XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_4 = __this->get_emptyPass_0();
			if ((((RuntimeObject*)(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *)L_3) == ((RuntimeObject*)(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *)L_4)))
			{
				goto IL_0025;
			}
		}

IL_001f:
		{
			// XRPass.Release(xrPass);
			XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
			XRPass_Release_m2B844EE45248EB9AF52CF82EAFC15E15A92D44FB(L_5, /*hidden argument*/NULL);
		}

IL_0025:
		{
			// foreach (XRPass xrPass in framePasses)
			bool L_6;
			L_6 = Enumerator_MoveNext_mE2A866BD285A9E433D5008E2CFA130DBB8E5EEA5((Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE2A866BD285A9E433D5008E2CFA130DBB8E5EEA5_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002e:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m898E05781BDDF5426BFEEF54FFF881F68A7C0C56((Enumerator_t2A5ECF34AC707348DE9268C31E9EBDB70A45D295 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m898E05781BDDF5426BFEEF54FFF881F68A7C0C56_RuntimeMethod_var);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		// framePasses.Clear();
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_7 = __this->get_framePasses_1();
		NullCheck(L_7);
		List_1_Clear_m67F27C91654BDFD595DE281983715D71077B8B19(L_7, /*hidden argument*/List_1_Clear_m67F27C91654BDFD595DE281983715D71077B8B19_RuntimeMethod_var);
		// if (testRenderTexture)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = __this->get_testRenderTexture_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(testRenderTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = __this->get_testRenderTexture_8();
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_10, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.XRSystem::RefreshXrSdk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSystem_RefreshXrSdk_m30A7FD07FFC08ED83A1C4D2D59730A79653CFACD (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetDisplaySubsystem();
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		XRSystem_GetDisplaySubsystem_m1176C00E95F9FCE7674FC344CB2EB7B8942CF91E(/*hidden argument*/NULL);
		// if (displayList.Count > 0)
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_0 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_inline(L_0, /*hidden argument*/List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// if (displayList.Count > 1)
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_2 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_inline(L_2, /*hidden argument*/List_1_get_Count_mC073BACB50531ADBCEC3B689E122871A62096590_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// throw new NotImplementedException("Only 1 XR display is supported.");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_4 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD85AC00227C36E624B90B07A2C7749C601623D03)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRSystem_RefreshXrSdk_m30A7FD07FFC08ED83A1C4D2D59730A79653CFACD_RuntimeMethod_var)));
	}

IL_002a:
	{
		// display = displayList[0];
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_5 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get_displayList_2();
		NullCheck(L_5);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6;
		L_6 = List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m05C85D3A5196C47D90001867092F2B00BD3D641E_RuntimeMethod_var);
		__this->set_display_3(L_6);
		// display.disableLegacyRenderer = true;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_7 = __this->get_display_3();
		NullCheck(L_7);
		XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3(L_7, (bool)1, /*hidden argument*/NULL);
		// TextureXR.maxViews = Math.Max(TextureXR.slices, GetMaxViews());
		IL2CPP_RUNTIME_CLASS_INIT(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = TextureXR_get_slices_mB7DD753858EACB54625860E7B7521046D20C8F21_inline(/*hidden argument*/NULL);
		int32_t L_9;
		L_9 = XRSystem_GetMaxViews_m2F0885AEB08405FB58E24642602B253F7F674B1C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_8, L_9, /*hidden argument*/NULL);
		TextureXR_set_maxViews_m19D596C4FD8DB0FB226728F60E419B75255904AC_inline(L_10, /*hidden argument*/NULL);
		// return display.running;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_11 = __this->get_display_3();
		NullCheck(L_11);
		bool L_12;
		L_12 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0068:
	{
		// display = null;
		__this->set_display_3((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::UpdateCameraData(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Rendering.Universal.XRPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_UpdateCameraData_m31EA9B7F30C04638528251CC518C51063BE43885 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * ___baseCameraData0, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** ___xr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B5_0 = 0;
	{
		// Rect cameraRect = baseCameraData.camera.rect;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_0 = ___baseCameraData0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0->get_camera_2();
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Rect xrViewport = xr.GetViewport();
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_3 = ___xr1;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_4 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_3);
		NullCheck(L_4);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		L_5 = XRPass_GetViewport_m86B907AD139BF56872DB6826CF0C981A344BB4D5(L_4, 0, /*hidden argument*/NULL);
		V_1 = L_5;
		// baseCameraData.pixelRect = new Rect(cameraRect.x * xrViewport.width + xrViewport.x,
		//                                     cameraRect.y * xrViewport.height + xrViewport.y,
		//                                     cameraRect.width * xrViewport.width,
		//                                     cameraRect.height * xrViewport.height);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_6 = ___baseCameraData0;
		float L_7;
		L_7 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_8;
		L_8 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_9;
		L_9 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_10;
		L_10 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_11;
		L_11 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_12;
		L_12 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_13;
		L_13 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_14;
		L_14 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_15;
		L_15 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_16;
		L_16 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_17), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_9)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), (float)L_12)), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), /*hidden argument*/NULL);
		L_6->set_pixelRect_6(L_17);
		// Rect camPixelRect = baseCameraData.pixelRect;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_18 = ___baseCameraData0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19 = L_18->get_pixelRect_6();
		V_2 = L_19;
		// baseCameraData.pixelWidth  = (int)System.Math.Round(camPixelRect.width + camPixelRect.x) - (int)System.Math.Round(camPixelRect.x);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_20 = ___baseCameraData0;
		float L_21;
		L_21 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		float L_22;
		L_22 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = bankers_round(((double)((double)((float)il2cpp_codegen_add((float)L_21, (float)L_22)))));
		float L_24;
		L_24 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		double L_25;
		L_25 = bankers_round(((double)((double)L_24)));
		L_20->set_pixelWidth_7(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_23)), (int32_t)((int32_t)((int32_t)L_25)))));
		// baseCameraData.pixelHeight = (int)System.Math.Round(camPixelRect.height + camPixelRect.y) - (int)System.Math.Round(camPixelRect.y);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_26 = ___baseCameraData0;
		float L_27;
		L_27 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		float L_28;
		L_28 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		double L_29;
		L_29 = bankers_round(((double)((double)((float)il2cpp_codegen_add((float)L_27, (float)L_28)))));
		float L_30;
		L_30 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		double L_31;
		L_31 = bankers_round(((double)((double)L_30)));
		L_26->set_pixelHeight_8(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_29)), (int32_t)((int32_t)((int32_t)L_31)))));
		// baseCameraData.aspectRatio = (float)baseCameraData.pixelWidth / (float)baseCameraData.pixelHeight;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_32 = ___baseCameraData0;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_33 = ___baseCameraData0;
		int32_t L_34 = L_33->get_pixelWidth_7();
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_35 = ___baseCameraData0;
		int32_t L_36 = L_35->get_pixelHeight_8();
		L_32->set_aspectRatio_9(((float)((float)((float)((float)L_34))/(float)((float)((float)L_36)))));
		// bool isDefaultXRViewport = (!(Math.Abs(xrViewport.x) > 0.0f || Math.Abs(xrViewport.y) > 0.0f ||
		//                                 Math.Abs(xrViewport.width) < xr.renderTargetDesc.width ||
		//                                 Math.Abs(xrViewport.height) < xr.renderTargetDesc.height));
		float L_37;
		L_37 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_38;
		L_38 = fabsf(L_37);
		if ((((float)L_38) > ((float)(0.0f))))
		{
			goto IL_0147;
		}
	}
	{
		float L_39;
		L_39 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_40;
		L_40 = fabsf(L_39);
		if ((((float)L_40) > ((float)(0.0f))))
		{
			goto IL_0147;
		}
	}
	{
		float L_41;
		L_41 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_42;
		L_42 = fabsf(L_41);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_43 = ___xr1;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_44 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_43);
		NullCheck(L_44);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_45;
		L_45 = XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4_inline(L_44, /*hidden argument*/NULL);
		V_5 = L_45;
		int32_t L_46;
		L_46 = RenderTextureDescriptor_get_width_m5DD56A0652453FDDB51FF030FC5ED914F83F5E31_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_5), /*hidden argument*/NULL);
		if ((((float)L_42) < ((float)((float)((float)L_46)))))
		{
			goto IL_0147;
		}
	}
	{
		float L_47;
		L_47 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_48;
		L_48 = fabsf(L_47);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_49 = ___xr1;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_50 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_49);
		NullCheck(L_50);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_51;
		L_51 = XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4_inline(L_50, /*hidden argument*/NULL);
		V_5 = L_51;
		int32_t L_52;
		L_52 = RenderTextureDescriptor_get_height_m661881AD8E078D6C1FD6C549207AACC2B179D201_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_5), /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)((((float)L_48) < ((float)((float)((float)L_52))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0148;
	}

IL_0147:
	{
		G_B5_0 = 0;
	}

IL_0148:
	{
		V_3 = (bool)G_B5_0;
		// baseCameraData.isDefaultViewport = baseCameraData.isDefaultViewport && isDefaultXRViewport;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_53 = ___baseCameraData0;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_54 = ___baseCameraData0;
		bool L_55 = L_54->get_isDefaultViewport_13();
		bool L_56 = V_3;
		L_53->set_isDefaultViewport_13((bool)((int32_t)((int32_t)L_55&(int32_t)L_56)));
		// var originalTargetDesc = baseCameraData.cameraTargetDescriptor;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_57 = ___baseCameraData0;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_58 = L_57->get_cameraTargetDescriptor_5();
		V_4 = L_58;
		// baseCameraData.cameraTargetDescriptor = xr.renderTargetDesc;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_59 = ___baseCameraData0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_60 = ___xr1;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_61 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_60);
		NullCheck(L_61);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_62;
		L_62 = XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4_inline(L_61, /*hidden argument*/NULL);
		L_59->set_cameraTargetDescriptor_5(L_62);
		// if (baseCameraData.isHdrEnabled)
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_63 = ___baseCameraData0;
		bool L_64 = L_63->get_isHdrEnabled_14();
		if (!L_64)
		{
			goto IL_0186;
		}
	}
	{
		// baseCameraData.cameraTargetDescriptor.graphicsFormat = originalTargetDesc.graphicsFormat;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_65 = ___baseCameraData0;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_66 = L_65->get_address_of_cameraTargetDescriptor_5();
		int32_t L_67;
		L_67 = RenderTextureDescriptor_get_graphicsFormat_m9D77E42E017808FE3181673152A69CBC9A9B8B85((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_4), /*hidden argument*/NULL);
		RenderTextureDescriptor_set_graphicsFormat_m946B6FE4422E8CD33EB13ADAFDB53669EBD361C4((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_66, L_67, /*hidden argument*/NULL);
	}

IL_0186:
	{
		// baseCameraData.cameraTargetDescriptor.msaaSamples = originalTargetDesc.msaaSamples;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_68 = ___baseCameraData0;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_69 = L_68->get_address_of_cameraTargetDescriptor_5();
		int32_t L_70;
		L_70 = RenderTextureDescriptor_get_msaaSamples_m332912610A1FF2B7C05B0BA9939D733F2E7F0646_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)(&V_4), /*hidden argument*/NULL);
		RenderTextureDescriptor_set_msaaSamples_m84320452D8BF3A8DD5662F6229FE666C299B5AEF_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_69, L_70, /*hidden argument*/NULL);
		// baseCameraData.cameraTargetDescriptor.width = baseCameraData.pixelWidth;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_71 = ___baseCameraData0;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_72 = L_71->get_address_of_cameraTargetDescriptor_5();
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_73 = ___baseCameraData0;
		int32_t L_74 = L_73->get_pixelWidth_7();
		RenderTextureDescriptor_set_width_m8D4BAEBB8089FD77F4DC81088ACB511F2BCA41EA_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_72, L_74, /*hidden argument*/NULL);
		// baseCameraData.cameraTargetDescriptor.height = baseCameraData.pixelHeight;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_75 = ___baseCameraData0;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_76 = L_75->get_address_of_cameraTargetDescriptor_5();
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7 * L_77 = ___baseCameraData0;
		int32_t L_78 = L_77->get_pixelHeight_8();
		RenderTextureDescriptor_set_height_m1300AF31BCDCF2E14E86A598AFDC5569B682A46D_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_76, L_78, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::UpdateFromCamera(UnityEngine.Rendering.Universal.XRPass&,UnityEngine.Rendering.Universal.CameraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_UpdateFromCamera_m1BEDCEC0DCA1590628665D20BEDB8CB06DD385B8 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** ___xrPass0, CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  ___cameraData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  V_5;
	memset((&V_5), 0, sizeof(V_5));
	XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  V_9;
	memset((&V_9), 0, sizeof(V_9));
	XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// bool isGameCamera = (cameraData.camera.cameraType == CameraType.Game || cameraData.camera.cameraType == CameraType.VR);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_0 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0.get_camera_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_3 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = L_3.get_camera_2();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)8))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		// if (XRGraphicsAutomatedTests.enabled && XRGraphicsAutomatedTests.running && isGameCamera)
		IL2CPP_RUNTIME_CLASS_INIT(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRGraphicsAutomatedTests_get_enabled_mF072F12B6825BD0B7A262221D15B33F803B4B37D_inline(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var);
		bool L_7 = ((XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_StaticFields*)il2cpp_codegen_static_fields_for(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var))->get_running_1();
		G_B6_0 = ((int32_t)(L_7));
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		bool L_8 = V_0;
		if (!((int32_t)((int32_t)G_B6_0&(int32_t)L_8)))
		{
			goto IL_00d5;
		}
	}
	{
		// Matrix4x4 projMatrix = cameraData.camera.projectionMatrix;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_9 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = L_9.get_camera_2();
		NullCheck(L_10);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// Matrix4x4 viewMatrix = cameraData.camera.worldToCameraMatrix;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_12 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = L_12.get_camera_2();
		NullCheck(L_13);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// Rect      viewport = new Rect(0, 0, testRenderTexture.width, testRenderTexture.height);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = __this->get_testRenderTexture_8();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = __this->get_testRenderTexture_8();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), (0.0f), (0.0f), ((float)((float)L_16)), ((float)((float)L_18)), /*hidden argument*/NULL);
		// int       textureArraySlice = -1;
		V_4 = (-1);
		// xrPass.UpdateView(1, projMatrix, viewMatrix, viewport, textureArraySlice);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_19 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_20 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_19);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21 = V_1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_22 = V_2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_20);
		XRPass_UpdateView_m236A460DEDE22C366FCAF5BFF2EEA4BFD6E27EBE(L_20, 1, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		// cameraData.camera.TryGetCullingParameters(false, out var cullingParams);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_25 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26 = L_25.get_camera_2();
		NullCheck(L_26);
		bool L_27;
		L_27 = Camera_TryGetCullingParameters_mBC64805978FA39F8D0FD0A99474E08030E728697(L_26, (bool)0, (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)(&V_5), /*hidden argument*/NULL);
		// cullingParams.stereoProjectionMatrix = cameraData.camera.projectionMatrix;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_28 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29 = L_28.get_camera_2();
		NullCheck(L_29);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_30;
		L_30 = Camera_get_projectionMatrix_mDB77E3A7F71CEF085797BCE58FAC78058C5D6756(L_29, /*hidden argument*/NULL);
		ScriptableCullingParameters_set_stereoProjectionMatrix_m379838C991578CB21E3439AD45A6901D4DB95437((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)(&V_5), L_30, /*hidden argument*/NULL);
		// cullingParams.stereoViewMatrix = cameraData.camera.worldToCameraMatrix;
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_31 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_32 = L_31.get_camera_2();
		NullCheck(L_32);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_33;
		L_33 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_32, /*hidden argument*/NULL);
		ScriptableCullingParameters_set_stereoViewMatrix_m90FE292147863E3114E9313DC1444AE4E2D5223E((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)(&V_5), L_33, /*hidden argument*/NULL);
		// cullingParams.cullingOptions &= ~CullingOptions.Stereo;
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * L_34 = (&V_5);
		int32_t L_35;
		L_35 = ScriptableCullingParameters_get_cullingOptions_m024AC47E3641D47847C4B67457BA398B9814D86B((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_34, /*hidden argument*/NULL);
		ScriptableCullingParameters_set_cullingOptions_m03942DACE93C8F2F705D306984D3F42D18670D6D((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_34, ((int32_t)((int32_t)L_35&(int32_t)((int32_t)-17))), /*hidden argument*/NULL);
		// xrPass.UpdateCullingParams(0, cullingParams);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_36 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_37 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_36);
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_38 = V_5;
		NullCheck(L_37);
		XRPass_UpdateCullingParams_mA7D560B027CD211FC86B4419BED46010489DF06A(L_37, 0, L_38, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d5:
	{
		// else if (xrPass.enabled && display != null)
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_39 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_40 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_39);
		NullCheck(L_40);
		bool L_41;
		L_41 = XRPass_get_enabled_m29320181846F74E0DCF77D4D897479362D2273CA(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0194;
		}
	}
	{
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_42 = __this->get_display_3();
		if (!L_42)
		{
			goto IL_0194;
		}
	}
	{
		// display.GetRenderPass(xrPass.multipassId, out var renderPass);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_43 = __this->get_display_3();
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_44 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_45 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_44);
		NullCheck(L_45);
		int32_t L_46;
		L_46 = XRPass_get_multipassId_mD4A8E396F5B8E3EA3E5FA642A95948614CB19C1D_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		XRDisplaySubsystem_GetRenderPass_m2DCDDACE964B4F6CEAAD5DF4387CEDF9CACA83AD(L_43, L_46, (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_6), /*hidden argument*/NULL);
		// display.GetCullingParameters(cameraData.camera, renderPass.cullingPassIndex, out var cullingParams);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_47 = __this->get_display_3();
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_48 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_49 = L_48.get_camera_2();
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_50 = V_6;
		int32_t L_51 = L_50.get_cullingPassIndex_5();
		NullCheck(L_47);
		XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6(L_47, L_49, L_51, (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)(&V_7), /*hidden argument*/NULL);
		// cullingParams.cullingOptions &= ~CullingOptions.Stereo;
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * L_52 = (&V_7);
		int32_t L_53;
		L_53 = ScriptableCullingParameters_get_cullingOptions_m024AC47E3641D47847C4B67457BA398B9814D86B((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_52, /*hidden argument*/NULL);
		ScriptableCullingParameters_set_cullingOptions_m03942DACE93C8F2F705D306984D3F42D18670D6D((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_52, ((int32_t)((int32_t)L_53&(int32_t)((int32_t)-17))), /*hidden argument*/NULL);
		// xrPass.UpdateCullingParams(cullingPassId: renderPass.cullingPassIndex, cullingParams);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_54 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_55 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_54);
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_56 = V_6;
		int32_t L_57 = L_56.get_cullingPassIndex_5();
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_58 = V_7;
		NullCheck(L_55);
		XRPass_UpdateCullingParams_mA7D560B027CD211FC86B4419BED46010489DF06A(L_55, L_57, L_58, /*hidden argument*/NULL);
		// if (xrPass.singlePassEnabled)
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_59 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_60 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_59);
		NullCheck(L_60);
		bool L_61;
		L_61 = XRPass_get_singlePassEnabled_mE9467F40CAF6B34B853C1D352FF7256E1F762FC2(L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0178;
		}
	}
	{
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		V_8 = 0;
		goto IL_016c;
	}

IL_0148:
	{
		// renderPass.GetRenderParameter(cameraData.camera, renderParamIndex, out var renderParam);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_62 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_63 = L_62.get_camera_2();
		int32_t L_64 = V_8;
		XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_6), L_63, L_64, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)(&V_9), /*hidden argument*/NULL);
		// xrPass.UpdateView(renderParamIndex, renderPass, renderParam);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_65 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_66 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_65);
		int32_t L_67 = V_8;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_68 = V_6;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_69 = V_9;
		NullCheck(L_66);
		XRPass_UpdateView_m0818F95E7AF7C1763B807C508F7095D3348D7E20(L_66, L_67, L_68, L_69, /*hidden argument*/NULL);
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		int32_t L_70 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_016c:
	{
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		int32_t L_71 = V_8;
		int32_t L_72;
		L_72 = XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_6), /*hidden argument*/NULL);
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_0148;
		}
	}
	{
		// }
		return;
	}

IL_0178:
	{
		// renderPass.GetRenderParameter(cameraData.camera, 0, out var renderParam);
		CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7  L_73 = ___cameraData1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_74 = L_73.get_camera_2();
		XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_6), L_74, 0, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)(&V_10), /*hidden argument*/NULL);
		// xrPass.UpdateView(0, renderPass, renderParam);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A ** L_75 = ___xrPass0;
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_76 = *((XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A **)L_75);
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_77 = V_6;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_78 = V_10;
		NullCheck(L_76);
		XRPass_UpdateView_m0818F95E7AF7C1763B807C508F7095D3348D7E20(L_76, 0, L_77, L_78, /*hidden argument*/NULL);
	}

IL_0194:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::CreateLayoutFromXrSdk(UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_CreateLayoutFromXrSdk_mD46049C4F7A08CFD6E5C88C5F31058B55F0B4E9B (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, bool ___singlePassAllowed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * V_4 = NULL;
	int32_t V_5 = 0;
	XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  V_8;
	memset((&V_8), 0, sizeof(V_8));
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * V_9 = NULL;
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		(&V_0)->set_camera_0(L_0);
		// for (int renderPassIndex = 0; renderPassIndex < display.GetRenderPassCount(); ++renderPassIndex)
		V_1 = 0;
		goto IL_00ff;
	}

IL_000f:
	{
		// display.GetRenderPass(renderPassIndex, out var renderPass);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = __this->get_display_3();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		XRDisplaySubsystem_GetRenderPass_m2DCDDACE964B4F6CEAAD5DF4387CEDF9CACA83AD(L_1, L_2, (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_2), /*hidden argument*/NULL);
		// display.GetCullingParameters(camera, renderPass.cullingPassIndex, out var cullingParams);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_3 = __this->get_display_3();
		U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5  L_4 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4.get_camera_0();
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_6 = V_2;
		int32_t L_7 = L_6.get_cullingPassIndex_5();
		NullCheck(L_3);
		XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6(L_3, L_5, L_7, (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)(&V_3), /*hidden argument*/NULL);
		// cullingParams.cullingOptions &= ~CullingOptions.Stereo;
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * L_8 = (&V_3);
		int32_t L_9;
		L_9 = ScriptableCullingParameters_get_cullingOptions_m024AC47E3641D47847C4B67457BA398B9814D86B((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_8, /*hidden argument*/NULL);
		ScriptableCullingParameters_set_cullingOptions_m03942DACE93C8F2F705D306984D3F42D18670D6D((ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_8, ((int32_t)((int32_t)L_9&(int32_t)((int32_t)-17))), /*hidden argument*/NULL);
		// if (singlePassAllowed && CanUseSinglePass(renderPass))
		bool L_10 = ___singlePassAllowed1;
		if (!L_10)
		{
			goto IL_00a8;
		}
	}
	{
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = XRSystem_U3CCreateLayoutFromXrSdkU3Eg__CanUseSinglePassU7C24_0_mC086FCBD276F4990745BA9168A14F4301F3914A6(L_11, (U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5 *)(&V_0), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		// var xrPass = XRPass.Create(renderPass, multipassId: framePasses.Count, cullingParams, occlusionMeshMaterial);
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_13 = V_2;
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_14 = __this->get_framePasses_1();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_inline(L_14, /*hidden argument*/List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_RuntimeMethod_var);
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_16 = V_3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_occlusionMeshMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_18;
		L_18 = XRPass_Create_mB49E75C77DF62A1DFD8FAEDB2CDC924739EC802C(L_13, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		V_5 = 0;
		goto IL_0093;
	}

IL_0072:
	{
		// renderPass.GetRenderParameter(camera, renderParamIndex, out var renderParam);
		U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5  L_19 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = L_19.get_camera_0();
		int32_t L_21 = V_5;
		XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_2), L_20, L_21, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)(&V_6), /*hidden argument*/NULL);
		// xrPass.AddView(renderPass, renderParam);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_22 = V_4;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_23 = V_2;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_24 = V_6;
		NullCheck(L_22);
		XRPass_AddView_m4FB7F1B1148E42FD55AEDBF364FA7600C8BA6DDC(L_22, L_23, L_24, /*hidden argument*/NULL);
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0093:
	{
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		int32_t L_26 = V_5;
		int32_t L_27;
		L_27 = XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		// AddPassToFrame(xrPass);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_28 = V_4;
		XRSystem_AddPassToFrame_m9E95DC808E61B996871908A4052717D1A665C2D4(__this, L_28, /*hidden argument*/NULL);
		// }
		goto IL_00fb;
	}

IL_00a8:
	{
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		V_7 = 0;
		goto IL_00f0;
	}

IL_00ad:
	{
		// renderPass.GetRenderParameter(camera, renderParamIndex, out var renderParam);
		U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5  L_29 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = L_29.get_camera_0();
		int32_t L_31 = V_7;
		XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_2), L_30, L_31, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)(&V_8), /*hidden argument*/NULL);
		// var xrPass = XRPass.Create(renderPass, multipassId: framePasses.Count, cullingParams, occlusionMeshMaterial);
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_32 = V_2;
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_33 = __this->get_framePasses_1();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_inline(L_33, /*hidden argument*/List_1_get_Count_mA3610C9B86CB9A2264009EFCBFFA5F096DCDDDF5_RuntimeMethod_var);
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_35 = V_3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_occlusionMeshMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_il2cpp_TypeInfo_var);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_37;
		L_37 = XRPass_Create_mB49E75C77DF62A1DFD8FAEDB2CDC924739EC802C(L_32, L_34, L_35, L_36, /*hidden argument*/NULL);
		V_9 = L_37;
		// xrPass.AddView(renderPass, renderParam);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_38 = V_9;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  L_39 = V_2;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_40 = V_8;
		NullCheck(L_38);
		XRPass_AddView_m4FB7F1B1148E42FD55AEDBF364FA7600C8BA6DDC(L_38, L_39, L_40, /*hidden argument*/NULL);
		// AddPassToFrame(xrPass);
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_41 = V_9;
		XRSystem_AddPassToFrame_m9E95DC808E61B996871908A4052717D1A665C2D4(__this, L_41, /*hidden argument*/NULL);
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		int32_t L_42 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00f0:
	{
		// for (int renderParamIndex = 0; renderParamIndex < renderPass.GetRenderParameterCount(); ++renderParamIndex)
		int32_t L_43 = V_7;
		int32_t L_44;
		L_44 = XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00ad;
		}
	}

IL_00fb:
	{
		// for (int renderPassIndex = 0; renderPassIndex < display.GetRenderPassCount(); ++renderPassIndex)
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00ff:
	{
		// for (int renderPassIndex = 0; renderPassIndex < display.GetRenderPassCount(); ++renderPassIndex)
		int32_t L_46 = V_1;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_47 = __this->get_display_3();
		NullCheck(L_47);
		int32_t L_48;
		L_48 = XRDisplaySubsystem_GetRenderPassCount_m68A61A55A72FAC483A67981F12451D45576A860D(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_Dispose_mEE8DB22C444B1E6F776B834B03647C20DD3AD658 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoreUtils.Destroy(occlusionMeshMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_occlusionMeshMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(CoreUtils_t3CF170996D3FBDE55A9D0441C9DF20E8E45F14B5_il2cpp_TypeInfo_var);
		CoreUtils_Destroy_m6345256E0F0115675EBEC44EE2E6D6B6075A8388(L_0, /*hidden argument*/NULL);
		// CoreUtils.Destroy(mirrorViewMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_mirrorViewMaterial_6();
		CoreUtils_Destroy_m6345256E0F0115675EBEC44EE2E6D6B6075A8388(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::AddPassToFrame(UnityEngine.Rendering.Universal.XRPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_AddPassToFrame_m9E95DC808E61B996871908A4052717D1A665C2D4 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___xrPass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m173CBA6925E49D9B6FE04048D5A9727E7A83D055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xrPass.UpdateOcclusionMesh();
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_0 = ___xrPass0;
		NullCheck(L_0);
		XRPass_UpdateOcclusionMesh_m2288932ABD0F00CE1DDE099452CD19540687B433(L_0, /*hidden argument*/NULL);
		// framePasses.Add(xrPass);
		List_1_tC8022F29419E29D4C3EC5824068F32BD16EC8555 * L_1 = __this->get_framePasses_1();
		XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * L_2 = ___xrPass0;
		NullCheck(L_1);
		List_1_Add_m173CBA6925E49D9B6FE04048D5A9727E7A83D055(L_1, L_2, /*hidden argument*/List_1_Add_m173CBA6925E49D9B6FE04048D5A9727E7A83D055_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::RenderMirrorView(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem_RenderMirrorView_mDDEB09624A85CA2D482CA9960049FD0B54613034 (XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * G_B9_0 = NULL;
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * G_B8_0 = NULL;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * G_B10_1 = NULL;
	int32_t G_B14_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	int32_t G_B23_0 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B23_1 = NULL;
	int32_t G_B22_0 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B27_2 = NULL;
	int32_t G_B30_0 = 0;
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
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
		// if (display == null || !display.running || !mirrorViewMaterial)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = __this->get_display_3();
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_2 = __this->get_display_3();
		NullCheck(L_2);
		bool L_3;
		L_3 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_mirrorViewMaterial_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}

IL_002c:
	{
		// return;
		return;
	}

IL_002d:
	{
		// using (new ProfilingScope(cmd, _XRMirrorProfilingSampler))
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_6 = ___cmd0;
		IL2CPP_RUNTIME_CLASS_INIT(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_7 = ((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->get__XRMirrorProfilingSampler_10();
		ProfilingScope__ctor_mCFCBA7418FE2083888D60C7BDB9C6B1CF1AF82CA((ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A *)(&V_0), L_6, L_7, /*hidden argument*/NULL);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			// cmd.SetRenderTarget(camera.targetTexture != null  ? camera.targetTexture : new RenderTargetIdentifier(BuiltinRenderTextureType.CameraTarget));
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_8 = ___cmd0;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = ___camera1;
			NullCheck(L_9);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10;
			L_10 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_9, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_11;
			L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			G_B8_0 = L_8;
			if (L_11)
			{
				G_B9_0 = L_8;
				goto IL_0051;
			}
		}

IL_0049:
		{
			RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_12;
			memset((&L_12), 0, sizeof(L_12));
			RenderTargetIdentifier__ctor_m8F174D7C9A3172B5C5D0C5C8933973801157CDBB((&L_12), 2, /*hidden argument*/NULL);
			G_B10_0 = L_12;
			G_B10_1 = G_B8_0;
			goto IL_005c;
		}

IL_0051:
		{
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = ___camera1;
			NullCheck(L_13);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14;
			L_14 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_13, /*hidden argument*/NULL);
			RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_15;
			L_15 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_14, /*hidden argument*/NULL);
			G_B10_0 = L_15;
			G_B10_1 = G_B9_0;
		}

IL_005c:
		{
			NullCheck(G_B10_1);
			CommandBuffer_SetRenderTarget_mCDFEB57580AF2EC11E02BA87EFB6CF18AD3AC840(G_B10_1, G_B10_0, /*hidden argument*/NULL);
			// bool yflip = camera.targetTexture != null || camera.cameraType == CameraType.SceneView || camera.cameraType == CameraType.Preview;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = ___camera1;
			NullCheck(L_16);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17;
			L_17 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_16, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_0083;
			}
		}

IL_006f:
		{
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = ___camera1;
			NullCheck(L_19);
			int32_t L_20;
			L_20 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_19, /*hidden argument*/NULL);
			if ((((int32_t)L_20) == ((int32_t)2)))
			{
				goto IL_0083;
			}
		}

IL_0078:
		{
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = ___camera1;
			NullCheck(L_21);
			int32_t L_22;
			L_22 = Camera_get_cameraType_mEB292C5AFDF7E1832A81B2923B4FBBC035DD93B2(L_21, /*hidden argument*/NULL);
			G_B14_0 = ((((int32_t)L_22) == ((int32_t)4))? 1 : 0);
			goto IL_0084;
		}

IL_0083:
		{
			G_B14_0 = 1;
		}

IL_0084:
		{
			V_1 = (bool)G_B14_0;
			// int mirrorBlitMode = display.GetPreferredMirrorBlitMode();
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_23 = __this->get_display_3();
			NullCheck(L_23);
			int32_t L_24;
			L_24 = XRDisplaySubsystem_GetPreferredMirrorBlitMode_m6312460A737308417E27461459BFF33B252FD37A(L_23, /*hidden argument*/NULL);
			V_2 = L_24;
			// if (display.GetMirrorViewBlitDesc(null, out var blitDesc, mirrorBlitMode))
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_25 = __this->get_display_3();
			int32_t L_26 = V_2;
			NullCheck(L_25);
			bool L_27;
			L_27 = XRDisplaySubsystem_GetMirrorViewBlitDesc_m5C9F5DC8113A3D149D25F0A5CE4B71C208BC80E9(L_25, (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 *)(&V_3), L_26, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_0265;
			}
		}

IL_00a5:
		{
			// if (blitDesc.nativeBlitAvailable)
			XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5  L_28 = V_3;
			bool L_29 = L_28.get_nativeBlitAvailable_1();
			if (!L_29)
			{
				goto IL_00c6;
			}
		}

IL_00ad:
		{
			// display.AddGraphicsThreadMirrorViewBlit(cmd, blitDesc.nativeBlitInvalidStates, mirrorBlitMode);
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_30 = __this->get_display_3();
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_31 = ___cmd0;
			XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5  L_32 = V_3;
			bool L_33 = L_32.get_nativeBlitInvalidStates_2();
			int32_t L_34 = V_2;
			NullCheck(L_30);
			bool L_35;
			L_35 = XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit_m6BCCEE01F4F2E4F42B0E9751F3EAE92B5A63A14A(L_30, L_31, L_33, L_34, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x282, FINALLY_0274);
		}

IL_00c6:
		{
			// for (int i = 0; i < blitDesc.blitParamsCount; ++i)
			V_4 = 0;
			goto IL_0256;
		}

IL_00ce:
		{
			// blitDesc.GetBlitParameter(i, out var blitParam);
			int32_t L_36 = V_4;
			XRMirrorViewBlitDesc_GetBlitParameter_m99A6EB66BCF56061E6964F27FDEA9D57481CC7A4((XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 *)(&V_3), L_36, (XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 *)(&V_5), /*hidden argument*/NULL);
			// Vector4 scaleBias = yflip ? new Vector4(blitParam.srcRect.width, -blitParam.srcRect.height, blitParam.srcRect.x, blitParam.srcRect.height + blitParam.srcRect.y) :
			//                             new Vector4(blitParam.srcRect.width, blitParam.srcRect.height, blitParam.srcRect.x, blitParam.srcRect.y);
			bool L_37 = V_1;
			if (L_37)
			{
				goto IL_0113;
			}
		}

IL_00dc:
		{
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_38 = (&V_5)->get_address_of_srcRect_2();
			float L_39;
			L_39 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_38, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_40 = (&V_5)->get_address_of_srcRect_2();
			float L_41;
			L_41 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_40, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_42 = (&V_5)->get_address_of_srcRect_2();
			float L_43;
			L_43 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_42, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_44 = (&V_5)->get_address_of_srcRect_2();
			float L_45;
			L_45 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_44, /*hidden argument*/NULL);
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_46;
			memset((&L_46), 0, sizeof(L_46));
			Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_46), L_39, L_41, L_43, L_45, /*hidden argument*/NULL);
			G_B21_0 = L_46;
			goto IL_0156;
		}

IL_0113:
		{
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_47 = (&V_5)->get_address_of_srcRect_2();
			float L_48;
			L_48 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_47, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_49 = (&V_5)->get_address_of_srcRect_2();
			float L_50;
			L_50 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_49, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_51 = (&V_5)->get_address_of_srcRect_2();
			float L_52;
			L_52 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_51, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_53 = (&V_5)->get_address_of_srcRect_2();
			float L_54;
			L_54 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_53, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_55 = (&V_5)->get_address_of_srcRect_2();
			float L_56;
			L_56 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_55, /*hidden argument*/NULL);
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_57;
			memset((&L_57), 0, sizeof(L_57));
			Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_57), L_48, ((-L_50)), L_52, ((float)il2cpp_codegen_add((float)L_54, (float)L_56)), /*hidden argument*/NULL);
			G_B21_0 = L_57;
		}

IL_0156:
		{
			V_6 = G_B21_0;
			// Vector4 scaleBiasRt = new Vector4(blitParam.destRect.width, blitParam.destRect.height, blitParam.destRect.x, blitParam.destRect.y);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_58 = (&V_5)->get_address_of_destRect_3();
			float L_59;
			L_59 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_58, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_60 = (&V_5)->get_address_of_destRect_3();
			float L_61;
			L_61 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_60, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_62 = (&V_5)->get_address_of_destRect_3();
			float L_63;
			L_63 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_62, /*hidden argument*/NULL);
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_64 = (&V_5)->get_address_of_destRect_3();
			float L_65;
			L_65 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_64, /*hidden argument*/NULL);
			Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&V_7), L_59, L_61, L_63, L_65, /*hidden argument*/NULL);
			// mirrorViewMaterialProperty.SetInt(XRShaderIDs._SRGBRead, (blitParam.srcTex.sRGB) ? 0 : 1);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_66 = __this->get_mirrorViewMaterialProperty_7();
			IL2CPP_RUNTIME_CLASS_INIT(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var);
			int32_t L_67 = ((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->get__SRGBRead_1();
			XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779  L_68 = V_5;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_69 = L_68.get_srcTex_0();
			NullCheck(L_69);
			bool L_70;
			L_70 = RenderTexture_get_sRGB_m53EE975EDE763A0CC5B2CF5B347D5FC6E1FE3B21(L_69, /*hidden argument*/NULL);
			G_B22_0 = L_67;
			G_B22_1 = L_66;
			if (L_70)
			{
				G_B23_0 = L_67;
				G_B23_1 = L_66;
				goto IL_01ab;
			}
		}

IL_01a8:
		{
			G_B24_0 = 1;
			G_B24_1 = G_B22_0;
			G_B24_2 = G_B22_1;
			goto IL_01ac;
		}

IL_01ab:
		{
			G_B24_0 = 0;
			G_B24_1 = G_B23_0;
			G_B24_2 = G_B23_1;
		}

IL_01ac:
		{
			NullCheck(G_B24_2);
			MaterialPropertyBlock_SetInt_mD1967761896ABFD2853C85113D31F28D1BCC273D(G_B24_2, G_B24_1, G_B24_0, /*hidden argument*/NULL);
			// mirrorViewMaterialProperty.SetInt(XRShaderIDs._SRGBWrite, (QualitySettings.activeColorSpace == ColorSpace.Linear) ? 0 : 1);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_71 = __this->get_mirrorViewMaterialProperty_7();
			IL2CPP_RUNTIME_CLASS_INIT(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var);
			int32_t L_72 = ((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->get__SRGBWrite_2();
			int32_t L_73;
			L_73 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
			G_B25_0 = L_72;
			G_B25_1 = L_71;
			if ((((int32_t)L_73) == ((int32_t)1)))
			{
				G_B26_0 = L_72;
				G_B26_1 = L_71;
				goto IL_01c7;
			}
		}

IL_01c4:
		{
			G_B27_0 = 1;
			G_B27_1 = G_B25_0;
			G_B27_2 = G_B25_1;
			goto IL_01c8;
		}

IL_01c7:
		{
			G_B27_0 = 0;
			G_B27_1 = G_B26_0;
			G_B27_2 = G_B26_1;
		}

IL_01c8:
		{
			NullCheck(G_B27_2);
			MaterialPropertyBlock_SetInt_mD1967761896ABFD2853C85113D31F28D1BCC273D(G_B27_2, G_B27_1, G_B27_0, /*hidden argument*/NULL);
			// mirrorViewMaterialProperty.SetTexture(ShaderPropertyId.sourceTex, blitParam.srcTex);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_74 = __this->get_mirrorViewMaterialProperty_7();
			IL2CPP_RUNTIME_CLASS_INIT(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var);
			int32_t L_75 = ((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->get_sourceTex_26();
			XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779  L_76 = V_5;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_77 = L_76.get_srcTex_0();
			NullCheck(L_74);
			MaterialPropertyBlock_SetTexture_m8F81CA94E5261618BEDD93EC02DAA2412E732C04(L_74, L_75, L_77, /*hidden argument*/NULL);
			// mirrorViewMaterialProperty.SetVector(ShaderPropertyId.scaleBias, scaleBias);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_78 = __this->get_mirrorViewMaterialProperty_7();
			int32_t L_79 = ((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->get_scaleBias_27();
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_80 = V_6;
			NullCheck(L_78);
			MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_78, L_79, L_80, /*hidden argument*/NULL);
			// mirrorViewMaterialProperty.SetVector(ShaderPropertyId.scaleBiasRt, scaleBiasRt);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_81 = __this->get_mirrorViewMaterialProperty_7();
			int32_t L_82 = ((ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tA0B6812CEC48B503277D18F2A7F547E05E8EC642_il2cpp_TypeInfo_var))->get_scaleBiasRt_28();
			Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_83 = V_7;
			NullCheck(L_81);
			MaterialPropertyBlock_SetVector_m39DE61298C4C95829529B498130844A591621E2F(L_81, L_82, L_83, /*hidden argument*/NULL);
			// mirrorViewMaterialProperty.SetInt(XRShaderIDs._SourceTexArraySlice, blitParam.srcTexArraySlice);
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_84 = __this->get_mirrorViewMaterialProperty_7();
			IL2CPP_RUNTIME_CLASS_INIT(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var);
			int32_t L_85 = ((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->get__SourceTexArraySlice_0();
			XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779  L_86 = V_5;
			int32_t L_87 = L_86.get_srcTexArraySlice_1();
			NullCheck(L_84);
			MaterialPropertyBlock_SetInt_mD1967761896ABFD2853C85113D31F28D1BCC273D(L_84, L_85, L_87, /*hidden argument*/NULL);
			// int shaderPass = (blitParam.srcTex.dimension == TextureDimension.Tex2DArray) ? 1 : 0;
			XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779  L_88 = V_5;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_89 = L_88.get_srcTex_0();
			NullCheck(L_89);
			int32_t L_90;
			L_90 = VirtFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.Rendering.TextureDimension UnityEngine.Texture::get_dimension() */, L_89);
			if ((((int32_t)L_90) == ((int32_t)5)))
			{
				goto IL_0231;
			}
		}

IL_022e:
		{
			G_B30_0 = 0;
			goto IL_0232;
		}

IL_0231:
		{
			G_B30_0 = 1;
		}

IL_0232:
		{
			V_8 = G_B30_0;
			// cmd.DrawProcedural(Matrix4x4.identity, mirrorViewMaterial, shaderPass, MeshTopology.Quads, 4, 1, mirrorViewMaterialProperty);
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_91 = ___cmd0;
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_92;
			L_92 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_93 = __this->get_mirrorViewMaterial_6();
			int32_t L_94 = V_8;
			MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_95 = __this->get_mirrorViewMaterialProperty_7();
			NullCheck(L_91);
			CommandBuffer_DrawProcedural_m3F0D474890F8766A12B6871C63C0C40CD0AC4C36(L_91, L_92, L_93, L_94, 2, 4, 1, L_95, /*hidden argument*/NULL);
			// for (int i = 0; i < blitDesc.blitParamsCount; ++i)
			int32_t L_96 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		}

IL_0256:
		{
			// for (int i = 0; i < blitDesc.blitParamsCount; ++i)
			int32_t L_97 = V_4;
			XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5  L_98 = V_3;
			int32_t L_99 = L_98.get_blitParamsCount_3();
			if ((((int32_t)L_97) < ((int32_t)L_99)))
			{
				goto IL_00ce;
			}
		}

IL_0263:
		{
			// }
			IL2CPP_LEAVE(0x282, FINALLY_0274);
		}

IL_0265:
		{
			// cmd.ClearRenderTarget(true, true, Color.black);
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_100 = ___cmd0;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_101;
			L_101 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
			NullCheck(L_100);
			CommandBuffer_ClearRenderTarget_mD911CD9DACD86BB1A9734235E6D55AF9BE844CA0(L_100, (bool)1, (bool)1, L_101, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x282, FINALLY_0274);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0274;
	}

FINALLY_0274:
	{ // begin finally (depth: 1)
		ProfilingScope_Dispose_m5153A8FD4370211B57DFF29BE2F20E39CC61CEAF((ProfilingScope_t91B447FE94D2D35D6E522C8F49E2F1578618705A *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(628)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(628)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x282, IL_0282)
	}

IL_0282:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.XRSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystem__cctor_m7B8F02B7D57C203238E42352E4678976010A0BF2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F1BFCACEFDC98F691CA4EEA7601E20BEAA9CD4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRDisplaySubsystem> displayList = new List<XRDisplaySubsystem>();
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_0 = (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *)il2cpp_codegen_object_new(List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4(L_0, /*hidden argument*/List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->set_displayList_2(L_0);
		// static  int                     msaaLevel = 1;
		((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->set_msaaLevel_4(1);
		// static ProfilingSampler _XRMirrorProfilingSampler = new ProfilingSampler(k_XRMirrorTag);
		ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * L_1 = (ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 *)il2cpp_codegen_object_new(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92_il2cpp_TypeInfo_var);
		ProfilingSampler__ctor_m32F0983E2FC7410FB535482C5589CCA0E396FA89(L_1, _stringLiteral3F1BFCACEFDC98F691CA4EEA7601E20BEAA9CD4D, /*hidden argument*/NULL);
		((XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_StaticFields*)il2cpp_codegen_static_fields_for(XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_il2cpp_TypeInfo_var))->set__XRMirrorProfilingSampler_10(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.XRSystem::<CreateLayoutFromXrSdk>g__CanUseSinglePass|24_0(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.Rendering.Universal.XRSystem/<>c__DisplayClass24_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSystem_U3CCreateLayoutFromXrSdkU3Eg__CanUseSinglePassU7C24_0_mC086FCBD276F4990745BA9168A14F4301F3914A6 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___renderPass0, U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5 * p1, const RuntimeMethod* method)
{
	XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (renderPass.renderTargetDesc.dimension != TextureDimension.Tex2DArray)
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_0 = (&___renderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_1;
		L_1 = RenderTextureDescriptor_get_dimension_mC7CB3DA0E163E4C7C3C4BC14B5B92C4EAADC87D3_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0011:
	{
		// if (renderPass.GetRenderParameterCount() != 2 || renderPass.renderTargetDesc.volumeDepth != 2)
		int32_t L_2;
		L_2 = XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&___renderPass0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_3 = (&___renderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_4;
		L_4 = RenderTextureDescriptor_get_volumeDepth_m05E4A20A05286909E65D394D0BA5F6904D653688_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}

IL_002c:
	{
		// renderPass.GetRenderParameter(camera, 0, out var renderParam0);
		U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5 * L_5 = p1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = L_5->get_camera_0();
		XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&___renderPass0), L_6, 0, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)(&V_0), /*hidden argument*/NULL);
		// renderPass.GetRenderParameter(camera, 1, out var renderParam1);
		U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5 * L_7 = p1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = L_7->get_camera_0();
		XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)(&___renderPass0), L_8, 1, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)(&V_1), /*hidden argument*/NULL);
		// if (renderParam0.textureArraySlice != 0 || renderParam1.textureArraySlice != 1)
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_9 = V_0;
		int32_t L_10 = L_9.get_textureArraySlice_4();
		if (L_10)
		{
			goto IL_005d;
		}
	}
	{
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_11 = V_1;
		int32_t L_12 = L_11.get_textureArraySlice_4();
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}

IL_005d:
	{
		// return false;
		return (bool)0;
	}

IL_005f:
	{
		// if (renderParam0.viewport != renderParam1.viewport)
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_13 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = L_13.get_viewport_2();
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_15 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16 = L_15.get_viewport_2();
		bool L_17;
		L_17 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66(L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0074:
	{
		// return true;
		return (bool)1;
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
// System.Void UnityEngine.Rendering.Universal.XRSystemData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSystemData__ctor_m6E39CCFB35325FC814C589BEE10B04794E187774 (XRSystemData_t16A7716D13394B61BA5620C88C676ACD57169035 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.Rendering.Universal.XRView
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke(const XRView_tE7BCF62BA1242C287E38539553B57AE70B687027& unmarshaled, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_pinvoke& marshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke_back(const XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_pinvoke& marshaled, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027& unmarshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.Universal.XRView
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_pinvoke_cleanup(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.Universal.XRView
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_com(const XRView_tE7BCF62BA1242C287E38539553B57AE70B687027& unmarshaled, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_com& marshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_com_back(const XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_com& marshaled, XRView_tE7BCF62BA1242C287E38539553B57AE70B687027& unmarshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRView': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.Universal.XRView
IL2CPP_EXTERN_C void XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshal_com_cleanup(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Rendering.Universal.XRView::.ctor(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRView__ctor_m26697ACC489FE20A5ABE57491F5266BBEAD8DA61 (XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___proj0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___vp2, int32_t ___dstSlice3, const RuntimeMethod* method)
{
	{
		// projMatrix = proj;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___proj0;
		__this->set_projMatrix_0(L_0);
		// viewMatrix = view;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = ___view1;
		__this->set_viewMatrix_1(L_1);
		// viewport = vp;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___vp2;
		__this->set_viewport_2(L_2);
		// occlusionMesh = null;
		__this->set_occlusionMesh_3((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
		// textureArraySlice = dstSlice;
		int32_t L_3 = ___dstSlice3;
		__this->set_textureArraySlice_4(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRView__ctor_m26697ACC489FE20A5ABE57491F5266BBEAD8DA61_AdjustorThunk (RuntimeObject * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___proj0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___vp2, int32_t ___dstSlice3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * _thisAdjusted = reinterpret_cast<XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 *>(__this + _offset);
	XRView__ctor_m26697ACC489FE20A5ABE57491F5266BBEAD8DA61(_thisAdjusted, ___proj0, ___view1, ___vp2, ___dstSlice3, method);
}
// System.Void UnityEngine.Rendering.Universal.XRView::.ctor(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRView__ctor_mBD2BA2F6548FD9780A2EA656E186BE6AB02FA411 (XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * __this, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___renderPass0, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___renderParameter1, const RuntimeMethod* method)
{
	{
		// projMatrix = renderParameter.projection;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_0 = ___renderParameter1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1 = L_0.get_projection_1();
		__this->set_projMatrix_0(L_1);
		// viewMatrix = renderParameter.view;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_2 = ___renderParameter1;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3 = L_2.get_view_0();
		__this->set_viewMatrix_1(L_3);
		// viewport = renderParameter.viewport;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_4 = ___renderParameter1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5 = L_4.get_viewport_2();
		__this->set_viewport_2(L_5);
		// occlusionMesh = renderParameter.occlusionMesh;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_6 = ___renderParameter1;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = L_6.get_occlusionMesh_3();
		__this->set_occlusionMesh_3(L_7);
		// textureArraySlice = renderParameter.textureArraySlice;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  L_8 = ___renderParameter1;
		int32_t L_9 = L_8.get_textureArraySlice_4();
		__this->set_textureArraySlice_4(L_9);
		// viewport.x      *= renderPass.renderTargetDesc.width;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = __this->get_address_of_viewport_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_11 = L_10;
		float L_12;
		L_12 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_11, /*hidden argument*/NULL);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_13 = (&___renderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_14;
		L_14 = RenderTextureDescriptor_get_width_m5DD56A0652453FDDB51FF030FC5ED914F83F5E31_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_13, /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)((float)((float)L_14)))), /*hidden argument*/NULL);
		// viewport.width  *= renderPass.renderTargetDesc.width;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_15 = __this->get_address_of_viewport_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_16 = L_15;
		float L_17;
		L_17 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16, /*hidden argument*/NULL);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_18 = (&___renderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_19;
		L_19 = RenderTextureDescriptor_get_width_m5DD56A0652453FDDB51FF030FC5ED914F83F5E31_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_18, /*hidden argument*/NULL);
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)((float)((float)L_19)))), /*hidden argument*/NULL);
		// viewport.y      *= renderPass.renderTargetDesc.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_20 = __this->get_address_of_viewport_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_21 = L_20;
		float L_22;
		L_22 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_21, /*hidden argument*/NULL);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_23 = (&___renderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_24;
		L_24 = RenderTextureDescriptor_get_height_m661881AD8E078D6C1FD6C549207AACC2B179D201_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_23, /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_21, ((float)il2cpp_codegen_multiply((float)L_22, (float)((float)((float)L_24)))), /*hidden argument*/NULL);
		// viewport.height *= renderPass.renderTargetDesc.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_25 = __this->get_address_of_viewport_2();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_26 = L_25;
		float L_27;
		L_27 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_26, /*hidden argument*/NULL);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_28 = (&___renderPass0)->get_address_of_renderTargetDesc_3();
		int32_t L_29;
		L_29 = RenderTextureDescriptor_get_height_m661881AD8E078D6C1FD6C549207AACC2B179D201_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_28, /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_26, ((float)il2cpp_codegen_multiply((float)L_27, (float)((float)((float)L_29)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRView__ctor_mBD2BA2F6548FD9780A2EA656E186BE6AB02FA411_AdjustorThunk (RuntimeObject * __this, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB  ___renderPass0, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3  ___renderParameter1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 * _thisAdjusted = reinterpret_cast<XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 *>(__this + _offset);
	XRView__ctor_mBD2BA2F6548FD9780A2EA656E186BE6AB02FA411(_thisAdjusted, ___renderPass0, ___renderParameter1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMirrorView__ctor_m475059281857B20C7CE15BAC68A40B79D3AB0230 (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::Invoke(UnityEngine.Rendering.Universal.XRPass,UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTexture,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMirrorView_Invoke_m3D97B0AEE1612273019D50A80D4C74D6D8CDD09B (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___pass0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						GenericVirtActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						VirtActionInvoker3< CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
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
						GenericInterfaceActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						GenericVirtActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(targetMethod, targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
					else
						VirtActionInvoker4< XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pass0, ___cmd1, ___rt2, ___viewport3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::BeginInvoke(UnityEngine.Rendering.Universal.XRPass,UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTexture,UnityEngine.Rect,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomMirrorView_BeginInvoke_mDD89A15673A2E48EDC69BA2829E7B39F3B703637 (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * ___pass0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd1, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt2, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___pass0;
	__d_args[1] = ___cmd1;
	__d_args[2] = ___rt2;
	__d_args[3] = Box(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var, &___viewport3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Rendering.Universal.XRPass/CustomMirrorView::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMirrorView_EndInvoke_mD403A4F005650120E0A6D12C44B3BA44E5F38C35 (CustomMirrorView_t85B3412384E1B25E4A3D103FDFCAD87FFA728027 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.XRSystem/XRShaderIDs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRShaderIDs__cctor_mF11B95778345BA7AC7CF34DA2ED6149C2B65CED2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral355871A53683A0CE41651908009466DB1F5FEBC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA17366220E713ADFBBB8558BF7AEB7BAA4CD1702);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2DC1C4F67F18CAF79E60F4F78FA88811E5E36C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int _SourceTexArraySlice = Shader.PropertyToID("_SourceTexArraySlice");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralE2DC1C4F67F18CAF79E60F4F78FA88811E5E36C1, /*hidden argument*/NULL);
		((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->set__SourceTexArraySlice_0(L_0);
		// public static readonly int _SRGBRead            = Shader.PropertyToID("_SRGBRead");
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteralA17366220E713ADFBBB8558BF7AEB7BAA4CD1702, /*hidden argument*/NULL);
		((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->set__SRGBRead_1(L_1);
		// public static readonly int _SRGBWrite           = Shader.PropertyToID("_SRGBWrite");
		int32_t L_2;
		L_2 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral355871A53683A0CE41651908009466DB1F5FEBC7, /*hidden argument*/NULL);
		((XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_StaticFields*)il2cpp_codegen_static_fields_for(XRShaderIDs_tC297761948149DAC3272F642AF3BDE5437A4D5FB_il2cpp_TypeInfo_var))->set__SRGBWrite_2(L_2);
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
// System.Void UnityEngine.Rendering.Universal.XRSystemData/ShaderResources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderResources__ctor_m35E93A20CFB6037D4AE810D25EC29BAF506BCD04 (ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRPass_get_xrSdkEnabled_m382436041060A68DD4DCC122B48E4F8BEDC1EB64_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal bool xrSdkEnabled { get; private set; }
		bool L_0 = __this->get_U3CxrSdkEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int cullingPassId  { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcullingPassIdU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  ___value0, const RuntimeMethod* method)
{
	{
		// internal ScriptableCullingParameters cullingParams { get; private set; }
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1  L_0 = ___value0;
		__this->set_U3CcullingParamsU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_multipassId_mBF5A78EF00B1DEB40F3315D446BFDA15B5677F07_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int multipassId    { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmultipassIdU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_renderTarget_m528BDC7E91273283D86C9F1543CCE551E09F0A29_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___value0, const RuntimeMethod* method)
{
	{
		// internal RenderTargetIdentifier  renderTarget     { get; private set; }
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_0 = ___value0;
		__this->set_U3CrenderTargetU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_m5DD56A0652453FDDB51FF030FC5ED914F83F5E31_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CwidthU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m661881AD8E078D6C1FD6C549207AACC2B179D201_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CheightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_mipCount_m7712C0C03EFAABB3B40528018FE5A5CE07ACA5FE_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CmipCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_dimension_mC7CB3DA0E163E4C7C3C4BC14B5B92C4EAADC87D3_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CdimensionU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_m4D3F1486F761F3C52308F00267B918BD7DB8137F_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdimensionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_volumeDepth_m05E4A20A05286909E65D394D0BA5F6904D653688_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CvolumeDepthU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mC4D9C6B86B6799BA752855DE5C385CC24F6E3733_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CvolumeDepthU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_vrUsage_m51AC5C8A266689B8E69E91A1531F4F9408928197_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CvrUsageU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_vrUsage_m5E4F43CB35EF142D55AC22996B641483566A2097_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CvrUsageU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_renderTargetDesc_mB21461AD204A490E0568E8E126590F59DF6DB07A_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___value0, const RuntimeMethod* method)
{
	{
		// internal RenderTextureDescriptor renderTargetDesc { get; private set; }
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_0 = ___value0;
		__this->set_U3CrenderTargetDescU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_renderTargetIsRenderTexture_m93DAA821EB43DAC5BEC6E454B5E995B3F2147393_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool                    renderTargetIsRenderTexture { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CrenderTargetIsRenderTextureU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_xrSdkEnabled_m6C320B4690D3C05225AC8A456AA1DB38CCECDB16_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool xrSdkEnabled { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CxrSdkEnabledU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPass_set_copyDepth_mABAD1DE38CB40CFB7971ED1D5A507FB046BFAECE_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// internal bool copyDepth    { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CcopyDepthU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureXR_get_slices_mB7DD753858EACB54625860E7B7521046D20C8F21_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int slices { get => m_MaxViews; }
		IL2CPP_RUNTIME_CLASS_INIT(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields*)il2cpp_codegen_static_fields_for(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var))->get_m_MaxViews_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureXR_set_maxViews_m19D596C4FD8DB0FB226728F60E419B75255904AC_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MaxViews = value;
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var);
		((TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_StaticFields*)il2cpp_codegen_static_fields_for(TextureXR_tDDBADE53FF3D04989BD9F88F4B9772F12F0FE02B_il2cpp_TypeInfo_var))->set_m_MaxViews_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal RenderTextureDescriptor renderTargetDesc { get; private set; }
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_0 = __this->get_U3CrenderTargetDescU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_m332912610A1FF2B7C05B0BA9939D733F2E7F0646_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CmsaaSamplesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m84320452D8BF3A8DD5662F6229FE666C299B5AEF_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmsaaSamplesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m8D4BAEBB8089FD77F4DC81088ACB511F2BCA41EA_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CwidthU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1300AF31BCDCF2E14E86A598AFDC5569B682A46D_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CheightU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRGraphicsAutomatedTests_get_enabled_mF072F12B6825BD0B7A262221D15B33F803B4B37D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool enabled { get; } = activatedFromCommandLine;
		IL2CPP_RUNTIME_CLASS_INIT(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var);
		bool L_0 = ((XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_StaticFields*)il2cpp_codegen_static_fields_for(XRGraphicsAutomatedTests_t76E770F723C3B6FE947B39D635E3EB84A08E7426_il2cpp_TypeInfo_var))->get_U3CenabledU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRPass_get_multipassId_mD4A8E396F5B8E3EA3E5FA642A95948614CB19C1D_inline (XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A * __this, const RuntimeMethod* method)
{
	{
		// internal int multipassId    { get; private set; }
		int32_t L_0 = __this->get_U3CmultipassIdU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4A63F607511F7DE212002C934608E9245AB43464_gshared_inline (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  List_1_get_Item_m64E545EC2491E6D45AE171079B75035F903A7435_gshared_inline (List_1_t9C58E42262BA7443525E06CCA378B7B5EA53E4FE * __this, int32_t ___index0, const RuntimeMethod* method)
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
		XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD* L_2 = (XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD*)__this->get__items_1();
		int32_t L_3 = ___index0;
		XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((XRViewU5BU5D_tA7794DBCCFAC538844E0D7C6A17EB1EC0DB7C5AD*)L_2, (int32_t)L_3);
		return (XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 )L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
