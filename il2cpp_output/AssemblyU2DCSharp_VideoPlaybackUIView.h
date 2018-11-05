#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SampleAppUIBox
struct SampleAppUIBox_t8;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t22;
// SampleAppUILabel
struct SampleAppUILabel_t26;
// SampleAppUIButton
struct SampleAppUIButton_t20;
// SampleAppsUILayout
struct SampleAppsUILayout_t27;
// System.Action
struct Action_t3;

#include "mscorlib_System_Object.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"

// VideoPlaybackUIView
struct  VideoPlaybackUIView_t125  : public Object_t
{
	// SampleAppUIBox VideoPlaybackUIView::mBox
	SampleAppUIBox_t8 * ___mBox_0;
	// SampleAppUICheckButton VideoPlaybackUIView::mAboutLabel
	SampleAppUICheckButton_t22 * ___mAboutLabel_1;
	// SampleAppUILabel VideoPlaybackUIView::mVideoPlaybackLabel
	SampleAppUILabel_t26 * ___mVideoPlaybackLabel_2;
	// SampleAppUICheckButton VideoPlaybackUIView::mPlayFullscreeSettings
	SampleAppUICheckButton_t22 * ___mPlayFullscreeSettings_3;
	// SampleAppUILabel VideoPlaybackUIView::mCameraLabel
	SampleAppUILabel_t26 * ___mCameraLabel_4;
	// SampleAppUIButton VideoPlaybackUIView::mCloseButton
	SampleAppUIButton_t20 * ___mCloseButton_5;
	// Vuforia.CameraDevice/FocusMode VideoPlaybackUIView::mFocusMode
	int32_t ___mFocusMode_6;
	// SampleAppsUILayout VideoPlaybackUIView::mLayout
	SampleAppsUILayout_t27 * ___mLayout_7;
	// System.Action VideoPlaybackUIView::TappedToClose
	Action_t3 * ___TappedToClose_8;
};
