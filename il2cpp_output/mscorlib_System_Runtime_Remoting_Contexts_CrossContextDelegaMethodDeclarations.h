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

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t2259;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void CrossContextDelegate__ctor_m14710 (CrossContextDelegate_t2259 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::Invoke()
extern "C" void CrossContextDelegate_Invoke_m14711 (CrossContextDelegate_t2259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CrossContextDelegate_t2259(Il2CppObject* delegate);
// System.IAsyncResult System.Runtime.Remoting.Contexts.CrossContextDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CrossContextDelegate_BeginInvoke_m14712 (CrossContextDelegate_t2259 * __this, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::EndInvoke(System.IAsyncResult)
extern "C" void CrossContextDelegate_EndInvoke_m14713 (CrossContextDelegate_t2259 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
