#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t129;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t550;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct  InflaterInputBuffer_t546  : public Object_t
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawLength
	int32_t ___rawLength_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawData
	ByteU5BU5D_t129* ___rawData_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearTextLength
	int32_t ___clearTextLength_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearText
	ByteU5BU5D_t129* ___clearText_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::internalClearText
	ByteU5BU5D_t129* ___internalClearText_4;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::available
	int32_t ___available_5;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::cryptoTransform
	Object_t * ___cryptoTransform_6;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::inputStream
	Stream_t506 * ___inputStream_7;
};
