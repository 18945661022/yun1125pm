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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3019;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m24452_gshared (Comparison_1_t3019 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m24452(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3019 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m24452_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m24453_gshared (Comparison_1_t3019 * __this, UILineInfo_t478  ___x, UILineInfo_t478  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m24453(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3019 *, UILineInfo_t478 , UILineInfo_t478 , const MethodInfo*))Comparison_1_Invoke_m24453_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m24454_gshared (Comparison_1_t3019 * __this, UILineInfo_t478  ___x, UILineInfo_t478  ___y, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m24454(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3019 *, UILineInfo_t478 , UILineInfo_t478 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m24454_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m24455_gshared (Comparison_1_t3019 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m24455(__this, ___result, method) (( int32_t (*) (Comparison_1_t3019 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m24455_gshared)(__this, ___result, method)
