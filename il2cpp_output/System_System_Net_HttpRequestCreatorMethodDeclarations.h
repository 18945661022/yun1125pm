﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1482;
// System.Net.WebRequest
struct WebRequest_t1443;
// System.Uri
struct Uri_t1438;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m8686 (HttpRequestCreator_t1482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1443 * HttpRequestCreator_Create_m8687 (HttpRequestCreator_t1482 * __this, Uri_t1438 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
