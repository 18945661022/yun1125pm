#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t607;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t615;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.Collections.ArrayList
struct ArrayList_t530;
// System.Collections.Hashtable
struct Hashtable_t618;
// ICSharpCode.SharpZipLib.Zip.IArchiveStorage
struct IArchiveStorage_t619;
// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
struct IDynamicDataSource_t620;
// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString
struct ZipString_t613;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t581;

#include "mscorlib_System_Object.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct  ZipFile_t580  : public Object_t
{
	// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler ICSharpCode.SharpZipLib.Zip.ZipFile::KeysRequired
	KeysRequiredEventHandler_t607 * ___KeysRequired_1;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isDisposed_
	bool ___isDisposed__2;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::name_
	String_t* ___name__3;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::comment_
	String_t* ___comment__4;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::baseStream_
	Stream_t506 * ___baseStream__5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isStreamOwner
	bool ___isStreamOwner_6;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::offsetOfFirstEntry
	int64_t ___offsetOfFirstEntry_7;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry[] ICSharpCode.SharpZipLib.Zip.ZipFile::entries_
	ZipEntryU5BU5D_t615* ___entries__8;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::key
	ByteU5BU5D_t129* ___key_9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isNewArchive_
	bool ___isNewArchive__10;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipFile::useZip64_
	int32_t ___useZip64__11;
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Zip.ZipFile::updates_
	ArrayList_t530 * ___updates__12;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::updateCount_
	int64_t ___updateCount__13;
	// System.Collections.Hashtable ICSharpCode.SharpZipLib.Zip.ZipFile::updateIndex_
	Hashtable_t618 * ___updateIndex__14;
	// ICSharpCode.SharpZipLib.Zip.IArchiveStorage ICSharpCode.SharpZipLib.Zip.ZipFile::archiveStorage_
	Object_t * ___archiveStorage__15;
	// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource ICSharpCode.SharpZipLib.Zip.ZipFile::updateDataSource_
	Object_t * ___updateDataSource__16;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::contentsEdited_
	bool ___contentsEdited__17;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::bufferSize_
	int32_t ___bufferSize__18;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::copyBuffer_
	ByteU5BU5D_t129* ___copyBuffer__19;
	// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString ICSharpCode.SharpZipLib.Zip.ZipFile::newComment_
	ZipString_t613 * ___newComment__20;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::commentEdited_
	bool ___commentEdited__21;
	// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.ZipFile::updateEntryFactory_
	Object_t * ___updateEntryFactory__22;
};
