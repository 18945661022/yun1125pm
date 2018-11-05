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

// ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream
struct BZip2OutputStream_t510;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Char[]
struct CharU5BU5D_t341;
// System.Int32[]
struct Int32U5BU5D_t193;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::.ctor(System.IO.Stream)
extern "C" void BZip2OutputStream__ctor_m2553 (BZip2OutputStream_t510 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::.ctor(System.IO.Stream,System.Int32)
extern "C" void BZip2OutputStream__ctor_m2554 (BZip2OutputStream_t510 * __this, Stream_t506 * ___stream, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Finalize()
extern "C" void BZip2OutputStream_Finalize_m2555 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_IsStreamOwner()
extern "C" bool BZip2OutputStream_get_IsStreamOwner_m2556 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::set_IsStreamOwner(System.Boolean)
extern "C" void BZip2OutputStream_set_IsStreamOwner_m2557 (BZip2OutputStream_t510 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_CanRead()
extern "C" bool BZip2OutputStream_get_CanRead_m2558 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_CanSeek()
extern "C" bool BZip2OutputStream_get_CanSeek_m2559 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_CanWrite()
extern "C" bool BZip2OutputStream_get_CanWrite_m2560 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_Length()
extern "C" int64_t BZip2OutputStream_get_Length_m2561 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_Position()
extern "C" int64_t BZip2OutputStream_get_Position_m2562 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::set_Position(System.Int64)
extern "C" void BZip2OutputStream_set_Position_m2563 (BZip2OutputStream_t510 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t BZip2OutputStream_Seek_m2564 (BZip2OutputStream_t510 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::SetLength(System.Int64)
extern "C" void BZip2OutputStream_SetLength_m2565 (BZip2OutputStream_t510 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::ReadByte()
extern "C" int32_t BZip2OutputStream_ReadByte_m2566 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BZip2OutputStream_Read_m2567 (BZip2OutputStream_t510 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void BZip2OutputStream_Write_m2568 (BZip2OutputStream_t510 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::WriteByte(System.Byte)
extern "C" void BZip2OutputStream_WriteByte_m2569 (BZip2OutputStream_t510 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Close()
extern "C" void BZip2OutputStream_Close_m2570 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::MakeMaps()
extern "C" void BZip2OutputStream_MakeMaps_m2571 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::WriteRun()
extern "C" void BZip2OutputStream_WriteRun_m2572 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::get_BytesWritten()
extern "C" int32_t BZip2OutputStream_get_BytesWritten_m2573 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Dispose(System.Boolean)
extern "C" void BZip2OutputStream_Dispose_m2574 (BZip2OutputStream_t510 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Flush()
extern "C" void BZip2OutputStream_Flush_m2575 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Initialize()
extern "C" void BZip2OutputStream_Initialize_m2576 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::InitBlock()
extern "C" void BZip2OutputStream_InitBlock_m2577 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::EndBlock()
extern "C" void BZip2OutputStream_EndBlock_m2578 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::EndCompression()
extern "C" void BZip2OutputStream_EndCompression_m2579 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::BsSetStream(System.IO.Stream)
extern "C" void BZip2OutputStream_BsSetStream_m2580 (BZip2OutputStream_t510 * __this, Stream_t506 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::BsFinishedWithStream()
extern "C" void BZip2OutputStream_BsFinishedWithStream_m2581 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::BsW(System.Int32,System.Int32)
extern "C" void BZip2OutputStream_BsW_m2582 (BZip2OutputStream_t510 * __this, int32_t ___n, int32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::BsPutUChar(System.Int32)
extern "C" void BZip2OutputStream_BsPutUChar_m2583 (BZip2OutputStream_t510 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::BsPutint(System.Int32)
extern "C" void BZip2OutputStream_BsPutint_m2584 (BZip2OutputStream_t510 * __this, int32_t ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::BsPutIntVS(System.Int32,System.Int32)
extern "C" void BZip2OutputStream_BsPutIntVS_m2585 (BZip2OutputStream_t510 * __this, int32_t ___numBits, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::SendMTFValues()
extern "C" void BZip2OutputStream_SendMTFValues_m2586 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::MoveToFrontCodeAndSend()
extern "C" void BZip2OutputStream_MoveToFrontCodeAndSend_m2587 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::SimpleSort(System.Int32,System.Int32,System.Int32)
extern "C" void BZip2OutputStream_SimpleSort_m2588 (BZip2OutputStream_t510 * __this, int32_t ___lo, int32_t ___hi, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Vswap(System.Int32,System.Int32,System.Int32)
extern "C" void BZip2OutputStream_Vswap_m2589 (BZip2OutputStream_t510 * __this, int32_t ___p1, int32_t ___p2, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::QSort3(System.Int32,System.Int32,System.Int32)
extern "C" void BZip2OutputStream_QSort3_m2590 (BZip2OutputStream_t510 * __this, int32_t ___loSt, int32_t ___hiSt, int32_t ___dSt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::MainSort()
extern "C" void BZip2OutputStream_MainSort_m2591 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::RandomiseBlock()
extern "C" void BZip2OutputStream_RandomiseBlock_m2592 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::DoReversibleTransformation()
extern "C" void BZip2OutputStream_DoReversibleTransformation_m2593 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::FullGtU(System.Int32,System.Int32)
extern "C" bool BZip2OutputStream_FullGtU_m2594 (BZip2OutputStream_t510 * __this, int32_t ___i1, int32_t ___i2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::AllocateCompressStructures()
extern "C" void BZip2OutputStream_AllocateCompressStructures_m2595 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::GenerateMTFValues()
extern "C" void BZip2OutputStream_GenerateMTFValues_m2596 (BZip2OutputStream_t510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Panic()
extern "C" void BZip2OutputStream_Panic_m2597 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::HbMakeCodeLengths(System.Char[],System.Int32[],System.Int32,System.Int32)
extern "C" void BZip2OutputStream_HbMakeCodeLengths_m2598 (Object_t * __this /* static, unused */, CharU5BU5D_t341* ___len, Int32U5BU5D_t193* ___freq, int32_t ___alphaSize, int32_t ___maxLen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::HbAssignCodes(System.Int32[],System.Char[],System.Int32,System.Int32,System.Int32)
extern "C" void BZip2OutputStream_HbAssignCodes_m2599 (Object_t * __this /* static, unused */, Int32U5BU5D_t193* ___code, CharU5BU5D_t341* ___length, int32_t ___minLen, int32_t ___maxLen, int32_t ___alphaSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ICSharpCode.SharpZipLib.BZip2.BZip2OutputStream::Med3(System.Byte,System.Byte,System.Byte)
extern "C" uint8_t BZip2OutputStream_Med3_m2600 (Object_t * __this /* static, unused */, uint8_t ___a, uint8_t ___b, uint8_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
