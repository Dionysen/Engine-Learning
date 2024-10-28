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

#ifndef _BM_VIEWRULE_H_
#define _BM_VIEWRULE_H_

#define VIEWRULE(PARAM_DEF, ...)                                       \
  PARAM_DEF(Rule_16, 16)                                          \
  PARAM_DEF(Rule_17, 17)                                          \
  PARAM_DEF(Rule_18, 18)                                          \
  PARAM_DEF(Rule_19, 19)                                          \
  PARAM_DEF(Rule_20, 20)                                          \
  PARAM_DEF(Rule_21, 21)                                          \
  PARAM_DEF(Rule_22, 22)                                          \
  PARAM_DEF(Rule_23, 23)                                          \
  PARAM_DEF(Rule_24, 24)                                          \
  PARAM_DEF(Rule_25, 25)                                          \
  PARAM_DEF(Rule_26, 26)                                          \
  PARAM_DEF(Rule_27, 27)                                          \
  PARAM_DEF(Rule_28, 28)                                          \
  PARAM_DEF(Rule_29, 29)                                          \
  PARAM_DEF(Rule_30, 30)                                          \
  PARAM_DEF(Rule_31, 31)\

ODBM_ENUMERATION(ViewRule, VIEWRULE)

#undef VIEWRULE

#endif // _BM_VIEWRULE_H_
