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

// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree
struct Tree_t571;
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
struct DeflaterHuffman_t570;
// System.Int16[]
struct Int16U5BU5D_t511;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Int32[]
struct Int32U5BU5D_t193;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::.ctor(ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman,System.Int32,System.Int32,System.Int32)
extern "C" void Tree__ctor_m3112 (Tree_t571 * __this, DeflaterHuffman_t570 * ___dh, int32_t ___elems, int32_t ___minCodes, int32_t ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::Reset()
extern "C" void Tree_Reset_m3113 (Tree_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::WriteSymbol(System.Int32)
extern "C" void Tree_WriteSymbol_m3114 (Tree_t571 * __this, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::CheckEmpty()
extern "C" void Tree_CheckEmpty_m3115 (Tree_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::SetStaticCodes(System.Int16[],System.Byte[])
extern "C" void Tree_SetStaticCodes_m3116 (Tree_t571 * __this, Int16U5BU5D_t511* ___staticCodes, ByteU5BU5D_t129* ___staticLengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::BuildCodes()
extern "C" void Tree_BuildCodes_m3117 (Tree_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::BuildTree()
extern "C" void Tree_BuildTree_m3118 (Tree_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::GetEncodedLength()
extern "C" int32_t Tree_GetEncodedLength_m3119 (Tree_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::CalcBLFreq(ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree)
extern "C" void Tree_CalcBLFreq_m3120 (Tree_t571 * __this, Tree_t571 * ___blTree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::WriteTree(ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree)
extern "C" void Tree_WriteTree_m3121 (Tree_t571 * __this, Tree_t571 * ___blTree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman/Tree::BuildLength(System.Int32[])
extern "C" void Tree_BuildLength_m3122 (Tree_t571 * __this, Int32U5BU5D_t193* ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
