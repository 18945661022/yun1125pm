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

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t834;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m21571_gshared (Action_1_t834 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m21571(__this, ___object, ___method, method) (( void (*) (Action_1_t834 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m21571_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m6071_gshared (Action_1_t834 * __this, SmartTerrainInitializationInfo_t717  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m6071(__this, ___obj, method) (( void (*) (Action_1_t834 *, SmartTerrainInitializationInfo_t717 , const MethodInfo*))Action_1_Invoke_m6071_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m21572_gshared (Action_1_t834 * __this, SmartTerrainInitializationInfo_t717  ___obj, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m21572(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t834 *, SmartTerrainInitializationInfo_t717 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m21572_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m21573_gshared (Action_1_t834 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m21573(__this, ___result, method) (( void (*) (Action_1_t834 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m21573_gshared)(__this, ___result, method)
