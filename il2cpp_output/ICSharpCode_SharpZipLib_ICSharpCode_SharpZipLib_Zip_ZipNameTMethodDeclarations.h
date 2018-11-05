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

// ICSharpCode.SharpZipLib.Zip.ZipNameTransform
struct ZipNameTransform_t631;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor()
extern "C" void ZipNameTransform__ctor_m3655 (ZipNameTransform_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor(System.String)
extern "C" void ZipNameTransform__ctor_m3656 (ZipNameTransform_t631 * __this, String_t* ___trimPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.cctor()
extern "C" void ZipNameTransform__cctor_m3657 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformDirectory(System.String)
extern "C" String_t* ZipNameTransform_TransformDirectory_m3658 (ZipNameTransform_t631 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformFile(System.String)
extern "C" String_t* ZipNameTransform_TransformFile_m3659 (ZipNameTransform_t631 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::get_TrimPrefix()
extern "C" String_t* ZipNameTransform_get_TrimPrefix_m3660 (ZipNameTransform_t631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::set_TrimPrefix(System.String)
extern "C" void ZipNameTransform_set_TrimPrefix_m3661 (ZipNameTransform_t631 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::MakeValidName(System.String,System.Char)
extern "C" String_t* ZipNameTransform_MakeValidName_m3662 (Object_t * __this /* static, unused */, String_t* ___name, uint16_t ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String,System.Boolean)
extern "C" bool ZipNameTransform_IsValidName_m3663 (Object_t * __this /* static, unused */, String_t* ___name, bool ___relaxed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String)
extern "C" bool ZipNameTransform_IsValidName_m3664 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
