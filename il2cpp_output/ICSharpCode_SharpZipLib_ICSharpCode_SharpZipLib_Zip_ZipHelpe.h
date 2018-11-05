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

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct  ZipHelperStream_t628  : public Stream_t506
{
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::isOwner_
	bool ___isOwner__1;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipHelperStream::stream_
	Stream_t506 * ___stream__2;
};
