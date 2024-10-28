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

#ifndef _BM_ELECTRICALSYSTEMTYPE_H_
#define _BM_ELECTRICALSYSTEMTYPE_H_

#define ODBM_ELECTRICALSYSTEMTYPE(PARAM_DEF, ...) \
  PARAM_DEF(Undefined, 0)                         \
  PARAM_DEF(Data, 5)                              \
  PARAM_DEF(PowerCircuit, 6)                      \
  PARAM_DEF(Telephone, 9)                         \
  PARAM_DEF(Security, 10)                         \
  PARAM_DEF(FireAlarm, 11)                        \
  PARAM_DEF(NurseCall, 12)                        \
  PARAM_DEF(Controls, 13)                         \
  PARAM_DEF(Communication, 14)                    \
  PARAM_DEF(PowerBalanced, 30)                    \
  PARAM_DEF(PowerUnBalanced, 31)

ODBM_ENUMERATION(ElectricalSystemType, ODBM_ELECTRICALSYSTEMTYPE)

#undef ODBM_ELECTRICALSYSTEMTYPE

#endif // _BM_ELECTRICALSYSTEMTYPE_H_
