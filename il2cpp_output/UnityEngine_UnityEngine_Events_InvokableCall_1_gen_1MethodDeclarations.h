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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2573;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t484;
// System.Object[]
struct ObjectU5BU5D_t166;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17769_gshared (InvokableCall_1_t2573 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m17769(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2573 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m17769_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17770_gshared (InvokableCall_1_t2573 * __this, UnityAction_1_t484 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m17770(__this, ___callback, method) (( void (*) (InvokableCall_1_t2573 *, UnityAction_1_t484 *, const MethodInfo*))InvokableCall_1__ctor_m17770_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17771_gshared (InvokableCall_1_t2573 * __this, ObjectU5BU5D_t166* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m17771(__this, ___args, method) (( void (*) (InvokableCall_1_t2573 *, ObjectU5BU5D_t166*, const MethodInfo*))InvokableCall_1_Invoke_m17771_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17772_gshared (InvokableCall_1_t2573 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m17772(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2573 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m17772_gshared)(__this, ___targetObj, ___method, method)
