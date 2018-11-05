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

// System.ApplicationException
struct ApplicationException_t503;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
extern "C" void ApplicationException__ctor_m3684 (ApplicationException_t503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" void ApplicationException__ctor_m3685 (ApplicationException_t503 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C" void ApplicationException__ctor_m3686 (ApplicationException_t503 * __this, String_t* ___message, Exception_t159 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationException__ctor_m3683 (ApplicationException_t503 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
