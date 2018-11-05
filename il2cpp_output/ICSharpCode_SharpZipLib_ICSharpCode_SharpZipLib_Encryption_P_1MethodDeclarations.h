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

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
struct PkzipClassicEncryptCryptoTransform_t539;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::.ctor(System.Byte[])
extern "C" void PkzipClassicEncryptCryptoTransform__ctor_m2720 (PkzipClassicEncryptCryptoTransform_t539 * __this, ByteU5BU5D_t129* ___keyBlock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t129* PkzipClassicEncryptCryptoTransform_TransformFinalBlock_m2721 (PkzipClassicEncryptCryptoTransform_t539 * __this, ByteU5BU5D_t129* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t PkzipClassicEncryptCryptoTransform_TransformBlock_m2722 (PkzipClassicEncryptCryptoTransform_t539 * __this, ByteU5BU5D_t129* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t129* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanReuseTransform()
extern "C" bool PkzipClassicEncryptCryptoTransform_get_CanReuseTransform_m2723 (PkzipClassicEncryptCryptoTransform_t539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_InputBlockSize()
extern "C" int32_t PkzipClassicEncryptCryptoTransform_get_InputBlockSize_m2724 (PkzipClassicEncryptCryptoTransform_t539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_OutputBlockSize()
extern "C" int32_t PkzipClassicEncryptCryptoTransform_get_OutputBlockSize_m2725 (PkzipClassicEncryptCryptoTransform_t539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C" bool PkzipClassicEncryptCryptoTransform_get_CanTransformMultipleBlocks_m2726 (PkzipClassicEncryptCryptoTransform_t539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::Dispose()
extern "C" void PkzipClassicEncryptCryptoTransform_Dispose_m2727 (PkzipClassicEncryptCryptoTransform_t539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
