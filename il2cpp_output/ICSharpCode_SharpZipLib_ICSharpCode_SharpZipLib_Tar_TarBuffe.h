#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Tar.TarBuffer
struct  TarBuffer_t560  : public Object_t
{
	// System.IO.Stream ICSharpCode.SharpZipLib.Tar.TarBuffer::inputStream
	Stream_t506 * ___inputStream_3;
	// System.IO.Stream ICSharpCode.SharpZipLib.Tar.TarBuffer::outputStream
	Stream_t506 * ___outputStream_4;
	// System.Byte[] ICSharpCode.SharpZipLib.Tar.TarBuffer::recordBuffer
	ByteU5BU5D_t129* ___recordBuffer_5;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::currentBlockIndex
	int32_t ___currentBlockIndex_6;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::currentRecordIndex
	int32_t ___currentRecordIndex_7;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::recordSize
	int32_t ___recordSize_8;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::blockFactor
	int32_t ___blockFactor_9;
};
