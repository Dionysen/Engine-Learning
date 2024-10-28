///////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2002-2020, Open Design Alliance (the "Alliance").
// All rights reserved.
//
// This software and its documentation and related materials are owned by
// the Alliance. The software may only be incorporated into application
// programs owned by members of the Alliance, subject to a signed
// Membership Agreement and Supplemental Software License Agreement with the
// Alliance. The structure and organization of this software are the valuable
// trade secrets of the Alliance and its suppliers. The software is also
// protected by copyright law and international treaty provisions. Application
// programs incorporating this software must include the following statement
// with their copyright notices:
//
//   This application incorporates Open Design Alliance software pursuant to a license
//   agreement with Open Design Alliance.
//   Open Design Alliance Copyright (C) 2002-2020 by Open Design Alliance.
//   All rights reserved.
//
// By use of this software, its documentation or related materials, you
// acknowledge and accept the above terms.
///////////////////////////////////////////////////////////////////////////////

#ifndef _BM_BUILDINGOPERATINGSCHEDULETYPE_H_
#define _BM_BUILDINGOPERATINGSCHEDULETYPE_H_

#define BUILDINGOPERATINGSCHEDULETYPE(PARAM_DEF, ...)  \
  PARAM_DEF(DefaultOperatingSchedule, 0)          \
  PARAM_DEF(TwentyFourHourSevenDayFacility, 1)    \
  PARAM_DEF(TwentyFourHourHourSixDayFacility, 2)  \
  PARAM_DEF(TwentyFourHourHourFiveDayFacility, 3) \
  PARAM_DEF(TwelveHourSevenDayFacility, 4)        \
  PARAM_DEF(TwelveHourSixDayFacility, 5)          \
  PARAM_DEF(TwelveHourFiveDayFacility, 6)         \
  PARAM_DEF(KindergartenThruTwelveGradeSchool, 7) \
  PARAM_DEF(YearRoundSchool, 8)                   \
  PARAM_DEF(TheaterPerformingArts, 9)             \
  PARAM_DEF(Worship, 10)

ODBM_ENUMERATION(BuildingOperatingScheduleType, BUILDINGOPERATINGSCHEDULETYPE)

#undef BUILDINGOPERATINGSCHEDULETYPE

#endif // _BM_BUILDINGOPERATINGSCHEDULETYPE_H_
