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

// ICSharpCode.SharpZipLib.Core.PathFilter
struct PathFilter_t531;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.PathFilter::.ctor(System.String)
extern "C" void PathFilter__ctor_m2685 (PathFilter_t531 * __this, String_t* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.PathFilter::IsMatch(System.String)
extern "C" bool PathFilter_IsMatch_m2686 (PathFilter_t531 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
