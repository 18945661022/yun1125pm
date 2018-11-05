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

// ICSharpCode.SharpZipLib.Core.ProgressEventArgs
struct ProgressEventArgs_t518;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Core.ProgressEventArgs::.ctor(System.String,System.Int64,System.Int64)
extern "C" void ProgressEventArgs__ctor_m2627 (ProgressEventArgs_t518 * __this, String_t* ___name, int64_t ___processed, int64_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Core.ProgressEventArgs::get_Name()
extern "C" String_t* ProgressEventArgs_get_Name_m2628 (ProgressEventArgs_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Core.ProgressEventArgs::get_ContinueRunning()
extern "C" bool ProgressEventArgs_get_ContinueRunning_m2629 (ProgressEventArgs_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProgressEventArgs::set_ContinueRunning(System.Boolean)
extern "C" void ProgressEventArgs_set_ContinueRunning_m2630 (ProgressEventArgs_t518 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ICSharpCode.SharpZipLib.Core.ProgressEventArgs::get_PercentComplete()
extern "C" float ProgressEventArgs_get_PercentComplete_m2631 (ProgressEventArgs_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Core.ProgressEventArgs::get_Processed()
extern "C" int64_t ProgressEventArgs_get_Processed_m2632 (ProgressEventArgs_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Core.ProgressEventArgs::get_Target()
extern "C" int64_t ProgressEventArgs_get_Target_m2633 (ProgressEventArgs_t518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
