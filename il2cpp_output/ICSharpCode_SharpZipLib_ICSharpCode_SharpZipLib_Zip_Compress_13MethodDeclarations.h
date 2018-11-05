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

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t573;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t565;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t574;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.ctor()
extern "C" void InflaterDynHeader__ctor_m3173 (InflaterDynHeader_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::Decode(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C" bool InflaterDynHeader_Decode_m3174 (InflaterDynHeader_t573 * __this, StreamManipulator_t565 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildLitLenTree()
extern "C" InflaterHuffmanTree_t574 * InflaterDynHeader_BuildLitLenTree_m3175 (InflaterDynHeader_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildDistTree()
extern "C" InflaterHuffmanTree_t574 * InflaterDynHeader_BuildDistTree_m3176 (InflaterDynHeader_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.cctor()
extern "C" void InflaterDynHeader__cctor_m3177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
