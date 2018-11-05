#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int16[]
struct Int16U5BU5D_t511;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Int32[]
struct Int32U5BU5D_t193;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct DeflaterHuffman_t570;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree
struct  Tree_t571  : public Object_t
{
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::freqs
	Int16U5BU5D_t511* ___freqs_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::length
	ByteU5BU5D_t129* ___length_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::minNumCodes
	int32_t ___minNumCodes_2;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::numCodes
	int32_t ___numCodes_3;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::codes
	Int16U5BU5D_t511* ___codes_4;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::bl_counts
	Int32U5BU5D_t193* ___bl_counts_5;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::maxLength
	int32_t ___maxLength_6;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::dh
	DeflaterHuffman_t570 * ___dh_7;
};
