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

// ICSharpCode.SharpZipLib.Zip.WindowsNameTransform
struct WindowsNameTransform_t583;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::.ctor(System.String)
extern "C" void WindowsNameTransform__ctor_m3222 (WindowsNameTransform_t583 * __this, String_t* ___baseDirectory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::.ctor()
extern "C" void WindowsNameTransform__ctor_m3223 (WindowsNameTransform_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::get_BaseDirectory()
extern "C" String_t* WindowsNameTransform_get_BaseDirectory_m3224 (WindowsNameTransform_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::set_BaseDirectory(System.String)
extern "C" void WindowsNameTransform_set_BaseDirectory_m3225 (WindowsNameTransform_t583 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::get_TrimIncomingPaths()
extern "C" bool WindowsNameTransform_get_TrimIncomingPaths_m3226 (WindowsNameTransform_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::set_TrimIncomingPaths(System.Boolean)
extern "C" void WindowsNameTransform_set_TrimIncomingPaths_m3227 (WindowsNameTransform_t583 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::TransformDirectory(System.String)
extern "C" String_t* WindowsNameTransform_TransformDirectory_m3228 (WindowsNameTransform_t583 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::TransformFile(System.String)
extern "C" String_t* WindowsNameTransform_TransformFile_m3229 (WindowsNameTransform_t583 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::IsValidName(System.String)
extern "C" bool WindowsNameTransform_IsValidName_m3230 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::.cctor()
extern "C" void WindowsNameTransform__cctor_m3231 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::MakeValidName(System.String,System.Char)
extern "C" String_t* WindowsNameTransform_MakeValidName_m3232 (Object_t * __this /* static, unused */, String_t* ___name, uint16_t ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::get_Replacement()
extern "C" uint16_t WindowsNameTransform_get_Replacement_m3233 (WindowsNameTransform_t583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.WindowsNameTransform::set_Replacement(System.Char)
extern "C" void WindowsNameTransform_set_Replacement_m3234 (WindowsNameTransform_t583 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
