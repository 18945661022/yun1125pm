﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t2286;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Object System.Byte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Byte_System_IConvertible_ToType_m9723 (uint8_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Byte_System_IConvertible_ToBoolean_m9724 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Byte_System_IConvertible_ToByte_m9725 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Byte::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Byte_System_IConvertible_ToChar_m9726 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Byte::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t18  Byte_System_IConvertible_ToDateTime_m9727 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Byte::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1636  Byte_System_IConvertible_ToDecimal_m9728 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Byte::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Byte_System_IConvertible_ToDouble_m9729 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Byte::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Byte_System_IConvertible_ToInt16_m9730 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Byte_System_IConvertible_ToInt32_m9731 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Byte::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Byte_System_IConvertible_ToInt64_m9732 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Byte::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Byte_System_IConvertible_ToSByte_m9733 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Byte::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Byte_System_IConvertible_ToSingle_m9734 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Byte::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Byte_System_IConvertible_ToUInt16_m9735 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Byte::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Byte_System_IConvertible_ToUInt32_m9736 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Byte::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Byte_System_IConvertible_ToUInt64_m9737 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Object)
extern "C" int32_t Byte_CompareTo_m9738 (uint8_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Object)
extern "C" bool Byte_Equals_m9739 (uint8_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::GetHashCode()
extern "C" int32_t Byte_GetHashCode_m9740 (uint8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Byte)
extern "C" int32_t Byte_CompareTo_m9741 (uint8_t* __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Byte)
extern "C" bool Byte_Equals_m9742 (uint8_t* __this, uint8_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.IFormatProvider)
extern "C" uint8_t Byte_Parse_m9743 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint8_t Byte_Parse_m9744 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String)
extern "C" uint8_t Byte_Parse_m9745 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
extern "C" bool Byte_TryParse_m9746 (Object_t * __this /* static, unused */, String_t* ___s, uint8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Byte&)
extern "C" bool Byte_TryParse_m9747 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint8_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString()
extern "C" String_t* Byte_ToString_m8531 (uint8_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String)
extern "C" String_t* Byte_ToString_m8476 (uint8_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.IFormatProvider)
extern "C" String_t* Byte_ToString_m8484 (uint8_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Byte_ToString_m8489 (uint8_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
