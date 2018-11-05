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
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m14766_gshared (Nullable_1_t2306 * __this, TimeSpan_t156  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m14766(__this, ___value, method) (( void (*) (Nullable_1_t2306 *, TimeSpan_t156 , const MethodInfo*))Nullable_1__ctor_m14766_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m14767_gshared (Nullable_1_t2306 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m14767(__this, method) (( bool (*) (Nullable_1_t2306 *, const MethodInfo*))Nullable_1_get_HasValue_m14767_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t156  Nullable_1_get_Value_m14768_gshared (Nullable_1_t2306 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m14768(__this, method) (( TimeSpan_t156  (*) (Nullable_1_t2306 *, const MethodInfo*))Nullable_1_get_Value_m14768_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m26260_gshared (Nullable_1_t2306 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26260(__this, ___other, method) (( bool (*) (Nullable_1_t2306 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m26260_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m26261_gshared (Nullable_1_t2306 * __this, Nullable_1_t2306  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26261(__this, ___other, method) (( bool (*) (Nullable_1_t2306 *, Nullable_1_t2306 , const MethodInfo*))Nullable_1_Equals_m26261_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m26262_gshared (Nullable_1_t2306 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m26262(__this, method) (( int32_t (*) (Nullable_1_t2306 *, const MethodInfo*))Nullable_1_GetHashCode_m26262_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m26263_gshared (Nullable_1_t2306 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m26263(__this, method) (( String_t* (*) (Nullable_1_t2306 *, const MethodInfo*))Nullable_1_ToString_m26263_gshared)(__this, method)
