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

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3078;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3077;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m25228_gshared (LinkedListNode_1_t3078 * __this, LinkedList_1_t3077 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m25228(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3078 *, LinkedList_1_t3077 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m25228_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m25229_gshared (LinkedListNode_1_t3078 * __this, LinkedList_1_t3077 * ___list, Object_t * ___value, LinkedListNode_1_t3078 * ___previousNode, LinkedListNode_1_t3078 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m25229(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3078 *, LinkedList_1_t3077 *, Object_t *, LinkedListNode_1_t3078 *, LinkedListNode_1_t3078 *, const MethodInfo*))LinkedListNode_1__ctor_m25229_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m25230_gshared (LinkedListNode_1_t3078 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m25230(__this, method) (( void (*) (LinkedListNode_1_t3078 *, const MethodInfo*))LinkedListNode_1_Detach_m25230_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3077 * LinkedListNode_1_get_List_m25231_gshared (LinkedListNode_1_t3078 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m25231(__this, method) (( LinkedList_1_t3077 * (*) (LinkedListNode_1_t3078 *, const MethodInfo*))LinkedListNode_1_get_List_m25231_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t3078 * LinkedListNode_1_get_Next_m25232_gshared (LinkedListNode_1_t3078 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m25232(__this, method) (( LinkedListNode_1_t3078 * (*) (LinkedListNode_1_t3078 *, const MethodInfo*))LinkedListNode_1_get_Next_m25232_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m25233_gshared (LinkedListNode_1_t3078 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m25233(__this, method) (( Object_t * (*) (LinkedListNode_1_t3078 *, const MethodInfo*))LinkedListNode_1_get_Value_m25233_gshared)(__this, method)
