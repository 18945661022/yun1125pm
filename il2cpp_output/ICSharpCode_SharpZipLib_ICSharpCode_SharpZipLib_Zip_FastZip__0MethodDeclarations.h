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

// ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate
struct ConfirmOverwriteDelegate_t577;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConfirmOverwriteDelegate__ctor_m3190 (ConfirmOverwriteDelegate_t577 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate::Invoke(System.String)
extern "C" bool ConfirmOverwriteDelegate_Invoke_m3191 (ConfirmOverwriteDelegate_t577 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_ConfirmOverwriteDelegate_t577(Il2CppObject* delegate, String_t* ___fileName);
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * ConfirmOverwriteDelegate_BeginInvoke_m3192 (ConfirmOverwriteDelegate_t577 * __this, String_t* ___fileName, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool ConfirmOverwriteDelegate_EndInvoke_m3193 (ConfirmOverwriteDelegate_t577 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
