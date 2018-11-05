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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2982;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24051_gshared (Enumerator_t2989 * __this, Dictionary_2_t2982 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24051(__this, ___dictionary, method) (( void (*) (Enumerator_t2989 *, Dictionary_2_t2982 *, const MethodInfo*))Enumerator__ctor_m24051_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24052_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24052(__this, method) (( Object_t * (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24052_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m24053_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m24053(__this, method) (( void (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m24053_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1599  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24054_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24054(__this, method) (( DictionaryEntry_t1599  (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24054_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24055_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24055(__this, method) (( Object_t * (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24055_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24056_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24056(__this, method) (( Object_t * (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24056_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24057_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m24057(__this, method) (( bool (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_MoveNext_m24057_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2984  Enumerator_get_Current_m24058_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m24058(__this, method) (( KeyValuePair_2_t2984  (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_get_Current_m24058_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m24059_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24059(__this, method) (( Object_t * (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_get_CurrentKey_m24059_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m24060_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24060(__this, method) (( int32_t (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_get_CurrentValue_m24060_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m24061_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_Reset_m24061(__this, method) (( void (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_Reset_m24061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m24062_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24062(__this, method) (( void (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_VerifyState_m24062_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24063_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24063(__this, method) (( void (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_VerifyCurrent_m24063_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m24064_gshared (Enumerator_t2989 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24064(__this, method) (( void (*) (Enumerator_t2989 *, const MethodInfo*))Enumerator_Dispose_m24064_gshared)(__this, method)
