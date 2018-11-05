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

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
struct PkzipClassicDecryptCryptoTransform_t540;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::.ctor(System.Byte[])
extern "C" void PkzipClassicDecryptCryptoTransform__ctor_m2728 (PkzipClassicDecryptCryptoTransform_t540 * __this, ByteU5BU5D_t129* ___keyBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t129* PkzipClassicDecryptCryptoTransform_TransformFinalBlock_m2729 (PkzipClassicDecryptCryptoTransform_t540 * __this, ByteU5BU5D_t129* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t PkzipClassicDecryptCryptoTransform_TransformBlock_m2730 (PkzipClassicDecryptCryptoTransform_t540 * __this, ByteU5BU5D_t129* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t129* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanReuseTransform()
extern "C" bool PkzipClassicDecryptCryptoTransform_get_CanReuseTransform_m2731 (PkzipClassicDecryptCryptoTransform_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_InputBlockSize()
extern "C" int32_t PkzipClassicDecryptCryptoTransform_get_InputBlockSize_m2732 (PkzipClassicDecryptCryptoTransform_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_OutputBlockSize()
extern "C" int32_t PkzipClassicDecryptCryptoTransform_get_OutputBlockSize_m2733 (PkzipClassicDecryptCryptoTransform_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C" bool PkzipClassicDecryptCryptoTransform_get_CanTransformMultipleBlocks_m2734 (PkzipClassicDecryptCryptoTransform_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::Dispose()
extern "C" void PkzipClassicDecryptCryptoTransform_Dispose_m2735 (PkzipClassicDecryptCryptoTransform_t540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
