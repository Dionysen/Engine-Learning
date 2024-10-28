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

#ifndef _BM_UNITGROUP_H_
#define _BM_UNITGROUP_H_

#define ODBM_UNITGROUP(PARAM_DEF, ...)                               \
  PARAM_DEF(None,                                        0xFFFFFFFF) \
  PARAM_DEF(Common,                                      0x00000000) \
  PARAM_DEF(Structural,                                  0x00000001) \
  PARAM_DEF(HVAC,                                        0x00000002) \
  PARAM_DEF(Electrical,                                  0x00000003) \
  PARAM_DEF(Piping,                                      0x00000004) \
  PARAM_DEF(Energy,                                      0x00000005) \
  PARAM_DEF(Infrastructure,                              0x00000006) \

ODBM_ENUMERATION(UnitGroup, ODBM_UNITGROUP)

#undef ODBM_UNITGROUP

#endif // _BM_UNITGROUP_H_
