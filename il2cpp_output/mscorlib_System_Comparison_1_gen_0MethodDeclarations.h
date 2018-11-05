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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t274;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2124_gshared (Comparison_1_t274 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2124(__this, ___object, ___method, method) (( void (*) (Comparison_1_t274 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2124_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16639_gshared (Comparison_1_t274 * __this, RaycastHit_t197  ___x, RaycastHit_t197  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16639(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t274 *, RaycastHit_t197 , RaycastHit_t197 , const MethodInfo*))Comparison_1_Invoke_m16639_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16640_gshared (Comparison_1_t274 * __this, RaycastHit_t197  ___x, RaycastHit_t197  ___y, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16640(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t274 *, RaycastHit_t197 , RaycastHit_t197 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16640_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16641_gshared (Comparison_1_t274 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16641(__this, ___result, method) (( int32_t (*) (Comparison_1_t274 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16641_gshared)(__this, ___result, method)
