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

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t787;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3212;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t945;
// System.Int32[]
struct Int32U5BU5D_t193;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor()
extern "C" void LinkedList_1__ctor_m5961_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m5961(__this, method) (( void (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1__ctor_m5961_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m20115_gshared (LinkedList_1_t787 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m20115(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t787 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))LinkedList_1__ctor_m20115_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m20116_gshared (LinkedList_1_t787 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m20116(__this, ___value, method) (( void (*) (LinkedList_1_t787 *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m20116_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m20117_gshared (LinkedList_1_t787 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m20117(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t787 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m20117_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20118_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20118(__this, method) (( Object_t* (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20118_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m20119_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m20119(__this, method) (( Object_t * (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m20119_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20120_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20120(__this, method) (( bool (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m20121_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m20121(__this, method) (( bool (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m20121_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m20122_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m20122(__this, method) (( Object_t * (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m20122_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m20123_gshared (LinkedList_1_t787 * __this, LinkedListNode_1_t945 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m20123(__this, ___node, method) (( void (*) (LinkedList_1_t787 *, LinkedListNode_1_t945 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m20123_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::AddLast(T)
extern "C" LinkedListNode_1_t945 * LinkedList_1_AddLast_m5966_gshared (LinkedList_1_t787 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m5966(__this, ___value, method) (( LinkedListNode_1_t945 * (*) (LinkedList_1_t787 *, int32_t, const MethodInfo*))LinkedList_1_AddLast_m5966_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Clear()
extern "C" void LinkedList_1_Clear_m20124_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m20124(__this, method) (( void (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_Clear_m20124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Contains(T)
extern "C" bool LinkedList_1_Contains_m20125_gshared (LinkedList_1_t787 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m20125(__this, ___value, method) (( bool (*) (LinkedList_1_t787 *, int32_t, const MethodInfo*))LinkedList_1_Contains_m20125_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m20126_gshared (LinkedList_1_t787 * __this, Int32U5BU5D_t193* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m20126(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t787 *, Int32U5BU5D_t193*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m20126_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::Find(T)
extern "C" LinkedListNode_1_t945 * LinkedList_1_Find_m20127_gshared (LinkedList_1_t787 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Find_m20127(__this, ___value, method) (( LinkedListNode_1_t945 * (*) (LinkedList_1_t787 *, int32_t, const MethodInfo*))LinkedList_1_Find_m20127_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2733  LinkedList_1_GetEnumerator_m20128_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m20128(__this, method) (( Enumerator_t2733  (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_GetEnumerator_m20128_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m20129_gshared (LinkedList_1_t787 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m20129(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t787 *, SerializationInfo_t643 *, StreamingContext_t644 , const MethodInfo*))LinkedList_1_GetObjectData_m20129_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m20130_gshared (LinkedList_1_t787 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m20130(__this, ___sender, method) (( void (*) (LinkedList_1_t787 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m20130_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Int32>::Remove(T)
extern "C" bool LinkedList_1_Remove_m20131_gshared (LinkedList_1_t787 * __this, int32_t ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m20131(__this, ___value, method) (( bool (*) (LinkedList_1_t787 *, int32_t, const MethodInfo*))LinkedList_1_Remove_m20131_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Int32>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m6133_gshared (LinkedList_1_t787 * __this, LinkedListNode_1_t945 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m6133(__this, ___node, method) (( void (*) (LinkedList_1_t787 *, LinkedListNode_1_t945 *, const MethodInfo*))LinkedList_1_Remove_m6133_gshared)(__this, ___node, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Int32>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m20132_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m20132(__this, method) (( int32_t (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_get_Count_m20132_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::get_First()
extern "C" LinkedListNode_1_t945 * LinkedList_1_get_First_m5974_gshared (LinkedList_1_t787 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m5974(__this, method) (( LinkedListNode_1_t945 * (*) (LinkedList_1_t787 *, const MethodInfo*))LinkedList_1_get_First_m5974_gshared)(__this, method)
