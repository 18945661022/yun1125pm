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

// ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler
struct ProcessDirectoryHandler_t521;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Core.DirectoryEventArgs
struct DirectoryEventArgs_t519;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProcessDirectoryHandler__ctor_m2641 (ProcessDirectoryHandler_t521 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Core.DirectoryEventArgs)
extern "C" void ProcessDirectoryHandler_Invoke_m2642 (ProcessDirectoryHandler_t521 * __this, Object_t * ___sender, DirectoryEventArgs_t519 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProcessDirectoryHandler_t521(Il2CppObject* delegate, Object_t * ___sender, DirectoryEventArgs_t519 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Core.DirectoryEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ProcessDirectoryHandler_BeginInvoke_m2643 (ProcessDirectoryHandler_t521 * __this, Object_t * ___sender, DirectoryEventArgs_t519 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProcessDirectoryHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProcessDirectoryHandler_EndInvoke_m2644 (ProcessDirectoryHandler_t521 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
