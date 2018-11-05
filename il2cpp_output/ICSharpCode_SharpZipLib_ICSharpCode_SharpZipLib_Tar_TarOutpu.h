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
// ICSharpCode.SharpZipLib.Tar.TarBuffer
struct TarBuffer_t560;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.Tar.TarOutputStream
struct  TarOutputStream_t559  : public Stream_t506
{
	// System.Int64 ICSharpCode.SharpZipLib.Tar.TarOutputStream::currBytes
	int64_t ___currBytes_1;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarOutputStream::assemblyBufferLength
	int32_t ___assemblyBufferLength_2;
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarOutputStream::isClosed
	bool ___isClosed_3;
	// System.Int64 ICSharpCode.SharpZipLib.Tar.TarOutputStream::currSize
	int64_t ___currSize_4;
	// System.Byte[] ICSharpCode.SharpZipLib.Tar.TarOutputStream::blockBuffer
	ByteU5BU5D_t129* ___blockBuffer_5;
	// System.Byte[] ICSharpCode.SharpZipLib.Tar.TarOutputStream::assemblyBuffer
	ByteU5BU5D_t129* ___assemblyBuffer_6;
	// ICSharpCode.SharpZipLib.Tar.TarBuffer ICSharpCode.SharpZipLib.Tar.TarOutputStream::buffer
	TarBuffer_t560 * ___buffer_7;
	// System.IO.Stream ICSharpCode.SharpZipLib.Tar.TarOutputStream::outputStream
	Stream_t506 * ___outputStream_8;
};
