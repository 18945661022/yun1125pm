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
// Vuforia.ImageTarget
struct ImageTarget_t857;
// Vuforia.DataSetImpl
struct DataSetImpl_t706;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// Vuforia.VirtualButtonImpl
struct  VirtualButtonImpl_t856  : public VirtualButton_t855
{
	// System.String Vuforia.VirtualButtonImpl::mName
	String_t* ___mName_1;
	// System.Int32 Vuforia.VirtualButtonImpl::mID
	int32_t ___mID_2;
	// Vuforia.RectangleData Vuforia.VirtualButtonImpl::mArea
	RectangleData_t725  ___mArea_3;
	// System.Boolean Vuforia.VirtualButtonImpl::mIsEnabled
	bool ___mIsEnabled_4;
	// Vuforia.ImageTarget Vuforia.VirtualButtonImpl::mParentImageTarget
	Object_t * ___mParentImageTarget_5;
	// Vuforia.DataSetImpl Vuforia.VirtualButtonImpl::mParentDataSet
	DataSetImpl_t706 * ___mParentDataSet_6;
};
