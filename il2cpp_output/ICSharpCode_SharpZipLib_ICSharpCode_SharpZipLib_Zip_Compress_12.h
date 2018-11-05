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
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t565;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_t564;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t573;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t574;
// ICSharpCode.SharpZipLib.Checksums.Adler32
struct Adler32_t512;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct  Inflater_t545  : public Object_t
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::mode
	int32_t ___mode_17;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::readAdler
	int32_t ___readAdler_18;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::neededBits
	int32_t ___neededBits_19;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repLength
	int32_t ___repLength_20;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repDist
	int32_t ___repDist_21;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::uncomprLen
	int32_t ___uncomprLen_22;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::isLastBlock
	bool ___isLastBlock_23;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalOut
	int64_t ___totalOut_24;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalIn
	int64_t ___totalIn_25;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::noHeader
	bool ___noHeader_26;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator ICSharpCode.SharpZipLib.Zip.Compression.Inflater::input
	StreamManipulator_t565 * ___input_27;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow ICSharpCode.SharpZipLib.Zip.Compression.Inflater::outputWindow
	OutputWindow_t564 * ___outputWindow_28;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader ICSharpCode.SharpZipLib.Zip.Compression.Inflater::dynHeader
	InflaterDynHeader_t573 * ___dynHeader_29;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::litlenTree
	InflaterHuffmanTree_t574 * ___litlenTree_30;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::distTree
	InflaterHuffmanTree_t574 * ___distTree_31;
	// ICSharpCode.SharpZipLib.Checksums.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::adler
	Adler32_t512 * ___adler_32;
};
struct Inflater_t545_StaticFields{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLENS
	Int32U5BU5D_t193* ___CPLENS_13;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLEXT
	Int32U5BU5D_t193* ___CPLEXT_14;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDIST
	Int32U5BU5D_t193* ___CPDIST_15;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDEXT
	Int32U5BU5D_t193* ___CPDEXT_16;
};
