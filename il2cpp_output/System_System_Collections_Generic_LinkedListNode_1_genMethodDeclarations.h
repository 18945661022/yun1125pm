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

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t945;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t787;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m20133_gshared (LinkedListNode_1_t945 * __this, LinkedList_1_t787 * ___list, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m20133(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t945 *, LinkedList_1_t787 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m20133_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m20134_gshared (LinkedListNode_1_t945 * __this, LinkedList_1_t787 * ___list, int32_t ___value, LinkedListNode_1_t945 * ___previousNode, LinkedListNode_1_t945 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m20134(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t945 *, LinkedList_1_t787 *, int32_t, LinkedListNode_1_t945 *, LinkedListNode_1_t945 *, const MethodInfo*))LinkedListNode_1__ctor_m20134_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m20135_gshared (LinkedListNode_1_t945 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m20135(__this, method) (( void (*) (LinkedListNode_1_t945 *, const MethodInfo*))LinkedListNode_1_Detach_m20135_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t787 * LinkedListNode_1_get_List_m20136_gshared (LinkedListNode_1_t945 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m20136(__this, method) (( LinkedList_1_t787 * (*) (LinkedListNode_1_t945 *, const MethodInfo*))LinkedListNode_1_get_List_m20136_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t945 * LinkedListNode_1_get_Next_m6132_gshared (LinkedListNode_1_t945 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m6132(__this, method) (( LinkedListNode_1_t945 * (*) (LinkedListNode_1_t945 *, const MethodInfo*))LinkedListNode_1_get_Next_m6132_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m5975_gshared (LinkedListNode_1_t945 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m5975(__this, method) (( int32_t (*) (LinkedListNode_1_t945 *, const MethodInfo*))LinkedListNode_1_get_Value_m5975_gshared)(__this, method)
