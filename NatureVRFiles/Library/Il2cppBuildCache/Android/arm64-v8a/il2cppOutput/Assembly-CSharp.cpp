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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Predicate`1<System.Byte>
struct Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// AbstractSerialThread
struct AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// NatureVRScentController
struct NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SampleCustomDelimiter
struct SampleCustomDelimiter_t6EC605F99E30A4CBF9153612C8C7EF323A4632E1;
// SampleMessageListener
struct SampleMessageListener_t037BACA19C3242EBCCDCFCD3F78BCB66E278B093;
// SampleTearDown
struct SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65;
// SampleUserPolling_JustRead
struct SampleUserPolling_JustRead_tF0C05FD03AE65652B4479C98D08CD6BDDC6EB16D;
// SampleUserPolling_ReadWrite
struct SampleUserPolling_ReadWrite_tCD2411A4DBA5411327308178E02BA7D5DDB20E2D;
// SerialController
struct SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8;
// SerialControllerCustomDelimiter
struct SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97;
// System.IO.Ports.SerialPort
struct SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636;
// SerialThread
struct SerialThread_t74C80B99350726FD879A783C97143422563C11D9;
// SerialThreadBinaryDelimited
struct SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15;
// SerialThreadLines
struct SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// NatureVRScentController/<UpdateScentStrength>d__10
struct U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627;
// SerialController/TearDownFunction
struct TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430;
// SerialControllerCustomDelimiter/TearDownFunction
struct TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1;
IL2CPP_EXTERN_C String_t* _stringLiteral1A0AE7C00BCC17B460E1759C9034D20D06A38CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral38CDED0A385ADF7F0E5E7231366D2692A3BBD419;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral47D72218FE863254FDDAE70213C99C10963BDB1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8444B8284A5F8B6D925131602695FE8FE915FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4;
IL2CPP_EXTERN_C String_t* _stringLiteral584A90F99D1720D30308E4A515077FB664C97F52;
IL2CPP_EXTERN_C String_t* _stringLiteral647E767BE8CC5CE53415CE9A95BA3E058B72163B;
IL2CPP_EXTERN_C String_t* _stringLiteral663DF191A148DEE7D9373C191F0145203C5C5B2A;
IL2CPP_EXTERN_C String_t* _stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359;
IL2CPP_EXTERN_C String_t* _stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDA8DFFE6003ADA97961913403F7D92C5D6B7E0;
IL2CPP_EXTERN_C String_t* _stringLiteral9D192706721899A3199F9973664A097379C1F0F5;
IL2CPP_EXTERN_C String_t* _stringLiteral9E41FABAF67F868C32F24B03666CF77B4220386C;
IL2CPP_EXTERN_C String_t* _stringLiteral9F35E736C198E5CCE3ACC36B8A4BFCBAF384D38E;
IL2CPP_EXTERN_C String_t* _stringLiteralA880D971D3C88798C0CBDF78C6C9FE65932F630E;
IL2CPP_EXTERN_C String_t* _stringLiteralA95898025CC11DF26437FBBC4B43CA5F697F5DB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA99D5B8CE94B378A1872A71F428182909A82DAC0;
IL2CPP_EXTERN_C String_t* _stringLiteralB10ED381609F280F557DA6725BE0375C0E759723;
IL2CPP_EXTERN_C String_t* _stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B3DCEF09EF381AAC70739B4FE4A25BFF9E9AD9;
IL2CPP_EXTERN_C String_t* _stringLiteralC90675720878D46F93645562C85A92311A90E1F0;
IL2CPP_EXTERN_C String_t* _stringLiteralD0204B0F91E27DCD1E56015482FB2B522CC48EF0;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralE57BC9ADF1EF0EBB91F8D3C649AF190FE16B9664;
IL2CPP_EXTERN_C String_t* _stringLiteralE87FF6D0218D1F266FA978BFEDCA4D92606F7D87;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralFF2545B44F913F714F64637B65F8A8B9B5256D80;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractSerialThread_RunForever_mA6563110F862DC797F9B3A7AF28624E0B77A14B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97_mBAA038A62BFB9D33C6108E733261D9F9209AA0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleTearDown_lightsShutdown_m161B6A397D7DD00C6A18ED3162CCD401A13A67B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerialThreadBinaryDelimited_IsSeparator_mCE769604985F138F46A61717DFB893158B2D9901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateScentStrengthU3Ed__10_System_Collections_IEnumerator_Reset_m91711EB77F06926B4C5D53A427C1D497F257B312_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// AbstractSerialThread
struct AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A  : public RuntimeObject
{
public:
	// System.String AbstractSerialThread::portName
	String_t* ___portName_0;
	// System.Int32 AbstractSerialThread::baudRate
	int32_t ___baudRate_1;
	// System.Int32 AbstractSerialThread::delayBeforeReconnecting
	int32_t ___delayBeforeReconnecting_2;
	// System.Int32 AbstractSerialThread::maxUnreadMessages
	int32_t ___maxUnreadMessages_3;
	// System.IO.Ports.SerialPort AbstractSerialThread::serialPort
	SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPort_4;
	// System.Collections.Queue AbstractSerialThread::inputQueue
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___inputQueue_7;
	// System.Collections.Queue AbstractSerialThread::outputQueue
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___outputQueue_8;
	// System.Boolean AbstractSerialThread::stopRequested
	bool ___stopRequested_9;
	// System.Boolean AbstractSerialThread::enqueueStatusMessages
	bool ___enqueueStatusMessages_10;

public:
	inline static int32_t get_offset_of_portName_0() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___portName_0)); }
	inline String_t* get_portName_0() const { return ___portName_0; }
	inline String_t** get_address_of_portName_0() { return &___portName_0; }
	inline void set_portName_0(String_t* value)
	{
		___portName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_0), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_1() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___baudRate_1)); }
	inline int32_t get_baudRate_1() const { return ___baudRate_1; }
	inline int32_t* get_address_of_baudRate_1() { return &___baudRate_1; }
	inline void set_baudRate_1(int32_t value)
	{
		___baudRate_1 = value;
	}

	inline static int32_t get_offset_of_delayBeforeReconnecting_2() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___delayBeforeReconnecting_2)); }
	inline int32_t get_delayBeforeReconnecting_2() const { return ___delayBeforeReconnecting_2; }
	inline int32_t* get_address_of_delayBeforeReconnecting_2() { return &___delayBeforeReconnecting_2; }
	inline void set_delayBeforeReconnecting_2(int32_t value)
	{
		___delayBeforeReconnecting_2 = value;
	}

	inline static int32_t get_offset_of_maxUnreadMessages_3() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___maxUnreadMessages_3)); }
	inline int32_t get_maxUnreadMessages_3() const { return ___maxUnreadMessages_3; }
	inline int32_t* get_address_of_maxUnreadMessages_3() { return &___maxUnreadMessages_3; }
	inline void set_maxUnreadMessages_3(int32_t value)
	{
		___maxUnreadMessages_3 = value;
	}

	inline static int32_t get_offset_of_serialPort_4() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___serialPort_4)); }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * get_serialPort_4() const { return ___serialPort_4; }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 ** get_address_of_serialPort_4() { return &___serialPort_4; }
	inline void set_serialPort_4(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * value)
	{
		___serialPort_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialPort_4), (void*)value);
	}

	inline static int32_t get_offset_of_inputQueue_7() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___inputQueue_7)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_inputQueue_7() const { return ___inputQueue_7; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_inputQueue_7() { return &___inputQueue_7; }
	inline void set_inputQueue_7(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___inputQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputQueue_7), (void*)value);
	}

	inline static int32_t get_offset_of_outputQueue_8() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___outputQueue_8)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_outputQueue_8() const { return ___outputQueue_8; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_outputQueue_8() { return &___outputQueue_8; }
	inline void set_outputQueue_8(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___outputQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_stopRequested_9() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___stopRequested_9)); }
	inline bool get_stopRequested_9() const { return ___stopRequested_9; }
	inline bool* get_address_of_stopRequested_9() { return &___stopRequested_9; }
	inline void set_stopRequested_9(bool value)
	{
		___stopRequested_9 = value;
	}

	inline static int32_t get_offset_of_enqueueStatusMessages_10() { return static_cast<int32_t>(offsetof(AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A, ___enqueueStatusMessages_10)); }
	inline bool get_enqueueStatusMessages_10() const { return ___enqueueStatusMessages_10; }
	inline bool* get_address_of_enqueueStatusMessages_10() { return &___enqueueStatusMessages_10; }
	inline void set_enqueueStatusMessages_10(bool value)
	{
		___enqueueStatusMessages_10 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_6), (void*)value);
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// NatureVRScentController/<UpdateScentStrength>d__10
struct U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627  : public RuntimeObject
{
public:
	// System.Int32 NatureVRScentController/<UpdateScentStrength>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NatureVRScentController/<UpdateScentStrength>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// NatureVRScentController NatureVRScentController/<UpdateScentStrength>d__10::<>4__this
	NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627, ___U3CU3E4__this_2)); }
	inline NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
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


// SerialThreadBinaryDelimited
struct SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15  : public AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A
{
public:
	// System.Byte SerialThreadBinaryDelimited::separator
	uint8_t ___separator_11;
	// System.Byte[] SerialThreadBinaryDelimited::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_12;
	// System.Int32 SerialThreadBinaryDelimited::bufferUsed
	int32_t ___bufferUsed_13;

public:
	inline static int32_t get_offset_of_separator_11() { return static_cast<int32_t>(offsetof(SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15, ___separator_11)); }
	inline uint8_t get_separator_11() const { return ___separator_11; }
	inline uint8_t* get_address_of_separator_11() { return &___separator_11; }
	inline void set_separator_11(uint8_t value)
	{
		___separator_11 = value;
	}

	inline static int32_t get_offset_of_buffer_12() { return static_cast<int32_t>(offsetof(SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15, ___buffer_12)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_12() const { return ___buffer_12; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_12() { return &___buffer_12; }
	inline void set_buffer_12(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_12), (void*)value);
	}

	inline static int32_t get_offset_of_bufferUsed_13() { return static_cast<int32_t>(offsetof(SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15, ___bufferUsed_13)); }
	inline int32_t get_bufferUsed_13() const { return ___bufferUsed_13; }
	inline int32_t* get_address_of_bufferUsed_13() { return &___bufferUsed_13; }
	inline void set_bufferUsed_13(int32_t value)
	{
		___bufferUsed_13 = value;
	}
};


// SerialThreadLines
struct SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0  : public AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A
{
public:

public:
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


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// System.IO.Ports.SerialPort
struct SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:

public:
};


// SerialThread
struct SerialThread_t74C80B99350726FD879A783C97143422563C11D9  : public SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0
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


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Predicate`1<System.Byte>
struct Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.TimeoutException
struct TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// SerialController/TearDownFunction
struct TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430  : public MulticastDelegate_t
{
public:

public:
};


// SerialControllerCustomDelimiter/TearDownFunction
struct TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6  : public MulticastDelegate_t
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


// NatureVRScentController
struct NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SerialController NatureVRScentController::SerialController
	SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * ___SerialController_4;
	// UnityEngine.Transform NatureVRScentController::PlayerHead
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PlayerHead_5;
	// UnityEngine.Collider[] NatureVRScentController::LavenderColliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___LavenderColliders_6;
	// UnityEngine.Collider[] NatureVRScentController::CedarColliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___CedarColliders_7;
	// System.Single NatureVRScentController::ScentRadius
	float ___ScentRadius_8;
	// System.Single NatureVRScentController::MaximumScentRadius
	float ___MaximumScentRadius_9;
	// System.Single NatureVRScentController::MinimumServoAngle
	float ___MinimumServoAngle_10;
	// System.Single NatureVRScentController::MaximumServoAngle
	float ___MaximumServoAngle_11;
	// System.Single NatureVRScentController::TimeBetweenUpdates
	float ___TimeBetweenUpdates_12;

public:
	inline static int32_t get_offset_of_SerialController_4() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___SerialController_4)); }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * get_SerialController_4() const { return ___SerialController_4; }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 ** get_address_of_SerialController_4() { return &___SerialController_4; }
	inline void set_SerialController_4(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * value)
	{
		___SerialController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerialController_4), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerHead_5() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___PlayerHead_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PlayerHead_5() const { return ___PlayerHead_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PlayerHead_5() { return &___PlayerHead_5; }
	inline void set_PlayerHead_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PlayerHead_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerHead_5), (void*)value);
	}

	inline static int32_t get_offset_of_LavenderColliders_6() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___LavenderColliders_6)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_LavenderColliders_6() const { return ___LavenderColliders_6; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_LavenderColliders_6() { return &___LavenderColliders_6; }
	inline void set_LavenderColliders_6(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___LavenderColliders_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LavenderColliders_6), (void*)value);
	}

	inline static int32_t get_offset_of_CedarColliders_7() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___CedarColliders_7)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_CedarColliders_7() const { return ___CedarColliders_7; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_CedarColliders_7() { return &___CedarColliders_7; }
	inline void set_CedarColliders_7(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___CedarColliders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CedarColliders_7), (void*)value);
	}

	inline static int32_t get_offset_of_ScentRadius_8() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___ScentRadius_8)); }
	inline float get_ScentRadius_8() const { return ___ScentRadius_8; }
	inline float* get_address_of_ScentRadius_8() { return &___ScentRadius_8; }
	inline void set_ScentRadius_8(float value)
	{
		___ScentRadius_8 = value;
	}

	inline static int32_t get_offset_of_MaximumScentRadius_9() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___MaximumScentRadius_9)); }
	inline float get_MaximumScentRadius_9() const { return ___MaximumScentRadius_9; }
	inline float* get_address_of_MaximumScentRadius_9() { return &___MaximumScentRadius_9; }
	inline void set_MaximumScentRadius_9(float value)
	{
		___MaximumScentRadius_9 = value;
	}

	inline static int32_t get_offset_of_MinimumServoAngle_10() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___MinimumServoAngle_10)); }
	inline float get_MinimumServoAngle_10() const { return ___MinimumServoAngle_10; }
	inline float* get_address_of_MinimumServoAngle_10() { return &___MinimumServoAngle_10; }
	inline void set_MinimumServoAngle_10(float value)
	{
		___MinimumServoAngle_10 = value;
	}

	inline static int32_t get_offset_of_MaximumServoAngle_11() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___MaximumServoAngle_11)); }
	inline float get_MaximumServoAngle_11() const { return ___MaximumServoAngle_11; }
	inline float* get_address_of_MaximumServoAngle_11() { return &___MaximumServoAngle_11; }
	inline void set_MaximumServoAngle_11(float value)
	{
		___MaximumServoAngle_11 = value;
	}

	inline static int32_t get_offset_of_TimeBetweenUpdates_12() { return static_cast<int32_t>(offsetof(NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1, ___TimeBetweenUpdates_12)); }
	inline float get_TimeBetweenUpdates_12() const { return ___TimeBetweenUpdates_12; }
	inline float* get_address_of_TimeBetweenUpdates_12() { return &___TimeBetweenUpdates_12; }
	inline void set_TimeBetweenUpdates_12(float value)
	{
		___TimeBetweenUpdates_12 = value;
	}
};


// SampleCustomDelimiter
struct SampleCustomDelimiter_t6EC605F99E30A4CBF9153612C8C7EF323A4632E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SerialControllerCustomDelimiter SampleCustomDelimiter::serialController
	SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * ___serialController_4;

public:
	inline static int32_t get_offset_of_serialController_4() { return static_cast<int32_t>(offsetof(SampleCustomDelimiter_t6EC605F99E30A4CBF9153612C8C7EF323A4632E1, ___serialController_4)); }
	inline SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * get_serialController_4() const { return ___serialController_4; }
	inline SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 ** get_address_of_serialController_4() { return &___serialController_4; }
	inline void set_serialController_4(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * value)
	{
		___serialController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialController_4), (void*)value);
	}
};


// SampleMessageListener
struct SampleMessageListener_t037BACA19C3242EBCCDCFCD3F78BCB66E278B093  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SampleTearDown
struct SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SerialController SampleTearDown::serialController
	SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * ___serialController_4;

public:
	inline static int32_t get_offset_of_serialController_4() { return static_cast<int32_t>(offsetof(SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65, ___serialController_4)); }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * get_serialController_4() const { return ___serialController_4; }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 ** get_address_of_serialController_4() { return &___serialController_4; }
	inline void set_serialController_4(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * value)
	{
		___serialController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialController_4), (void*)value);
	}
};


// SampleUserPolling_JustRead
struct SampleUserPolling_JustRead_tF0C05FD03AE65652B4479C98D08CD6BDDC6EB16D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SerialController SampleUserPolling_JustRead::serialController
	SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * ___serialController_4;

public:
	inline static int32_t get_offset_of_serialController_4() { return static_cast<int32_t>(offsetof(SampleUserPolling_JustRead_tF0C05FD03AE65652B4479C98D08CD6BDDC6EB16D, ___serialController_4)); }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * get_serialController_4() const { return ___serialController_4; }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 ** get_address_of_serialController_4() { return &___serialController_4; }
	inline void set_serialController_4(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * value)
	{
		___serialController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialController_4), (void*)value);
	}
};


// SampleUserPolling_ReadWrite
struct SampleUserPolling_ReadWrite_tCD2411A4DBA5411327308178E02BA7D5DDB20E2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SerialController SampleUserPolling_ReadWrite::serialController
	SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * ___serialController_4;

public:
	inline static int32_t get_offset_of_serialController_4() { return static_cast<int32_t>(offsetof(SampleUserPolling_ReadWrite_tCD2411A4DBA5411327308178E02BA7D5DDB20E2D, ___serialController_4)); }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * get_serialController_4() const { return ___serialController_4; }
	inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 ** get_address_of_serialController_4() { return &___serialController_4; }
	inline void set_serialController_4(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * value)
	{
		___serialController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialController_4), (void*)value);
	}
};


// SerialController
struct SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SerialController::portName
	String_t* ___portName_4;
	// System.Int32 SerialController::baudRate
	int32_t ___baudRate_5;
	// UnityEngine.GameObject SerialController::messageListener
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___messageListener_6;
	// System.Int32 SerialController::reconnectionDelay
	int32_t ___reconnectionDelay_7;
	// System.Int32 SerialController::maxUnreadMessages
	int32_t ___maxUnreadMessages_8;
	// System.Threading.Thread SerialController::thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_11;
	// SerialThreadLines SerialController::serialThread
	SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * ___serialThread_12;
	// SerialController/TearDownFunction SerialController::userDefinedTearDownFunction
	TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * ___userDefinedTearDownFunction_13;

public:
	inline static int32_t get_offset_of_portName_4() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___portName_4)); }
	inline String_t* get_portName_4() const { return ___portName_4; }
	inline String_t** get_address_of_portName_4() { return &___portName_4; }
	inline void set_portName_4(String_t* value)
	{
		___portName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_4), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_5() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___baudRate_5)); }
	inline int32_t get_baudRate_5() const { return ___baudRate_5; }
	inline int32_t* get_address_of_baudRate_5() { return &___baudRate_5; }
	inline void set_baudRate_5(int32_t value)
	{
		___baudRate_5 = value;
	}

	inline static int32_t get_offset_of_messageListener_6() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___messageListener_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_messageListener_6() const { return ___messageListener_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_messageListener_6() { return &___messageListener_6; }
	inline void set_messageListener_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___messageListener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageListener_6), (void*)value);
	}

	inline static int32_t get_offset_of_reconnectionDelay_7() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___reconnectionDelay_7)); }
	inline int32_t get_reconnectionDelay_7() const { return ___reconnectionDelay_7; }
	inline int32_t* get_address_of_reconnectionDelay_7() { return &___reconnectionDelay_7; }
	inline void set_reconnectionDelay_7(int32_t value)
	{
		___reconnectionDelay_7 = value;
	}

	inline static int32_t get_offset_of_maxUnreadMessages_8() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___maxUnreadMessages_8)); }
	inline int32_t get_maxUnreadMessages_8() const { return ___maxUnreadMessages_8; }
	inline int32_t* get_address_of_maxUnreadMessages_8() { return &___maxUnreadMessages_8; }
	inline void set_maxUnreadMessages_8(int32_t value)
	{
		___maxUnreadMessages_8 = value;
	}

	inline static int32_t get_offset_of_thread_11() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_thread_11() const { return ___thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_thread_11() { return &___thread_11; }
	inline void set_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thread_11), (void*)value);
	}

	inline static int32_t get_offset_of_serialThread_12() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___serialThread_12)); }
	inline SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * get_serialThread_12() const { return ___serialThread_12; }
	inline SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 ** get_address_of_serialThread_12() { return &___serialThread_12; }
	inline void set_serialThread_12(SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * value)
	{
		___serialThread_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialThread_12), (void*)value);
	}

	inline static int32_t get_offset_of_userDefinedTearDownFunction_13() { return static_cast<int32_t>(offsetof(SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8, ___userDefinedTearDownFunction_13)); }
	inline TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * get_userDefinedTearDownFunction_13() const { return ___userDefinedTearDownFunction_13; }
	inline TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 ** get_address_of_userDefinedTearDownFunction_13() { return &___userDefinedTearDownFunction_13; }
	inline void set_userDefinedTearDownFunction_13(TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * value)
	{
		___userDefinedTearDownFunction_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userDefinedTearDownFunction_13), (void*)value);
	}
};


// SerialControllerCustomDelimiter
struct SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SerialControllerCustomDelimiter::portName
	String_t* ___portName_4;
	// System.Int32 SerialControllerCustomDelimiter::baudRate
	int32_t ___baudRate_5;
	// UnityEngine.GameObject SerialControllerCustomDelimiter::messageListener
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___messageListener_6;
	// System.Int32 SerialControllerCustomDelimiter::reconnectionDelay
	int32_t ___reconnectionDelay_7;
	// System.Int32 SerialControllerCustomDelimiter::maxUnreadMessages
	int32_t ___maxUnreadMessages_8;
	// System.Byte SerialControllerCustomDelimiter::separator
	uint8_t ___separator_9;
	// System.Threading.Thread SerialControllerCustomDelimiter::thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread_10;
	// SerialThreadBinaryDelimited SerialControllerCustomDelimiter::serialThread
	SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * ___serialThread_11;
	// SerialControllerCustomDelimiter/TearDownFunction SerialControllerCustomDelimiter::userDefinedTearDownFunction
	TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * ___userDefinedTearDownFunction_12;

public:
	inline static int32_t get_offset_of_portName_4() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___portName_4)); }
	inline String_t* get_portName_4() const { return ___portName_4; }
	inline String_t** get_address_of_portName_4() { return &___portName_4; }
	inline void set_portName_4(String_t* value)
	{
		___portName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_4), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_5() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___baudRate_5)); }
	inline int32_t get_baudRate_5() const { return ___baudRate_5; }
	inline int32_t* get_address_of_baudRate_5() { return &___baudRate_5; }
	inline void set_baudRate_5(int32_t value)
	{
		___baudRate_5 = value;
	}

	inline static int32_t get_offset_of_messageListener_6() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___messageListener_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_messageListener_6() const { return ___messageListener_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_messageListener_6() { return &___messageListener_6; }
	inline void set_messageListener_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___messageListener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageListener_6), (void*)value);
	}

	inline static int32_t get_offset_of_reconnectionDelay_7() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___reconnectionDelay_7)); }
	inline int32_t get_reconnectionDelay_7() const { return ___reconnectionDelay_7; }
	inline int32_t* get_address_of_reconnectionDelay_7() { return &___reconnectionDelay_7; }
	inline void set_reconnectionDelay_7(int32_t value)
	{
		___reconnectionDelay_7 = value;
	}

	inline static int32_t get_offset_of_maxUnreadMessages_8() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___maxUnreadMessages_8)); }
	inline int32_t get_maxUnreadMessages_8() const { return ___maxUnreadMessages_8; }
	inline int32_t* get_address_of_maxUnreadMessages_8() { return &___maxUnreadMessages_8; }
	inline void set_maxUnreadMessages_8(int32_t value)
	{
		___maxUnreadMessages_8 = value;
	}

	inline static int32_t get_offset_of_separator_9() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___separator_9)); }
	inline uint8_t get_separator_9() const { return ___separator_9; }
	inline uint8_t* get_address_of_separator_9() { return &___separator_9; }
	inline void set_separator_9(uint8_t value)
	{
		___separator_9 = value;
	}

	inline static int32_t get_offset_of_thread_10() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___thread_10)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_thread_10() const { return ___thread_10; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_thread_10() { return &___thread_10; }
	inline void set_thread_10(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___thread_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thread_10), (void*)value);
	}

	inline static int32_t get_offset_of_serialThread_11() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___serialThread_11)); }
	inline SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * get_serialThread_11() const { return ___serialThread_11; }
	inline SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 ** get_address_of_serialThread_11() { return &___serialThread_11; }
	inline void set_serialThread_11(SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * value)
	{
		___serialThread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialThread_11), (void*)value);
	}

	inline static int32_t get_offset_of_userDefinedTearDownFunction_12() { return static_cast<int32_t>(offsetof(SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97, ___userDefinedTearDownFunction_12)); }
	inline TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * get_userDefinedTearDownFunction_12() const { return ___userDefinedTearDownFunction_12; }
	inline TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 ** get_address_of_userDefinedTearDownFunction_12() { return &___userDefinedTearDownFunction_12; }
	inline void set_userDefinedTearDownFunction_12(TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * value)
	{
		___userDefinedTearDownFunction_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userDefinedTearDownFunction_12), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7_gshared (Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Array::FindIndex<System.Byte>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___count2, Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F * ___match3, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127 (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * __this, const RuntimeMethod* method);
// System.Collections.Queue System.Collections.Queue::Synchronized(System.Collections.Queue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * Queue_Synchronized_mA9CA40DB67D666C3A89D7954BC5257D619CB612D (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___queue0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void AbstractSerialThread::AttemptConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_AttemptConnection_m0F9A94EDC80F52C30D26F0B36053A192286336CC (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method);
// System.Void AbstractSerialThread::RunOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_RunOnce_mDD22770C35A0C0659DA322F679E0078442DCA528 (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method);
// System.Boolean AbstractSerialThread::IsStopRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbstractSerialThread_IsStopRequested_mB997F6485FDAD5784F906C71EEED3C7F16C724BE (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void AbstractSerialThread::CloseDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_CloseDevice_m563BFD9F36DFB6DDF90F39A69EDB7D423AD797DF (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort__ctor_m464EB123CC799E2A34D958656E746086028AC1DD (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, String_t* ___portName0, int32_t ___baudRate1, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::set_ReadTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_set_ReadTimeout_mD5EC3B8F392013DDBB2331064ABD232486B4C012 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::set_WriteTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_set_WriteTimeout_m7171124A4C69BAAE27EAF1F7B6436A9E75DD23BA (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Close_m288C294F0F4AF5508E932492937DFCD348AB9C34 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Collections.IEnumerator NatureVRScentController::UpdateScentStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NatureVRScentController_UpdateScentStrength_m1899932C28D37A5D752A10B6650DA8AC7609CD31 (NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void NatureVRScentController/<UpdateScentStrength>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateScentStrengthU3Ed__10__ctor_m20B7CE54FBA1EB0C369A1242380E6FA25D2C8095 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SerialControllerCustomDelimiter>()
inline SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * GameObject_GetComponent_TisSerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97_mBAA038A62BFB9D33C6108E733261D9F9209AA0A1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void SerialControllerCustomDelimiter::SendSerialMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter_SendSerialMessage_mB018716678B3C93157C40590F0417F84BB5DCE2A (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___message0, const RuntimeMethod* method);
// System.Byte[] SerialControllerCustomDelimiter::ReadSerialMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SerialControllerCustomDelimiter_ReadSerialMessage_m405223AA5DABF9084A81E0C8C286B1C8196A9B4C (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SerialController>()
inline SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void SerialController/TearDownFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction__ctor_m25A32BE13BB372A575FAB4FAB400C7032406F434 (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SerialController::SetTearDownFunction(SerialController/TearDownFunction)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerialController_SetTearDownFunction_mCD8878A05176846BAC66C5CAF54D5C497365EF71_inline (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * ___userFunction0, const RuntimeMethod* method);
// System.Void SerialController::SendSerialMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String SerialController::ReadSerialMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialController_ReadSerialMessage_m6BF82B7970F35E311CA6B106D4952737E60C1717 (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, const RuntimeMethod* method);
// System.Void SerialThreadLines::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThreadLines__ctor_mFAEDC02279FC49C9D42C97686570180FDEDB73CC (SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void SerialController/TearDownFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction_Invoke_m6D27CBCFF20CFE4377BD8E6609EBE0985AFA95BB (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, const RuntimeMethod* method);
// System.Void AbstractSerialThread::RequestStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_RequestStop_m8F372AB98941190383B232C5D741B1A57FDA0E2F (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Object AbstractSerialThread::ReadMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractSerialThread_ReadMessage_m27F6B545FE4543D7F8D4826DFD2DD9E8AA0D5A6E (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void AbstractSerialThread::SendMessage(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_SendMessage_m277D6EFA09EF2DEA541F86E086642ABC3CBF828B (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void SerialThreadBinaryDelimited::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThreadBinaryDelimited__ctor_m830ACD4C919B249DBD2EDEDED7DB597312A449AE (SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, uint8_t ___separator4, const RuntimeMethod* method);
// System.Void SerialControllerCustomDelimiter/TearDownFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction_Invoke_m076CC4C88FABC003EC5E42F0617A0A77897A2375 (TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * __this, const RuntimeMethod* method);
// System.Void AbstractSerialThread::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread__ctor_m77F4043EACDE7AAB07CBAF9AC488F8C3C8ECE1E4 (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, bool ___enqueueStatusMessages4, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Write_m469005350037D93FBCF5298061475EE016B52CED (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 System.IO.Ports.SerialPort::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerialPort_Read_mC1DA790E4D458C2844FD2F5AB7F9A245CB7956CF (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7 (Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Array::FindIndex<System.Byte>(!!0[],System.Int32,System.Int32,System.Predicate`1<!!0>)
inline int32_t Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___count2, Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F * ___match3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F *, const RuntimeMethod*))Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00_gshared)(___array0, ___startIndex1, ___count2, ___match3, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_WriteLine_mECD69616D6D0AF92B2A04202536F6B4FAE85BA46 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.String System.IO.Ports.SerialPort::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Void AbstractSerialThread::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread__ctor_m77F4043EACDE7AAB07CBAF9AC488F8C3C8ECE1E4 (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, bool ___enqueueStatusMessages4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AbstractSerialThread(string portName,
		//                             int baudRate,
		//                             int delayBeforeReconnecting,
		//                             int maxUnreadMessages,
		//                             bool enqueueStatusMessages)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.portName = portName;
		String_t* L_0 = ___portName0;
		__this->set_portName_0(L_0);
		// this.baudRate = baudRate;
		int32_t L_1 = ___baudRate1;
		__this->set_baudRate_1(L_1);
		// this.delayBeforeReconnecting = delayBeforeReconnecting;
		int32_t L_2 = ___delayBeforeReconnecting2;
		__this->set_delayBeforeReconnecting_2(L_2);
		// this.maxUnreadMessages = maxUnreadMessages;
		int32_t L_3 = ___maxUnreadMessages3;
		__this->set_maxUnreadMessages_3(L_3);
		// this.enqueueStatusMessages = enqueueStatusMessages;
		bool L_4 = ___enqueueStatusMessages4;
		__this->set_enqueueStatusMessages_10(L_4);
		// inputQueue = Queue.Synchronized(new Queue());
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_5 = (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 *)il2cpp_codegen_object_new(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127(L_5, /*hidden argument*/NULL);
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_6;
		L_6 = Queue_Synchronized_mA9CA40DB67D666C3A89D7954BC5257D619CB612D(L_5, /*hidden argument*/NULL);
		__this->set_inputQueue_7(L_6);
		// outputQueue = Queue.Synchronized(new Queue());
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_7 = (Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 *)il2cpp_codegen_object_new(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_il2cpp_TypeInfo_var);
		Queue__ctor_m9844D111CC69802C62565C05109A2557FD21C127(L_7, /*hidden argument*/NULL);
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_8;
		L_8 = Queue_Synchronized_mA9CA40DB67D666C3A89D7954BC5257D619CB612D(L_7, /*hidden argument*/NULL);
		__this->set_outputQueue_8(L_8);
		// }
		return;
	}
}
// System.Void AbstractSerialThread::RequestStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_RequestStop_m8F372AB98941190383B232C5D741B1A57FDA0E2F (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// stopRequested = true;
		__this->set_stopRequested_9((bool)1);
		// }
		IL2CPP_LEAVE(0x1F, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			bool L_1 = V_1;
			if (!L_1)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * L_2 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_2, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Object AbstractSerialThread::ReadMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractSerialThread_ReadMessage_m27F6B545FE4543D7F8D4826DFD2DD9E8AA0D5A6E (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	{
		// if (inputQueue.Count == 0)
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = __this->get_inputQueue_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_000f:
	{
		// return inputQueue.Dequeue();
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_2 = __this->get_inputQueue_7();
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker0< RuntimeObject * >::Invoke(14 /* System.Object System.Collections.Queue::Dequeue() */, L_2);
		return L_3;
	}
}
// System.Void AbstractSerialThread::SendMessage(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_SendMessage_m277D6EFA09EF2DEA541F86E086642ABC3CBF828B (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, RuntimeObject * ___message0, const RuntimeMethod* method)
{
	{
		// outputQueue.Enqueue(message);
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = __this->get_outputQueue_8();
		RuntimeObject * L_1 = ___message0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(12 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void AbstractSerialThread::RunForever()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_RunForever_mA6563110F862DC797F9B3A7AF28624E0B77A14B4 (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0067;
		}

IL_0002:
		{
		}

IL_0003:
		try
		{ // begin try (depth: 2)
			{
				// AttemptConnection();
				AbstractSerialThread_AttemptConnection_m0F9A94EDC80F52C30D26F0B36053A192286336CC(__this, /*hidden argument*/NULL);
				goto IL_0011;
			}

IL_000b:
			{
				// RunOnce();
				AbstractSerialThread_RunOnce_mDD22770C35A0C0659DA322F679E0078442DCA528(__this, /*hidden argument*/NULL);
			}

IL_0011:
			{
				// while (!IsStopRequested())
				bool L_0;
				L_0 = AbstractSerialThread_IsStopRequested_mB997F6485FDAD5784F906C71EEED3C7F16C724BE(__this, /*hidden argument*/NULL);
				if (!L_0)
				{
					goto IL_000b;
				}
			}

IL_0019:
			{
				// }
				goto IL_0067;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_001b;
			}
			throw e;
		}

CATCH_001b:
		{ // begin catch(System.Exception)
			{
				// catch (Exception ioe)
				V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// Debug.LogWarning("Exception: " + ioe.Message + " StackTrace: " + ioe.StackTrace);
				Exception_t * L_1 = V_0;
				NullCheck(L_1);
				String_t* L_2;
				L_2 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
				Exception_t * L_3 = V_0;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_3);
				String_t* L_5;
				L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA95898025CC11DF26437FBBC4B43CA5F697F5DB1)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF2545B44F913F714F64637B65F8A8B9B5256D80)), L_4, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
				// if (enqueueStatusMessages)
				bool L_6 = __this->get_enqueueStatusMessages_10();
				if (!L_6)
				{
					goto IL_0054;
				}
			}

IL_0044:
			{
				// inputQueue.Enqueue(SerialController.SERIAL_DEVICE_DISCONNECTED);
				Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_7 = __this->get_inputQueue_7();
				NullCheck(L_7);
				VirtActionInvoker1< RuntimeObject * >::Invoke(12 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6)));
			}

IL_0054:
			{
				// CloseDevice();
				AbstractSerialThread_CloseDevice_m563BFD9F36DFB6DDF90F39A69EDB7D423AD797DF(__this, /*hidden argument*/NULL);
				// Thread.Sleep(delayBeforeReconnecting);
				int32_t L_8 = __this->get_delayBeforeReconnecting_2();
				Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(L_8, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0067;
			}
		} // end catch (depth: 2)

IL_0067:
		{
			// while (!IsStopRequested())
			bool L_9;
			L_9 = AbstractSerialThread_IsStopRequested_mB997F6485FDAD5784F906C71EEED3C7F16C724BE(__this, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0002;
			}
		}

IL_006f:
		{
			goto IL_0088;
		}

IL_0071:
		{
			// SendToWire(outputQueue.Dequeue(), serialPort);
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_10 = __this->get_outputQueue_8();
			NullCheck(L_10);
			RuntimeObject * L_11;
			L_11 = VirtFuncInvoker0< RuntimeObject * >::Invoke(14 /* System.Object System.Collections.Queue::Dequeue() */, L_10);
			SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_12 = __this->get_serialPort_4();
			VirtActionInvoker2< RuntimeObject *, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * >::Invoke(4 /* System.Void AbstractSerialThread::SendToWire(System.Object,System.IO.Ports.SerialPort) */, __this, L_11, L_12);
		}

IL_0088:
		{
			// while (outputQueue.Count != 0)
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_13 = __this->get_outputQueue_8();
			NullCheck(L_13);
			int32_t L_14;
			L_14 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Collections.Queue::get_Count() */, L_13);
			if (L_14)
			{
				goto IL_0071;
			}
		}

IL_0095:
		{
			// CloseDevice();
			AbstractSerialThread_CloseDevice_m563BFD9F36DFB6DDF90F39A69EDB7D423AD797DF(__this, /*hidden argument*/NULL);
			// }
			goto IL_00c0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009d;
		}
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError("Unknown exception: " + e.Message + " " + e.StackTrace);
		Exception_t * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_15);
		Exception_t * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B8444B8284A5F8B6D925131602695FE8FE915FC)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_19, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c0;
	} // end catch (depth: 1)

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void AbstractSerialThread::AttemptConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_AttemptConnection_m0F9A94EDC80F52C30D26F0B36053A192286336CC (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialPort = new SerialPort(portName, baudRate);
		String_t* L_0 = __this->get_portName_0();
		int32_t L_1 = __this->get_baudRate_1();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 *)il2cpp_codegen_object_new(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		SerialPort__ctor_m464EB123CC799E2A34D958656E746086028AC1DD(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_serialPort_4(L_2);
		// serialPort.ReadTimeout = readTimeout;
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serialPort_4();
		NullCheck(L_3);
		SerialPort_set_ReadTimeout_mD5EC3B8F392013DDBB2331064ABD232486B4C012(L_3, ((int32_t)100), /*hidden argument*/NULL);
		// serialPort.WriteTimeout = writeTimeout;
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_4 = __this->get_serialPort_4();
		NullCheck(L_4);
		SerialPort_set_WriteTimeout_m7171124A4C69BAAE27EAF1F7B6436A9E75DD23BA(L_4, ((int32_t)100), /*hidden argument*/NULL);
		// serialPort.Open();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_5 = __this->get_serialPort_4();
		NullCheck(L_5);
		SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63(L_5, /*hidden argument*/NULL);
		// if (enqueueStatusMessages)
		bool L_6 = __this->get_enqueueStatusMessages_10();
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// inputQueue.Enqueue(SerialController.SERIAL_DEVICE_CONNECTED);
		Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_7 = __this->get_inputQueue_7();
		NullCheck(L_7);
		VirtActionInvoker1< RuntimeObject * >::Invoke(12 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_7, _stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void AbstractSerialThread::CloseDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_CloseDevice_m563BFD9F36DFB6DDF90F39A69EDB7D423AD797DF (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (serialPort == null)
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serialPort_4();
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
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// serialPort.Close();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serialPort_4();
		NullCheck(L_1);
		SerialPort_Close_m288C294F0F4AF5508E932492937DFCD348AB9C34(L_1, /*hidden argument*/NULL);
		// }
		goto IL_001a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.IO.IOException)
		// catch (IOException)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001a;
	} // end catch (depth: 1)

IL_001a:
	{
		// serialPort = null;
		__this->set_serialPort_4((SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 *)NULL);
		// }
		return;
	}
}
// System.Boolean AbstractSerialThread::IsStopRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbstractSerialThread_IsStopRequested_mB997F6485FDAD5784F906C71EEED3C7F16C724BE (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * L_0 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// return stopRequested;
		bool L_1 = __this->get_stopRequested_9();
		V_2 = L_1;
		IL2CPP_LEAVE(0x1F, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * L_3 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		}

IL_001e:
		{
			IL2CPP_END_FINALLY(21)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// }
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Void AbstractSerialThread::RunOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractSerialThread_RunOnce_mDD22770C35A0C0659DA322F679E0078442DCA528 (AbstractSerialThread_tF163251444411DF144017D7664839779A1EAA82A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38CDED0A385ADF7F0E5E7231366D2692A3BBD419);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (outputQueue.Count != 0)
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_0 = __this->get_outputQueue_8();
			NullCheck(L_0);
			int32_t L_1;
			L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
			if (!L_1)
			{
				goto IL_0024;
			}
		}

IL_000d:
		{
			// SendToWire(outputQueue.Dequeue(), serialPort);
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_2 = __this->get_outputQueue_8();
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = VirtFuncInvoker0< RuntimeObject * >::Invoke(14 /* System.Object System.Collections.Queue::Dequeue() */, L_2);
			SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_4 = __this->get_serialPort_4();
			VirtActionInvoker2< RuntimeObject *, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * >::Invoke(4 /* System.Void AbstractSerialThread::SendToWire(System.Object,System.IO.Ports.SerialPort) */, __this, L_3, L_4);
		}

IL_0024:
		{
			// object inputMessage = ReadFromWire(serialPort);
			SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_5 = __this->get_serialPort_4();
			RuntimeObject * L_6;
			L_6 = VirtFuncInvoker1< RuntimeObject *, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * >::Invoke(5 /* System.Object AbstractSerialThread::ReadFromWire(System.IO.Ports.SerialPort) */, __this, L_5);
			V_0 = L_6;
			// if (inputMessage != null)
			RuntimeObject * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0070;
			}
		}

IL_0034:
		{
			// if (inputQueue.Count < maxUnreadMessages)
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_8 = __this->get_inputQueue_7();
			NullCheck(L_8);
			int32_t L_9;
			L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Collections.Queue::get_Count() */, L_8);
			int32_t L_10 = __this->get_maxUnreadMessages_3();
			if ((((int32_t)L_9) >= ((int32_t)L_10)))
			{
				goto IL_0055;
			}
		}

IL_0047:
		{
			// inputQueue.Enqueue(inputMessage);
			Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * L_11 = __this->get_inputQueue_7();
			RuntimeObject * L_12 = V_0;
			NullCheck(L_11);
			VirtActionInvoker1< RuntimeObject * >::Invoke(12 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_11, L_12);
			// }
			goto IL_0070;
		}

IL_0055:
		{
			// Debug.LogWarning("Queue is full. Dropping message: " + inputMessage);
			RuntimeObject * L_13 = V_0;
			G_B6_0 = _stringLiteral38CDED0A385ADF7F0E5E7231366D2692A3BBD419;
			if (L_13)
			{
				G_B7_0 = _stringLiteral38CDED0A385ADF7F0E5E7231366D2692A3BBD419;
				goto IL_0060;
			}
		}

IL_005d:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_0;
			goto IL_0066;
		}

IL_0060:
		{
			RuntimeObject * L_14 = V_0;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
			G_B8_0 = L_15;
			G_B8_1 = G_B7_0;
		}

IL_0066:
		{
			String_t* L_16;
			L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B8_1, G_B8_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_16, /*hidden argument*/NULL);
		}

IL_0070:
		{
			// }
			goto IL_0075;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0072;
		}
		throw e;
	}

CATCH_0072:
	{ // begin catch(System.TimeoutException)
		// catch (TimeoutException)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0075;
	} // end catch (depth: 1)

IL_0075:
	{
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
// System.Void NatureVRScentController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureVRScentController_Start_mB0535DEFBD8002491212C2F49C9E01380B000BEA (NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(UpdateScentStrength());
		RuntimeObject* L_0;
		L_0 = NatureVRScentController_UpdateScentStrength_m1899932C28D37A5D752A10B6650DA8AC7609CD31(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NatureVRScentController::UpdateScentStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NatureVRScentController_UpdateScentStrength_m1899932C28D37A5D752A10B6650DA8AC7609CD31 (NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * L_0 = (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 *)il2cpp_codegen_object_new(U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627_il2cpp_TypeInfo_var);
		U3CUpdateScentStrengthU3Ed__10__ctor_m20B7CE54FBA1EB0C369A1242380E6FA25D2C8095(L_0, 0, /*hidden argument*/NULL);
		U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void NatureVRScentController::OnMessageArrived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureVRScentController_OnMessageArrived_m407BF144DFB08231407FB8F74C46641F9D081565 (NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E41FABAF67F868C32F24B03666CF77B4220386C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Received serial message: {msg}");
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9E41FABAF67F868C32F24B03666CF77B4220386C, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NatureVRScentController::OnConnectionEvent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureVRScentController_OnConnectionEvent_m3D825106104AFD21995128E2FCB04233A2DD3DB9 (NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D192706721899A3199F9973664A097379C1F0F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87FF6D0218D1F266FA978BFEDCA4D92606F7D87);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (success)
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Found the microbit!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9D192706721899A3199F9973664A097379C1F0F5, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		// Debug.Log("Did not find the microbit.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE87FF6D0218D1F266FA978BFEDCA4D92606F7D87, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NatureVRScentController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatureVRScentController__ctor_m288F9AE545C436427A913820832A8362F09AB857 (NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * __this, const RuntimeMethod* method)
{
	{
		// public float ScentRadius = 1;
		__this->set_ScentRadius_8((1.0f));
		// public float MaximumScentRadius = 0.25f;
		__this->set_MaximumScentRadius_9((0.25f));
		// public float MaximumServoAngle = 180;
		__this->set_MaximumServoAngle_11((180.0f));
		// public float TimeBetweenUpdates = 0.2f;
		__this->set_TimeBetweenUpdates_12((0.200000003f));
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
// System.Void SampleCustomDelimiter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCustomDelimiter_Start_mFBE03D1AAAC9833795AC88F27257108186B37D5D (SampleCustomDelimiter_t6EC605F99E30A4CBF9153612C8C7EF323A4632E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97_mBAA038A62BFB9D33C6108E733261D9F9209AA0A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA880D971D3C88798C0CBDF78C6C9FE65932F630E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialController = GameObject.Find("SerialController").GetComponent<SerialControllerCustomDelimiter>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * L_1;
		L_1 = GameObject_GetComponent_TisSerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97_mBAA038A62BFB9D33C6108E733261D9F9209AA0A1(L_0, /*hidden argument*/GameObject_GetComponent_TisSerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97_mBAA038A62BFB9D33C6108E733261D9F9209AA0A1_RuntimeMethod_var);
		__this->set_serialController_4(L_1);
		// Debug.Log("Press the SPACEBAR to execute some action");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA880D971D3C88798C0CBDF78C6C9FE65932F630E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleCustomDelimiter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCustomDelimiter_Update_m37635334013666BF1647E6F319805C6F9BBAFEB8 (SampleCustomDelimiter_t6EC605F99E30A4CBF9153612C8C7EF323A4632E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A0AE7C00BCC17B460E1759C9034D20D06A38CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral584A90F99D1720D30308E4A515077FB664C97F52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10ED381609F280F557DA6725BE0375C0E759723);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	StringBuilder_t * G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	StringBuilder_t * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log("Sending some action");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB10ED381609F280F557DA6725BE0375C0E759723, /*hidden argument*/NULL);
		// serialController.SendSerialMessage(new byte[] { 65, 32 });
		SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * L_1 = __this->get_serialController_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)65));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)32));
		NullCheck(L_1);
		SerialControllerCustomDelimiter_SendSerialMessage_mB018716678B3C93157C40590F0417F84BB5DCE2A(L_1, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// byte[] message = serialController.ReadSerialMessage();
		SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * L_5 = __this->get_serialController_4();
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = SerialControllerCustomDelimiter_ReadSerialMessage_m405223AA5DABF9084A81E0C8C286B1C8196A9B4C(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (message == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		// return;
		return;
	}

IL_003e:
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		// foreach (byte b in message)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		V_2 = L_9;
		V_3 = 0;
		goto IL_006d;
	}

IL_004a:
	{
		// foreach (byte b in message)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// sb.AppendFormat("(#{0}={1})    ", b, (char)b);
		StringBuilder_t * L_14 = V_1;
		uint8_t L_15 = V_4;
		uint8_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_16);
		uint8_t L_18 = V_4;
		Il2CppChar L_19 = ((Il2CppChar)L_18);
		RuntimeObject * L_20 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_14);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_AppendFormat_m37B348187DD9186C2451ACCA3DBC4ABCD4632AD4(L_14, _stringLiteral1A0AE7C00BCC17B460E1759C9034D20D06A38CB9, L_17, L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006d:
	{
		// foreach (byte b in message)
		int32_t L_23 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// Debug.Log("Received some bytes, printing their ascii codes: " + sb);
		StringBuilder_t * L_25 = V_1;
		StringBuilder_t * L_26 = L_25;
		G_B8_0 = L_26;
		G_B8_1 = _stringLiteral584A90F99D1720D30308E4A515077FB664C97F52;
		if (L_26)
		{
			G_B9_0 = L_26;
			G_B9_1 = _stringLiteral584A90F99D1720D30308E4A515077FB664C97F52;
			goto IL_0080;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_1;
		goto IL_0085;
	}

IL_0080:
	{
		NullCheck(G_B9_0);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
		G_B10_0 = L_27;
		G_B10_1 = G_B9_1;
	}

IL_0085:
	{
		String_t* L_28;
		L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleCustomDelimiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCustomDelimiter__ctor_m176768559BCDEADC73D0B9B6AC6CEDAF5005205E (SampleCustomDelimiter_t6EC605F99E30A4CBF9153612C8C7EF323A4632E1 * __this, const RuntimeMethod* method)
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
// System.Void SampleMessageListener::OnMessageArrived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleMessageListener_OnMessageArrived_m774847642607AD21C2243BFF2C195AFA57B9B089 (SampleMessageListener_t037BACA19C3242EBCCDCFCD3F78BCB66E278B093 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Message arrived: " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleMessageListener::OnConnectionEvent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleMessageListener_OnConnectionEvent_mEE2284A66D1202D683E06EDB51EA30A51B8F0FC0 (SampleMessageListener_t037BACA19C3242EBCCDCFCD3F78BCB66E278B093 * __this, bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (success)
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Connection established");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		// Debug.Log("Connection attempt failed or disconnection detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleMessageListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleMessageListener__ctor_mBE380D1A3DADFF5E7F36A80C25BA99D5D378B97F (SampleMessageListener_t037BACA19C3242EBCCDCFCD3F78BCB66E278B093 * __this, const RuntimeMethod* method)
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
// System.Void SampleTearDown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTearDown_Start_m180F34A160FE7C163A4CA716807CBECAC10DA4F9 (SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleTearDown_lightsShutdown_m161B6A397D7DD00C6A18ED3162CCD401A13A67B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47D72218FE863254FDDAE70213C99C10963BDB1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialController = GameObject.Find("SerialController").GetComponent<SerialController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_1;
		L_1 = GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F(L_0, /*hidden argument*/GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var);
		__this->set_serialController_4(L_1);
		// serialController.SetTearDownFunction(lightsShutdown);
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_2 = __this->get_serialController_4();
		TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * L_3 = (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 *)il2cpp_codegen_object_new(TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430_il2cpp_TypeInfo_var);
		TearDownFunction__ctor_m25A32BE13BB372A575FAB4FAB400C7032406F434(L_3, __this, (intptr_t)((intptr_t)SampleTearDown_lightsShutdown_m161B6A397D7DD00C6A18ED3162CCD401A13A67B8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		SerialController_SetTearDownFunction_mCD8878A05176846BAC66C5CAF54D5C497365EF71_inline(L_2, L_3, /*hidden argument*/NULL);
		// Debug.Log("Press 1 or 2 to execute some actions");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral47D72218FE863254FDDAE70213C99C10963BDB1A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleTearDown::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTearDown_Update_m0ED7B36E78F224608AC535DD342225156A17E094 (SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E767BE8CC5CE53415CE9A95BA3E058B72163B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F35E736C198E5CCE3ACC36B8A4BFCBAF384D38E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Keypad1))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)257), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}

IL_0015:
	{
		// Debug.Log("Sending lights ON");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F35E736C198E5CCE3ACC36B8A4BFCBAF384D38E, /*hidden argument*/NULL);
		// serialController.SendSerialMessage("1");
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_2 = __this->get_serialController_4();
		NullCheck(L_2);
		SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2) || Input.GetKeyDown(KeyCode.Keypad2))
		bool L_3;
		L_3 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)258), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}

IL_0044:
	{
		// Debug.Log("Sending lights OFF");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral647E767BE8CC5CE53415CE9A95BA3E058B72163B, /*hidden argument*/NULL);
		// serialController.SendSerialMessage("2");
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_5 = __this->get_serialController_4();
		NullCheck(L_5);
		SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D(L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// string message = serialController.ReadSerialMessage();
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_6 = __this->get_serialController_4();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = SerialController_ReadSerialMessage_m6BF82B7970F35E311CA6B106D4952737E60C1717(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (message == null)
		String_t* L_8 = V_0;
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		// return;
		return;
	}

IL_006e:
	{
		// if (ReferenceEquals(message, SerialController.SERIAL_DEVICE_CONNECTED))
		String_t* L_9 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(String_t*)_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93))))
		{
			goto IL_0081;
		}
	}
	{
		// Debug.Log("Connection established");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4, /*hidden argument*/NULL);
		return;
	}

IL_0081:
	{
		// else if (ReferenceEquals(message, SerialController.SERIAL_DEVICE_DISCONNECTED))
		String_t* L_10 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(String_t*)_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6))))
		{
			goto IL_0094;
		}
	}
	{
		// Debug.Log("Connection attempt failed or disconnection detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359, /*hidden argument*/NULL);
		return;
	}

IL_0094:
	{
		// Debug.Log("Message arrived: " + message);
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleTearDown::lightsShutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTearDown_lightsShutdown_m161B6A397D7DD00C6A18ED3162CCD401A13A67B8 (SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE57BC9ADF1EF0EBB91F8D3C649AF190FE16B9664);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Executing teardown");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE57BC9ADF1EF0EBB91F8D3C649AF190FE16B9664, /*hidden argument*/NULL);
		// serialController.SendSerialMessage("X");
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_0 = __this->get_serialController_4();
		NullCheck(L_0);
		SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D(L_0, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleTearDown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleTearDown__ctor_m35D5D88584DF3842DA6A399B6E55D02CDD9CEDE8 (SampleTearDown_t86DE1AB6416CD2964308D641CD29D19813DBDC65 * __this, const RuntimeMethod* method)
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
// System.Void SampleUserPolling_JustRead::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleUserPolling_JustRead_Start_m7A1AF5BF3EF69224756401AC11333DCE551BE6C8 (SampleUserPolling_JustRead_tF0C05FD03AE65652B4479C98D08CD6BDDC6EB16D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialController = GameObject.Find("SerialController").GetComponent<SerialController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_1;
		L_1 = GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F(L_0, /*hidden argument*/GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var);
		__this->set_serialController_4(L_1);
		// }
		return;
	}
}
// System.Void SampleUserPolling_JustRead::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleUserPolling_JustRead_Update_mFF2F9F8A3FE29EA35D602C09A43471AD4DE492D5 (SampleUserPolling_JustRead_tF0C05FD03AE65652B4479C98D08CD6BDDC6EB16D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string message = serialController.ReadSerialMessage();
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_0 = __this->get_serialController_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SerialController_ReadSerialMessage_m6BF82B7970F35E311CA6B106D4952737E60C1717(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (message == null)
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (ReferenceEquals(message, SerialController.SERIAL_DEVICE_CONNECTED))
		String_t* L_3 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_3) == ((RuntimeObject*)(String_t*)_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93))))
		{
			goto IL_0023;
		}
	}
	{
		// Debug.Log("Connection established");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	{
		// else if (ReferenceEquals(message, SerialController.SERIAL_DEVICE_DISCONNECTED))
		String_t* L_4 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(String_t*)_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6))))
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log("Connection attempt failed or disconnection detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		// Debug.Log("Message arrived: " + message);
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleUserPolling_JustRead::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleUserPolling_JustRead__ctor_mDFF76B4B99C9464C48FEB4F8BA77235EE02C41FC (SampleUserPolling_JustRead_tF0C05FD03AE65652B4479C98D08CD6BDDC6EB16D * __this, const RuntimeMethod* method)
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
// System.Void SampleUserPolling_ReadWrite::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleUserPolling_ReadWrite_Start_m0FEB649DD883A33D77FC1F37A7B7AC5E11F13D3F (SampleUserPolling_ReadWrite_tCD2411A4DBA5411327308178E02BA7D5DDB20E2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B3DCEF09EF381AAC70739B4FE4A25BFF9E9AD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialController = GameObject.Find("SerialController").GetComponent<SerialController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1AAF30FF8468684F4CF52D49C9F4EA26FFE6E38E, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_1;
		L_1 = GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F(L_0, /*hidden argument*/GameObject_GetComponent_TisSerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8_mCB7622F63D1DABCE459D08C0218097659C79E52F_RuntimeMethod_var);
		__this->set_serialController_4(L_1);
		// Debug.Log("Press A or Z to execute some actions");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC7B3DCEF09EF381AAC70739B4FE4A25BFF9E9AD9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleUserPolling_ReadWrite::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleUserPolling_ReadWrite_Update_m9501B56D99386FC03A6DA8B5122FFD58CC35953F (SampleUserPolling_ReadWrite_tCD2411A4DBA5411327308178E02BA7D5DDB20E2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663DF191A148DEE7D9373C191F0145203C5C5B2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA99D5B8CE94B378A1872A71F428182909A82DAC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.Log("Sending A");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral663DF191A148DEE7D9373C191F0145203C5C5B2A, /*hidden argument*/NULL);
		// serialController.SendSerialMessage("A");
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_1 = __this->get_serialController_4();
		NullCheck(L_1);
		SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D(L_1, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if (Input.GetKeyDown(KeyCode.Z))
		bool L_2;
		L_2 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)122), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.Log("Sending Z");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA99D5B8CE94B378A1872A71F428182909A82DAC0, /*hidden argument*/NULL);
		// serialController.SendSerialMessage("Z");
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_3 = __this->get_serialController_4();
		NullCheck(L_3);
		SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D(L_3, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// string message = serialController.ReadSerialMessage();
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_4 = __this->get_serialController_4();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = SerialController_ReadSerialMessage_m6BF82B7970F35E311CA6B106D4952737E60C1717(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (message == null)
		String_t* L_6 = V_0;
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// return;
		return;
	}

IL_0056:
	{
		// if (ReferenceEquals(message, SerialController.SERIAL_DEVICE_CONNECTED))
		String_t* L_7 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_7) == ((RuntimeObject*)(String_t*)_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93))))
		{
			goto IL_0069;
		}
	}
	{
		// Debug.Log("Connection established");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5474341FCEE6D5B26D027013F8DF1A70609C94E4, /*hidden argument*/NULL);
		return;
	}

IL_0069:
	{
		// else if (ReferenceEquals(message, SerialController.SERIAL_DEVICE_DISCONNECTED))
		String_t* L_8 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(String_t*)_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6))))
		{
			goto IL_007c;
		}
	}
	{
		// Debug.Log("Connection attempt failed or disconnection detected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7695D43F2EA72BB38B657E4FD3394559C26E0359, /*hidden argument*/NULL);
		return;
	}

IL_007c:
	{
		// Debug.Log("Message arrived: " + message);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0FAE987D9D9D8CCFEE20161AF268A660A15ABCA1, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SampleUserPolling_ReadWrite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleUserPolling_ReadWrite__ctor_m2F936B5DF4744E055527E78272026A300FD02008 (SampleUserPolling_ReadWrite_tCD2411A4DBA5411327308178E02BA7D5DDB20E2D * __this, const RuntimeMethod* method)
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
// System.Void SerialController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_OnEnable_m02B636DA0C9FE8E1727009219D894954F04671C1 (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractSerialThread_RunForever_mA6563110F862DC797F9B3A7AF28624E0B77A14B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialThread = new SerialThreadLines(portName,
		//                                      baudRate,
		//                                      reconnectionDelay,
		//                                      maxUnreadMessages);
		String_t* L_0 = __this->get_portName_4();
		int32_t L_1 = __this->get_baudRate_5();
		int32_t L_2 = __this->get_reconnectionDelay_7();
		int32_t L_3 = __this->get_maxUnreadMessages_8();
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_4 = (SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 *)il2cpp_codegen_object_new(SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0_il2cpp_TypeInfo_var);
		SerialThreadLines__ctor_mFAEDC02279FC49C9D42C97686570180FDEDB73CC(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_serialThread_12(L_4);
		// thread = new Thread(new ThreadStart(serialThread.RunForever));
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_5 = __this->get_serialThread_12();
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_6 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_6, L_5, (intptr_t)((intptr_t)AbstractSerialThread_RunForever_mA6563110F862DC797F9B3A7AF28624E0B77A14B4_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_7 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_7, L_6, /*hidden argument*/NULL);
		__this->set_thread_11(L_7);
		// thread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = __this->get_thread_11();
		NullCheck(L_8);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_OnDisable_m5C1D8744A90D9FEAF9CE252AC4ED6DE166886290 (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, const RuntimeMethod* method)
{
	{
		// if (userDefinedTearDownFunction != null)
		TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * L_0 = __this->get_userDefinedTearDownFunction_13();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userDefinedTearDownFunction();
		TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * L_1 = __this->get_userDefinedTearDownFunction_13();
		NullCheck(L_1);
		TearDownFunction_Invoke_m6D27CBCFF20CFE4377BD8E6609EBE0985AFA95BB(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (serialThread != null)
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_2 = __this->get_serialThread_12();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// serialThread.RequestStop();
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_3 = __this->get_serialThread_12();
		NullCheck(L_3);
		AbstractSerialThread_RequestStop_m8F372AB98941190383B232C5D741B1A57FDA0E2F(L_3, /*hidden argument*/NULL);
		// serialThread = null;
		__this->set_serialThread_12((SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 *)NULL);
	}

IL_002d:
	{
		// if (thread != null)
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = __this->get_thread_11();
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// thread.Join();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = __this->get_thread_11();
		NullCheck(L_5);
		Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5(L_5, /*hidden argument*/NULL);
		// thread = null;
		__this->set_thread_11((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void SerialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_Update_mAA0D2FDBCEF79475B166C0E23479428D402630DD (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC90675720878D46F93645562C85A92311A90E1F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0204B0F91E27DCD1E56015482FB2B522CC48EF0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (messageListener == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_messageListener_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// string message = (string)serialThread.ReadMessage();
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_2 = __this->get_serialThread_12();
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = AbstractSerialThread_ReadMessage_m27F6B545FE4543D7F8D4826DFD2DD9E8AA0D5A6E(L_2, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		// if (message == null)
		String_t* L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// if (ReferenceEquals(message, SERIAL_DEVICE_CONNECTED))
		String_t* L_5 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_5) == ((RuntimeObject*)(String_t*)_stringLiteralC1DF5389064264A99D3AE8DB68A9F2F546D37C93))))
		{
			goto IL_0043;
		}
	}
	{
		// messageListener.SendMessage("OnConnectionEvent", true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_messageListener_6();
		bool L_7 = ((bool)1);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_6, _stringLiteralD0204B0F91E27DCD1E56015482FB2B522CC48EF0, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		// else if (ReferenceEquals(message, SERIAL_DEVICE_DISCONNECTED))
		String_t* L_9 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(String_t*)_stringLiteral3CCE3E2D591FAA5D6D21B540EE22DB980E058BC6))))
		{
			goto IL_0062;
		}
	}
	{
		// messageListener.SendMessage("OnConnectionEvent", false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_messageListener_6();
		bool L_11 = ((bool)0);
		RuntimeObject * L_12 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_10, _stringLiteralD0204B0F91E27DCD1E56015482FB2B522CC48EF0, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0062:
	{
		// messageListener.SendMessage("OnMessageArrived", message);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_messageListener_6();
		String_t* L_14 = V_0;
		NullCheck(L_13);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_13, _stringLiteralC90675720878D46F93645562C85A92311A90E1F0, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String SerialController::ReadSerialMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialController_ReadSerialMessage_m6BF82B7970F35E311CA6B106D4952737E60C1717 (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (string)serialThread.ReadMessage();
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_0 = __this->get_serialThread_12();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = AbstractSerialThread_ReadMessage_m27F6B545FE4543D7F8D4826DFD2DD9E8AA0D5A6E(L_0, /*hidden argument*/NULL);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void SerialController::SendSerialMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// serialThread.SendMessage(message);
		SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * L_0 = __this->get_serialThread_12();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		AbstractSerialThread_SendMessage_m277D6EFA09EF2DEA541F86E086642ABC3CBF828B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialController::SetTearDownFunction(SerialController/TearDownFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetTearDownFunction_mCD8878A05176846BAC66C5CAF54D5C497365EF71 (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * ___userFunction0, const RuntimeMethod* method)
{
	{
		// this.userDefinedTearDownFunction = userFunction;
		TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * L_0 = ___userFunction0;
		__this->set_userDefinedTearDownFunction_13(L_0);
		// }
		return;
	}
}
// System.Void SerialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController__ctor_m115F8996EC393522FFF4C39A511DCCA594EA3B80 (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string portName = "COM3";
		__this->set_portName_4(_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		// public int baudRate = 9600;
		__this->set_baudRate_5(((int32_t)9600));
		// public int reconnectionDelay = 1000;
		__this->set_reconnectionDelay_7(((int32_t)1000));
		// public int maxUnreadMessages = 1;
		__this->set_maxUnreadMessages_8(1);
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
// System.Void SerialControllerCustomDelimiter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter_OnEnable_mB62DDCC86B1DF76A9FE2B8E376093969ADBEC548 (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractSerialThread_RunForever_mA6563110F862DC797F9B3A7AF28624E0B77A14B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialThread = new SerialThreadBinaryDelimited(portName,
		//                                                baudRate,
		//                                                reconnectionDelay,
		//                                                maxUnreadMessages,
		//                                                separator);
		String_t* L_0 = __this->get_portName_4();
		int32_t L_1 = __this->get_baudRate_5();
		int32_t L_2 = __this->get_reconnectionDelay_7();
		int32_t L_3 = __this->get_maxUnreadMessages_8();
		uint8_t L_4 = __this->get_separator_9();
		SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * L_5 = (SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 *)il2cpp_codegen_object_new(SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15_il2cpp_TypeInfo_var);
		SerialThreadBinaryDelimited__ctor_m830ACD4C919B249DBD2EDEDED7DB597312A449AE(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_serialThread_11(L_5);
		// thread = new Thread(new ThreadStart(serialThread.RunForever));
		SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * L_6 = __this->get_serialThread_11();
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_7 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_7, L_6, (intptr_t)((intptr_t)AbstractSerialThread_RunForever_mA6563110F862DC797F9B3A7AF28624E0B77A14B4_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_8, L_7, /*hidden argument*/NULL);
		__this->set_thread_10(L_8);
		// thread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = __this->get_thread_10();
		NullCheck(L_9);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialControllerCustomDelimiter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter_OnDisable_m8E9102B9EB172F5EEEE68C2B9C818131CDF6975D (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, const RuntimeMethod* method)
{
	{
		// if (userDefinedTearDownFunction != null)
		TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * L_0 = __this->get_userDefinedTearDownFunction_12();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userDefinedTearDownFunction();
		TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * L_1 = __this->get_userDefinedTearDownFunction_12();
		NullCheck(L_1);
		TearDownFunction_Invoke_m076CC4C88FABC003EC5E42F0617A0A77897A2375(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (serialThread != null)
		SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * L_2 = __this->get_serialThread_11();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// serialThread.RequestStop();
		SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * L_3 = __this->get_serialThread_11();
		NullCheck(L_3);
		AbstractSerialThread_RequestStop_m8F372AB98941190383B232C5D741B1A57FDA0E2F(L_3, /*hidden argument*/NULL);
		// serialThread = null;
		__this->set_serialThread_11((SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 *)NULL);
	}

IL_002d:
	{
		// if (thread != null)
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = __this->get_thread_10();
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// thread.Join();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = __this->get_thread_10();
		NullCheck(L_5);
		Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5(L_5, /*hidden argument*/NULL);
		// thread = null;
		__this->set_thread_10((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void SerialControllerCustomDelimiter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter_Update_mB86D0234D7F9F073A8F01A402FC5FC231A6B67E9 (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC90675720878D46F93645562C85A92311A90E1F0);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (messageListener == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_messageListener_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// byte[] message = ReadSerialMessage();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = SerialControllerCustomDelimiter_ReadSerialMessage_m405223AA5DABF9084A81E0C8C286B1C8196A9B4C(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (message == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// messageListener.SendMessage("OnMessageArrived", message);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_messageListener_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_4);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_4, _stringLiteralC90675720878D46F93645562C85A92311A90E1F0, (RuntimeObject *)(RuntimeObject *)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte[] SerialControllerCustomDelimiter::ReadSerialMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SerialControllerCustomDelimiter_ReadSerialMessage_m405223AA5DABF9084A81E0C8C286B1C8196A9B4C (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (byte[]) serialThread.ReadMessage();
		SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * L_0 = __this->get_serialThread_11();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = AbstractSerialThread_ReadMessage_m27F6B545FE4543D7F8D4826DFD2DD9E8AA0D5A6E(L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}
}
// System.Void SerialControllerCustomDelimiter::SendSerialMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter_SendSerialMessage_mB018716678B3C93157C40590F0417F84BB5DCE2A (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___message0, const RuntimeMethod* method)
{
	{
		// serialThread.SendMessage(message);
		SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * L_0 = __this->get_serialThread_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___message0;
		NullCheck(L_0);
		AbstractSerialThread_SendMessage_m277D6EFA09EF2DEA541F86E086642ABC3CBF828B(L_0, (RuntimeObject *)(RuntimeObject *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialControllerCustomDelimiter::SetTearDownFunction(SerialControllerCustomDelimiter/TearDownFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter_SetTearDownFunction_m73A16575E16BEFB7565BDACAE95E716AB381114F (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * ___userFunction0, const RuntimeMethod* method)
{
	{
		// this.userDefinedTearDownFunction = userFunction;
		TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * L_0 = ___userFunction0;
		__this->set_userDefinedTearDownFunction_12(L_0);
		// }
		return;
	}
}
// System.Void SerialControllerCustomDelimiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialControllerCustomDelimiter__ctor_m66365E4801830A98D9F5A96742B95A8DCB46C679 (SerialControllerCustomDelimiter_t8B829EC18F56D3EF857BDE1C9E0FE7FB30199C97 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string portName = "COM3";
		__this->set_portName_4(_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		// public int baudRate = 9600;
		__this->set_baudRate_5(((int32_t)9600));
		// public int reconnectionDelay = 1000;
		__this->set_reconnectionDelay_7(((int32_t)1000));
		// public int maxUnreadMessages = 1;
		__this->set_maxUnreadMessages_8(1);
		// public byte separator = 90;
		__this->set_separator_9((uint8_t)((int32_t)90));
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
// System.Void SerialThread::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThread__ctor_mD629B9E45E9E4380A6A498C5D2E63102564A6570 (SerialThread_t74C80B99350726FD879A783C97143422563C11D9 * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, const RuntimeMethod* method)
{
	{
		// : base(portName, baudRate, delayBeforeReconnecting, maxUnreadMessages)
		String_t* L_0 = ___portName0;
		int32_t L_1 = ___baudRate1;
		int32_t L_2 = ___delayBeforeReconnecting2;
		int32_t L_3 = ___maxUnreadMessages3;
		SerialThreadLines__ctor_mFAEDC02279FC49C9D42C97686570180FDEDB73CC(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void SerialThreadBinaryDelimited::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThreadBinaryDelimited__ctor_m830ACD4C919B249DBD2EDEDED7DB597312A449AE (SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, uint8_t ___separator4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] buffer = new byte[1024];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_buffer_12(L_0);
		// : base(portName, baudRate, delayBeforeReconnecting, maxUnreadMessages, false)
		String_t* L_1 = ___portName0;
		int32_t L_2 = ___baudRate1;
		int32_t L_3 = ___delayBeforeReconnecting2;
		int32_t L_4 = ___maxUnreadMessages3;
		AbstractSerialThread__ctor_m77F4043EACDE7AAB07CBAF9AC488F8C3C8ECE1E4(__this, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		// this.separator = separator;
		uint8_t L_5 = ___separator4;
		__this->set_separator_11(L_5);
		// }
		return;
	}
}
// System.Void SerialThreadBinaryDelimited::SendToWire(System.Object,System.IO.Ports.SerialPort)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThreadBinaryDelimited_SendToWire_m90DF47C3BE604E683D075D00DC683D627E63BE37 (SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * __this, RuntimeObject * ___message0, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPort1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] binaryMessage = (byte[])message;
		RuntimeObject * L_0 = ___message0;
		V_0 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
		// serialPort.Write(binaryMessage, 0, binaryMessage.Length);
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = ___serialPort1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		NullCheck(L_3);
		NullCheck(L_1);
		SerialPort_Write_m469005350037D93FBCF5298061475EE016B52CED(L_1, L_2, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object SerialThreadBinaryDelimited::ReadFromWire(System.IO.Ports.SerialPort)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerialThreadBinaryDelimited_ReadFromWire_mE5D30C70522D38C29F35D5ABEEAC4E82F59C14B2 (SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * __this, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPort0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialThreadBinaryDelimited_IsSeparator_mCE769604985F138F46A61717DFB893158B2D9901_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// bufferUsed += serialPort.Read(buffer, bufferUsed, buffer.Length - bufferUsed);
		int32_t L_0 = __this->get_bufferUsed_13();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = ___serialPort0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buffer_12();
		int32_t L_3 = __this->get_bufferUsed_13();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_buffer_12();
		NullCheck(L_4);
		int32_t L_5 = __this->get_bufferUsed_13();
		NullCheck(L_1);
		int32_t L_6;
		L_6 = SerialPort_Read_mC1DA790E4D458C2844FD2F5AB7F9A245CB7956CF(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5)), /*hidden argument*/NULL);
		__this->set_bufferUsed_13(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_6)));
		// int index = System.Array.FindIndex<byte>(buffer, 0, bufferUsed, IsSeparator);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_buffer_12();
		int32_t L_8 = __this->get_bufferUsed_13();
		Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F * L_9 = (Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F *)il2cpp_codegen_object_new(Predicate_1_t842A4F020A7223F89AAD26B7AD9110DCAD811E0F_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7(L_9, __this, (intptr_t)((intptr_t)SerialThreadBinaryDelimited_IsSeparator_mCE769604985F138F46A61717DFB893158B2D9901_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mEEABA867E10FB48EA9EA4247C413B26E0356A8C7_RuntimeMethod_var);
		int32_t L_10;
		L_10 = Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00(L_7, 0, L_8, L_9, /*hidden argument*/Array_FindIndex_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B454C11631939E3A181BB15B16C7478BDABDD00_RuntimeMethod_var);
		V_0 = L_10;
		// if (index == -1)
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0053;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0053:
	{
		// byte[] returnBuffer = new byte[index];
		int32_t L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_1 = L_13;
		// System.Array.Copy(buffer, returnBuffer, index);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_buffer_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_1;
		int32_t L_16 = V_0;
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_14, (RuntimeArray *)(RuntimeArray *)L_15, L_16, /*hidden argument*/NULL);
		// System.Array.Copy(buffer, index + 1, buffer, 0, bufferUsed - index);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_buffer_12();
		int32_t L_18 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_buffer_12();
		int32_t L_20 = __this->get_bufferUsed_13();
		int32_t L_21 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		// bufferUsed -= index + 1;
		int32_t L_22 = __this->get_bufferUsed_13();
		int32_t L_23 = V_0;
		__this->set_bufferUsed_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)))));
		// return returnBuffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_1;
		return (RuntimeObject *)L_24;
	}
}
// System.Boolean SerialThreadBinaryDelimited::IsSeparator(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialThreadBinaryDelimited_IsSeparator_mCE769604985F138F46A61717DFB893158B2D9901 (SerialThreadBinaryDelimited_t6DF91AC5F5A4C2EE6DDE1F7902AFEB1EFA901B15 * __this, uint8_t ___aByte0, const RuntimeMethod* method)
{
	{
		// return aByte == separator;
		uint8_t L_0 = ___aByte0;
		uint8_t L_1 = __this->get_separator_11();
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
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
// System.Void SerialThreadLines::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThreadLines__ctor_mFAEDC02279FC49C9D42C97686570180FDEDB73CC (SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___delayBeforeReconnecting2, int32_t ___maxUnreadMessages3, const RuntimeMethod* method)
{
	{
		// : base(portName, baudRate, delayBeforeReconnecting, maxUnreadMessages, true)
		String_t* L_0 = ___portName0;
		int32_t L_1 = ___baudRate1;
		int32_t L_2 = ___delayBeforeReconnecting2;
		int32_t L_3 = ___maxUnreadMessages3;
		AbstractSerialThread__ctor_m77F4043EACDE7AAB07CBAF9AC488F8C3C8ECE1E4(__this, L_0, L_1, L_2, L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialThreadLines::SendToWire(System.Object,System.IO.Ports.SerialPort)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialThreadLines_SendToWire_m54D27BB34AF8321EE8192E4FA569F0B6DA71A7A9 (SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * __this, RuntimeObject * ___message0, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPort1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialPort.WriteLine((string) message);
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = ___serialPort1;
		RuntimeObject * L_1 = ___message0;
		NullCheck(L_0);
		SerialPort_WriteLine_mECD69616D6D0AF92B2A04202536F6B4FAE85BA46(L_0, ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Object SerialThreadLines::ReadFromWire(System.IO.Ports.SerialPort)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerialThreadLines_ReadFromWire_m76F9C63A6F30F5D5B5C65401550ADFC9F42D0A95 (SerialThreadLines_tBB62CCFEF5D3BA698B11F8D67F88ACE576D40DA0 * __this, SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPort0, const RuntimeMethod* method)
{
	{
		// return serialPort.ReadLine();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = ___serialPort0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE(L_0, /*hidden argument*/NULL);
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
// System.Void NatureVRScentController/<UpdateScentStrength>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateScentStrengthU3Ed__10__ctor_m20B7CE54FBA1EB0C369A1242380E6FA25D2C8095 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NatureVRScentController/<UpdateScentStrength>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateScentStrengthU3Ed__10_System_IDisposable_Dispose_mF2B1CF17D70CCD802D02C5597D63AE1EE3505415 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NatureVRScentController/<UpdateScentStrength>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateScentStrengthU3Ed__10_MoveNext_m6AC5A451D289028BD01187E2D0B92C5E7F335DB0 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDA8DFFE6003ADA97961913403F7D92C5D6B7E0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_7 = NULL;
	int32_t V_8 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0170;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0021:
	{
		// Vector3 playerHeadPosition = PlayerHead.transform.position;
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4->get_PlayerHead_5();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// float lavenderScentStrength = 0;
		V_3 = (0.0f);
		// float cedarScentStrength = 0;
		V_4 = (0.0f);
		// foreach (var collider in LavenderColliders)
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_8 = V_1;
		NullCheck(L_8);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_9 = L_8->get_LavenderColliders_6();
		V_7 = L_9;
		V_8 = 0;
		goto IL_008d;
	}

IL_004c:
	{
		// foreach (var collider in LavenderColliders)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_10 = V_7;
		int32_t L_11 = V_8;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// Vector3 closestPoint = collider.ClosestPoint(playerHeadPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_2;
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676(L_13, L_14, /*hidden argument*/NULL);
		V_9 = L_15;
		// float scentDistance = Vector3.Distance(playerHeadPosition, closestPoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_9;
		float L_18;
		L_18 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_17, /*hidden argument*/NULL);
		V_10 = L_18;
		// lavenderScentStrength += Mathf.Max(0, (ScentRadius - scentDistance) / (ScentRadius - MaximumScentRadius));
		float L_19 = V_3;
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_ScentRadius_8();
		float L_22 = V_10;
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->get_ScentRadius_8();
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->get_MaximumScentRadius_9();
		float L_27;
		L_27 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))/(float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)))), /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_add((float)L_19, (float)L_27));
		int32_t L_28 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008d:
	{
		// foreach (var collider in LavenderColliders)
		int32_t L_29 = V_8;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_30 = V_7;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		// foreach (var collider in CedarColliders)
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_31 = V_1;
		NullCheck(L_31);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_32 = L_31->get_CedarColliders_7();
		V_7 = L_32;
		V_8 = 0;
		goto IL_00e5;
	}

IL_00a2:
	{
		// foreach (var collider in CedarColliders)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_33 = V_7;
		int32_t L_34 = V_8;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		// Vector3 closestPoint = collider.ClosestPoint(playerHeadPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_2;
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676(L_36, L_37, /*hidden argument*/NULL);
		V_11 = L_38;
		// float scentDistance = Vector3.Distance(playerHeadPosition, closestPoint);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_11;
		float L_41;
		L_41 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_39, L_40, /*hidden argument*/NULL);
		V_12 = L_41;
		// cedarScentStrength += Mathf.Max(0, (ScentRadius - scentDistance) / (ScentRadius - MaximumScentRadius));
		float L_42 = V_4;
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_43 = V_1;
		NullCheck(L_43);
		float L_44 = L_43->get_ScentRadius_8();
		float L_45 = V_12;
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_46 = V_1;
		NullCheck(L_46);
		float L_47 = L_46->get_ScentRadius_8();
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_48 = V_1;
		NullCheck(L_48);
		float L_49 = L_48->get_MaximumScentRadius_9();
		float L_50;
		L_50 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0f), ((float)((float)((float)il2cpp_codegen_subtract((float)L_44, (float)L_45))/(float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_49)))), /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_add((float)L_42, (float)L_50));
		int32_t L_51 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00e5:
	{
		// foreach (var collider in CedarColliders)
		int32_t L_52 = V_8;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_53 = V_7;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		// float lavenderServoAngle = Mathf.Lerp(MinimumServoAngle, MaximumServoAngle, lavenderScentStrength);
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_54 = V_1;
		NullCheck(L_54);
		float L_55 = L_54->get_MinimumServoAngle_10();
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_56 = V_1;
		NullCheck(L_56);
		float L_57 = L_56->get_MaximumServoAngle_11();
		float L_58 = V_3;
		float L_59;
		L_59 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_55, L_57, L_58, /*hidden argument*/NULL);
		V_5 = L_59;
		// float cedarServoAngle = Mathf.Lerp(MaximumServoAngle, MinimumServoAngle, cedarScentStrength);
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_60 = V_1;
		NullCheck(L_60);
		float L_61 = L_60->get_MaximumServoAngle_11();
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_62 = V_1;
		NullCheck(L_62);
		float L_63 = L_62->get_MinimumServoAngle_10();
		float L_64 = V_4;
		float L_65;
		L_65 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_61, L_63, L_64, /*hidden argument*/NULL);
		V_6 = L_65;
		// Debug.Log($"Setting lavender: {lavenderServoAngle}, cedar: {cedarServoAngle}");
		float L_66 = V_5;
		float L_67 = L_66;
		RuntimeObject * L_68 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_67);
		float L_69 = V_6;
		float L_70 = L_69;
		RuntimeObject * L_71 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_70);
		String_t* L_72;
		L_72 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9CDA8DFFE6003ADA97961913403F7D92C5D6B7E0, L_68, L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_72, /*hidden argument*/NULL);
		// SerialController.SendSerialMessage($"{lavenderServoAngle},{cedarServoAngle}");
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_73 = V_1;
		NullCheck(L_73);
		SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * L_74 = L_73->get_SerialController_4();
		float L_75 = V_5;
		float L_76 = L_75;
		RuntimeObject * L_77 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_76);
		float L_78 = V_6;
		float L_79 = L_78;
		RuntimeObject * L_80 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_79);
		String_t* L_81;
		L_81 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_77, L_80, /*hidden argument*/NULL);
		NullCheck(L_74);
		SerialController_SendSerialMessage_m1965AD379D75A46668699FE18AC4A9332E5CA35D(L_74, L_81, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(TimeBetweenUpdates);
		NatureVRScentController_t55F912D5565C59BDC8CCC9E4C07F2FEA2473A5B1 * L_82 = V_1;
		NullCheck(L_82);
		float L_83 = L_82->get_TimeBetweenUpdates_12();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_84 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_84, L_83, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_84);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0170:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0021;
	}
}
// System.Object NatureVRScentController/<UpdateScentStrength>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateScentStrengthU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4F81CD4B5E45BBED698D57953AD351388EDFA45 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NatureVRScentController/<UpdateScentStrength>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateScentStrengthU3Ed__10_System_Collections_IEnumerator_Reset_m91711EB77F06926B4C5D53A427C1D497F257B312 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateScentStrengthU3Ed__10_System_Collections_IEnumerator_Reset_m91711EB77F06926B4C5D53A427C1D497F257B312_RuntimeMethod_var)));
	}
}
// System.Object NatureVRScentController/<UpdateScentStrength>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateScentStrengthU3Ed__10_System_Collections_IEnumerator_get_Current_m6701BB5850B6F201F234C48FB2B468475CBA3744 (U3CUpdateScentStrengthU3Ed__10_t0CAC842A65C8CC3EF5EE2718E040022CD997E627 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SerialController/TearDownFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction__ctor_m25A32BE13BB372A575FAB4FAB400C7032406F434 (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SerialController/TearDownFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction_Invoke_m6D27CBCFF20CFE4377BD8E6609EBE0985AFA95BB (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SerialController/TearDownFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TearDownFunction_BeginInvoke_m8BEAE4B05EB400382754CC0ECE84123C4BE444F3 (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void SerialController/TearDownFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction_EndInvoke_m947B62A71645B26653CADE4E19284D39F7CB8569 (TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 (TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SerialControllerCustomDelimiter/TearDownFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction__ctor_m7DF525040B6AA341E60135B9F3D43C9538035C0F (TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SerialControllerCustomDelimiter/TearDownFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction_Invoke_m076CC4C88FABC003EC5E42F0617A0A77897A2375 (TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SerialControllerCustomDelimiter/TearDownFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TearDownFunction_BeginInvoke_mF7F2E065F318006373A42F9934CE0724467EF7D4 (TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void SerialControllerCustomDelimiter/TearDownFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TearDownFunction_EndInvoke_m37C3139E3B0D64E6CFD62DA922F3AB54B8D55BC1 (TearDownFunction_tBDDA091813293F35EAEF647945B77B7971D651B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerialController_SetTearDownFunction_mCD8878A05176846BAC66C5CAF54D5C497365EF71_inline (SerialController_t1796DDEB65A161F19A0E6945CB136AB8D7D817A8 * __this, TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * ___userFunction0, const RuntimeMethod* method)
{
	{
		// this.userDefinedTearDownFunction = userFunction;
		TearDownFunction_t00B8EFAA404143E337F360B883FD8FD7E8ADA430 * L_0 = ___userFunction0;
		__this->set_userDefinedTearDownFunction_13(L_0);
		// }
		return;
	}
}
