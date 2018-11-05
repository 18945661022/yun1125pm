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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t690;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t112;
// UnityEngine.Transform
struct Transform_t100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C" void NullCameraConfiguration_Init_m3927 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C" void NullCameraConfiguration_ConfigureVideoBackground_m3928 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void NullCameraConfiguration_UpdatePlayModeParameters_m3929 (NullCameraConfiguration_t690 * __this, WebCamAbstractBehaviour_t112 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void NullCameraConfiguration_UpdateProjection_m3930 (NullCameraConfiguration_t690 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.NullCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t NullCameraConfiguration_CheckForSurfaceChanges_m3931 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void NullCameraConfiguration_UpdateStereoDepth_m3932 (NullCameraConfiguration_t690 * __this, Transform_t100 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C" bool NullCameraConfiguration_IsStereo_m3933 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C" void NullCameraConfiguration_ResetBackgroundPlane_m3934 (NullCameraConfiguration_t690 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C" int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m3935 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C" void NullCameraConfiguration_set_VideoBackgroundMirrored_m3936 (NullCameraConfiguration_t690 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m3937 (NullCameraConfiguration_t690 * __this, Matrix4x4_t101  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void NullCameraConfiguration_SetSkewFrustum_m3938 (NullCameraConfiguration_t690 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_ViewportRect()
extern "C" Rect_t19  NullCameraConfiguration_get_ViewportRect_m3939 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m3940 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m3941 (NullCameraConfiguration_t690 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C" void NullCameraConfiguration__ctor_m3942 (NullCameraConfiguration_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
