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

// ICSharpCode.SharpZipLib.Tar.TarException
struct TarException_t553;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void ICSharpCode.SharpZipLib.Tar.TarException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TarException__ctor_m2816 (TarException_t553 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarException::.ctor()
extern "C" void TarException__ctor_m2817 (TarException_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarException::.ctor(System.String)
extern "C" void TarException__ctor_m2818 (TarException_t553 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Tar.TarException::.ctor(System.String,System.Exception)
extern "C" void TarException__ctor_m2819 (TarException_t553 * __this, String_t* ___message, Exception_t159 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
