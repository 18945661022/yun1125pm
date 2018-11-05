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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t2889;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m22760_gshared (DefaultComparer_t2889 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22760(__this, method) (( void (*) (DefaultComparer_t2889 *, const MethodInfo*))DefaultComparer__ctor_m22760_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22761_gshared (DefaultComparer_t2889 * __this, TargetSearchResult_t146  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22761(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2889 *, TargetSearchResult_t146 , const MethodInfo*))DefaultComparer_GetHashCode_m22761_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22762_gshared (DefaultComparer_t2889 * __this, TargetSearchResult_t146  ___x, TargetSearchResult_t146  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22762(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2889 *, TargetSearchResult_t146 , TargetSearchResult_t146 , const MethodInfo*))DefaultComparer_Equals_m22762_gshared)(__this, ___x, ___y, method)
