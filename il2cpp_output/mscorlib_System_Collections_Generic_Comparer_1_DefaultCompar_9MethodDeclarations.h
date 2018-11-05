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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3184;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m26231_gshared (DefaultComparer_t3184 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26231(__this, method) (( void (*) (DefaultComparer_t3184 *, const MethodInfo*))DefaultComparer__ctor_m26231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m26232_gshared (DefaultComparer_t3184 * __this, DateTime_t18  ___x, DateTime_t18  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m26232(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3184 *, DateTime_t18 , DateTime_t18 , const MethodInfo*))DefaultComparer_Compare_m26232_gshared)(__this, ___x, ___y, method)
