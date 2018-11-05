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

// ICSharpCode.SharpZipLib.Core.ProcessFileHandler
struct ProcessFileHandler_t522;
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

// System.Void ICSharpCode.SharpZipLib.Core.ProcessFileHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProcessFileHandler__ctor_m2645 (ProcessFileHandler_t522 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProcessFileHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanEventArgs)
extern "C" void ProcessFileHandler_Invoke_m2646 (ProcessFileHandler_t522 * __this, Object_t * ___sender, ScanEventArgs_t516 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProcessFileHandler_t522(Il2CppObject* delegate, Object_t * ___sender, ScanEventArgs_t516 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Core.ProcessFileHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ProcessFileHandler_BeginInvoke_m2647 (ProcessFileHandler_t522 * __this, Object_t * ___sender, ScanEventArgs_t516 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.ProcessFileHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProcessFileHandler_EndInvoke_m2648 (ProcessFileHandler_t522 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
