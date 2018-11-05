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

// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t1916;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1816;
// System.IO.Stream
struct Stream_t506;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void RuntimeResourceSet__ctor_m12434 (RuntimeResourceSet_t1916 * __this, UnmanagedMemoryStream_t1816 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.Stream)
extern "C" void RuntimeResourceSet__ctor_m12435 (RuntimeResourceSet_t1916 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.String)
extern "C" void RuntimeResourceSet__ctor_m12436 (RuntimeResourceSet_t1916 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String)
extern "C" Object_t * RuntimeResourceSet_GetObject_m12437 (RuntimeResourceSet_t1916 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * RuntimeResourceSet_GetObject_m12438 (RuntimeResourceSet_t1916 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::CloneDisposableObjectIfPossible(System.Object)
extern "C" Object_t * RuntimeResourceSet_CloneDisposableObjectIfPossible_m12439 (RuntimeResourceSet_t1916 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
