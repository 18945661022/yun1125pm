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
// System.Collections.ArrayList
struct ArrayList_t530;

#include "mscorlib_System_Object.h"

// ICSharpCode.SharpZipLib.Core.NameFilter
struct  NameFilter_t529  : public Object_t
{
	// System.String ICSharpCode.SharpZipLib.Core.NameFilter::filter_
	String_t* ___filter__0;
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Core.NameFilter::inclusions_
	ArrayList_t530 * ___inclusions__1;
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Core.NameFilter::exclusions_
	ArrayList_t530 * ___exclusions__2;
};
