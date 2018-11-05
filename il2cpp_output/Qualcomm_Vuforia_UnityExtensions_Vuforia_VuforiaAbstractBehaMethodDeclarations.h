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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t110;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t64;
// UnityEngine.Transform
struct Transform_t100;
// UnityEngine.Camera
struct Camera_t102;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t163;
// System.Action
struct Action_t3;
// System.Action`1<System.Boolean>
struct Action_1_t24;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t911;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t912;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t708;
// UnityEngine.GameObject
struct GameObject_t43;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"

// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SkewFrustum()
extern "C" bool VuforiaAbstractBehaviour_get_SkewFrustum_m5603 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaAbstractBehaviour::get_CameraOffset()
extern "C" float VuforiaAbstractBehaviour_get_CameraOffset_m5604 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_set_CameraOffset_m5605 (VuforiaAbstractBehaviour_t110 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C" int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m5606 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C" TrackableBehaviour_t64 * VuforiaAbstractBehaviour_get_WorldCenter_m5607 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_CentralAnchorPoint()
extern "C" Transform_t100 * VuforiaAbstractBehaviour_get_CentralAnchorPoint_m687 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_ParentAnchorPoint()
extern "C" Transform_t100 * VuforiaAbstractBehaviour_get_ParentAnchorPoint_m5608 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C" int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m5609 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C" int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m5610 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C" bool VuforiaAbstractBehaviour_get_HasStarted_m5611 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_IsStereoRendering()
extern "C" bool VuforiaAbstractBehaviour_get_IsStereoRendering_m5612 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_PrimaryCamera()
extern "C" Camera_t102 * VuforiaAbstractBehaviour_get_PrimaryCamera_m684 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_PrimaryCamera_m5613 (VuforiaAbstractBehaviour_t110 * __this, Camera_t102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_SecondaryCamera()
extern "C" Camera_t102 * VuforiaAbstractBehaviour_get_SecondaryCamera_m685 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C" void VuforiaAbstractBehaviour_set_SecondaryCamera_m5614 (VuforiaAbstractBehaviour_t110 * __this, Camera_t102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C" String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m5615 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::get_EyewearUserCalibrationProfileId()
extern "C" int32_t VuforiaAbstractBehaviour_get_EyewearUserCalibrationProfileId_m5616 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void VuforiaAbstractBehaviour_set_EyewearUserCalibrationProfileId_m5617 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SynchronizePoseUpdates()
extern "C" bool VuforiaAbstractBehaviour_get_SynchronizePoseUpdates_m5618 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SynchronizePoseUpdates(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_set_SynchronizePoseUpdates_m5619 (VuforiaAbstractBehaviour_t110 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetSkewFrustum(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_SetSkewFrustum_m5620 (VuforiaAbstractBehaviour_t110 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m550 (VuforiaAbstractBehaviour_t110 * __this, Action_1_t163 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m551 (VuforiaAbstractBehaviour_t110 * __this, Action_1_t163 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m780 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m781 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m683 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m756 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m5621 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m5622 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m755 (VuforiaAbstractBehaviour_t110 * __this, Action_1_t24 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m757 (VuforiaAbstractBehaviour_t110 * __this, Action_1_t24 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m5623 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m5624 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m5625 (VuforiaAbstractBehaviour_t110 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m5626 (VuforiaAbstractBehaviour_t110 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m5627 (VuforiaAbstractBehaviour_t110 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m5628 (VuforiaAbstractBehaviour_t110 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenterMode_m5629 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C" void VuforiaAbstractBehaviour_SetWorldCenter_m5630 (VuforiaAbstractBehaviour_t110 * __this, TrackableBehaviour_t64 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetCentralAnchorPoint_m5631 (VuforiaAbstractBehaviour_t110 * __this, Transform_t100 * ___anchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaAbstractBehaviour_SetParentAnchorPoint_m5632 (VuforiaAbstractBehaviour_t110 * __this, Transform_t100 * ___parentAnchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCameraOffset(System.Single)
extern "C" void VuforiaAbstractBehaviour_SetCameraOffset_m5633 (VuforiaAbstractBehaviour_t110 * __this, float ___Offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C" void VuforiaAbstractBehaviour_SetAppLicenseKey_m5634 (VuforiaAbstractBehaviour_t110 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetPresent(System.String)
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetPresent_m5635 (VuforiaAbstractBehaviour_t110 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetNotPresent()
extern "C" bool VuforiaAbstractBehaviour_SetHeadsetNotPresent_m5636 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetViewportRectangle()
extern "C" Rect_t19  VuforiaAbstractBehaviour_GetViewportRectangle_m5637 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C" int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m5638 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState()
extern "C" void VuforiaAbstractBehaviour_UpdateState_m5639 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateState_m704 (VuforiaAbstractBehaviour_t110 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m706 (VuforiaAbstractBehaviour_t110 * __this, Matrix4x4_t101  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C" void VuforiaAbstractBehaviour_ConfigureVideoBackground_m5640 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_ResetBackgroundPlane_m5641 (VuforiaAbstractBehaviour_t110 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m5642 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C" void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m5643 (VuforiaAbstractBehaviour_t110 * __this, Action_t3 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m5644 (Object_t * __this /* static, unused */, Camera_t102 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C" bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m5645 (Object_t * __this /* static, unused */, Camera_t102 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C" void VuforiaAbstractBehaviour_Start_m5646 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C" void VuforiaAbstractBehaviour_OnEnable_m5647 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Update()
extern "C" void VuforiaAbstractBehaviour_Update_m5648 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_OnApplicationPause_m5649 (VuforiaAbstractBehaviour_t110 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C" void VuforiaAbstractBehaviour_OnDisable_m5650 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C" void VuforiaAbstractBehaviour_OnDestroy_m5651 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C" void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m714 (VuforiaAbstractBehaviour_t110 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_UpdateStatePrivate_m5652 (VuforiaAbstractBehaviour_t110 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C" bool VuforiaAbstractBehaviour_StartVuforia_m5653 (VuforiaAbstractBehaviour_t110 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C" bool VuforiaAbstractBehaviour_StopVuforia_m5654 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C" void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m5655 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C" void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m5656 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureView()
extern "C" void VuforiaAbstractBehaviour_ConfigureView_m5657 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void VuforiaAbstractBehaviour_EnableObjectRenderer_m5658 (VuforiaAbstractBehaviour_t110 * __this, GameObject_t43 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDeviceMode_m5659 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousImageTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousImageTargets_m5660 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousImageTargets_m5661 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousObjectTargets_m5662 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousObjectTargets_m5663 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetDelayedLoadingObjectTargets()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetDelayedLoadingObjectTargets_m5664 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUseDelayedLoadingObjectTargets_m5665 (VuforiaAbstractBehaviour_t110 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetCameraDirection()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetCameraDirection_m5666 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDirection_m5667 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMirrorVideoBackground()
extern "C" int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMirrorVideoBackground_m5668 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMirrorVideoBackground(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMirrorVideoBackground_m5669 (VuforiaAbstractBehaviour_t110 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetUsingHeadset()
extern "C" bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetUsingHeadset_m5670 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUsingHeadset(System.Boolean)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUsingHeadset_m5671 (VuforiaAbstractBehaviour_t110 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetHeadsetID()
extern "C" String_t* VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetHeadsetID_m5672 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetHeadsetID(System.String)
extern "C" void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetHeadsetID_m5673 (VuforiaAbstractBehaviour_t110 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C" void VuforiaAbstractBehaviour__ctor_m711 (VuforiaAbstractBehaviour_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
