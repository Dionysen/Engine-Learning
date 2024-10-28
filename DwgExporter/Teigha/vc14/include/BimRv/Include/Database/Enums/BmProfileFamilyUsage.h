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

#ifndef _BM_PROFILEFAMILYUSAGE_H_
#define _BM_PROFILEFAMILYUSAGE_H_

#define ODBM_PROFILEFAMILYUSAGE(PARAM_DEF, ...)    \
  PARAM_DEF(Any, 0)                                \
  PARAM_DEF(WallSweep, 1)                          \
  PARAM_DEF(Reveal, 2)                             \
  PARAM_DEF(Fascia, 3)                             \
  PARAM_DEF(Gutter, 4)                             \
  PARAM_DEF(SlabEdge, 5)                           \
  PARAM_DEF(Railing, 6)                            \
  PARAM_DEF(StairNosing, 7)                        \
  PARAM_DEF(Mullion, 8)                            \
  PARAM_DEF(SlabMetalDeck, 9)                      \
  PARAM_DEF(ContinuousFooting, 10)                 \
  PARAM_DEF(StairTread, 11)                        \
  PARAM_DEF(StairRiser, 12)                        \
  PARAM_DEF(StairSupport, 13)

ODBM_ENUMERATION(ProfileFamilyUsage, ODBM_PROFILEFAMILYUSAGE)

#undef ODBM_PROFILEFAMILYUSAGE

#endif //_BM_PROFILEFAMILYUSAGE_H_
