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

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1361;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1400;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1382;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m8468 (PrivateKeySelectionCallback_t1361 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1400 * PrivateKeySelectionCallback_Invoke_m8469 (PrivateKeySelectionCallback_t1361 * __this, X509Certificate_t1382 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" AsymmetricAlgorithm_t1400 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1361(Il2CppObject* delegate, X509Certificate_t1382 * ___certificate, String_t* ___targetHost);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m8470 (PrivateKeySelectionCallback_t1361 * __this, X509Certificate_t1382 * ___certificate, String_t* ___targetHost, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t1400 * PrivateKeySelectionCallback_EndInvoke_m8471 (PrivateKeySelectionCallback_t1361 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
