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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t3026;
// UnityEngine.Object
struct Object_t147;
struct Object_t147_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t166;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m24477_gshared (CachedInvokableCall_1_t3026 * __this, Object_t147 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m24477(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t3026 *, Object_t147 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m24477_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m24478_gshared (CachedInvokableCall_1_t3026 * __this, ObjectU5BU5D_t166* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m24478(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t3026 *, ObjectU5BU5D_t166*, const MethodInfo*))CachedInvokableCall_1_Invoke_m24478_gshared)(__this, ___args, method)
