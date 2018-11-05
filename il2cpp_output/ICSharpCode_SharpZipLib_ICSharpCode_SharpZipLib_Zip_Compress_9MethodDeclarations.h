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

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct DeflaterHuffman_t570;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending
struct DeflaterPending_t566;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::.cctor()
extern "C" void DeflaterHuffman__cctor_m3123 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::.ctor(ICSharpCode.SharpZipLib.Zip.Compression.DeflaterPending)
extern "C" void DeflaterHuffman__ctor_m3124 (DeflaterHuffman_t570 * __this, DeflaterPending_t566 * ___pending, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::Reset()
extern "C" void DeflaterHuffman_Reset_m3125 (DeflaterHuffman_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::SendAllTrees(System.Int32)
extern "C" void DeflaterHuffman_SendAllTrees_m3126 (DeflaterHuffman_t570 * __this, int32_t ___blTreeCodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::CompressBlock()
extern "C" void DeflaterHuffman_CompressBlock_m3127 (DeflaterHuffman_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::FlushStoredBlock(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void DeflaterHuffman_FlushStoredBlock_m3128 (DeflaterHuffman_t570 * __this, ByteU5BU5D_t129* ___stored, int32_t ___storedOffset, int32_t ___storedLength, bool ___lastBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::FlushBlock(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void DeflaterHuffman_FlushBlock_m3129 (DeflaterHuffman_t570 * __this, ByteU5BU5D_t129* ___stored, int32_t ___storedOffset, int32_t ___storedLength, bool ___lastBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::IsFull()
extern "C" bool DeflaterHuffman_IsFull_m3130 (DeflaterHuffman_t570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::TallyLit(System.Int32)
extern "C" bool DeflaterHuffman_TallyLit_m3131 (DeflaterHuffman_t570 * __this, int32_t ___literal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::TallyDist(System.Int32,System.Int32)
extern "C" bool DeflaterHuffman_TallyDist_m3132 (DeflaterHuffman_t570 * __this, int32_t ___distance, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::BitReverse(System.Int32)
extern "C" int16_t DeflaterHuffman_BitReverse_m3133 (Object_t * __this /* static, unused */, int32_t ___toReverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::Lcode(System.Int32)
extern "C" int32_t DeflaterHuffman_Lcode_m3134 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::Dcode(System.Int32)
extern "C" int32_t DeflaterHuffman_Dcode_m3135 (Object_t * __this /* static, unused */, int32_t ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
