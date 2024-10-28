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

#ifndef _BM_COMPAREMODE_H_
#define _BM_COMPAREMODE_H_

#define ODBM_COMPAREMODE(PARAM_DEF, ...)    \
  PARAM_DEF(Undefined, -1)            \
  PARAM_DEF(NotEqual, 0)              \
  PARAM_DEF(Less, 1)                  \
  PARAM_DEF(LessOrEqual, 2)           \
  PARAM_DEF(Equal, 3)                 \
  PARAM_DEF(GreaterOrEqual, 4)        \
  PARAM_DEF(Greater, 5)               \
  PARAM_DEF(Parallel, 6)              \
  PARAM_DEF(AntiParallel, 7)          \
  PARAM_DEF(ParallelOrAnti, 8)        \
  PARAM_DEF(SameHemisphere, 10)       \
  PARAM_DEF(OppositeHemisphere, 11)   \
  PARAM_DEF(AtLeastOne, 12)           \
  PARAM_DEF(All, 13)                  \
  PARAM_DEF(AzimuthSameQuadrant, 14)  \
  PARAM_DEF(AzimuthOppositeQuadrant, 15)

ODBM_ENUMERATION(CompareMode, ODBM_COMPAREMODE)
#undef ODBM_COMPAREMODE

#endif // _BM_COMPAREMODE_H_
