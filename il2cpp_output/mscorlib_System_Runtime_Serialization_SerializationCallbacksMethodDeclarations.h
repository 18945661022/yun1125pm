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

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t2070;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CallbackHandler__ctor_m13024 (CallbackHandler_t2070 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
extern "C" void CallbackHandler_Invoke_m13025 (CallbackHandler_t2070 * __this, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CallbackHandler_t2070(Il2CppObject* delegate, StreamingContext_t644  ___context);
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern "C" Object_t * CallbackHandler_BeginInvoke_m13026 (CallbackHandler_t2070 * __this, StreamingContext_t644  ___context, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
extern "C" void CallbackHandler_EndInvoke_m13027 (CallbackHandler_t2070 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
