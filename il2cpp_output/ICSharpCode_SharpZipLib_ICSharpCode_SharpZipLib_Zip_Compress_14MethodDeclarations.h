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

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t574;
// System.Byte[]
struct ByteU5BU5D_t129;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t565;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.cctor()
extern "C" void InflaterHuffmanTree__cctor_m3178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.ctor(System.Byte[])
extern "C" void InflaterHuffmanTree__ctor_m3179 (InflaterHuffmanTree_t574 * __this, ByteU5BU5D_t129* ___codeLengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::BuildTree(System.Byte[])
extern "C" void InflaterHuffmanTree_BuildTree_m3180 (InflaterHuffmanTree_t574 * __this, ByteU5BU5D_t129* ___codeLengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::GetSymbol(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C" int32_t InflaterHuffmanTree_GetSymbol_m3181 (InflaterHuffmanTree_t574 * __this, StreamManipulator_t565 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
