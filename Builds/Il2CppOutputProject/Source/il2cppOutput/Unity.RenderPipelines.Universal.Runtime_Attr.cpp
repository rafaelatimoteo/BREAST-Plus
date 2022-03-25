#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566;
// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// UnityEngine.Rendering.ReloadAttribute
struct ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549;
// UnityEngine.Rendering.ReloadGroupAttribute
struct ReloadGroupAttribute_t883DDBD9B1C8E1751B7D842EEF0D719316BB73DF;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C 
{
public:
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::className
	String_t* ___className_0;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpace
	String_t* ___nameSpace_1;
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assembly
	String_t* ___assembly_2;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::classHasChanged
	bool ___classHasChanged_3;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::nameSpaceHasChanged
	bool ___nameSpaceHasChanged_4;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::assemblyHasChanged
	bool ___assemblyHasChanged_5;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttributeData::autoUdpateAPI
	bool ___autoUdpateAPI_6;

public:
	inline static int32_t get_offset_of_className_0() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___className_0)); }
	inline String_t* get_className_0() const { return ___className_0; }
	inline String_t** get_address_of_className_0() { return &___className_0; }
	inline void set_className_0(String_t* value)
	{
		___className_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___className_0), (void*)value);
	}

	inline static int32_t get_offset_of_nameSpace_1() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___nameSpace_1)); }
	inline String_t* get_nameSpace_1() const { return ___nameSpace_1; }
	inline String_t** get_address_of_nameSpace_1() { return &___nameSpace_1; }
	inline void set_nameSpace_1(String_t* value)
	{
		___nameSpace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameSpace_1), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_2() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___assembly_2)); }
	inline String_t* get_assembly_2() const { return ___assembly_2; }
	inline String_t** get_address_of_assembly_2() { return &___assembly_2; }
	inline void set_assembly_2(String_t* value)
	{
		___assembly_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_2), (void*)value);
	}

	inline static int32_t get_offset_of_classHasChanged_3() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___classHasChanged_3)); }
	inline bool get_classHasChanged_3() const { return ___classHasChanged_3; }
	inline bool* get_address_of_classHasChanged_3() { return &___classHasChanged_3; }
	inline void set_classHasChanged_3(bool value)
	{
		___classHasChanged_3 = value;
	}

	inline static int32_t get_offset_of_nameSpaceHasChanged_4() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___nameSpaceHasChanged_4)); }
	inline bool get_nameSpaceHasChanged_4() const { return ___nameSpaceHasChanged_4; }
	inline bool* get_address_of_nameSpaceHasChanged_4() { return &___nameSpaceHasChanged_4; }
	inline void set_nameSpaceHasChanged_4(bool value)
	{
		___nameSpaceHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_assemblyHasChanged_5() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___assemblyHasChanged_5)); }
	inline bool get_assemblyHasChanged_5() const { return ___assemblyHasChanged_5; }
	inline bool* get_address_of_assemblyHasChanged_5() { return &___assemblyHasChanged_5; }
	inline void set_assemblyHasChanged_5(bool value)
	{
		___assemblyHasChanged_5 = value;
	}

	inline static int32_t get_offset_of_autoUdpateAPI_6() { return static_cast<int32_t>(offsetof(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C, ___autoUdpateAPI_6)); }
	inline bool get_autoUdpateAPI_6() const { return ___autoUdpateAPI_6; }
	inline bool* get_address_of_autoUdpateAPI_6() { return &___autoUdpateAPI_6; }
	inline void set_autoUdpateAPI_6(bool value)
	{
		___autoUdpateAPI_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshaled_pinvoke
{
	char* ___className_0;
	char* ___nameSpace_1;
	char* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};
// Native definition for COM marshalling of UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
struct MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C_marshaled_com
{
	Il2CppChar* ___className_0;
	Il2CppChar* ___nameSpace_1;
	Il2CppChar* ___assembly_2;
	int32_t ___classHasChanged_3;
	int32_t ___nameSpaceHasChanged_4;
	int32_t ___assemblyHasChanged_5;
	int32_t ___autoUdpateAPI_6;
};

// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Rendering.ReloadAttribute
struct ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Rendering.ReloadGroupAttribute
struct ReloadGroupAttribute_t883DDBD9B1C8E1751B7D842EEF0D719316BB73DF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// UnityEngine.Scripting.APIUpdating.MovedFromAttributeData UnityEngine.Scripting.APIUpdating.MovedFromAttribute::data
	MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8, ___data_0)); }
	inline MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C  get_data_0() const { return ___data_0; }
	inline MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(MovedFromAttributeData_tD215FAE7C2C99058DABB245C5A5EC95AEF05533C  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___className_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___nameSpace_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___assembly_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.RuntimeInitializeLoadType
struct RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ReloadAttribute/Package
struct Package_t5ED80E5582BC02015428E3B30D2A3E5406EA320D 
{
public:
	// System.Int32 UnityEngine.Rendering.ReloadAttribute/Package::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Package_t5ED80E5582BC02015428E3B30D2A3E5406EA320D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D  : public PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::m_LoadType
	int32_t ___m_LoadType_0;

public:
	inline static int32_t get_offset_of_m_LoadType_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D, ___m_LoadType_0)); }
	inline int32_t get_m_LoadType_0() const { return ___m_LoadType_0; }
	inline int32_t* get_address_of_m_LoadType_0() { return &___m_LoadType_0; }
	inline void set_m_LoadType_0(int32_t value)
	{
		___m_LoadType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ReloadGroupAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReloadGroupAttribute__ctor_mF83BF3A57C0748622CAEBE19AF3AAF71644D9182 (ReloadGroupAttribute_t883DDBD9B1C8E1751B7D842EEF0D719316BB73DF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.ReloadAttribute::.ctor(System.String,UnityEngine.Rendering.ReloadAttribute/Package)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReloadAttribute__ctor_m2E08031EE210D9BB6448BDE0AB604DD98BAD4E4D (ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549 * __this, String_t* ___path0, int32_t ___package1, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.APIUpdating.MovedFromAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovedFromAttribute__ctor_mA4B2632CE3004A3E0EA8E1241736518320806568 (MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8 * __this, String_t* ___sourceNamespace0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor(UnityEngine.RuntimeInitializeLoadType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516 (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * __this, int32_t ___loadType0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * __this, const RuntimeMethod* method);
static void Unity_RenderPipelines_Universal_Runtime_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x65\x6E\x64\x65\x72\x50\x69\x70\x65\x6C\x69\x6E\x65\x73\x2E\x55\x6E\x69\x76\x65\x72\x73\x61\x6C\x2E\x45\x64\x69\x74\x6F\x72\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[1];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x47\x72\x61\x70\x68\x69\x63\x54\x65\x73\x74\x73\x2E\x50\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x2E\x55\x6E\x69\x76\x65\x72\x73\x61\x6C\x2E\x52\x75\x6E\x74\x69\x6D\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[2];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x65\x6E\x64\x65\x72\x50\x69\x70\x65\x6C\x69\x6E\x65\x73\x2E\x55\x6E\x69\x76\x65\x72\x73\x61\x6C\x2E\x52\x75\x6E\x74\x69\x6D\x65\x2E\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x76\x65\x72\x73\x61\x6C\x47\x72\x61\x70\x68\x69\x63\x73\x54\x65\x73\x74\x73"), NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[4];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[5];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[6];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[7];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[8];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x52\x65\x6E\x64\x65\x72\x50\x69\x70\x65\x6C\x69\x6E\x65\x73\x2E\x55\x6E\x69\x76\x65\x72\x73\x61\x6C\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
}
static void ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ReloadGroupAttribute_t883DDBD9B1C8E1751B7D842EEF0D719316BB73DF * tmp = (ReloadGroupAttribute_t883DDBD9B1C8E1751B7D842EEF0D719316BB73DF *)cache->attributes[0];
		ReloadGroupAttribute__ctor_mF83BF3A57C0748622CAEBE19AF3AAF71644D9182(tmp, NULL);
	}
}
static void ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6_CustomAttributesCacheGenerator_xrOcclusionMeshPS(CustomAttributesCache* cache)
{
	{
		ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549 * tmp = (ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549 *)cache->attributes[0];
		ReloadAttribute__ctor_m2E08031EE210D9BB6448BDE0AB604DD98BAD4E4D(tmp, il2cpp_codegen_string_new_wrapper("\x53\x68\x61\x64\x65\x72\x73\x2F\x58\x52\x2F\x58\x52\x4F\x63\x63\x6C\x75\x73\x69\x6F\x6E\x4D\x65\x73\x68\x2E\x73\x68\x61\x64\x65\x72"), 1LL, NULL);
	}
}
static void ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6_CustomAttributesCacheGenerator_xrMirrorViewPS(CustomAttributesCache* cache)
{
	{
		ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549 * tmp = (ReloadAttribute_t73DBF6DD8F57758A120B5309893FE8C28F30B549 *)cache->attributes[0];
		ReloadAttribute__ctor_m2E08031EE210D9BB6448BDE0AB604DD98BAD4E4D(tmp, il2cpp_codegen_string_new_wrapper("\x53\x68\x61\x64\x65\x72\x73\x2F\x58\x52\x2F\x58\x52\x4D\x69\x72\x72\x6F\x72\x56\x69\x65\x77\x2E\x73\x68\x61\x64\x65\x72"), 1LL, NULL);
	}
}
static void ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8 * tmp = (MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8 *)cache->attributes[0];
		MovedFromAttribute__ctor_mA4B2632CE3004A3E0EA8E1241736518320806568(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x52\x65\x6E\x64\x65\x72\x69\x6E\x67\x2E\x4C\x57\x52\x50"), NULL);
	}
}
static void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8 * tmp = (MovedFromAttribute_t7DFA9E51FA9540D9D5EB8D41E363D2BC51F43BC8 *)cache->attributes[0];
		MovedFromAttribute__ctor_mA4B2632CE3004A3E0EA8E1241736518320806568(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x45\x6E\x67\x69\x6E\x65\x2E\x52\x65\x6E\x64\x65\x72\x69\x6E\x67\x2E\x4C\x57\x52\x50"), NULL);
	}
}
static void CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_CustomAttributesCacheGenerator_isStereoEnabled(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x65\x61\x73\x65\x20\x75\x73\x65\x20\x78\x72\x2E\x65\x6E\x61\x62\x6C\x65\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CxrSdkEnabledU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CcopyDepthU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CmultipassIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CcullingPassIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CrenderTargetU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CrenderTargetDescU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CrenderTargetIsRenderTextureU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CcullingParamsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_get_xrSdkEnabled_m382436041060A68DD4DCC122B48E4F8BEDC1EB64(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_xrSdkEnabled_m6C320B4690D3C05225AC8A456AA1DB38CCECDB16(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_copyDepth_mABAD1DE38CB40CFB7971ED1D5A507FB046BFAECE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_get_multipassId_mD4A8E396F5B8E3EA3E5FA642A95948614CB19C1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_multipassId_mBF5A78EF00B1DEB40F3315D446BFDA15B5677F07(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_renderTarget_m528BDC7E91273283D86C9F1543CCE551E09F0A29(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_renderTargetDesc_mB21461AD204A490E0568E8E126590F59DF6DB07A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_renderTargetIsRenderTexture_m93DAA821EB43DAC5BEC6E454B5E995B3F2147393(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_CustomAttributesCacheGenerator_XRSystem_XRSystemInit_m5A01FCB59B5AF7FD207E117C9BEEA5C723685DD4(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mE79C8FD7B18EC53391334A6E6A66CAF09CDA8516(tmp, 3LL, NULL);
	}
}
static void XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_CustomAttributesCacheGenerator_XRSystem_UpdateCameraData_m31EA9B7F30C04638528251CC518C51063BE43885____xr1(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_CustomAttributesCacheGenerator_XRSystem_U3CCreateLayoutFromXrSdkU3Eg__CanUseSinglePassU7C24_0_mC086FCBD276F4990745BA9168A14F4301F3914A6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Unity_RenderPipelines_Universal_Runtime_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Unity_RenderPipelines_Universal_Runtime_AttributeGenerators[30] = 
{
	ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6_CustomAttributesCacheGenerator,
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_CustomAttributesCacheGenerator,
	CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass24_0_t07D7FD149F98A052597EF85077730F84984B1CD5_CustomAttributesCacheGenerator,
	ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6_CustomAttributesCacheGenerator_xrOcclusionMeshPS,
	ShaderResources_tD419B97943EFC871C08C6465BFB3F34ED72CBBB6_CustomAttributesCacheGenerator_xrMirrorViewPS,
	CameraData_t8ADA6CF1D4D9FDF4D3C33F5C66800E87D1BC20F7_CustomAttributesCacheGenerator_isStereoEnabled,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CxrSdkEnabledU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CcopyDepthU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CmultipassIdU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CcullingPassIdU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CrenderTargetU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CrenderTargetDescU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CrenderTargetIsRenderTextureU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_U3CcullingParamsU3Ek__BackingField,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_get_xrSdkEnabled_m382436041060A68DD4DCC122B48E4F8BEDC1EB64,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_xrSdkEnabled_m6C320B4690D3C05225AC8A456AA1DB38CCECDB16,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_copyDepth_mABAD1DE38CB40CFB7971ED1D5A507FB046BFAECE,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_get_multipassId_mD4A8E396F5B8E3EA3E5FA642A95948614CB19C1D,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_multipassId_mBF5A78EF00B1DEB40F3315D446BFDA15B5677F07,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_cullingPassId_mA32F73AD044A828C56DE57E15537AA05B2698A90,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_renderTarget_m528BDC7E91273283D86C9F1543CCE551E09F0A29,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_get_renderTargetDesc_m0E4F094BC06E1AEBBEA885532FCBD3E088B51DC4,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_renderTargetDesc_mB21461AD204A490E0568E8E126590F59DF6DB07A,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_renderTargetIsRenderTexture_m93DAA821EB43DAC5BEC6E454B5E995B3F2147393,
	XRPass_t5A6944AACFABBB82DED15C51AD8EC64E64239D6A_CustomAttributesCacheGenerator_XRPass_set_cullingParams_m22E55420DE3E4F12CCD9E486B6451DE18E44D72D,
	XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_CustomAttributesCacheGenerator_XRSystem_XRSystemInit_m5A01FCB59B5AF7FD207E117C9BEEA5C723685DD4,
	XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_CustomAttributesCacheGenerator_XRSystem_U3CCreateLayoutFromXrSdkU3Eg__CanUseSinglePassU7C24_0_mC086FCBD276F4990745BA9168A14F4301F3914A6,
	XRSystem_tD792F53BEEECD90A3F0C9F2B21EB6C1178F2F836_CustomAttributesCacheGenerator_XRSystem_UpdateCameraData_m31EA9B7F30C04638528251CC518C51063BE43885____xr1,
	Unity_RenderPipelines_Universal_Runtime_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
