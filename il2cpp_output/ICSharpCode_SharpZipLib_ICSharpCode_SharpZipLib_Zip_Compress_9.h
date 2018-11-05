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
// System.Int16[]
struct Int16U5BU5D_t511;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t566;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree
struct Tree_t571;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct  DeflaterHuffman_t570  : public Object_t
{
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::pending
	DeflaterPending_t566 * ___pending_14;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::literalTree
	Tree_t571 * ___literalTree_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::distTree
	Tree_t571 * ___distTree_16;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::blTree
	Tree_t571 * ___blTree_17;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::d_buf
	Int16U5BU5D_t511* ___d_buf_18;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::l_buf
	ByteU5BU5D_t129* ___l_buf_19;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::last_lit
	int32_t ___last_lit_20;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::extra_bits
	int32_t ___extra_bits_21;
};
struct DeflaterHuffman_t570_StaticFields{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::BL_ORDER
	Int32U5BU5D_t193* ___BL_ORDER_8;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::bit4Reverse
	ByteU5BU5D_t129* ___bit4Reverse_9;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticLCodes
	Int16U5BU5D_t511* ___staticLCodes_10;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticLLength
	ByteU5BU5D_t129* ___staticLLength_11;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticDCodes
	Int16U5BU5D_t511* ___staticDCodes_12;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::staticDLength
	ByteU5BU5D_t129* ___staticDLength_13;
};
