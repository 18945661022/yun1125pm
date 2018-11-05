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
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Vufori.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.VuforiaUnityImpl::Deinit()
extern "C" void VuforiaUnityImpl_Deinit_m4439 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::IsRendererDirty()
extern "C" bool VuforiaUnityImpl_IsRendererDirty_m4440 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C" bool VuforiaUnityImpl_SetHint_m4441 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::SetHint(System.UInt32,System.Int32)
extern "C" bool VuforiaUnityImpl_SetHint_m4442 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VuforiaUnityImpl::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t101  VuforiaUnityImpl_GetProjectionGL_m4443 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::SetApplicationEnvironment()
extern "C" void VuforiaUnityImpl_SetApplicationEnvironment_m4444 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::OnPause()
extern "C" void VuforiaUnityImpl_OnPause_m4445 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::OnResume()
extern "C" void VuforiaUnityImpl_OnResume_m4446 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::SetRendererDirty()
extern "C" void VuforiaUnityImpl_SetRendererDirty_m4447 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::.cctor()
extern "C" void VuforiaUnityImpl__cctor_m4448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
