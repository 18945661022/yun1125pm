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
// UnityEngine.Texture
struct Texture_t21;
// VideoPlayerHelper
struct VideoPlayerHelper_t42;
// UnityEngine.Texture2D
struct Texture2D_t38;
// UnityEngine.GameObject
struct GameObject_t43;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState.h"

// VideoPlaybackBehaviour
struct  VideoPlaybackBehaviour_t41  : public MonoBehaviour_t12
{
	// System.String VideoPlaybackBehaviour::m_path
	String_t* ___m_path_1;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_playTexture
	Texture_t21 * ___m_playTexture_2;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_busyTexture
	Texture_t21 * ___m_busyTexture_3;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_errorTexture
	Texture_t21 * ___m_errorTexture_4;
	// System.Boolean VideoPlaybackBehaviour::m_autoPlay
	bool ___m_autoPlay_5;
	// VideoPlayerHelper VideoPlaybackBehaviour::mVideoPlayer
	VideoPlayerHelper_t42 * ___mVideoPlayer_6;
	// System.Boolean VideoPlaybackBehaviour::mIsInited
	bool ___mIsInited_7;
	// System.Boolean VideoPlaybackBehaviour::mIsPrepared
	bool ___mIsPrepared_8;
	// System.Boolean VideoPlaybackBehaviour::mAppPaused
	bool ___mAppPaused_9;
	// UnityEngine.Texture2D VideoPlaybackBehaviour::mVideoTexture
	Texture2D_t38 * ___mVideoTexture_10;
	// UnityEngine.Texture VideoPlaybackBehaviour::mKeyframeTexture
	Texture_t21 * ___mKeyframeTexture_11;
	// VideoPlayerHelper/MediaType VideoPlaybackBehaviour::mMediaType
	int32_t ___mMediaType_12;
	// VideoPlayerHelper/MediaState VideoPlaybackBehaviour::mCurrentState
	int32_t ___mCurrentState_13;
	// System.Single VideoPlaybackBehaviour::mSeekPosition
	float ___mSeekPosition_14;
	// System.Boolean VideoPlaybackBehaviour::isPlayableOnTexture
	bool ___isPlayableOnTexture_15;
	// UnityEngine.GameObject VideoPlaybackBehaviour::mIconPlane
	GameObject_t43 * ___mIconPlane_16;
	// System.Boolean VideoPlaybackBehaviour::mIconPlaneActive
	bool ___mIconPlaneActive_17;
	// System.Boolean VideoPlaybackBehaviour::firstPlay
	bool ___firstPlay_18;
};
