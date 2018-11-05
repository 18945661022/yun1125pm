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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2499;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3214;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3215;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2503;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2507;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m16690_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16690(__this, method) (( void (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2__ctor_m16690_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16691_gshared (Dictionary_2_t2499 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16691(__this, ___comparer, method) (( void (*) (Dictionary_2_t2499 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16691_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16692_gshared (Dictionary_2_t2499 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16692(__this, ___capacity, method) (( void (*) (Dictionary_2_t2499 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16692_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16693_gshared (Dictionary_2_t2499 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16693(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2499 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m16693_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16694_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16694(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16694_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16695_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16695(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2499 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16696_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16696(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2499 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16696_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16697_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16697(__this, ___key, method) (( void (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16698_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16698(__this, method) (( bool (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16698_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16699_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16699(__this, method) (( Object_t * (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16699_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16700_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16700(__this, method) (( bool (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16700_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16701_gshared (Dictionary_2_t2499 * __this, KeyValuePair_2_t2501  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16701(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2499 *, KeyValuePair_2_t2501 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16701_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16702_gshared (Dictionary_2_t2499 * __this, KeyValuePair_2_t2501  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16702(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2499 *, KeyValuePair_2_t2501 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16702_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16703_gshared (Dictionary_2_t2499 * __this, KeyValuePair_2U5BU5D_t3214* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2499 *, KeyValuePair_2U5BU5D_t3214*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16703_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16704_gshared (Dictionary_2_t2499 * __this, KeyValuePair_2_t2501  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16704(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2499 *, KeyValuePair_2_t2501 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16704_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16705_gshared (Dictionary_2_t2499 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2499 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16705_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16706_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16706(__this, method) (( Object_t * (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16706_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16707_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16707(__this, method) (( Object_t* (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16707_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16708_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16708(__this, method) (( Object_t * (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16708_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16709_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16709(__this, method) (( int32_t (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_get_Count_m16709_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16710_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16710(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16710_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16711_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16711(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2499 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16711_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16712_gshared (Dictionary_2_t2499 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16712(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2499 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16712_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16713_gshared (Dictionary_2_t2499 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16713(__this, ___size, method) (( void (*) (Dictionary_2_t2499 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16713_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16714_gshared (Dictionary_2_t2499 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16714(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2499 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16714_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2501  Dictionary_2_make_pair_m16715_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16715(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2501  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16715_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16716_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16716(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m16716_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16717_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16717(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16717_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16718_gshared (Dictionary_2_t2499 * __this, KeyValuePair_2U5BU5D_t3214* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16718(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2499 *, KeyValuePair_2U5BU5D_t3214*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16718_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m16719_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16719(__this, method) (( void (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_Resize_m16719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16720_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16720(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2499 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16720_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m16721_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16721(__this, method) (( void (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_Clear_m16721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16722_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16722(__this, ___key, method) (( bool (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16722_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16723_gshared (Dictionary_2_t2499 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16723(__this, ___value, method) (( bool (*) (Dictionary_2_t2499 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16723_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16724_gshared (Dictionary_2_t2499 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16724(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2499 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m16724_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16725_gshared (Dictionary_2_t2499 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16725(__this, ___sender, method) (( void (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16725_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16726_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16726(__this, ___key, method) (( bool (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16726_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16727_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16727(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2499 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16727_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2503 * Dictionary_2_get_Keys_m16728_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16728(__this, method) (( KeyCollection_t2503 * (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_get_Keys_m16728_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2507 * Dictionary_2_get_Values_m16729_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16729(__this, method) (( ValueCollection_t2507 * (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_get_Values_m16729_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16730_gshared (Dictionary_2_t2499 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16730(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16730_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16731_gshared (Dictionary_2_t2499 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16731(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2499 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16731_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16732_gshared (Dictionary_2_t2499 * __this, KeyValuePair_2_t2501  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16732(__this, ___pair, method) (( bool (*) (Dictionary_2_t2499 *, KeyValuePair_2_t2501 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16732_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2505  Dictionary_2_GetEnumerator_m16733_gshared (Dictionary_2_t2499 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16733(__this, method) (( Enumerator_t2505  (*) (Dictionary_2_t2499 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16733_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m16734_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16734(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16734_gshared)(__this /* static, unused */, ___key, ___value, method)
