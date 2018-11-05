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

// ICSharpCode.SharpZipLib.Core.DirectoryEventArgs
struct DirectoryEventArgs_t519;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.DirectoryEventArgs::.ctor(System.String,System.Boolean)
extern "C" void DirectoryEventArgs__ctor_m2634 (DirectoryEventArgs_t519 * __this, String_t* ___name, bool ___hasMatchingFiles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.DirectoryEventArgs::get_HasMatchingFiles()
extern "C" bool DirectoryEventArgs_get_HasMatchingFiles_m2635 (DirectoryEventArgs_t519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
