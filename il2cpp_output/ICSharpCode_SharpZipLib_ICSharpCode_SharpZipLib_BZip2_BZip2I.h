#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Checksums.IChecksum
struct IChecksum_t508;
// System.Boolean[]
struct BooleanU5BU5D_t30;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Int32[]
struct Int32U5BU5D_t193;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t507;
// System.IO.Stream
struct Stream_t506;

#include "mscorlib_System_IO_Stream.h"

// ICSharpCode.SharpZipLib.BZip2.BZip2InputStream
struct  BZip2InputStream_t505  : public Stream_t506
{
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::last
	int32_t ___last_8;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::origPtr
	int32_t ___origPtr_9;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::blockSize100k
	int32_t ___blockSize100k_10;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::blockRandomised
	bool ___blockRandomised_11;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::bsBuff
	int32_t ___bsBuff_12;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::bsLive
	int32_t ___bsLive_13;
	// ICSharpCode.SharpZipLib.Checksums.IChecksum ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::mCrc
	Object_t * ___mCrc_14;
	// System.Boolean[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::inUse
	BooleanU5BU5D_t30* ___inUse_15;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::nInUse
	int32_t ___nInUse_16;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::seqToUnseq
	ByteU5BU5D_t129* ___seqToUnseq_17;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::unseqToSeq
	ByteU5BU5D_t129* ___unseqToSeq_18;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::selector
	ByteU5BU5D_t129* ___selector_19;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::selectorMtf
	ByteU5BU5D_t129* ___selectorMtf_20;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::tt
	Int32U5BU5D_t193* ___tt_21;
	// System.Byte[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::ll8
	ByteU5BU5D_t129* ___ll8_22;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::unzftab
	Int32U5BU5D_t193* ___unzftab_23;
	// System.Int32[][] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::limit
	Int32U5BU5DU5BU5D_t507* ___limit_24;
	// System.Int32[][] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::baseArray
	Int32U5BU5DU5BU5D_t507* ___baseArray_25;
	// System.Int32[][] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::perm
	Int32U5BU5DU5BU5D_t507* ___perm_26;
	// System.Int32[] ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::minLens
	Int32U5BU5D_t193* ___minLens_27;
	// System.IO.Stream ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::baseStream
	Stream_t506 * ___baseStream_28;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::streamEnd
	bool ___streamEnd_29;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::currentChar
	int32_t ___currentChar_30;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::currentState
	int32_t ___currentState_31;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::storedBlockCRC
	int32_t ___storedBlockCRC_32;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::storedCombinedCRC
	int32_t ___storedCombinedCRC_33;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::computedBlockCRC
	int32_t ___computedBlockCRC_34;
	// System.UInt32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::computedCombinedCRC
	uint32_t ___computedCombinedCRC_35;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::count
	int32_t ___count_36;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::chPrev
	int32_t ___chPrev_37;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::ch2
	int32_t ___ch2_38;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::tPos
	int32_t ___tPos_39;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::rNToGo
	int32_t ___rNToGo_40;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::rTPos
	int32_t ___rTPos_41;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::i2
	int32_t ___i2_42;
	// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::j2
	int32_t ___j2_43;
	// System.Byte ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::z
	uint8_t ___z_44;
	// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::isStreamOwner
	bool ___isStreamOwner_45;
};
