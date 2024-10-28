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

#ifndef _BM_VIEWTYPE_H_
#define _BM_VIEWTYPE_H_

#define VIEWTYPE(PARAM_DEF, ...)                                       \
  PARAM_DEF(Undefined, 0)                                         \
  PARAM_DEF(Plan, 1)                                              \
  PARAM_DEF(RPlan, 2)                                             \
  PARAM_DEF(Section, 3)                                           \
  PARAM_DEF(_3d, 4)                                               \
  PARAM_DEF(Schedule, 5)                                          \
  PARAM_DEF(Drafting, 6)                                          \
  PARAM_DEF(Project, 7)                                           \
  PARAM_DEF(Report, 8)                                            \
  PARAM_DEF(Rendering, 9)                                         \
  PARAM_DEF(AnonDrafting, 10)                                     \
  PARAM_DEF(Legend, 11)                                           \
  PARAM_DEF(SystemNavigator, 12)                                  \
  PARAM_DEF(GraphSchedColumn, 13)                                 \
  PARAM_DEF(PanelSchedule, 14)                                    \
  /*RejectedViewRules wont be worked for following wrong types: */\
  PARAM_DEF(_3dEnergyAnalysis, 15)                                \
  PARAM_DEF(_3dEnergyAnalysisPreview, 16)                         \
  PARAM_DEF(EnergyAnalysis, 17)                                   \
  PARAM_DEF(EnergyAnalysisReport, 18)                             \
  PARAM_DEF(HVACLoadsReport, 19)                                  \
  PARAM_DEF(TableView, 20)                                        \
  PARAM_DEF(Cost, 21)                                             \
  PARAM_DEF(RbsPanelSchedule, 22) \

ODBM_ENUMERATION(ViewType, VIEWTYPE)

#undef VIEWTYPE

#endif // _BM_VIEWTYPE_H_
