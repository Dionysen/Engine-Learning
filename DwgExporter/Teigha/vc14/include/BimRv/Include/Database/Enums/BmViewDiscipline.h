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

#ifndef _BM_VIEWDISCIPLINE_H_
#define _BM_VIEWDISCIPLINE_H_

#define ODBM_VIEWDISCIPLINE(PARAM_DEF, ...) \
  PARAM_DEF(Architectural, 1,    "Architectural discipline") \
  PARAM_DEF(Structural,    2,    "Structural discipline")    \
  PARAM_DEF(Mechanical,    4,    "Mechanical discipline")    \
  PARAM_DEF(Electrical,    8,    "Electrical discipline")    \
  PARAM_DEF(Plumbing,      16,   "Plumbing discipline")      \
  PARAM_DEF(Coordination,  4095, "Coordination discipline")

ODBM_ENUMERATION(ViewDiscipline, ODBM_VIEWDISCIPLINE)

#undef ODBM_VIEWDISCIPLINE

#endif //_BM_VIEWDISCIPLINE_H_
