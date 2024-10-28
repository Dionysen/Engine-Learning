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

#ifndef _BM_METALPERFORATIONTYPE_H_
#define _BM_METALPERFORATIONTYPE_H_

#define METALPERFORATIONTYPE(PARAM_DEF, ...) \
  PARAM_DEF(StaggeredCircles,       1) \
  PARAM_DEF(StraightCircles,        2) \
  PARAM_DEF(Squares,                3) \
  PARAM_DEF(Grecian,                4) \
  PARAM_DEF(Cloverleaf,             5) \
  PARAM_DEF(Hexagon,                6) \
  PARAM_DEF(Custom,                 7)

ODBM_RANGED_ENUMERATION(MetalPerforationType, METALPERFORATIONTYPE, 0, 7)

#undef METALPERFORATIONTYPE

#endif // _BM_METALPERFORATIONTYPE_H_
