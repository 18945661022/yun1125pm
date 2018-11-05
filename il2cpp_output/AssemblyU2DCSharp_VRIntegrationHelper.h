#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t102;
// Vuforia.HideExcessAreaAbstractBehaviour
struct HideExcessAreaAbstractBehaviour_t68;
// UnityEngine.Transform
struct Transform_t100;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// VRIntegrationHelper
struct  VRIntegrationHelper_t99  : public MonoBehaviour_t12
{
	// System.Boolean VRIntegrationHelper::IsLeft
	bool ___IsLeft_11;
	// UnityEngine.Transform VRIntegrationHelper::TrackableParent
	Transform_t100 * ___TrackableParent_12;
};
struct VRIntegrationHelper_t99_StaticFields{
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mLeftCameraMatrixOriginal
	Matrix4x4_t101  ___mLeftCameraMatrixOriginal_1;
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mRightCameraMatrixOriginal
	Matrix4x4_t101  ___mRightCameraMatrixOriginal_2;
	// UnityEngine.Camera VRIntegrationHelper::mLeftCamera
	Camera_t102 * ___mLeftCamera_3;
	// UnityEngine.Camera VRIntegrationHelper::mRightCamera
	Camera_t102 * ___mRightCamera_4;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mLeftExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t68 * ___mLeftExcessAreaBehaviour_5;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mRightExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t68 * ___mRightExcessAreaBehaviour_6;
	// UnityEngine.Rect VRIntegrationHelper::mLeftCameraPixelRect
	Rect_t19  ___mLeftCameraPixelRect_7;
	// UnityEngine.Rect VRIntegrationHelper::mRightCameraPixelRect
	Rect_t19  ___mRightCameraPixelRect_8;
	// System.Boolean VRIntegrationHelper::mLeftCameraDataAcquired
	bool ___mLeftCameraDataAcquired_9;
	// System.Boolean VRIntegrationHelper::mRightCameraDataAcquired
	bool ___mRightCameraDataAcquired_10;
};
