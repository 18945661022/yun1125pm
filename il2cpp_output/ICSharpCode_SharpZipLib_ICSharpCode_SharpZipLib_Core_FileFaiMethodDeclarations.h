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

// ICSharpCode.SharpZipLib.Core.FileFailureHandler
struct FileFailureHandler_t526;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs
struct ScanFailureEventArgs_t520;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ICSharpCode.SharpZipLib.Core.FileFailureHandler::.ctor(System.Object,System.IntPtr)
extern "C" void FileFailureHandler__ctor_m2661 (FileFailureHandler_t526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileFailureHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs)
extern "C" void FileFailureHandler_Invoke_m2662 (FileFailureHandler_t526 * __this, Object_t * ___sender, ScanFailureEventArgs_t520 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FileFailureHandler_t526(Il2CppObject* delegate, Object_t * ___sender, ScanFailureEventArgs_t520 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Core.FileFailureHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * FileFailureHandler_BeginInvoke_m2663 (FileFailureHandler_t526 * __this, Object_t * ___sender, ScanFailureEventArgs_t520 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.FileFailureHandler::EndInvoke(System.IAsyncResult)
extern "C" void FileFailureHandler_EndInvoke_m2664 (FileFailureHandler_t526 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
