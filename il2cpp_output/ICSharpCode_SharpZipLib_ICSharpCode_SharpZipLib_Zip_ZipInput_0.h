#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
struct ReadDataHandler_t629;
// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t513;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.String
struct String_t;

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress.h"

// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct  ZipInputStream_t630  : public InflaterInputStream_t544
{
	// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler ICSharpCode.SharpZipLib.Zip.ZipInputStream::internalReader
	ReadDataHandler_t629 * ___internalReader_7;
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::crc
	Crc32_t513 * ___crc_8;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::entry
	ZipEntry_t591 * ___entry_9;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipInputStream::size
	int64_t ___size_10;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::method
	int32_t ___method_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::flags
	int32_t ___flags_12;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipInputStream::password
	String_t* ___password_13;
};
