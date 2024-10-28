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

#ifndef _BM_BUILDINGTYPE_H_
#define _BM_BUILDINGTYPE_H_

#define ODBM_BUILDINGTYPE(PARAM_DEF, ...)                          \
  PARAM_DEF(NoOfBuildingTypes,                           -1)       \
  PARAM_DEF(AutomotiveFacility,                          0)        \
  PARAM_DEF(ConventionCenter,                            1)        \
  PARAM_DEF(Courthouse,                                  2)        \
  PARAM_DEF(DiningBarLoungeOrLeisure,                    3)        \
  PARAM_DEF(DiningCafeteriaFastFood,                     4)        \
  PARAM_DEF(DiningFamily,                                5)        \
  PARAM_DEF(Dormitory,                                   6)        \
  PARAM_DEF(ExerciseCenter,                              7)        \
  PARAM_DEF(FireStation,                                 8)        \
  PARAM_DEF(Gymnasium,                                   9)        \
  PARAM_DEF(HospitalOrHealthcare,                        10)       \
  PARAM_DEF(Hotel,                                       11)       \
  PARAM_DEF(Library,                                     12)       \
  PARAM_DEF(Manufacturing,                               13)       \
  PARAM_DEF(Motel,                                       14)       \
  PARAM_DEF(MotionPictureTheatre,                        15)       \
  PARAM_DEF(MultiFamily,                                 16)       \
  PARAM_DEF(Museum,                                      17)       \
  PARAM_DEF(Office,                                      18)       \
  PARAM_DEF(ParkingGarage,                               19)       \
  PARAM_DEF(Penitentiary,                                20)       \
  PARAM_DEF(PerformingArtsTheater,                       21)       \
  PARAM_DEF(PoliceStation,                               22)       \
  PARAM_DEF(PostOffice,                                  23)       \
  PARAM_DEF(ReligiousBuilding,                           24)       \
  PARAM_DEF(Retail,                                      25)       \
  PARAM_DEF(SchoolOrUniversity,                          26)       \
  PARAM_DEF(SportsArena,                                 27)       \
  PARAM_DEF(TownHall,                                    28)       \
  PARAM_DEF(Transportation,                              29)       \
  PARAM_DEF(Warehouse,                                   30)       \
  PARAM_DEF(Workshop,                                    31)       \

ODBM_ENUMERATION(BuildingType, ODBM_BUILDINGTYPE)

#undef ODBM_BUILDINGTYPE

#endif // _BM_BUILDINGTYPE_H_
