#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t550;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t549;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct  DeflaterOutputStream_t548  : public Stream_t506
{
	// System.String ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::password
	String_t* ___password_1;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::cryptoTransform_
	Object_t * ___cryptoTransform__2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::buffer_
	ByteU5BU5D_t129* ___buffer__3;
	// ICSharpCode.SharpZipLib.Zip.Compression.Deflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::deflater_
	Deflater_t549 * ___deflater__4;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::baseOutputStream_
	Stream_t506 * ___baseOutputStream__5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isClosed_
	bool ___isClosed__6;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isStreamOwner_
	bool ___isStreamOwner__7;
};
