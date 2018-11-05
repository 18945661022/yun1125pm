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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2759;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t3253;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t3254;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t2764;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m20495_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20495(__this, method) (( void (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2__ctor_m20495_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20497_gshared (Dictionary_2_t2759 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20497(__this, ___comparer, method) (( void (*) (Dictionary_2_t2759 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20497_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20499_gshared (Dictionary_2_t2759 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20499(__this, ___capacity, method) (( void (*) (Dictionary_2_t2759 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20499_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20501_gshared (Dictionary_2_t2759 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20501(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2759 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m20501_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20503_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20503(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20503_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20505_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20505(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2759 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20505_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20507_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20507(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2759 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20507_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20509_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20509(__this, ___key, method) (( void (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20509_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20511_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20511(__this, method) (( bool (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20513_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20513(__this, method) (( Object_t * (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20515_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20515(__this, method) (( bool (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20515_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20517_gshared (Dictionary_2_t2759 * __this, KeyValuePair_2_t2761  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20517(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2759 *, KeyValuePair_2_t2761 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20517_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20519_gshared (Dictionary_2_t2759 * __this, KeyValuePair_2_t2761  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20519(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2759 *, KeyValuePair_2_t2761 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20519_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20521_gshared (Dictionary_2_t2759 * __this, KeyValuePair_2U5BU5D_t3253* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20521(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2759 *, KeyValuePair_2U5BU5D_t3253*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20521_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20523_gshared (Dictionary_2_t2759 * __this, KeyValuePair_2_t2761  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20523(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2759 *, KeyValuePair_2_t2761 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20523_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20525_gshared (Dictionary_2_t2759 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20525(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2759 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20525_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20527_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20527(__this, method) (( Object_t * (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20527_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20529_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20529(__this, method) (( Object_t* (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20529_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20531_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20531(__this, method) (( Object_t * (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20531_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20533_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20533(__this, method) (( int32_t (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_get_Count_m20533_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m20535_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20535(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m20535_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20537_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20537(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2759 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m20537_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20539_gshared (Dictionary_2_t2759 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20539(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2759 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20539_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20541_gshared (Dictionary_2_t2759 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20541(__this, ___size, method) (( void (*) (Dictionary_2_t2759 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20541_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20543_gshared (Dictionary_2_t2759 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20543(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2759 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20543_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2761  Dictionary_2_make_pair_m20545_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20545(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2761  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m20545_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20547_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20547(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m20547_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m20549_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20549(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m20549_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20551_gshared (Dictionary_2_t2759 * __this, KeyValuePair_2U5BU5D_t3253* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20551(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2759 *, KeyValuePair_2U5BU5D_t3253*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20551_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m20553_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20553(__this, method) (( void (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_Resize_m20553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20555_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2759 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m20555_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m20557_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20557(__this, method) (( void (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_Clear_m20557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20559_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20559(__this, ___key, method) (( bool (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m20559_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20561_gshared (Dictionary_2_t2759 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20561(__this, ___value, method) (( bool (*) (Dictionary_2_t2759 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m20561_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20563_gshared (Dictionary_2_t2759 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20563(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2759 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m20563_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20565_gshared (Dictionary_2_t2759 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20565(__this, ___sender, method) (( void (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20565_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20567_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20567(__this, ___key, method) (( bool (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m20567_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20569_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20569(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2759 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m20569_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t2764 * Dictionary_2_get_Keys_m20571_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20571(__this, method) (( KeyCollection_t2764 * (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_get_Keys_m20571_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t2768 * Dictionary_2_get_Values_m20573_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20573(__this, method) (( ValueCollection_t2768 * (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_get_Values_m20573_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20575_gshared (Dictionary_2_t2759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20575(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20575_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m20577_gshared (Dictionary_2_t2759 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20577(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t2759 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20577_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20579_gshared (Dictionary_2_t2759 * __this, KeyValuePair_2_t2761  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20579(__this, ___pair, method) (( bool (*) (Dictionary_2_t2759 *, KeyValuePair_2_t2761 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20579_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2766  Dictionary_2_GetEnumerator_m20581_gshared (Dictionary_2_t2759 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20581(__this, method) (( Enumerator_t2766  (*) (Dictionary_2_t2759 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20581_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m20583_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20583(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20583_gshared)(__this /* static, unused */, ___key, ___value, method)
