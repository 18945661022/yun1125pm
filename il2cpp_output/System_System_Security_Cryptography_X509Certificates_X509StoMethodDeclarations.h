﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1511;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1505;
// Mono.Security.X509.X509Stores
struct X509Stores_t1323;
// Mono.Security.X509.X509Store
struct X509Store_t1321;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_StoreNa.h"
#include "System_System_Security_Cryptography_X509Certificates_StoreLo.h"
#include "System_System_Security_Cryptography_X509Certificates_OpenFla.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C" void X509Store__ctor_m8954 (X509Store_t1511 * __this, int32_t ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C" X509Certificate2Collection_t1505 * X509Store_get_Certificates_m8955 (X509Store_t1511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C" X509Stores_t1323 * X509Store_get_Factory_m8956 (X509Store_t1511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C" X509Store_t1321 * X509Store_get_Store_m8957 (X509Store_t1511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C" void X509Store_Close_m8958 (X509Store_t1511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C" void X509Store_Open_m8959 (X509Store_t1511 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
