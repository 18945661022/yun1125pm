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

// VideoPlayerHelper
struct VideoPlayerHelper_t42;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState.h"
#include "mscorlib_System_IntPtr.h"

// System.Void VideoPlayerHelper::.ctor()
extern "C" void VideoPlayerHelper__ctor_m121 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::SetFilename(System.String)
extern "C" void VideoPlayerHelper_SetFilename_m122 (VideoPlayerHelper_t42 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Init()
extern "C" bool VideoPlayerHelper_Init_m123 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Deinit()
extern "C" bool VideoPlayerHelper_Deinit_m124 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Load(System.String,VideoPlayerHelper/MediaType,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_Load_m125 (VideoPlayerHelper_t42 * __this, String_t* ___filename, int32_t ___requestedType, bool ___playOnTextureImmediately, float ___seekPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Unload()
extern "C" bool VideoPlayerHelper_Unload_m126 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::IsPlayableOnTexture()
extern "C" bool VideoPlayerHelper_IsPlayableOnTexture_m127 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::IsPlayableFullscreen()
extern "C" bool VideoPlayerHelper_IsPlayableFullscreen_m128 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SetVideoTextureID(System.Int32)
extern "C" bool VideoPlayerHelper_SetVideoTextureID_m129 (VideoPlayerHelper_t42 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlayerHelper::GetStatus()
extern "C" int32_t VideoPlayerHelper_GetStatus_m130 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetVideoWidth()
extern "C" int32_t VideoPlayerHelper_GetVideoWidth_m131 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetVideoHeight()
extern "C" int32_t VideoPlayerHelper_GetVideoHeight_m132 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::GetLength()
extern "C" float VideoPlayerHelper_GetLength_m133 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Play(System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_Play_m134 (VideoPlayerHelper_t42 * __this, bool ___fullScreen, float ___seekPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Pause()
extern "C" bool VideoPlayerHelper_Pause_m135 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::Stop()
extern "C" bool VideoPlayerHelper_Stop_m136 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VideoPlayerHelper/MediaState VideoPlayerHelper::UpdateVideoData()
extern "C" int32_t VideoPlayerHelper_UpdateVideoData_m137 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SeekTo(System.Single)
extern "C" bool VideoPlayerHelper_SeekTo_m138 (VideoPlayerHelper_t42 * __this, float ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::GetCurrentPosition()
extern "C" float VideoPlayerHelper_GetCurrentPosition_m139 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::SetVolume(System.Single)
extern "C" bool VideoPlayerHelper_SetVolume_m140 (VideoPlayerHelper_t42 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::GetCurrentBufferingPercentage()
extern "C" int32_t VideoPlayerHelper_GetCurrentBufferingPercentage_m141 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::OnPause()
extern "C" void VideoPlayerHelper_OnPause_m142 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr VideoPlayerHelper::videoPlayerInitIOS()
extern "C" IntPtr_t VideoPlayerHelper_videoPlayerInitIOS_m143 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerDeinitIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerDeinitIOS_m144 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerLoadIOS(System.IntPtr,System.String,System.Int32,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerLoadIOS_m145 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, String_t* ___filename, int32_t ___requestType, bool ___playOnTextureImmediately, float ___seekPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerUnloadIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerUnloadIOS_m146 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableOnTextureIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableOnTextureIOS_m147 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableFullscreenIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableFullscreenIOS_m148 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVideoTextureIDIOS(System.IntPtr,System.Int32)
extern "C" bool VideoPlayerHelper_videoPlayerSetVideoTextureIDIOS_m149 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetStatusIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetStatusIOS_m150 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoWidthIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoWidthIOS_m151 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoHeightIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoHeightIOS_m152 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetLengthIOS(System.IntPtr)
extern "C" float VideoPlayerHelper_videoPlayerGetLengthIOS_m153 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPlayIOS(System.IntPtr,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerPlayIOS_m154 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, bool ___fullScreen, float ___seekPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPauseIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerPauseIOS_m155 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerStopIOS(System.IntPtr)
extern "C" bool VideoPlayerHelper_videoPlayerStopIOS_m156 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerUpdateVideoDataIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerUpdateVideoDataIOS_m157 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSeekToIOS(System.IntPtr,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSeekToIOS_m158 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, float ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetCurrentPositionIOS(System.IntPtr)
extern "C" float VideoPlayerHelper_videoPlayerGetCurrentPositionIOS_m159 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVolumeIOS(System.IntPtr,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSetVolumeIOS_m160 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetCurrentBufferingPercentageIOS(System.IntPtr)
extern "C" int32_t VideoPlayerHelper_videoPlayerGetCurrentBufferingPercentageIOS_m161 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::videoPlayerOnPauseIOS(System.IntPtr)
extern "C" void VideoPlayerHelper_videoPlayerOnPauseIOS_m162 (Object_t * __this /* static, unused */, IntPtr_t ___videoPlayerPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerInit()
extern "C" bool VideoPlayerHelper_videoPlayerInit_m163 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerDeinit()
extern "C" bool VideoPlayerHelper_videoPlayerDeinit_m164 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerLoad(System.String,System.Int32,System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerLoad_m165 (VideoPlayerHelper_t42 * __this, String_t* ___filename, int32_t ___requestType, bool ___playOnTextureImmediately, float ___seekPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerUnload()
extern "C" bool VideoPlayerHelper_videoPlayerUnload_m166 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableOnTexture()
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableOnTexture_m167 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerIsPlayableFullscreen()
extern "C" bool VideoPlayerHelper_videoPlayerIsPlayableFullscreen_m168 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVideoTextureID(System.Int32)
extern "C" bool VideoPlayerHelper_videoPlayerSetVideoTextureID_m169 (VideoPlayerHelper_t42 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetStatus()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetStatus_m170 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoWidth()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoWidth_m171 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetVideoHeight()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetVideoHeight_m172 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetLength()
extern "C" float VideoPlayerHelper_videoPlayerGetLength_m173 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPlay(System.Boolean,System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerPlay_m174 (VideoPlayerHelper_t42 * __this, bool ___fullScreen, float ___seekPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerPause()
extern "C" bool VideoPlayerHelper_videoPlayerPause_m175 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerStop()
extern "C" bool VideoPlayerHelper_videoPlayerStop_m176 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerUpdateVideoData()
extern "C" int32_t VideoPlayerHelper_videoPlayerUpdateVideoData_m177 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSeekTo(System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSeekTo_m178 (VideoPlayerHelper_t42 * __this, float ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VideoPlayerHelper::videoPlayerGetCurrentPosition()
extern "C" float VideoPlayerHelper_videoPlayerGetCurrentPosition_m179 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VideoPlayerHelper::videoPlayerSetVolume(System.Single)
extern "C" bool VideoPlayerHelper_videoPlayerSetVolume_m180 (VideoPlayerHelper_t42 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VideoPlayerHelper::videoPlayerGetCurrentBufferingPercentage()
extern "C" int32_t VideoPlayerHelper_videoPlayerGetCurrentBufferingPercentage_m181 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoPlayerHelper::videoPlayerOnPause()
extern "C" void VideoPlayerHelper_videoPlayerOnPause_m182 (VideoPlayerHelper_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
