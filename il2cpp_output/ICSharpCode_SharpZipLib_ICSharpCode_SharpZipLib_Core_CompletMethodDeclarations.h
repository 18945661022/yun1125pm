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

// ICSharpCode.SharpZipLib.Core.CompletedFileHandler
struct CompletedFileHandler_t524;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Core.ScanEventArgs
struct ScanEventArgs_t516;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ICSharpCode.SharpZipLib.Core.CompletedFileHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CompletedFileHandler__ctor_m2653 (CompletedFileHandler_t524 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.CompletedFileHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanEventArgs)
extern "C" void CompletedFileHandler_Invoke_m2654 (CompletedFileHandler_t524 * __this, Object_t * ___sender, ScanEventArgs_t516 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CompletedFileHandler_t524(Il2CppObject* delegate, Object_t * ___sender, ScanEventArgs_t516 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Core.CompletedFileHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * CompletedFileHandler_BeginInvoke_m2655 (CompletedFileHandler_t524 * __this, Object_t * ___sender, ScanEventArgs_t516 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.CompletedFileHandler::EndInvoke(System.IAsyncResult)
extern "C" void CompletedFileHandler_EndInvoke_m2656 (CompletedFileHandler_t524 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
