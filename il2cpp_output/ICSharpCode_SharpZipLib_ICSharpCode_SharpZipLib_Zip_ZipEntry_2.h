#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t582;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_1.h"

// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory
struct  ZipEntryFactory_t593  : public Object_t
{
	// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::nameTransform_
	Object_t * ___nameTransform__0;
	// System.DateTime ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::fixedDateTime_
	DateTime_t18  ___fixedDateTime__1;
	// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory/TimeSetting ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::timeSetting_
	int32_t ___timeSetting__2;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::isUnicodeText_
	bool ___isUnicodeText__3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::getAttributes_
	int32_t ___getAttributes__4;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::setAttributes_
	int32_t ___setAttributes__5;
};
