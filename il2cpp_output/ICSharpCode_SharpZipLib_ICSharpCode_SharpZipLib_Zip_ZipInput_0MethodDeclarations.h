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

// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct ZipInputStream_t630;
// System.IO.Stream
struct Stream_t506;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::.ctor(System.IO.Stream)
extern "C" void ZipInputStream__ctor_m3638 (ZipInputStream_t630 * __this, Stream_t506 * ___baseInputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_Password()
extern "C" String_t* ZipInputStream_get_Password_m3639 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::set_Password(System.String)
extern "C" void ZipInputStream_set_Password_m3640 (ZipInputStream_t630 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_CanDecompressEntry()
extern "C" bool ZipInputStream_get_CanDecompressEntry_m3641 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::GetNextEntry()
extern "C" ZipEntry_t591 * ZipInputStream_GetNextEntry_m3642 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadDataDescriptor()
extern "C" void ZipInputStream_ReadDataDescriptor_m3643 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::CompleteCloseEntry(System.Boolean)
extern "C" void ZipInputStream_CompleteCloseEntry_m3644 (ZipInputStream_t630 * __this, bool ___testCrc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::CloseEntry()
extern "C" void ZipInputStream_CloseEntry_m3645 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_Available()
extern "C" int32_t ZipInputStream_get_Available_m3646 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_Length()
extern "C" int64_t ZipInputStream_get_Length_m3647 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadByte()
extern "C" int32_t ZipInputStream_ReadByte_m3648 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadingNotAvailable(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipInputStream_ReadingNotAvailable_m3649 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___destination, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadingNotSupported(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipInputStream_ReadingNotSupported_m3650 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___destination, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::InitialRead(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipInputStream_InitialRead_m3651 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___destination, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipInputStream_Read_m3652 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::BodyRead(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipInputStream_BodyRead_m3653 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::Close()
extern "C" void ZipInputStream_Close_m3654 (ZipInputStream_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
