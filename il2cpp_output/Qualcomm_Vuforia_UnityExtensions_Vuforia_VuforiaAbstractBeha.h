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
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t64;
// UnityEngine.Transform
struct Transform_t100;
// UnityEngine.Camera
struct Camera_t102;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t869;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t870;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t163;
// System.Action
struct Action_t3;
// System.Action`1<System.Boolean>
struct Action_1_t24;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t872;
// UnityEngine.Material
struct Material_t114;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t871;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t110  : public MonoBehaviour_t12
{
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_1;
	// System.Single Vuforia.VuforiaAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_2;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSkewFrustum
	bool ___mSkewFrustum_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_9;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_10;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t64 * ___mWorldCenter_11;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mCentralAnchorPoint
	Transform_t100 * ___mCentralAnchorPoint_12;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mParentAnchorPoint
	Transform_t100 * ___mParentAnchorPoint_13;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mPrimaryCamera
	Camera_t102 * ___mPrimaryCamera_14;
	// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::mPrimaryCameraOriginalRect
	Rect_t19  ___mPrimaryCameraOriginalRect_15;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mSecondaryCamera
	Camera_t102 * ___mSecondaryCamera_16;
	// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::mSecondaryCameraOriginalRect
	Rect_t19  ___mSecondaryCameraOriginalRect_17;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_18;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mUsingHeadset
	bool ___mUsingHeadset_19;
	// System.String Vuforia.VuforiaAbstractBehaviour::mHeadsetID
	String_t* ___mHeadsetID_20;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mEyewearUserCalibrationProfileId
	int32_t ___mEyewearUserCalibrationProfileId_21;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSynchronizePoseUpdates
	bool ___mSynchronizePoseUpdates_22;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t869 * ___mTrackerEventHandlers_23;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t870 * ___mVideoBgEventHandlers_24;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t163 * ___mOnVuforiaInitError_25;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t3 * ___mOnVuforiaInitialized_26;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t3 * ___mOnVuforiaStarted_27;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t3 * ___mOnTrackablesUpdated_28;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t3 * ___mRenderOnUpdate_29;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t24 * ___mOnPause_30;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t3 * ___mOnBackgroundTextureChanged_31;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_35;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_36;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	Object_t * ___mCameraConfiguration_37;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t114 * ___mClearMaterial_38;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_40;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_41;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_42;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_43;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_44;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_45;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t871 * ___mTrackersRequestedToDeinit_46;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_47;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_48;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mLeftProjectMatrixToApply
	Matrix4x4_t101  ___mLeftProjectMatrixToApply_49;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mRightProjectMatrixToApply
	Matrix4x4_t101  ___mRightProjectMatrixToApply_50;
};
