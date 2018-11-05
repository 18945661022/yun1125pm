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

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct PkzipClassicManaged_t541;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t645;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t550;

#include "codegen/il2cpp-codegen.h"

// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_BlockSize()
extern "C" int32_t PkzipClassicManaged_get_BlockSize_m2736 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_BlockSize(System.Int32)
extern "C" void PkzipClassicManaged_set_BlockSize_m2737 (PkzipClassicManaged_t541 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalKeySizes()
extern "C" KeySizesU5BU5D_t645* PkzipClassicManaged_get_LegalKeySizes_m2738 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateIV()
extern "C" void PkzipClassicManaged_GenerateIV_m2739 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalBlockSizes()
extern "C" KeySizesU5BU5D_t645* PkzipClassicManaged_get_LegalBlockSizes_m2740 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_Key()
extern "C" ByteU5BU5D_t129* PkzipClassicManaged_get_Key_m2741 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_Key(System.Byte[])
extern "C" void PkzipClassicManaged_set_Key_m2742 (PkzipClassicManaged_t541 * __this, ByteU5BU5D_t129* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateKey()
extern "C" void PkzipClassicManaged_GenerateKey_m2743 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * PkzipClassicManaged_CreateEncryptor_m2744 (PkzipClassicManaged_t541 * __this, ByteU5BU5D_t129* ___rgbKey, ByteU5BU5D_t129* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * PkzipClassicManaged_CreateDecryptor_m2745 (PkzipClassicManaged_t541 * __this, ByteU5BU5D_t129* ___rgbKey, ByteU5BU5D_t129* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::.ctor()
extern "C" void PkzipClassicManaged__ctor_m2746 (PkzipClassicManaged_t541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
