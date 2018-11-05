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
// ICSharpCode.SharpZipLib.Tar.TarEntry
struct TarEntry_t557;
// ICSharpCode.SharpZipLib.Tar.TarInputStream/IEntryFactory
struct IEntryFactory_t563;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.Tar.TarInputStream
struct  TarInputStream_t558  : public Stream_t506
{
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarInputStream::hasHitEOF
	bool ___hasHitEOF_1;
	// System.Int64 ICSharpCode.SharpZipLib.Tar.TarInputStream::entrySize
	int64_t ___entrySize_2;
	// System.Int64 ICSharpCode.SharpZipLib.Tar.TarInputStream::entryOffset
	int64_t ___entryOffset_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Tar.TarInputStream::readBuffer
	ByteU5BU5D_t129* ___readBuffer_4;
	// ICSharpCode.SharpZipLib.Tar.TarBuffer ICSharpCode.SharpZipLib.Tar.TarInputStream::buffer
	TarBuffer_t560 * ___buffer_5;
	// ICSharpCode.SharpZipLib.Tar.TarEntry ICSharpCode.SharpZipLib.Tar.TarInputStream::currentEntry
	TarEntry_t557 * ___currentEntry_6;
	// ICSharpCode.SharpZipLib.Tar.TarInputStream/IEntryFactory ICSharpCode.SharpZipLib.Tar.TarInputStream::entryFactory
	Object_t * ___entryFactory_7;
	// System.IO.Stream ICSharpCode.SharpZipLib.Tar.TarInputStream::inputStream
	Stream_t506 * ___inputStream_8;
};
