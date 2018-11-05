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

// ICSharpCode.SharpZipLib.GZip.GZipException
struct GZipException_t543;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t643;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void ICSharpCode.SharpZipLib.GZip.GZipException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void GZipException__ctor_m2748 (GZipException_t543 * __this, SerializationInfo_t643 * ___info, StreamingContext_t644  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipException::.ctor()
extern "C" void GZipException__ctor_m2749 (GZipException_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipException::.ctor(System.String)
extern "C" void GZipException__ctor_m2750 (GZipException_t543 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.GZip.GZipException::.ctor(System.String,System.Exception)
extern "C" void GZipException__ctor_m2751 (GZipException_t543 * __this, String_t* ___message, Exception_t159 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
