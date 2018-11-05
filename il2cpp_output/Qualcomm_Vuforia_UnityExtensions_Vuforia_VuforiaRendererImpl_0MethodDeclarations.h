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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t795;
// UnityEngine.Texture2D
struct Texture2D_t38;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_1.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Fps.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRendererImpl.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"

// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C" Texture2D_t38 * VuforiaRendererImpl_get_VideoBackgroundTexture_m4425 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C" VideoBGCfgData_t791  VuforiaRendererImpl_GetVideoBackgroundConfig_m4426 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C" void VuforiaRendererImpl_ClearVideoBackgroundConfig_m4427 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C" void VuforiaRendererImpl_SetVideoBackgroundConfig_m4428 (VuforiaRendererImpl_t795 * __this, VideoBGCfgData_t791  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C" bool VuforiaRendererImpl_SetVideoBackgroundTexture_m4429 (VuforiaRendererImpl_t795 * __this, Texture2D_t38 * ___texture, int32_t ___nativeTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C" bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m4430 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t678  VuforiaRendererImpl_GetVideoTextureInfo_m4431 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C" void VuforiaRendererImpl_Pause_m4432 (VuforiaRendererImpl_t795 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C" int32_t VuforiaRendererImpl_GetRecommendedFps_m4433 (VuforiaRendererImpl_t795 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C" void VuforiaRendererImpl_UnityRenderEvent_m4434 (VuforiaRendererImpl_t795 * __this, int32_t ___renderEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C" bool VuforiaRendererImpl_HasBackgroundTextureChanged_m4435 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C" void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m4436 (VuforiaRendererImpl_t795 * __this, VideoBGCfgData_t791  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C" int32_t VuforiaRendererImpl_GetLastSetReflection_m4437 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C" void VuforiaRendererImpl__ctor_m4438 (VuforiaRendererImpl_t795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
