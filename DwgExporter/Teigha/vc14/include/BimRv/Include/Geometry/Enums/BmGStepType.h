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

#ifndef __BM_GSTEPTYPEENUMS_H__
#define __BM_GSTEPTYPEENUMS_H__

#define GSTEPTYPE(PARAM_DEF, ...)                                 \
  PARAM_DEF(NonBRep, 1)                                           \
  PARAM_DEF(Form, 2)                                              \
  PARAM_DEF(Adjust, 3)                                            \
  PARAM_DEF(Cut, 4)                                               \
  PARAM_DEF(PostCut, 5)                                           \
  PARAM_DEF(Tweak, 6)

ODBM_RANGED_ENUMERATION(GStepType, GSTEPTYPE, 1, 6)

#undef GSTEPTYPE

#endif //__BM_GSTEPTYPEENUMS_H__

