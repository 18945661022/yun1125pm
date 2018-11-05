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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>
struct DefaultComparer_t3158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m26019_gshared (DefaultComparer_t3158 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26019(__this, method) (( void (*) (DefaultComparer_t3158 *, const MethodInfo*))DefaultComparer__ctor_m26019_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26020_gshared (DefaultComparer_t3158 * __this, CustomAttributeNamedArgument_t1877  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26020(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3158 *, CustomAttributeNamedArgument_t1877 , const MethodInfo*))DefaultComparer_GetHashCode_m26020_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26021_gshared (DefaultComparer_t3158 * __this, CustomAttributeNamedArgument_t1877  ___x, CustomAttributeNamedArgument_t1877  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26021(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3158 *, CustomAttributeNamedArgument_t1877 , CustomAttributeNamedArgument_t1877 , const MethodInfo*))DefaultComparer_Equals_m26021_gshared)(__this, ___x, ___y, method)
