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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3016;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m24442_gshared (Predicate_1_t3016 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m24442(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3016 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24442_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m24443_gshared (Predicate_1_t3016 * __this, UILineInfo_t478  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m24443(__this, ___obj, method) (( bool (*) (Predicate_1_t3016 *, UILineInfo_t478 , const MethodInfo*))Predicate_1_Invoke_m24443_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m24444_gshared (Predicate_1_t3016 * __this, UILineInfo_t478  ___obj, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m24444(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3016 *, UILineInfo_t478 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24444_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m24445_gshared (Predicate_1_t3016 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m24445(__this, ___result, method) (( bool (*) (Predicate_1_t3016 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24445_gshared)(__this, ___result, method)
