#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VideoPlaybackBehaviour
struct VideoPlaybackBehaviour_t41;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PlayVideo
struct  PlayVideo_t120  : public MonoBehaviour_t12
{
	// System.Boolean PlayVideo::isFullScreen
	bool ___isFullScreen_1;
	// System.Boolean PlayVideo::mVideoIsPlaying
	bool ___mVideoIsPlaying_2;
	// VideoPlaybackBehaviour PlayVideo::currentVideo
	VideoPlaybackBehaviour_t41 * ___currentVideo_3;
};
