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

// ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler
struct ProgressMessageHandler_t555;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Tar.TarArchive
struct TarArchive_t556;
// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProgressMessageHandler__ctor_m2824 (ProgressMessageHandler_t555 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler::Invoke(ICSharpCode.SharpZipLib.Tar.TarArchive,ICSharpCode.SharpZipLib.Tar.TarEntry,System.String)
extern "C" void ProgressMessageHandler_Invoke_m2825 (ProgressMessageHandler_t555 * __this, TarArchive_t556 * ___archive, TarEntry_t557 * ___entry, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProgressMessageHandler_t555(Il2CppObject* delegate, TarArchive_t556 * ___archive, TarEntry_t557 * ___entry, String_t* ___message);
// System.IAsyncResult ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler::BeginInvoke(ICSharpCode.SharpZipLib.Tar.TarArchive,ICSharpCode.SharpZipLib.Tar.TarEntry,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * ProgressMessageHandler_BeginInvoke_m2826 (ProgressMessageHandler_t555 * __this, TarArchive_t556 * ___archive, TarEntry_t557 * ___entry, String_t* ___message, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProgressMessageHandler_EndInvoke_m2827 (ProgressMessageHandler_t555 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
