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

// ICSharpCode.SharpZipLib.Tar.InvalidHeaderException
struct InvalidHeaderException_t554;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void ICSharpCode.SharpZipLib.Tar.InvalidHeaderException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidHeaderException__ctor_m2820 (InvalidHeaderException_t554 * __this, SerializationInfo_t643 * ___information, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.InvalidHeaderException::.ctor()
extern "C" void InvalidHeaderException__ctor_m2821 (InvalidHeaderException_t554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.InvalidHeaderException::.ctor(System.String)
extern "C" void InvalidHeaderException__ctor_m2822 (InvalidHeaderException_t554 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.InvalidHeaderException::.ctor(System.String,System.Exception)
extern "C" void InvalidHeaderException__ctor_m2823 (InvalidHeaderException_t554 * __this, String_t* ___message, Exception_t159 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
