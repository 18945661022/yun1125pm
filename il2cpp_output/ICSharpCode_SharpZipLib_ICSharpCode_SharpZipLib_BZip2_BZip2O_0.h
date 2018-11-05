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
// ICSharpCode.SharpZipLib.Checksums.IChecksum
struct IChecksum_t508;
// System.Boolean[]
struct BooleanU5BU5D_t30;
// System.Char[]
struct CharU5BU5D_t341;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Int16[]
struct Int16U5BU5D_t511;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream
struct  BZip2OutputStream_t510  : public Stream_t506
{
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::increments
	Int32U5BU5D_t193* ___increments_8;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::isStreamOwner
	bool ___isStreamOwner_9;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::last
	int32_t ___last_10;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::origPtr
	int32_t ___origPtr_11;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::blockSize100k
	int32_t ___blockSize100k_12;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::blockRandomised
	bool ___blockRandomised_13;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::bytesOut
	int32_t ___bytesOut_14;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::bsBuff
	int32_t ___bsBuff_15;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::bsLive
	int32_t ___bsLive_16;
	// ICSharpCode.SharpZipLib.Checksums.IChecksum ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::mCrc
	Object_t * ___mCrc_17;
	// System.Boolean[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::inUse
	BooleanU5BU5D_t30* ___inUse_18;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::nInUse
	int32_t ___nInUse_19;
	// System.Char[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::seqToUnseq
	CharU5BU5D_t341* ___seqToUnseq_20;
	// System.Char[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::unseqToSeq
	CharU5BU5D_t341* ___unseqToSeq_21;
	// System.Char[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::selector
	CharU5BU5D_t341* ___selector_22;
	// System.Char[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::selectorMtf
	CharU5BU5D_t341* ___selectorMtf_23;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::block
	ByteU5BU5D_t129* ___block_24;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::quadrant
	Int32U5BU5D_t193* ___quadrant_25;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::zptr
	Int32U5BU5D_t193* ___zptr_26;
	// System.Int16[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::szptr
	Int16U5BU5D_t511* ___szptr_27;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::ftab
	Int32U5BU5D_t193* ___ftab_28;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::nMTF
	int32_t ___nMTF_29;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::mtfFreq
	Int32U5BU5D_t193* ___mtfFreq_30;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::workFactor
	int32_t ___workFactor_31;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::workDone
	int32_t ___workDone_32;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::workLimit
	int32_t ___workLimit_33;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::firstAttempt
	bool ___firstAttempt_34;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::nBlocksRandomised
	int32_t ___nBlocksRandomised_35;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::currentChar
	int32_t ___currentChar_36;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::runLength
	int32_t ___runLength_37;
	// System.UInt32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::blockCRC
	uint32_t ___blockCRC_38;
	// System.UInt32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::combinedCRC
	uint32_t ___combinedCRC_39;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::allowableBlockSize
	int32_t ___allowableBlockSize_40;
	// System.IO.Stream ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::baseStream
	Stream_t506 * ___baseStream_41;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::disposed_
	bool ___disposed__42;
};
