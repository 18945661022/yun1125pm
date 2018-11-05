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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t3093;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3081;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25411_gshared (ShimEnumerator_t3093 * __this, Dictionary_2_t3081 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25411(__this, ___host, method) (( void (*) (ShimEnumerator_t3093 *, Dictionary_2_t3081 *, const MethodInfo*))ShimEnumerator__ctor_m25411_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25412_gshared (ShimEnumerator_t3093 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25412(__this, method) (( bool (*) (ShimEnumerator_t3093 *, const MethodInfo*))ShimEnumerator_MoveNext_m25412_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1599  ShimEnumerator_get_Entry_m25413_gshared (ShimEnumerator_t3093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25413(__this, method) (( DictionaryEntry_t1599  (*) (ShimEnumerator_t3093 *, const MethodInfo*))ShimEnumerator_get_Entry_m25413_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25414_gshared (ShimEnumerator_t3093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25414(__this, method) (( Object_t * (*) (ShimEnumerator_t3093 *, const MethodInfo*))ShimEnumerator_get_Key_m25414_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25415_gshared (ShimEnumerator_t3093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25415(__this, method) (( Object_t * (*) (ShimEnumerator_t3093 *, const MethodInfo*))ShimEnumerator_get_Value_m25415_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25416_gshared (ShimEnumerator_t3093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25416(__this, method) (( Object_t * (*) (ShimEnumerator_t3093 *, const MethodInfo*))ShimEnumerator_get_Current_m25416_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m25417_gshared (ShimEnumerator_t3093 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m25417(__this, method) (( void (*) (ShimEnumerator_t3093 *, const MethodInfo*))ShimEnumerator_Reset_m25417_gshared)(__this, method)
