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


#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Boolean System.Globalization.CCGregorianCalendar::is_leap_year(System.Int32)
extern "C" bool CCGregorianCalendar_is_leap_year_m11306 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::fixed_from_dmy(System.Int32,System.Int32,System.Int32)
extern "C" int32_t CCGregorianCalendar_fixed_from_dmy_m11307 (Object_t * __this /* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::year_from_fixed(System.Int32)
extern "C" int32_t CCGregorianCalendar_year_from_fixed_m11308 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::my_from_fixed(System.Int32&,System.Int32&,System.Int32)
extern "C" void CCGregorianCalendar_my_from_fixed_m11309 (Object_t * __this /* static, unused */, int32_t* ___month, int32_t* ___year, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::dmy_from_fixed(System.Int32&,System.Int32&,System.Int32&,System.Int32)
extern "C" void CCGregorianCalendar_dmy_from_fixed_m11310 (Object_t * __this /* static, unused */, int32_t* ___day, int32_t* ___month, int32_t* ___year, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::month_from_fixed(System.Int32)
extern "C" int32_t CCGregorianCalendar_month_from_fixed_m11311 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::day_from_fixed(System.Int32)
extern "C" int32_t CCGregorianCalendar_day_from_fixed_m11312 (Object_t * __this /* static, unused */, int32_t ___date, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t CCGregorianCalendar_GetDayOfMonth_m11313 (Object_t * __this /* static, unused */, DateTime_t18  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t CCGregorianCalendar_GetMonth_m11314 (Object_t * __this /* static, unused */, DateTime_t18  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t CCGregorianCalendar_GetYear_m11315 (Object_t * __this /* static, unused */, DateTime_t18  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
