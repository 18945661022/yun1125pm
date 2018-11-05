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

// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct ZipOutputStream_t579;
// System.IO.Stream
struct Stream_t506;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::.ctor(System.IO.Stream)
extern "C" void ZipOutputStream__ctor_m3665 (ZipOutputStream_t579 * __this, Stream_t506 * ___baseOutputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::get_IsFinished()
extern "C" bool ZipOutputStream_get_IsFinished_m3666 (ZipOutputStream_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetComment(System.String)
extern "C" void ZipOutputStream_SetComment_m3667 (ZipOutputStream_t579 * __this, String_t* ___comment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetLevel(System.Int32)
extern "C" void ZipOutputStream_SetLevel_m3668 (ZipOutputStream_t579 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::GetLevel()
extern "C" int32_t ZipOutputStream_GetLevel_m3669 (ZipOutputStream_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::get_UseZip64()
extern "C" int32_t ZipOutputStream_get_UseZip64_m3670 (ZipOutputStream_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::set_UseZip64(ICSharpCode.SharpZipLib.Zip.UseZip64)
extern "C" void ZipOutputStream_set_UseZip64_m3671 (ZipOutputStream_t579 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeShort(System.Int32)
extern "C" void ZipOutputStream_WriteLeShort_m3672 (ZipOutputStream_t579 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeInt(System.Int32)
extern "C" void ZipOutputStream_WriteLeInt_m3673 (ZipOutputStream_t579 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeLong(System.Int64)
extern "C" void ZipOutputStream_WriteLeLong_m3674 (ZipOutputStream_t579 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::PutNextEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipOutputStream_PutNextEntry_m3675 (ZipOutputStream_t579 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CloseEntry()
extern "C" void ZipOutputStream_CloseEntry_m3676 (ZipOutputStream_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteEncryptionHeader(System.Int64)
extern "C" void ZipOutputStream_WriteEncryptionHeader_m3677 (ZipOutputStream_t579 * __this, int64_t ___crcValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipOutputStream_Write_m3678 (ZipOutputStream_t579 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CopyAndEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipOutputStream_CopyAndEncrypt_m3679 (ZipOutputStream_t579 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::Finish()
extern "C" void ZipOutputStream_Finish_m3680 (ZipOutputStream_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
