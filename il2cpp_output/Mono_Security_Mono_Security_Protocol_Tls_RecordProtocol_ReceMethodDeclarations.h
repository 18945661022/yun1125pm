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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1362;
// System.AsyncCallback
struct AsyncCallback_t330;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.IO.Stream
struct Stream_t506;
// System.Exception
struct Exception_t159;
// System.Threading.WaitHandle
struct WaitHandle_t1414;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m8143 (ReceiveRecordAsyncResult_t1362 * __this, AsyncCallback_t330 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t129* ___initialBuffer, Stream_t506 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t506 * ReceiveRecordAsyncResult_get_Record_m8144 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t129* ReceiveRecordAsyncResult_get_ResultingBuffer_m8145 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t129* ReceiveRecordAsyncResult_get_InitialBuffer_m8146 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m8147 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t159 * ReceiveRecordAsyncResult_get_AsyncException_m8148 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m8149 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1414 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m8150 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m8151 (ReceiveRecordAsyncResult_t1362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m8152 (ReceiveRecordAsyncResult_t1362 * __this, Exception_t159 * ___ex, ByteU5BU5D_t129* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m8153 (ReceiveRecordAsyncResult_t1362 * __this, Exception_t159 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m8154 (ReceiveRecordAsyncResult_t1362 * __this, ByteU5BU5D_t129* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
