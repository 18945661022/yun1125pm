﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2017;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern "C" void TrackingServices__cctor_m12772 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern "C" void TrackingServices_NotifyUnmarshaledObject_m12773 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t2017 * ___or, const MethodInfo* method) IL2CPP_METHOD_ATTR;
