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

// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t607;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct KeysRequiredEventArgs_t601;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeysRequiredEventHandler__ctor_m3405 (KeysRequiredEventHandler_t607 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs)
extern "C" void KeysRequiredEventHandler_Invoke_m3406 (KeysRequiredEventHandler_t607 * __this, Object_t * ___sender, KeysRequiredEventArgs_t601 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeysRequiredEventHandler_t607(Il2CppObject* delegate, Object_t * ___sender, KeysRequiredEventArgs_t601 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeysRequiredEventHandler_BeginInvoke_m3407 (KeysRequiredEventHandler_t607 * __this, Object_t * ___sender, KeysRequiredEventArgs_t601 * ___e, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeysRequiredEventHandler_EndInvoke_m3408 (KeysRequiredEventHandler_t607 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
