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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1057;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3210;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3211;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2475;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2479;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m7513_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m7513(__this, method) (( void (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2__ctor_m7513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16304_gshared (Dictionary_2_t1057 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16304(__this, ___comparer, method) (( void (*) (Dictionary_2_t1057 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16304_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16306_gshared (Dictionary_2_t1057 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16306(__this, ___capacity, method) (( void (*) (Dictionary_2_t1057 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16306_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16308_gshared (Dictionary_2_t1057 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16308(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1057 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m16308_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16310_gshared (Dictionary_2_t1057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16310(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1057 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16310_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16312_gshared (Dictionary_2_t1057 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16312(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16312_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16314_gshared (Dictionary_2_t1057 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16314_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16316_gshared (Dictionary_2_t1057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16316(__this, ___key, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16316_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16318_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16318(__this, method) (( bool (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16318_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16320_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16320(__this, method) (( Object_t * (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16322_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16322(__this, method) (( bool (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16324_gshared (Dictionary_2_t1057 * __this, KeyValuePair_2_t2473  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16324(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1057 *, KeyValuePair_2_t2473 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16324_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16326_gshared (Dictionary_2_t1057 * __this, KeyValuePair_2_t2473  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16326(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1057 *, KeyValuePair_2_t2473 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16326_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16328_gshared (Dictionary_2_t1057 * __this, KeyValuePair_2U5BU5D_t3210* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16328(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, KeyValuePair_2U5BU5D_t3210*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16328_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16330_gshared (Dictionary_2_t1057 * __this, KeyValuePair_2_t2473  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16330(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1057 *, KeyValuePair_2_t2473 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16330_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16332_gshared (Dictionary_2_t1057 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16332_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16334_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16334(__this, method) (( Object_t * (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16334_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16336_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16336(__this, method) (( Object_t* (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16336_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16338_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16338(__this, method) (( Object_t * (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16340_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16340(__this, method) (( int32_t (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_get_Count_m16340_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16342_gshared (Dictionary_2_t1057 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16342(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1057 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m16342_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16344_gshared (Dictionary_2_t1057 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16344(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m16344_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16346_gshared (Dictionary_2_t1057 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16346(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1057 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16346_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16348_gshared (Dictionary_2_t1057 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16348(__this, ___size, method) (( void (*) (Dictionary_2_t1057 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16348_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16350_gshared (Dictionary_2_t1057 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16350(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16350_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2473  Dictionary_2_make_pair_m16352_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16352(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2473  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m16352_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m16354_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16354(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m16354_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m16356_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16356(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m16356_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16358_gshared (Dictionary_2_t1057 * __this, KeyValuePair_2U5BU5D_t3210* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16358(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, KeyValuePair_2U5BU5D_t3210*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16358_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m16360_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16360(__this, method) (( void (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_Resize_m16360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16362_gshared (Dictionary_2_t1057 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16362(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m16362_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m16364_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16364(__this, method) (( void (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_Clear_m16364_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16366_gshared (Dictionary_2_t1057 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16366(__this, ___key, method) (( bool (*) (Dictionary_2_t1057 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m16366_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16368_gshared (Dictionary_2_t1057 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16368(__this, ___value, method) (( bool (*) (Dictionary_2_t1057 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m16368_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16370_gshared (Dictionary_2_t1057 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16370(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1057 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m16370_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16372_gshared (Dictionary_2_t1057 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16372(__this, ___sender, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16372_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16374_gshared (Dictionary_2_t1057 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16374(__this, ___key, method) (( bool (*) (Dictionary_2_t1057 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m16374_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16376_gshared (Dictionary_2_t1057 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16376(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1057 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m16376_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2475 * Dictionary_2_get_Keys_m16378_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16378(__this, method) (( KeyCollection_t2475 * (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_get_Keys_m16378_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2479 * Dictionary_2_get_Values_m16379_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16379(__this, method) (( ValueCollection_t2479 * (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_get_Values_m16379_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m16381_gshared (Dictionary_2_t1057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16381(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1057 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16381_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m16383_gshared (Dictionary_2_t1057 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16383(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1057 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16383_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16385_gshared (Dictionary_2_t1057 * __this, KeyValuePair_2_t2473  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16385(__this, ___pair, method) (( bool (*) (Dictionary_2_t1057 *, KeyValuePair_2_t2473 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16385_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2477  Dictionary_2_GetEnumerator_m16386_gshared (Dictionary_2_t1057 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16386(__this, method) (( Enumerator_t2477  (*) (Dictionary_2_t1057 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16386_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m16388_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16388(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16388_gshared)(__this /* static, unused */, ___key, ___value, method)
