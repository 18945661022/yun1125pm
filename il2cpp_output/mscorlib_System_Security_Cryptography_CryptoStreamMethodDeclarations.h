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

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t650;
// System.IO.Stream
struct Stream_t506;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t550;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CryptoStreamMode.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
extern "C" void CryptoStream__ctor_m3806 (CryptoStream_t650 * __this, Stream_t506 * ___stream, Object_t * ___transform, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Finalize()
extern "C" void CryptoStream_Finalize_m13087 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanRead()
extern "C" bool CryptoStream_get_CanRead_m13088 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanSeek()
extern "C" bool CryptoStream_get_CanSeek_m13089 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanWrite()
extern "C" bool CryptoStream_get_CanWrite_m13090 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Length()
extern "C" int64_t CryptoStream_get_Length_m13091 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Position()
extern "C" int64_t CryptoStream_get_Position_m13092 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::set_Position(System.Int64)
extern "C" void CryptoStream_set_Position_m13093 (CryptoStream_t650 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Close()
extern "C" void CryptoStream_Close_m13094 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t CryptoStream_Read_m13095 (CryptoStream_t650 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void CryptoStream_Write_m13096 (CryptoStream_t650 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Flush()
extern "C" void CryptoStream_Flush_m13097 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
extern "C" void CryptoStream_FlushFinalBlock_m13098 (CryptoStream_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t CryptoStream_Seek_m13099 (CryptoStream_t650 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::SetLength(System.Int64)
extern "C" void CryptoStream_SetLength_m13100 (CryptoStream_t650 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Dispose(System.Boolean)
extern "C" void CryptoStream_Dispose_m13101 (CryptoStream_t650 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
