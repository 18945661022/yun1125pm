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

// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct KeysRequiredEventArgs_t601;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::.ctor(System.String)
extern "C" void KeysRequiredEventArgs__ctor_m3385 (KeysRequiredEventArgs_t601 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::.ctor(System.String,System.Byte[])
extern "C" void KeysRequiredEventArgs__ctor_m3386 (KeysRequiredEventArgs_t601 * __this, String_t* ___name, ByteU5BU5D_t129* ___keyValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::get_FileName()
extern "C" String_t* KeysRequiredEventArgs_get_FileName_m3387 (KeysRequiredEventArgs_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::get_Key()
extern "C" ByteU5BU5D_t129* KeysRequiredEventArgs_get_Key_m3388 (KeysRequiredEventArgs_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::set_Key(System.Byte[])
extern "C" void KeysRequiredEventArgs_set_Key_m3389 (KeysRequiredEventArgs_t601 * __this, ByteU5BU5D_t129* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
