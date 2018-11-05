#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler
struct ProgressMessageHandler_t555;
// System.String
struct String_t;
// ICSharpCode.SharpZipLib.Tar.TarInputStream
struct TarInputStream_t558;
// ICSharpCode.SharpZipLib.Tar.TarOutputStream
struct TarOutputStream_t559;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Tar.TarArchive
struct  TarArchive_t556  : public Object_t
{
	// ICSharpCode.SharpZipLib.Tar.ProgressMessageHandler ICSharpCode.SharpZipLib.Tar.TarArchive::ProgressMessageEvent
	ProgressMessageHandler_t555 * ___ProgressMessageEvent_0;
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::keepOldFiles
	bool ___keepOldFiles_1;
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::asciiTranslate
	bool ___asciiTranslate_2;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarArchive::userId
	int32_t ___userId_3;
	// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::userName
	String_t* ___userName_4;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarArchive::groupId
	int32_t ___groupId_5;
	// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::groupName
	String_t* ___groupName_6;
	// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::rootPath
	String_t* ___rootPath_7;
	// System.String ICSharpCode.SharpZipLib.Tar.TarArchive::pathPrefix
	String_t* ___pathPrefix_8;
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::applyUserInfoOverrides
	bool ___applyUserInfoOverrides_9;
	// ICSharpCode.SharpZipLib.Tar.TarInputStream ICSharpCode.SharpZipLib.Tar.TarArchive::tarIn
	TarInputStream_t558 * ___tarIn_10;
	// ICSharpCode.SharpZipLib.Tar.TarOutputStream ICSharpCode.SharpZipLib.Tar.TarArchive::tarOut
	TarOutputStream_t559 * ___tarOut_11;
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarArchive::isDisposed
	bool ___isDisposed_12;
};
