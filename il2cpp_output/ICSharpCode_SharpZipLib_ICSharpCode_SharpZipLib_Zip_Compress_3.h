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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct  StreamManipulator_t565  : public Object_t
{
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::window_
	ByteU5BU5D_t129* ___window__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::windowStart_
	int32_t ___windowStart__1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::windowEnd_
	int32_t ___windowEnd__2;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::buffer_
	uint32_t ___buffer__3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::bitsInBuffer_
	int32_t ___bitsInBuffer__4;
};
