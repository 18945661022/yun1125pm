#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
struct  PartialInputStream_t617  : public Stream_t506
{
	// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::zipFile_
	ZipFile_t580 * ___zipFile__1;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::baseStream_
	Stream_t506 * ___baseStream__2;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::start_
	int64_t ___start__3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::length_
	int64_t ___length__4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::readPos_
	int64_t ___readPos__5;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::end_
	int64_t ___end__6;
};
