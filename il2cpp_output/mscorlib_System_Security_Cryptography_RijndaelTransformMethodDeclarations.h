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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2099;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1436;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.UInt32[]
struct UInt32U5BU5D_t514;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m13306 (RijndaelTransform_t2099 * __this, Rijndael_t1436 * ___algo, bool ___encryption, ByteU5BU5D_t129* ___key, ByteU5BU5D_t129* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m13307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m13308 (RijndaelTransform_t2099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m13309 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___input, ByteU5BU5D_t129* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m13310 (RijndaelTransform_t2099 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m13311 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___indata, ByteU5BU5D_t129* ___outdata, UInt32U5BU5D_t514* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m13312 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___indata, ByteU5BU5D_t129* ___outdata, UInt32U5BU5D_t514* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m13313 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___indata, ByteU5BU5D_t129* ___outdata, UInt32U5BU5D_t514* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m13314 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___indata, ByteU5BU5D_t129* ___outdata, UInt32U5BU5D_t514* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m13315 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___indata, ByteU5BU5D_t129* ___outdata, UInt32U5BU5D_t514* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m13316 (RijndaelTransform_t2099 * __this, ByteU5BU5D_t129* ___indata, ByteU5BU5D_t129* ___outdata, UInt32U5BU5D_t514* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
