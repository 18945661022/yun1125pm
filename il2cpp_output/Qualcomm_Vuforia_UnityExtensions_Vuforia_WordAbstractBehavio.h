﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Word
struct Word_t825;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordTemplateMode.h"

// Vuforia.WordAbstractBehaviour
struct  WordAbstractBehaviour_t118  : public TrackableBehaviour_t64
{
	// Vuforia.WordTemplateMode Vuforia.WordAbstractBehaviour::mMode
	int32_t ___mMode_8;
	// System.String Vuforia.WordAbstractBehaviour::mSpecificWord
	String_t* ___mSpecificWord_9;
	// Vuforia.Word Vuforia.WordAbstractBehaviour::mWord
	Object_t * ___mWord_10;
};
