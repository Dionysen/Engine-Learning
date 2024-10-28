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

#ifndef _BM_BEHAVIORTYPE_H_
#define _BM_BEHAVIORTYPE_H_

#define ODBM_BEHAVIORTYPE(PARAM_DEF, ...)     \
  PARAM_DEF(Invalid, 0)                       \
  PARAM_DEF(Normal, 1)                        \
  PARAM_DEF(Bend, 2)                          \
  PARAM_DEF(Branch, 4)                        \
  PARAM_DEF(Intersection, 8)                  \
  PARAM_DEF(Inline, 16)                       \
  PARAM_DEF(BreakInto, 32)                    \
  PARAM_DEF(OrientToObject, 64)               \
  PARAM_DEF(OrientToCenterLine, 128)          \
  PARAM_DEF(OrientToFace, 256)                \
  PARAM_DEF(SystemMember, 512)                \
  PARAM_DEF(BaseObject, 1024)                 \
  PARAM_DEF(EndCap, 2048)                     \
  PARAM_DEF(Valve, 4096)                      \
  PARAM_DEF(Flange, 8192)                     \
  PARAM_DEF(MechanicalCoupling, 16384)        \
  PARAM_DEF(VerticalBend, 32768)              \
  PARAM_DEF(ElectricalBaseObject, 65536)      \
  PARAM_DEF(Straight, 131072)                 \
  PARAM_DEF(Flex, 262144)                     \
  PARAM_DEF(Hanger, 524288)                   \
  PARAM_DEF(Flat_Tap, 1048576)                \
  PARAM_DEF(Coupling, 2097152)                \
  PARAM_DEF(Round_CentreLine_Tap, 4194304)    \
  PARAM_DEF(Oval_CentreLine_Tap, 8388608)     \
  PARAM_DEF(Damper, 16777216)

ODBM_ENUMERATION(BehaviorType, ODBM_BEHAVIORTYPE)

#undef ODBM_BEHAVIORTYPE

#endif // _BM_BEHAVIORTYPE_H_
