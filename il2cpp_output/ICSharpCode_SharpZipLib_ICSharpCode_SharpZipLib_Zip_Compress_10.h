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

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer
struct  PendingBuffer_t572  : public Object_t
{
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::buffer_
	ByteU5BU5D_t129* ___buffer__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::start
	int32_t ___start_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::end
	int32_t ___end_2;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::bits
	uint32_t ___bits_3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer::bitCount
	int32_t ___bitCount_4;
};
