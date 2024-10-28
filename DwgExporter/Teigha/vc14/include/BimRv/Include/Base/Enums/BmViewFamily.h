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

#ifndef _BM_VIEWFAMILY_H_
#define _BM_VIEWFAMILY_H_

#define VIEWFAMILY(PARAM_DEF, ...)                                \
  PARAM_DEF(Invalid,                 101)                         \
  PARAM_DEF(ThreeDimensional,        102)                         \
  PARAM_DEF(Walkthrough,             103)                         \
  PARAM_DEF(ImageView,               104)                         \
  PARAM_DEF(Schedule,                105)                         \
  PARAM_DEF(CostReport,              106)                         \
  PARAM_DEF(Sheet,                   107)                         \
  PARAM_DEF(Drafting,                108)                         \
  PARAM_DEF(FloorPlan,               109)                         \
  PARAM_DEF(AreaPlan,                110)                         \
  PARAM_DEF(CeilingPlan,             111)                         \
  PARAM_DEF(Section,                 112)                         \
  PARAM_DEF(Detail,                  113)                         \
  PARAM_DEF(Elevation,               114)                         \
  PARAM_DEF(LoadsReport,             115)                         \
  PARAM_DEF(PressureLossReport,      116)                         \
  PARAM_DEF(Legend,                  117)                         \
  PARAM_DEF(PanelSchedule,           118)                         \
  PARAM_DEF(GraphicalColumnSchedule, 119)                         \
  PARAM_DEF(StructuralPlan,          120)                         \
  PARAM_DEF(AnalysisReport,          121)                         \

ODBM_ENUMERATION(ViewFamily, VIEWFAMILY)
#undef VIEWFAMILY

#endif // _BM_VIEWFAMILY_H_
