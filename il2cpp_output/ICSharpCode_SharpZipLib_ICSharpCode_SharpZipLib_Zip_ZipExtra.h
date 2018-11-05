#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t600;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct  ZipExtraData_t599  : public Object_t
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::index_
	int32_t ___index__0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::readValueStart_
	int32_t ___readValueStart__1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::readValueLength_
	int32_t ___readValueLength__2;
	// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.ZipExtraData::newEntry_
	MemoryStream_t600 * ___newEntry__3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipExtraData::data_
	ByteU5BU5D_t129* ___data__4;
};
