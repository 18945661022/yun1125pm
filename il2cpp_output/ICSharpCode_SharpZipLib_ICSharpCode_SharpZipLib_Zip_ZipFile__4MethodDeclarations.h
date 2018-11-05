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

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString
struct ZipString_t613;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::.ctor(System.String)
extern "C" void ZipString__ctor_m3428 (ZipString_t613 * __this, String_t* ___comment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::.ctor(System.Byte[])
extern "C" void ZipString__ctor_m3429 (ZipString_t613 * __this, ByteU5BU5D_t129* ___rawString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::get_IsSourceString()
extern "C" bool ZipString_get_IsSourceString_m3430 (ZipString_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::get_RawLength()
extern "C" int32_t ZipString_get_RawLength_m3431 (ZipString_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::get_RawComment()
extern "C" ByteU5BU5D_t129* ZipString_get_RawComment_m3432 (ZipString_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::Reset()
extern "C" void ZipString_Reset_m3433 (ZipString_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::MakeTextAvailable()
extern "C" void ZipString_MakeTextAvailable_m3434 (ZipString_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::MakeBytesAvailable()
extern "C" void ZipString_MakeBytesAvailable_m3435 (ZipString_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString::op_Implicit(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString)
extern "C" String_t* ZipString_op_Implicit_m3436 (Object_t * __this /* static, unused */, ZipString_t613 * ___zipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
