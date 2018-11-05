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

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_0.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_GZip_GZipOut.h"

// ICSharpCode.SharpZipLib.GZip.GZipOutputStream
struct  GZipOutputStream_t552  : public DeflaterOutputStream_t548
{
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.GZip.GZipOutputStream::crc
	Crc32_t513 * ___crc_8;
	// ICSharpCode.SharpZipLib.GZip.GZipOutputStream/OutputState ICSharpCode.SharpZipLib.GZip.GZipOutputStream::state_
	int32_t ___state__9;
};
