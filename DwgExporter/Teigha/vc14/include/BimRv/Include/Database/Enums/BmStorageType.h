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

#ifndef _BM_STORAGETYPE_H_
#define _BM_STORAGETYPE_H_

#define ODBM_STORAGETYPE(PARAM_DEF, ...) \
  PARAM_DEF(None,      0xFFFFFFFF)       \
  PARAM_DEF(Integer,   0x00000000)       \
  PARAM_DEF(Double,    0x00000001)       \
  PARAM_DEF(String,    0x00000002)       \
  PARAM_DEF(ElementId, 0x00000003)       \
  PARAM_DEF(Button,    0x00000004)


ODBM_ENUMERATION(StorageType, ODBM_STORAGETYPE)

#undef ODBM_STORAGETYPE

#endif // _BM_STORAGETYPE_H_
