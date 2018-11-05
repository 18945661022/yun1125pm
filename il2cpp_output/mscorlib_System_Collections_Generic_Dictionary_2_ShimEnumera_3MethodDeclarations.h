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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t2772;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2759;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20672_gshared (ShimEnumerator_t2772 * __this, Dictionary_2_t2759 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20672(__this, ___host, method) (( void (*) (ShimEnumerator_t2772 *, Dictionary_2_t2759 *, const MethodInfo*))ShimEnumerator__ctor_m20672_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20673_gshared (ShimEnumerator_t2772 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20673(__this, method) (( bool (*) (ShimEnumerator_t2772 *, const MethodInfo*))ShimEnumerator_MoveNext_m20673_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1599  ShimEnumerator_get_Entry_m20674_gshared (ShimEnumerator_t2772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20674(__this, method) (( DictionaryEntry_t1599  (*) (ShimEnumerator_t2772 *, const MethodInfo*))ShimEnumerator_get_Entry_m20674_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20675_gshared (ShimEnumerator_t2772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20675(__this, method) (( Object_t * (*) (ShimEnumerator_t2772 *, const MethodInfo*))ShimEnumerator_get_Key_m20675_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20676_gshared (ShimEnumerator_t2772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20676(__this, method) (( Object_t * (*) (ShimEnumerator_t2772 *, const MethodInfo*))ShimEnumerator_get_Value_m20676_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20677_gshared (ShimEnumerator_t2772 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20677(__this, method) (( Object_t * (*) (ShimEnumerator_t2772 *, const MethodInfo*))ShimEnumerator_get_Current_m20677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::Reset()
extern "C" void ShimEnumerator_Reset_m20678_gshared (ShimEnumerator_t2772 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m20678(__this, method) (( void (*) (ShimEnumerator_t2772 *, const MethodInfo*))ShimEnumerator_Reset_m20678_gshared)(__this, method)
