#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t566;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct DeflaterEngine_t567;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct  Deflater_t549  : public Object_t
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::level
	int32_t ___level_15;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Deflater::noZlibHeaderOrFooter
	bool ___noZlibHeaderOrFooter_16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::state
	int32_t ___state_17;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Deflater::totalOut
	int64_t ___totalOut_18;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.Deflater::pending
	DeflaterPending_t566 * ___pending_19;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine ICSharpCode.SharpZipLib.Zip.Compression.Deflater::engine
	DeflaterEngine_t567 * ___engine_20;
};
