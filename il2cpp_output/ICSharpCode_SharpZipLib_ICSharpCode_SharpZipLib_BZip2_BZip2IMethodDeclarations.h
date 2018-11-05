#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ICSharpCode.SharpZipLib.BZip2.BZip2InputStream
struct BZip2InputStream_t505;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Int32[]
struct Int32U5BU5D_t193;
// System.Char[]
struct CharU5BU5D_t341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::.ctor(System.IO.Stream)
extern "C" void BZip2InputStream__ctor_m2510 (BZip2InputStream_t505 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_IsStreamOwner()
extern "C" bool BZip2InputStream_get_IsStreamOwner_m2511 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::set_IsStreamOwner(System.Boolean)
extern "C" void BZip2InputStream_set_IsStreamOwner_m2512 (BZip2InputStream_t505 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_CanRead()
extern "C" bool BZip2InputStream_get_CanRead_m2513 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_CanSeek()
extern "C" bool BZip2InputStream_get_CanSeek_m2514 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_CanWrite()
extern "C" bool BZip2InputStream_get_CanWrite_m2515 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_Length()
extern "C" int64_t BZip2InputStream_get_Length_m2516 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::get_Position()
extern "C" int64_t BZip2InputStream_get_Position_m2517 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::set_Position(System.Int64)
extern "C" void BZip2InputStream_set_Position_m2518 (BZip2InputStream_t505 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Flush()
extern "C" void BZip2InputStream_Flush_m2519 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t BZip2InputStream_Seek_m2520 (BZip2InputStream_t505 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetLength(System.Int64)
extern "C" void BZip2InputStream_SetLength_m2521 (BZip2InputStream_t505 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void BZip2InputStream_Write_m2522 (BZip2InputStream_t505 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::WriteByte(System.Byte)
extern "C" void BZip2InputStream_WriteByte_m2523 (BZip2InputStream_t505 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BZip2InputStream_Read_m2524 (BZip2InputStream_t505 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Close()
extern "C" void BZip2InputStream_Close_m2525 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::ReadByte()
extern "C" int32_t BZip2InputStream_ReadByte_m2526 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::MakeMaps()
extern "C" void BZip2InputStream_MakeMaps_m2527 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Initialize()
extern "C" void BZip2InputStream_Initialize_m2528 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::InitBlock()
extern "C" void BZip2InputStream_InitBlock_m2529 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::EndBlock()
extern "C" void BZip2InputStream_EndBlock_m2530 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::Complete()
extern "C" void BZip2InputStream_Complete_m2531 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsSetStream(System.IO.Stream)
extern "C" void BZip2InputStream_BsSetStream_m2532 (BZip2InputStream_t505 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::FillBuffer()
extern "C" void BZip2InputStream_FillBuffer_m2533 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsR(System.Int32)
extern "C" int32_t BZip2InputStream_BsR_m2534 (BZip2InputStream_t505 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetUChar()
extern "C" uint16_t BZip2InputStream_BsGetUChar_m2535 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetIntVS(System.Int32)
extern "C" int32_t BZip2InputStream_BsGetIntVS_m2536 (BZip2InputStream_t505 * __this, int32_t ___numBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BsGetInt32()
extern "C" int32_t BZip2InputStream_BsGetInt32_m2537 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::RecvDecodingTables()
extern "C" void BZip2InputStream_RecvDecodingTables_m2538 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::GetAndMoveToFrontDecode()
extern "C" void BZip2InputStream_GetAndMoveToFrontDecode_m2539 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupBlock()
extern "C" void BZip2InputStream_SetupBlock_m2540 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartA()
extern "C" void BZip2InputStream_SetupRandPartA_m2541 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartA()
extern "C" void BZip2InputStream_SetupNoRandPartA_m2542 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartB()
extern "C" void BZip2InputStream_SetupRandPartB_m2543 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupRandPartC()
extern "C" void BZip2InputStream_SetupRandPartC_m2544 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartB()
extern "C" void BZip2InputStream_SetupNoRandPartB_m2545 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetupNoRandPartC()
extern "C" void BZip2InputStream_SetupNoRandPartC_m2546 (BZip2InputStream_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::SetDecompressStructureSizes(System.Int32)
extern "C" void BZip2InputStream_SetDecompressStructureSizes_m2547 (BZip2InputStream_t505 * __this, int32_t ___newSize100k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::CompressedStreamEOF()
extern "C" void BZip2InputStream_CompressedStreamEOF_m2548 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BlockOverrun()
extern "C" void BZip2InputStream_BlockOverrun_m2549 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::BadBlockHeader()
extern "C" void BZip2InputStream_BadBlockHeader_m2550 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::CrcError()
extern "C" void BZip2InputStream_CrcError_m2551 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2InputStream::HbCreateDecodeTables(System.Int32[],System.Int32[],System.Int32[],System.Char[],System.Int32,System.Int32,System.Int32)
extern "C" void BZip2InputStream_HbCreateDecodeTables_m2552 (Object_t * __this /* static, unused */, Int32U5BU5D_t193* ___limit, Int32U5BU5D_t193* ___baseArray, Int32U5BU5D_t193* ___perm, CharU5BU5D_t341* ___length, int32_t ___minLen, int32_t ___maxLen, int32_t ___alphaSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
