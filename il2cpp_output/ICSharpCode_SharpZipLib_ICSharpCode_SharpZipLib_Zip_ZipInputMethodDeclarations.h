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

// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
struct ReadDataHandler_t629;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDataHandler__ctor_m3634 (ReadDataHandler_t629 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDataHandler_Invoke_m3635 (ReadDataHandler_t629 * __this, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadDataHandler_t629(Il2CppObject* delegate, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length);
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadDataHandler_BeginInvoke_m3636 (ReadDataHandler_t629 * __this, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDataHandler_EndInvoke_m3637 (ReadDataHandler_t629 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
