#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t513;

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress.h"

// ICSharpCode.SharpZipLib.GZip.GZipInputStream
struct  GZipInputStream_t547  : public InflaterInputStream_t544
{
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.GZip.GZipInputStream::crc
	Crc32_t513 * ___crc_7;
	// System.Boolean ICSharpCode.SharpZipLib.GZip.GZipInputStream::eos
	bool ___eos_8;
	// System.Boolean ICSharpCode.SharpZipLib.GZip.GZipInputStream::readGZIPHeader
	bool ___readGZIPHeader_9;
};
