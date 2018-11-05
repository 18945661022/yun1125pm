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

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t2901;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>[]
struct KeyValuePair_2U5BU5D_t3285;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct IEnumerator_1_t3286;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1421;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t2906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t2910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void Dictionary_2__ctor_m22881_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m22881(__this, method) (( void (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2__ctor_m22881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22883_gshared (Dictionary_2_t2901 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22883(__this, ___comparer, method) (( void (*) (Dictionary_2_t2901 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22883_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22885_gshared (Dictionary_2_t2901 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22885(__this, ___capacity, method) (( void (*) (Dictionary_2_t2901 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22885_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22887_gshared (Dictionary_2_t2901 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22887(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2901 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2__ctor_m22887_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22889_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22889(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22889_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22891_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2901 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22891_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22893_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2901 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22895_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22895(__this, ___key, method) (( void (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22895_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22897_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22897(__this, method) (( bool (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22899_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22899(__this, method) (( Object_t * (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22901_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22901(__this, method) (( bool (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22903_gshared (Dictionary_2_t2901 * __this, KeyValuePair_2_t2903  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22903(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2901 *, KeyValuePair_2_t2903 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22903_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22905_gshared (Dictionary_2_t2901 * __this, KeyValuePair_2_t2903  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22905(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2901 *, KeyValuePair_2_t2903 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22905_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22907_gshared (Dictionary_2_t2901 * __this, KeyValuePair_2U5BU5D_t3285* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22907(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2901 *, KeyValuePair_2U5BU5D_t3285*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22907_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22909_gshared (Dictionary_2_t2901 * __this, KeyValuePair_2_t2903  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22909(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2901 *, KeyValuePair_2_t2903 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22911_gshared (Dictionary_2_t2901 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2901 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22911_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22913_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22913(__this, method) (( Object_t * (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22913_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22915_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22915(__this, method) (( Object_t* (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22915_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22917_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22917(__this, method) (( Object_t * (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22917_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22919_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22919(__this, method) (( int32_t (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_get_Count_m22919_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
extern "C" ProfileData_t858  Dictionary_2_get_Item_m22921_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22921(__this, ___key, method) (( ProfileData_t858  (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m22921_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22923_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2901 *, Object_t *, ProfileData_t858 , const MethodInfo*))Dictionary_2_set_Item_m22923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22925_gshared (Dictionary_2_t2901 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22925(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2901 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22925_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22927_gshared (Dictionary_2_t2901 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22927(__this, ___size, method) (( void (*) (Dictionary_2_t2901 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22927_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22929_gshared (Dictionary_2_t2901 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22929(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2901 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22929_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2903  Dictionary_2_make_pair_m22931_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22931(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2903  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t858 , const MethodInfo*))Dictionary_2_make_pair_m22931_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22933_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22933(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t858 , const MethodInfo*))Dictionary_2_pick_key_m22933_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
extern "C" ProfileData_t858  Dictionary_2_pick_value_m22935_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22935(__this /* static, unused */, ___key, ___value, method) (( ProfileData_t858  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t858 , const MethodInfo*))Dictionary_2_pick_value_m22935_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22937_gshared (Dictionary_2_t2901 * __this, KeyValuePair_2U5BU5D_t3285* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22937(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2901 *, KeyValuePair_2U5BU5D_t3285*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22937_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Resize()
extern "C" void Dictionary_2_Resize_m22939_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22939(__this, method) (( void (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_Resize_m22939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22941_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2901 *, Object_t *, ProfileData_t858 , const MethodInfo*))Dictionary_2_Add_m22941_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Clear()
extern "C" void Dictionary_2_Clear_m22943_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22943(__this, method) (( void (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_Clear_m22943_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22945_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22945(__this, ___key, method) (( bool (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m22945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22947_gshared (Dictionary_2_t2901 * __this, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22947(__this, ___value, method) (( bool (*) (Dictionary_2_t2901 *, ProfileData_t858 , const MethodInfo*))Dictionary_2_ContainsValue_m22947_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22949_gshared (Dictionary_2_t2901 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22949(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2901 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))Dictionary_2_GetObjectData_m22949_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22951_gshared (Dictionary_2_t2901 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22951(__this, ___sender, method) (( void (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22951_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22953_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22953(__this, ___key, method) (( bool (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m22953_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22955_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, ProfileData_t858 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22955(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2901 *, Object_t *, ProfileData_t858 *, const MethodInfo*))Dictionary_2_TryGetValue_m22955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Keys()
extern "C" KeyCollection_t2906 * Dictionary_2_get_Keys_m22957_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22957(__this, method) (( KeyCollection_t2906 * (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_get_Keys_m22957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Values()
extern "C" ValueCollection_t2910 * Dictionary_2_get_Values_m22959_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22959(__this, method) (( ValueCollection_t2910 * (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_get_Values_m22959_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22961_gshared (Dictionary_2_t2901 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22961(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22961_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
extern "C" ProfileData_t858  Dictionary_2_ToTValue_m22963_gshared (Dictionary_2_t2901 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22963(__this, ___value, method) (( ProfileData_t858  (*) (Dictionary_2_t2901 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22963_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22965_gshared (Dictionary_2_t2901 * __this, KeyValuePair_2_t2903  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22965(__this, ___pair, method) (( bool (*) (Dictionary_2_t2901 *, KeyValuePair_2_t2903 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22965_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t2908  Dictionary_2_GetEnumerator_m22967_gshared (Dictionary_2_t2901 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22967(__this, method) (( Enumerator_t2908  (*) (Dictionary_2_t2901 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22967_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1599  Dictionary_2_U3CCopyToU3Em__0_m22969_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t858  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22969(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1599  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t858 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22969_gshared)(__this /* static, unused */, ___key, ___value, method)
