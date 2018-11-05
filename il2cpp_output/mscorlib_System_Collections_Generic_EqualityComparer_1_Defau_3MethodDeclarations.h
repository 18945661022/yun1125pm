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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Char>
struct DefaultComparer_t2621;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Char>::.ctor()
extern "C" void DefaultComparer__ctor_m18364_gshared (DefaultComparer_t2621 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18364(__this, method) (( void (*) (DefaultComparer_t2621 *, const MethodInfo*))DefaultComparer__ctor_m18364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Char>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18365_gshared (DefaultComparer_t2621 * __this, uint16_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18365(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2621 *, uint16_t, const MethodInfo*))DefaultComparer_GetHashCode_m18365_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Char>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18366_gshared (DefaultComparer_t2621 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18366(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2621 *, uint16_t, uint16_t, const MethodInfo*))DefaultComparer_Equals_m18366_gshared)(__this, ___x, ___y, method)
