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

// ICSharpCode.SharpZipLib.Core.ProgressHandler
struct ProgressHandler_t523;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Core.ProgressEventArgs
struct ProgressEventArgs_t518;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ICSharpCode.SharpZipLib.Core.ProgressHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProgressHandler__ctor_m2649 (ProgressHandler_t523 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProgressHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Core.ProgressEventArgs)
extern "C" void ProgressHandler_Invoke_m2650 (ProgressHandler_t523 * __this, Object_t * ___sender, ProgressEventArgs_t518 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProgressHandler_t523(Il2CppObject* delegate, Object_t * ___sender, ProgressEventArgs_t518 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Core.ProgressHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Core.ProgressEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ProgressHandler_BeginInvoke_m2651 (ProgressHandler_t523 * __this, Object_t * ___sender, ProgressEventArgs_t518 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProgressHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProgressHandler_EndInvoke_m2652 (ProgressHandler_t523 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
