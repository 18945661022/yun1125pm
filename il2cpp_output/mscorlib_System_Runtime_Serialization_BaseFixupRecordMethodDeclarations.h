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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2059;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2058;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2052;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m13000 (BaseFixupRecord_t2059 * __this, ObjectRecord_t2058 * ___objectToBeFixed, ObjectRecord_t2058 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool BaseFixupRecord_DoFixup_m13001 (BaseFixupRecord_t2059 * __this, ObjectManager_t2052 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
