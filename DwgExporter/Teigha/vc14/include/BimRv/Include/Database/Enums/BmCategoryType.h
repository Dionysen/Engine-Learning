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

#ifndef _BM_CATEGORYTYPE_H_
#define _BM_CATEGORYTYPE_H_

#define ODBM_CATEGORYTYPE(PARAM_DEF, ...)                                      \
  /* The category type is invalid */                                           \
  PARAM_DEF(Invalid, 0)                                                        \
  /* A model element category */                                               \
  PARAM_DEF(Model, 1)                                                          \
  /* An annotation element category */                                         \
  PARAM_DEF(Annotation, 2)                                                     \
  /* The category is for internal usage */                                     \
  PARAM_DEF(Internal, 4)                                                       \
  /* An analytical model element category */                                   \
  PARAM_DEF(AnalyticalModel, 5)

ODBM_ENUMERATION(CategoryType, ODBM_CATEGORYTYPE)

#undef ODBM_CATEGORYTYPE

#endif //_BM_CATEGORYTYPE_H_
