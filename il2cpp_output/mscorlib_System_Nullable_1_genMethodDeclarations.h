#pragma once

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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m14753_gshared (Nullable_1_t1791 * __this, DateTime_t18  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m14753(__this, ___value, method) (( void (*) (Nullable_1_t1791 *, DateTime_t18 , const MethodInfo*))Nullable_1__ctor_m14753_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m14752_gshared (Nullable_1_t1791 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m14752(__this, method) (( bool (*) (Nullable_1_t1791 *, const MethodInfo*))Nullable_1_get_HasValue_m14752_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t18  Nullable_1_get_Value_m14754_gshared (Nullable_1_t1791 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m14754(__this, method) (( DateTime_t18  (*) (Nullable_1_t1791 *, const MethodInfo*))Nullable_1_get_Value_m14754_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m25636_gshared (Nullable_1_t1791 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m25636(__this, ___other, method) (( bool (*) (Nullable_1_t1791 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m25636_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m25637_gshared (Nullable_1_t1791 * __this, Nullable_1_t1791  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m25637(__this, ___other, method) (( bool (*) (Nullable_1_t1791 *, Nullable_1_t1791 , const MethodInfo*))Nullable_1_Equals_m25637_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m25638_gshared (Nullable_1_t1791 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m25638(__this, method) (( int32_t (*) (Nullable_1_t1791 *, const MethodInfo*))Nullable_1_GetHashCode_m25638_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m25639_gshared (Nullable_1_t1791 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m25639(__this, method) (( String_t* (*) (Nullable_1_t1791 *, const MethodInfo*))Nullable_1_ToString_m25639_gshared)(__this, method)
