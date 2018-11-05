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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2359;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3201;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3202;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2368;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2372;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14776_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14776(__this, method) (( void (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2__ctor_m14776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14777_gshared (Dictionary_2_t2359 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14777(__this, ___comparer, method) (( void (*) (Dictionary_2_t2359 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14777_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14779_gshared (Dictionary_2_t2359 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14779(__this, ___capacity, method) (( void (*) (Dictionary_2_t2359 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14779_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14781_gshared (Dictionary_2_t2359 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14781(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2359 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m14781_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14783_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14783(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14783_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14785_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14785(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2359 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14785_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14787_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14787(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2359 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14787_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14789_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14789(__this, ___key, method) (( void (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14789_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14791_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14791(__this, method) (( bool (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14791_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14793_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14793(__this, method) (( Object_t * (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14793_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14795_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14795(__this, method) (( bool (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14797_gshared (Dictionary_2_t2359 * __this, KeyValuePair_2_t2362  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14797(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2359 *, KeyValuePair_2_t2362 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14797_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14799_gshared (Dictionary_2_t2359 * __this, KeyValuePair_2_t2362  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14799(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2359 *, KeyValuePair_2_t2362 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14799_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14801_gshared (Dictionary_2_t2359 * __this, KeyValuePair_2U5BU5D_t3201* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14801(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2359 *, KeyValuePair_2U5BU5D_t3201*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14801_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14803_gshared (Dictionary_2_t2359 * __this, KeyValuePair_2_t2362  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14803(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2359 *, KeyValuePair_2_t2362 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14803_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14805_gshared (Dictionary_2_t2359 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14805(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2359 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14805_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14807_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14807(__this, method) (( Object_t * (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14807_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14809_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14809(__this, method) (( Object_t* (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14809_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14811_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14811(__this, method) (( Object_t * (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14811_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14813_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14813(__this, method) (( int32_t (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_get_Count_m14813_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14815_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14815(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14815_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14817_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14817(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2359 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14817_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14819_gshared (Dictionary_2_t2359 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14819(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2359 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14819_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14821_gshared (Dictionary_2_t2359 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14821(__this, ___size, method) (( void (*) (Dictionary_2_t2359 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14821_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14823_gshared (Dictionary_2_t2359 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14823(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2359 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14823_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2362  Dictionary_2_make_pair_m14825_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14825(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2362  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14825_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14827_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14827(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14827_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14829_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14829(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14829_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14831_gshared (Dictionary_2_t2359 * __this, KeyValuePair_2U5BU5D_t3201* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14831(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2359 *, KeyValuePair_2U5BU5D_t3201*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14831_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14833_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14833(__this, method) (( void (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_Resize_m14833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14835_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14835(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2359 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14835_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14837_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14837(__this, method) (( void (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_Clear_m14837_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14839_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14839(__this, ___key, method) (( bool (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14839_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14841_gshared (Dictionary_2_t2359 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14841(__this, ___value, method) (( bool (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14841_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14843_gshared (Dictionary_2_t2359 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14843(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2359 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m14843_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14845_gshared (Dictionary_2_t2359 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14845(__this, ___sender, method) (( void (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14845_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14847_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14847(__this, ___key, method) (( bool (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14849_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14849(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2359 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14849_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2368 * Dictionary_2_get_Keys_m14851_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14851(__this, method) (( KeyCollection_t2368 * (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_get_Keys_m14851_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2372 * Dictionary_2_get_Values_m14852_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14852(__this, method) (( ValueCollection_t2372 * (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_get_Values_m14852_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14854_gshared (Dictionary_2_t2359 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14854(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14854_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14856_gshared (Dictionary_2_t2359 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14856(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2359 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14856_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14858_gshared (Dictionary_2_t2359 * __this, KeyValuePair_2_t2362  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14858(__this, ___pair, method) (( bool (*) (Dictionary_2_t2359 *, KeyValuePair_2_t2362 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14858_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2370  Dictionary_2_GetEnumerator_m14860_gshared (Dictionary_2_t2359 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14860(__this, method) (( Enumerator_t2370  (*) (Dictionary_2_t2359 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14860_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m14862_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14862(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14862_gshared)(__this /* static, unused */, ___key, ___value, method)
