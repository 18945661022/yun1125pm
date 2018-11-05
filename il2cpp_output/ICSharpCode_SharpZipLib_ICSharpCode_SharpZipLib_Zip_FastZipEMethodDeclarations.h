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

// ICSharpCode.SharpZipLib.Zip.FastZipEvents
struct FastZipEvents_t575;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZipEvents::OnDirectoryFailure(System.String,System.Exception)
extern "C" bool FastZipEvents_OnDirectoryFailure_m3182 (FastZipEvents_t575 * __this, String_t* ___directory, Exception_t159 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZipEvents::OnFileFailure(System.String,System.Exception)
extern "C" bool FastZipEvents_OnFileFailure_m3183 (FastZipEvents_t575 * __this, String_t* ___file, Exception_t159 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZipEvents::OnProcessFile(System.String)
extern "C" bool FastZipEvents_OnProcessFile_m3184 (FastZipEvents_t575 * __this, String_t* ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZipEvents::OnCompletedFile(System.String)
extern "C" bool FastZipEvents_OnCompletedFile_m3185 (FastZipEvents_t575 * __this, String_t* ___file, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZipEvents::OnProcessDirectory(System.String,System.Boolean)
extern "C" bool FastZipEvents_OnProcessDirectory_m3186 (FastZipEvents_t575 * __this, String_t* ___directory, bool ___hasMatchingFiles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan ICSharpCode.SharpZipLib.Zip.FastZipEvents::get_ProgressInterval()
extern "C" TimeSpan_t156  FastZipEvents_get_ProgressInterval_m3187 (FastZipEvents_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZipEvents::set_ProgressInterval(System.TimeSpan)
extern "C" void FastZipEvents_set_ProgressInterval_m3188 (FastZipEvents_t575 * __this, TimeSpan_t156  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.FastZipEvents::.ctor()
extern "C" void FastZipEvents__ctor_m3189 (FastZipEvents_t575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
