#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.WeakReference
struct WeakReference_t2019;

#include "mscorlib_System_Runtime_Remoting_Identity.h"

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t2018  : public Identity_t2010
{
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t2019 * ____proxyReference_7;
};
