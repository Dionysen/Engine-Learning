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

#ifndef _BM_CONNECTORPROFILETYPE_H_
#define _BM_CONNECTORPROFILETYPE_H_

#define ODBM_CONNECTORPROFILETYPE(PARAM_DEF, ...) \
  PARAM_DEF(Invalid, -1)                          \
  PARAM_DEF(Round, 0)                             \
  PARAM_DEF(Rectangular, 1)                       \
  PARAM_DEF(Oval, 2)                              \
  PARAM_DEF(Square, 3)

ODBM_EXTENDED_ENUMERATION(ConnectorProfileType, ODBM_CONNECTORPROFILETYPE)

#undef ODBM_CONNECTORPROFILETYPE

#endif // _BM_CONNECTORPROFILETYPE_H_
