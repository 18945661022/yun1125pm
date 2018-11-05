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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3194;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m26278_gshared (DefaultComparer_t3194 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26278(__this, method) (( void (*) (DefaultComparer_t3194 *, const MethodInfo*))DefaultComparer__ctor_m26278_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26279_gshared (DefaultComparer_t3194 * __this, Guid_t2222  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26279(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3194 *, Guid_t2222 , const MethodInfo*))DefaultComparer_GetHashCode_m26279_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26280_gshared (DefaultComparer_t3194 * __this, Guid_t2222  ___x, Guid_t2222  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26280(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3194 *, Guid_t2222 , Guid_t2222 , const MethodInfo*))DefaultComparer_Equals_m26280_gshared)(__this, ___x, ___y, method)
