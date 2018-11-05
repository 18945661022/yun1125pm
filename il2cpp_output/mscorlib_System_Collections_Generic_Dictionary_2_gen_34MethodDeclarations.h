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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2982;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3294;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3295;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2987;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2991;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m23924_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23924(__this, method) (( void (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2__ctor_m23924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23926_gshared (Dictionary_2_t2982 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23926(__this, ___comparer, method) (( void (*) (Dictionary_2_t2982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23926_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23928_gshared (Dictionary_2_t2982 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23928(__this, ___capacity, method) (( void (*) (Dictionary_2_t2982 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23928_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23930_gshared (Dictionary_2_t2982 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23930(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2982 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m23930_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23932_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23932_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23934_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23934_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23936_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23936_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23938_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23938(__this, ___key, method) (( void (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23938_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23940_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23940(__this, method) (( bool (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23942_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23942(__this, method) (( Object_t * (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23944_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23944(__this, method) (( bool (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23946_gshared (Dictionary_2_t2982 * __this, KeyValuePair_2_t2984  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23946(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2982 *, KeyValuePair_2_t2984 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23946_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23948_gshared (Dictionary_2_t2982 * __this, KeyValuePair_2_t2984  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23948(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2982 *, KeyValuePair_2_t2984 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23948_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23950_gshared (Dictionary_2_t2982 * __this, KeyValuePair_2U5BU5D_t3294* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2982 *, KeyValuePair_2U5BU5D_t3294*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23950_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23952_gshared (Dictionary_2_t2982 * __this, KeyValuePair_2_t2984  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23952(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2982 *, KeyValuePair_2_t2984 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23952_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23954_gshared (Dictionary_2_t2982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23954(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23954_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23956_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23956(__this, method) (( Object_t * (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23956_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23958_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23958(__this, method) (( Object_t* (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23958_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23960_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23960(__this, method) (( Object_t * (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23960_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23962_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23962(__this, method) (( int32_t (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_get_Count_m23962_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23964_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23964(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23964_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23966_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2982 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23966_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23968_gshared (Dictionary_2_t2982 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23968(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2982 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23968_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23970_gshared (Dictionary_2_t2982 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23970(__this, ___size, method) (( void (*) (Dictionary_2_t2982 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23970_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23972_gshared (Dictionary_2_t2982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23972(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23972_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2984  Dictionary_2_make_pair_m23974_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23974(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2984  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23974_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23976_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23976(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23976_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23978_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23978(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23978_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23980_gshared (Dictionary_2_t2982 * __this, KeyValuePair_2U5BU5D_t3294* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23980(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2982 *, KeyValuePair_2U5BU5D_t3294*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23980_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m23982_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23982(__this, method) (( void (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_Resize_m23982_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23984_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2982 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23984_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m23986_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23986(__this, method) (( void (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_Clear_m23986_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23988_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23988(__this, ___key, method) (( bool (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23988_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23990_gshared (Dictionary_2_t2982 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23990(__this, ___value, method) (( bool (*) (Dictionary_2_t2982 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23990_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23992_gshared (Dictionary_2_t2982 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23992(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2982 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m23992_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23994_gshared (Dictionary_2_t2982 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23994(__this, ___sender, method) (( void (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23994_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23996_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23996(__this, ___key, method) (( bool (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23996_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23998_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23998(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2982 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23998_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2987 * Dictionary_2_get_Keys_m24000_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24000(__this, method) (( KeyCollection_t2987 * (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_get_Keys_m24000_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2991 * Dictionary_2_get_Values_m24002_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24002(__this, method) (( ValueCollection_t2991 * (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_get_Values_m24002_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m24004_gshared (Dictionary_2_t2982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24004(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24004_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m24006_gshared (Dictionary_2_t2982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24006(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24006_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24008_gshared (Dictionary_2_t2982 * __this, KeyValuePair_2_t2984  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24008(__this, ___pair, method) (( bool (*) (Dictionary_2_t2982 *, KeyValuePair_2_t2984 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24008_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2989  Dictionary_2_GetEnumerator_m24010_gshared (Dictionary_2_t2982 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24010(__this, method) (( Enumerator_t2989  (*) (Dictionary_2_t2982 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24010_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m24012_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24012(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24012_gshared)(__this /* static, unused */, ___key, ___value, method)
