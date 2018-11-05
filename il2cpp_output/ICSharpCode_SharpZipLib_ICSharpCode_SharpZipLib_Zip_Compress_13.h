#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t193;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t574;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct  InflaterDynHeader_t573  : public Object_t
{
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blLens
	ByteU5BU5D_t129* ___blLens_9;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::litdistLens
	ByteU5BU5D_t129* ___litdistLens_10;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blTree
	InflaterHuffmanTree_t574 * ___blTree_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::mode
	int32_t ___mode_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::lnum
	int32_t ___lnum_13;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::dnum
	int32_t ___dnum_14;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::blnum
	int32_t ___blnum_15;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::num
	int32_t ___num_16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repSymbol
	int32_t ___repSymbol_17;
	// System.Byte ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::lastLen
	uint8_t ___lastLen_18;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::ptr
	int32_t ___ptr_19;
};
struct InflaterDynHeader_t573_StaticFields{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repMin
	Int32U5BU5D_t193* ___repMin_6;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::repBits
	Int32U5BU5D_t193* ___repBits_7;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BL_ORDER
	Int32U5BU5D_t193* ___BL_ORDER_8;
};
