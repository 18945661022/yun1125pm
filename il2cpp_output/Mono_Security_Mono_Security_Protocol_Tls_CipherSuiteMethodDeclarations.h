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

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1340;
// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t550;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1334;
// Mono.Security.Protocol.Tls.Context
struct Context_t1341;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
#include "mscorlib_System_Security_Cryptography_CipherMode.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" void CipherSuite__ctor_m7986 (CipherSuite_t1340 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBits, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C" void CipherSuite__cctor_m7987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C" Object_t * CipherSuite_get_EncryptionCipher_m7988 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C" Object_t * CipherSuite_get_DecryptionCipher_m7989 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C" KeyedHashAlgorithm_t1334 * CipherSuite_get_ClientHMAC_m7990 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C" KeyedHashAlgorithm_t1334 * CipherSuite_get_ServerHMAC_m7991 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C" int32_t CipherSuite_get_CipherAlgorithmType_m7992 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C" String_t* CipherSuite_get_HashAlgorithmName_m7993 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C" int32_t CipherSuite_get_HashAlgorithmType_m7994 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C" int32_t CipherSuite_get_HashSize_m7995 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C" int32_t CipherSuite_get_ExchangeAlgorithmType_m7996 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C" int32_t CipherSuite_get_CipherMode_m7997 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C" int16_t CipherSuite_get_Code_m7998 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C" String_t* CipherSuite_get_Name_m7999 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C" bool CipherSuite_get_IsExportable_m8000 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C" uint8_t CipherSuite_get_KeyMaterialSize_m8001 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C" int32_t CipherSuite_get_KeyBlockSize_m8002 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C" uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m8003 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C" int16_t CipherSuite_get_EffectiveKeyBits_m8004 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C" uint8_t CipherSuite_get_IvSize_m8005 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C" Context_t1341 * CipherSuite_get_Context_m8006 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C" void CipherSuite_set_Context_m8007 (CipherSuite_t1340 * __this, Context_t1341 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C" void CipherSuite_Write_m8008 (CipherSuite_t1340 * __this, ByteU5BU5D_t129* ___array, int32_t ___offset, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C" void CipherSuite_Write_m8009 (CipherSuite_t1340 * __this, ByteU5BU5D_t129* ___array, int32_t ___offset, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C" void CipherSuite_InitializeCipher_m8010 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C" ByteU5BU5D_t129* CipherSuite_EncryptRecord_m8011 (CipherSuite_t1340 * __this, ByteU5BU5D_t129* ___fragment, ByteU5BU5D_t129* ___mac, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C" void CipherSuite_DecryptRecord_m8012 (CipherSuite_t1340 * __this, ByteU5BU5D_t129* ___fragment, ByteU5BU5D_t129** ___dcrFragment, ByteU5BU5D_t129** ___dcrMAC, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C" ByteU5BU5D_t129* CipherSuite_CreatePremasterSecret_m8013 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t129* CipherSuite_PRF_m8014 (CipherSuite_t1340 * __this, ByteU5BU5D_t129* ___secret, String_t* ___label, ByteU5BU5D_t129* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t129* CipherSuite_Expand_m8015 (CipherSuite_t1340 * __this, String_t* ___hashName, ByteU5BU5D_t129* ___secret, ByteU5BU5D_t129* ___seed, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C" void CipherSuite_createEncryptionCipher_m8016 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C" void CipherSuite_createDecryptionCipher_m8017 (CipherSuite_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
