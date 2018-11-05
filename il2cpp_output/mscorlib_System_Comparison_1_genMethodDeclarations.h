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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t224;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2015_gshared (Comparison_1_t224 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2015(__this, ___object, ___method, method) (( void (*) (Comparison_1_t224 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2015_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15561_gshared (Comparison_1_t224 * __this, RaycastResult_t255  ___x, RaycastResult_t255  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15561(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t224 *, RaycastResult_t255 , RaycastResult_t255 , const MethodInfo*))Comparison_1_Invoke_m15561_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15562_gshared (Comparison_1_t224 * __this, RaycastResult_t255  ___x, RaycastResult_t255  ___y, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15562(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t224 *, RaycastResult_t255 , RaycastResult_t255 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15562_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15563_gshared (Comparison_1_t224 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15563(__this, ___result, method) (( int32_t (*) (Comparison_1_t224 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15563_gshared)(__this, ___result, method)
