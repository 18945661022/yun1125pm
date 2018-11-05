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

// UnityEngine.AnimationCurve
struct AnimationCurve_t1121;
struct AnimationCurve_t1121_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1236;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m6591 (AnimationCurve_t1121 * __this, KeyframeU5BU5D_t1236* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m6592 (AnimationCurve_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6593 (AnimationCurve_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m6594 (AnimationCurve_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6595 (AnimationCurve_t1121 * __this, KeyframeU5BU5D_t1236* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t1121_marshal(const AnimationCurve_t1121& unmarshaled, AnimationCurve_t1121_marshaled& marshaled);
extern "C" void AnimationCurve_t1121_marshal_back(const AnimationCurve_t1121_marshaled& marshaled, AnimationCurve_t1121& unmarshaled);
extern "C" void AnimationCurve_t1121_marshal_cleanup(AnimationCurve_t1121_marshaled& marshaled);
