﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.OidCollection
struct OidCollection_t1514;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1203;

#include "System_System_Security_Cryptography_X509Certificates_X509Ext.h"
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t1516  : public X509Extension_t1503
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t1514 * ____enhKeyUsage_4;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_5;
};
struct X509EnhancedKeyUsageExtension_t1516_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$mapE
	Dictionary_2_t1203 * ___U3CU3Ef__switchU24mapE_6;
};
