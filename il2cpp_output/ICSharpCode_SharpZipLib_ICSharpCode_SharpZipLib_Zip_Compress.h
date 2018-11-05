#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t545;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t546;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct  InflaterInputStream_t544  : public Stream_t506
{
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_t545 * ___inf_1;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t546 * ___inputBuffer_2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_t506 * ___baseInputStream_3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::csize
	int64_t ___csize_4;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isStreamOwner
	bool ___isStreamOwner_6;
};
