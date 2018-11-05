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

// Vuforia.EyewearUserCalibratorImpl
struct EyewearUserCalibratorImpl_t680;
// Vuforia.Eyewear/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t883;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Boolean Vuforia.EyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool EyewearUserCalibratorImpl_init_m3844 (EyewearUserCalibratorImpl_t680 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMinScaleHint()
extern "C" float EyewearUserCalibratorImpl_getMinScaleHint_m3845 (EyewearUserCalibratorImpl_t680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMaxScaleHint()
extern "C" float EyewearUserCalibratorImpl_getMaxScaleHint_m3846 (EyewearUserCalibratorImpl_t680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::isStereoStretched()
extern "C" bool EyewearUserCalibratorImpl_isStereoStretched_m3847 (EyewearUserCalibratorImpl_t680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.Eyewear/EyewearCalibrationReading[],UnityEngine.Matrix4x4)
extern "C" bool EyewearUserCalibratorImpl_getProjectionMatrix_m3848 (EyewearUserCalibratorImpl_t680 * __this, EyewearCalibrationReadingU5BU5D_t883* ___readings, Matrix4x4_t101  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearUserCalibratorImpl::.ctor()
extern "C" void EyewearUserCalibratorImpl__ctor_m3849 (EyewearUserCalibratorImpl_t680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
