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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1495;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1311;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1496;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1400;
// System.Security.Cryptography.Oid
struct Oid_t1497;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Security.Cryptography.DSA
struct DSA_t1312;
// System.Security.Cryptography.RSA
struct RSA_t1305;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m8789 (PublicKey_t1495 * __this, X509Certificate_t1311 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1496 * PublicKey_get_EncodedKeyValue_m8790 (PublicKey_t1495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1496 * PublicKey_get_EncodedParameters_m8791 (PublicKey_t1495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1400 * PublicKey_get_Key_m8792 (PublicKey_t1495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1497 * PublicKey_get_Oid_m8793 (PublicKey_t1495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t129* PublicKey_GetUnsignedBigInteger_m8794 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1312 * PublicKey_DecodeDSA_m8795 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___rawPublicKey, ByteU5BU5D_t129* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1305 * PublicKey_DecodeRSA_m8796 (Object_t * __this /* static, unused */, ByteU5BU5D_t129* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
