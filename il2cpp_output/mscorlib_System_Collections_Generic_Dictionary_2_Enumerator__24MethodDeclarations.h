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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1004;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22329_gshared (Enumerator_t2854 * __this, Dictionary_2_t1004 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m22329(__this, ___dictionary, method) (( void (*) (Enumerator_t2854 *, Dictionary_2_t1004 *, const MethodInfo*))Enumerator__ctor_m22329_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22330_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22330(__this, method) (( Object_t * (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22330_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m22331_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m22331(__this, method) (( void (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m22331_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1599  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22332_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22332(__this, method) (( DictionaryEntry_t1599  (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22332_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22333_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22333(__this, method) (( Object_t * (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22333_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22334_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22334(__this, method) (( Object_t * (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22335_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m22335(__this, method) (( bool (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_MoveNext_m22335_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t2850  Enumerator_get_Current_m22336_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m22336(__this, method) (( KeyValuePair_2_t2850  (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_get_Current_m22336_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m22337_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m22337(__this, method) (( int32_t (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_get_CurrentKey_m22337_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t769  Enumerator_get_CurrentValue_m22338_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m22338(__this, method) (( TrackableResultData_t769  (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_get_CurrentValue_m22338_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Reset()
extern "C" void Enumerator_Reset_m22339_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_Reset_m22339(__this, method) (( void (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_Reset_m22339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m22340_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m22340(__this, method) (( void (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_VerifyState_m22340_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m22341_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m22341(__this, method) (( void (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_VerifyCurrent_m22341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m22342_gshared (Enumerator_t2854 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m22342(__this, method) (( void (*) (Enumerator_t2854 *, const MethodInfo*))Enumerator_Dispose_m22342_gshared)(__this, method)
