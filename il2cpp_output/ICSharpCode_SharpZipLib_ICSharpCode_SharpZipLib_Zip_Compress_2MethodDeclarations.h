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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_t564;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t565;
// System.Byte[]
struct ByteU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Write(System.Int32)
extern "C" void OutputWindow_Write_m3049 (OutputWindow_t564 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
extern "C" void OutputWindow_SlowRepeat_m3050 (OutputWindow_t564 * __this, int32_t ___repStart, int32_t ___length, int32_t ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Repeat(System.Int32,System.Int32)
extern "C" void OutputWindow_Repeat_m3051 (OutputWindow_t564 * __this, int32_t ___length, int32_t ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyStored(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator,System.Int32)
extern "C" int32_t OutputWindow_CopyStored_m3052 (OutputWindow_t564 * __this, StreamManipulator_t565 * ___input, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyDict(System.Byte[],System.Int32,System.Int32)
extern "C" void OutputWindow_CopyDict_m3053 (OutputWindow_t564 * __this, ByteU5BU5D_t129* ___dictionary, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetFreeSpace()
extern "C" int32_t OutputWindow_GetFreeSpace_m3054 (OutputWindow_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetAvailable()
extern "C" int32_t OutputWindow_GetAvailable_m3055 (OutputWindow_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyOutput(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t OutputWindow_CopyOutput_m3056 (OutputWindow_t564 * __this, ByteU5BU5D_t129* ___output, int32_t ___offset, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Reset()
extern "C" void OutputWindow_Reset_m3057 (OutputWindow_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::.ctor()
extern "C" void OutputWindow__ctor_m3058 (OutputWindow_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
