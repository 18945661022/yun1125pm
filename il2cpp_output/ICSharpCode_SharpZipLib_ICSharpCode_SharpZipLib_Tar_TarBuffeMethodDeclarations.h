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

// ICSharpCode.SharpZipLib.Tar.TarBuffer
struct TarBuffer_t560;
// System.IO.Stream
struct Stream_t506;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::get_RecordSize()
extern "C" int32_t TarBuffer_get_RecordSize_m2866 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::GetRecordSize()
extern "C" int32_t TarBuffer_GetRecordSize_m2867 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::get_BlockFactor()
extern "C" int32_t TarBuffer_get_BlockFactor_m2868 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::GetBlockFactor()
extern "C" int32_t TarBuffer_GetBlockFactor_m2869 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::.ctor()
extern "C" void TarBuffer__ctor_m2870 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarBuffer ICSharpCode.SharpZipLib.Tar.TarBuffer::CreateInputTarBuffer(System.IO.Stream)
extern "C" TarBuffer_t560 * TarBuffer_CreateInputTarBuffer_m2871 (Object_t * __this /* static, unused */, Stream_t506 * ___inputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarBuffer ICSharpCode.SharpZipLib.Tar.TarBuffer::CreateInputTarBuffer(System.IO.Stream,System.Int32)
extern "C" TarBuffer_t560 * TarBuffer_CreateInputTarBuffer_m2872 (Object_t * __this /* static, unused */, Stream_t506 * ___inputStream, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarBuffer ICSharpCode.SharpZipLib.Tar.TarBuffer::CreateOutputTarBuffer(System.IO.Stream)
extern "C" TarBuffer_t560 * TarBuffer_CreateOutputTarBuffer_m2873 (Object_t * __this /* static, unused */, Stream_t506 * ___outputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Tar.TarBuffer ICSharpCode.SharpZipLib.Tar.TarBuffer::CreateOutputTarBuffer(System.IO.Stream,System.Int32)
extern "C" TarBuffer_t560 * TarBuffer_CreateOutputTarBuffer_m2874 (Object_t * __this /* static, unused */, Stream_t506 * ___outputStream, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::Initialize(System.Int32)
extern "C" void TarBuffer_Initialize_m2875 (TarBuffer_t560 * __this, int32_t ___blockFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarBuffer::IsEOFBlock(System.Byte[])
extern "C" bool TarBuffer_IsEOFBlock_m2876 (TarBuffer_t560 * __this, ByteU5BU5D_t129* ___block, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarBuffer::IsEndOfArchiveBlock(System.Byte[])
extern "C" bool TarBuffer_IsEndOfArchiveBlock_m2877 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___block, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::SkipBlock()
extern "C" void TarBuffer_SkipBlock_m2878 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Tar.TarBuffer::ReadBlock()
extern "C" ByteU5BU5D_t129* TarBuffer_ReadBlock_m2879 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Tar.TarBuffer::ReadRecord()
extern "C" bool TarBuffer_ReadRecord_m2880 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::get_CurrentBlock()
extern "C" int32_t TarBuffer_get_CurrentBlock_m2881 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::GetCurrentBlockNum()
extern "C" int32_t TarBuffer_GetCurrentBlockNum_m2882 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::get_CurrentRecord()
extern "C" int32_t TarBuffer_get_CurrentRecord_m2883 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Tar.TarBuffer::GetCurrentRecordNum()
extern "C" int32_t TarBuffer_GetCurrentRecordNum_m2884 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::WriteBlock(System.Byte[])
extern "C" void TarBuffer_WriteBlock_m2885 (TarBuffer_t560 * __this, ByteU5BU5D_t129* ___block, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::WriteBlock(System.Byte[],System.Int32)
extern "C" void TarBuffer_WriteBlock_m2886 (TarBuffer_t560 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::WriteRecord()
extern "C" void TarBuffer_WriteRecord_m2887 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::Flush()
extern "C" void TarBuffer_Flush_m2888 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarBuffer::Close()
extern "C" void TarBuffer_Close_m2889 (TarBuffer_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
