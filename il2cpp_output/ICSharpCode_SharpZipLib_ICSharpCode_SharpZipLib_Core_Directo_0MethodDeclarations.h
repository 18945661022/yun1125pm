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

// ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler
struct DirectoryFailureHandler_t525;
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

// System.Void ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DirectoryFailureHandler__ctor_m2657 (DirectoryFailureHandler_t525 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs)
extern "C" void DirectoryFailureHandler_Invoke_m2658 (DirectoryFailureHandler_t525 * __this, Object_t * ___sender, ScanFailureEventArgs_t520 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DirectoryFailureHandler_t525(Il2CppObject* delegate, Object_t * ___sender, ScanFailureEventArgs_t520 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Core.ScanFailureEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DirectoryFailureHandler_BeginInvoke_m2659 (DirectoryFailureHandler_t525 * __this, Object_t * ___sender, ScanFailureEventArgs_t520 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Core.DirectoryFailureHandler::EndInvoke(System.IAsyncResult)
extern "C" void DirectoryFailureHandler_EndInvoke_m2660 (DirectoryFailureHandler_t525 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
