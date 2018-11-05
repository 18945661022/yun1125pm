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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m7040 (Object_t * __this /* static, unused */, Rect_t19  ___screenRect, Vector2_t7  ___scrollOffset, Vector2_t7  ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m7041 (Object_t * __this /* static, unused */, Rect_t19 * ___screenRect, Vector2_t7 * ___scrollOffset, Vector2_t7 * ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m7042 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIClip::Unclip(UnityEngine.Vector2)
extern "C" Vector2_t7  GUIClip_Unclip_m7043 (Object_t * __this /* static, unused */, Vector2_t7  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_Unclip_Vector2_m7044 (Object_t * __this /* static, unused */, Vector2_t7 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_INTERNAL_CALL_Unclip_Vector2_m7045 (Object_t * __this /* static, unused */, Vector2_t7 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
extern "C" Matrix4x4_t101  GUIClip_GetMatrix_m7046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
extern "C" void GUIClip_SetMatrix_m7047 (Object_t * __this /* static, unused */, Matrix4x4_t101  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_SetMatrix(UnityEngine.Matrix4x4&)
extern "C" void GUIClip_INTERNAL_CALL_SetMatrix_m7048 (Object_t * __this /* static, unused */, Matrix4x4_t101 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
