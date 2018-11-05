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

// ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler
struct ZipTestResultHandler_t605;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Zip.TestStatus
struct TestStatus_t604;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ZipTestResultHandler__ctor_m3401 (ZipTestResultHandler_t605 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::Invoke(ICSharpCode.SharpZipLib.Zip.TestStatus,System.String)
extern "C" void ZipTestResultHandler_Invoke_m3402 (ZipTestResultHandler_t605 * __this, TestStatus_t604 * ___status, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ZipTestResultHandler_t605(Il2CppObject* delegate, TestStatus_t604 * ___status, String_t* ___message);
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::BeginInvoke(ICSharpCode.SharpZipLib.Zip.TestStatus,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * ZipTestResultHandler_BeginInvoke_m3403 (ZipTestResultHandler_t605 * __this, TestStatus_t604 * ___status, String_t* ___message, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler::EndInvoke(System.IAsyncResult)
extern "C" void ZipTestResultHandler_EndInvoke_m3404 (ZipTestResultHandler_t605 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
