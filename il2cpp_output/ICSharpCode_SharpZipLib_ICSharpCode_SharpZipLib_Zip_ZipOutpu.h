#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t530;
// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t513;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_0.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_15.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"

// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct  ZipOutputStream_t579  : public DeflaterOutputStream_t548
{
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Zip.ZipOutputStream::entries
	ArrayList_t530 * ___entries_8;
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crc
	Crc32_t513 * ___crc_9;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curEntry
	ZipEntry_t591 * ___curEntry_10;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::defaultCompressionLevel
	int32_t ___defaultCompressionLevel_11;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curMethod
	int32_t ___curMethod_12;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::size
	int64_t ___size_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::offset
	int64_t ___offset_14;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipOutputStream::zipComment
	ByteU5BU5D_t129* ___zipComment_15;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::patchEntryHeader
	bool ___patchEntryHeader_16;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crcPatchPos
	int64_t ___crcPatchPos_17;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::sizePatchPos
	int64_t ___sizePatchPos_18;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::useZip64_
	int32_t ___useZip64__19;
};
