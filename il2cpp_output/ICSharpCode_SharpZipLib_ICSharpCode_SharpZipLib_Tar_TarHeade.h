#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// ICSharpCode.SharpZipLib.Tar.TarHeader
struct  TarHeader_t561  : public Object_t
{
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::name
	String_t* ___name_38;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::mode
	int32_t ___mode_39;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::userId
	int32_t ___userId_40;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::groupId
	int32_t ___groupId_41;
	// System.Int64 ICSharpCode.SharpZipLib.Tar.TarHeader::size
	int64_t ___size_42;
	// System.DateTime ICSharpCode.SharpZipLib.Tar.TarHeader::modTime
	DateTime_t18  ___modTime_43;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::checksum
	int32_t ___checksum_44;
	// System.Boolean ICSharpCode.SharpZipLib.Tar.TarHeader::isChecksumValid
	bool ___isChecksumValid_45;
	// System.Byte ICSharpCode.SharpZipLib.Tar.TarHeader::typeFlag
	uint8_t ___typeFlag_46;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::linkName
	String_t* ___linkName_47;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::magic
	String_t* ___magic_48;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::version
	String_t* ___version_49;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::userName
	String_t* ___userName_50;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::groupName
	String_t* ___groupName_51;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::devMajor
	int32_t ___devMajor_52;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::devMinor
	int32_t ___devMinor_53;
};
struct TarHeader_t561_StaticFields{
	// System.DateTime ICSharpCode.SharpZipLib.Tar.TarHeader::dateTime1970
	DateTime_t18  ___dateTime1970_37;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::userIdAsSet
	int32_t ___userIdAsSet_54;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::groupIdAsSet
	int32_t ___groupIdAsSet_55;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::userNameAsSet
	String_t* ___userNameAsSet_56;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::groupNameAsSet
	String_t* ___groupNameAsSet_57;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::defaultUserId
	int32_t ___defaultUserId_58;
	// System.Int32 ICSharpCode.SharpZipLib.Tar.TarHeader::defaultGroupId
	int32_t ___defaultGroupId_59;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::defaultGroupName
	String_t* ___defaultGroupName_60;
	// System.String ICSharpCode.SharpZipLib.Tar.TarHeader::defaultUser
	String_t* ___defaultUser_61;
};
