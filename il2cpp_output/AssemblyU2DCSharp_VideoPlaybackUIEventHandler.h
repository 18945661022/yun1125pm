#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VideoPlaybackUIView
struct VideoPlaybackUIView_t125;
// System.Action
struct Action_t3;

#include "AssemblyU2DCSharp_ISampleAppUIEventHandler.h"

// VideoPlaybackUIEventHandler
struct  VideoPlaybackUIEventHandler_t124  : public ISampleAppUIEventHandler_t13
{
	// System.Boolean VideoPlaybackUIEventHandler::mFullScreenMode
	bool ___mFullScreenMode_1;
	// VideoPlaybackUIView VideoPlaybackUIEventHandler::mView
	VideoPlaybackUIView_t125 * ___mView_2;
	// System.Action VideoPlaybackUIEventHandler::CloseView
	Action_t3 * ___CloseView_3;
	// System.Action VideoPlaybackUIEventHandler::GoToAboutPage
	Action_t3 * ___GoToAboutPage_4;
};
