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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1478;
// System.Net.WebRequest
struct WebRequest_t1443;
// System.Uri
struct Uri_t1438;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m8678 (FileWebRequestCreator_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1443 * FileWebRequestCreator_Create_m8679 (FileWebRequestCreator_t1478 * __this, Uri_t1438 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
