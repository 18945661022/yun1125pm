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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t2902;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23050_gshared (Transform_1_t2902 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23050(__this, ___object, ___method, method) (( void (*) (Transform_1_t2902 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23050_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1599  Transform_1_Invoke_m23051_gshared (Transform_1_t2902 * __this, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23051(__this, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Transform_1_t2902 *, Object_t *, ProfileData_t858 , const MethodInfo*))Transform_1_Invoke_m23051_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23052_gshared (Transform_1_t2902 * __this, Object_t * ___key, ProfileData_t858  ___value, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23052(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2902 *, Object_t *, ProfileData_t858 , AsyncCallback_t330 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23052_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1599  Transform_1_EndInvoke_m23053_gshared (Transform_1_t2902 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23053(__this, ___result, method) (( DictionaryEntry_t1599  (*) (Transform_1_t2902 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23053_gshared)(__this, ___result, method)
