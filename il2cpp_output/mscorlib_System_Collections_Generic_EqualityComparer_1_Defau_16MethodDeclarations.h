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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3186;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m26240_gshared (DefaultComparer_t3186 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26240(__this, method) (( void (*) (DefaultComparer_t3186 *, const MethodInfo*))DefaultComparer__ctor_m26240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26241_gshared (DefaultComparer_t3186 * __this, DateTime_t18  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26241(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3186 *, DateTime_t18 , const MethodInfo*))DefaultComparer_GetHashCode_m26241_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26242_gshared (DefaultComparer_t3186 * __this, DateTime_t18  ___x, DateTime_t18  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26242(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3186 *, DateTime_t18 , DateTime_t18 , const MethodInfo*))DefaultComparer_Equals_m26242_gshared)(__this, ___x, ___y, method)
