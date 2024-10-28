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

#ifndef _BM_PIPESYSTEMTYPE_H_
#define _BM_PIPESYSTEMTYPE_H_

#define ODBM_PIPESYSTEMTYPE(PARAM_DEF, ...) \
  PARAM_DEF(Undefined, 0)                   \
  PARAM_DEF(SupplyHydronic, 7)              \
  PARAM_DEF(ReturnHydronic, 8)              \
  PARAM_DEF(Sanitary, 16)                   \
  PARAM_DEF(Vent, 17)                       \
  PARAM_DEF(DomesticHotWater, 19)           \
  PARAM_DEF(DomesticColdWater, 20)          \
  PARAM_DEF(OtherPipe, 22)                  \
  PARAM_DEF(FireProtectWet, 23)             \
  PARAM_DEF(FireProtectDry, 24)             \
  PARAM_DEF(FireProtectPreaction, 25)       \
  PARAM_DEF(FireProtectOther, 26)           \
  PARAM_DEF(Fitting, 28)                    \
  PARAM_DEF(Global, 29)

ODBM_ENUMERATION(PipeSystemType, ODBM_PIPESYSTEMTYPE)

#undef ODBM_PIPESYSTEMTYPE

#endif // _BM_PIPESYSTEMTYPE_H_
