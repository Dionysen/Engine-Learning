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

#ifndef _BM_AREASPACETYPE_H_
#define _BM_AREASPACETYPE_H_

#define ODBM_AREASPACETYPE(PARAM_DEF, ...)                      \
  PARAM_DEF(None, -1, L"None")                     \
  PARAM_DEF(AreaGross, 0, L"Gross Building Area")             \
  PARAM_DEF(AreaExterior, 1, L"Exterior Area")                \
  PARAM_DEF(AreaBCA, 2, L"Building Common Area")              \
  PARAM_DEF(AreaExterior_2, 3, L"Exterior Area")              \
  PARAM_DEF(AreaFloor, 4, L"Floor Area")                      \
  PARAM_DEF(AreaMVP, 5, L"Major Vertical Penetration")        \
  PARAM_DEF(AreaOffice, 6, L"Office Area")                    \
  PARAM_DEF(AreaStore, 7, L"Store Area")

ODBM_ENUMERATION(AreaSpaceType, ODBM_AREASPACETYPE)

#endif // _BM_AREASPACETYPE_H_
