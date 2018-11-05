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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2949;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2602;
// System.Object[]
struct ObjectU5BU5D_t166;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m23580_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m23580(__this, method) (( void (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1__ctor_m23580_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m23582_gshared (HashSet_1_t2949 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m23582(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2949 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))HashSet_1__ctor_m23582_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23584_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23584(__this, method) (( Object_t* (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23586_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23586(__this, method) (( bool (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23586_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m23588_gshared (HashSet_1_t2949 * __this, ObjectU5BU5D_t166* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m23588(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2949 *, ObjectU5BU5D_t166*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m23588_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23590_gshared (HashSet_1_t2949 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23590(__this, ___item, method) (( void (*) (HashSet_1_t2949 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23590_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m23592_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m23592(__this, method) (( Object_t * (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m23592_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m23594_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m23594(__this, method) (( int32_t (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_get_Count_m23594_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m23596_gshared (HashSet_1_t2949 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m23596(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2949 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m23596_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m23598_gshared (HashSet_1_t2949 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m23598(__this, ___size, method) (( void (*) (HashSet_1_t2949 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m23598_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m23600_gshared (HashSet_1_t2949 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m23600(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2949 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m23600_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m23602_gshared (HashSet_1_t2949 * __this, ObjectU5BU5D_t166* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m23602(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2949 *, ObjectU5BU5D_t166*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m23602_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m23604_gshared (HashSet_1_t2949 * __this, ObjectU5BU5D_t166* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m23604(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2949 *, ObjectU5BU5D_t166*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m23604_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m23606_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m23606(__this, method) (( void (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_Resize_m23606_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m23608_gshared (HashSet_1_t2949 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m23608(__this, ___index, method) (( int32_t (*) (HashSet_1_t2949 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m23608_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m23610_gshared (HashSet_1_t2949 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m23610(__this, ___item, method) (( int32_t (*) (HashSet_1_t2949 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m23610_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m23611_gshared (HashSet_1_t2949 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m23611(__this, ___item, method) (( bool (*) (HashSet_1_t2949 *, Object_t *, const MethodInfo*))HashSet_1_Add_m23611_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m23613_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m23613(__this, method) (( void (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_Clear_m23613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m23615_gshared (HashSet_1_t2949 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m23615(__this, ___item, method) (( bool (*) (HashSet_1_t2949 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m23615_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m23617_gshared (HashSet_1_t2949 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m23617(__this, ___item, method) (( bool (*) (HashSet_1_t2949 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m23617_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m23619_gshared (HashSet_1_t2949 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m23619(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2949 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))HashSet_1_GetObjectData_m23619_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m23621_gshared (HashSet_1_t2949 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m23621(__this, ___sender, method) (( void (*) (HashSet_1_t2949 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m23621_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2953  HashSet_1_GetEnumerator_m23622_gshared (HashSet_1_t2949 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m23622(__this, method) (( Enumerator_t2953  (*) (HashSet_1_t2949 *, const MethodInfo*))HashSet_1_GetEnumerator_m23622_gshared)(__this, method)
