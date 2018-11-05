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
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t566;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct DeflaterHuffman_t570;
// ICSharpCode.SharpZipLib.Checksums.Adler32
struct Adler32_t512;

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_5.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_6.h"

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
struct  DeflaterEngine_t567  : public DeflaterConstants_t568
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::ins_h
	int32_t ___ins_h_28;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::head
	Int16U5BU5D_t511* ___head_29;
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::prev
	Int16U5BU5D_t511* ___prev_30;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::matchStart
	int32_t ___matchStart_31;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::matchLen
	int32_t ___matchLen_32;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::prevAvailable
	bool ___prevAvailable_33;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::blockStart
	int32_t ___blockStart_34;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::strstart
	int32_t ___strstart_35;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::lookahead
	int32_t ___lookahead_36;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::window
	ByteU5BU5D_t129* ___window_37;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflateStrategy ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::strategy
	int32_t ___strategy_38;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::max_chain
	int32_t ___max_chain_39;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::max_lazy
	int32_t ___max_lazy_40;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::niceLength
	int32_t ___niceLength_41;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::goodLength
	int32_t ___goodLength_42;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::compressionFunction
	int32_t ___compressionFunction_43;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::inputBuf
	ByteU5BU5D_t129* ___inputBuf_44;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::totalIn
	int64_t ___totalIn_45;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::inputOff
	int32_t ___inputOff_46;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::inputEnd
	int32_t ___inputEnd_47;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::pending
	DeflaterPending_t566 * ___pending_48;
	// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::huffman
	DeflaterHuffman_t570 * ___huffman_49;
	// ICSharpCode.SharpZipLib.Checksums.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine::adler
	Adler32_t512 * ___adler_50;
};
