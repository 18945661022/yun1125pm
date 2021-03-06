﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t1305;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1297;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1203;

#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t1366  : public AsymmetricSignatureDeformatter_t1367
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t1305 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1297 * ___hash_1;
};
struct RSASslSignatureDeformatter_t1366_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t1203 * ___U3CU3Ef__switchU24map15_2;
};
