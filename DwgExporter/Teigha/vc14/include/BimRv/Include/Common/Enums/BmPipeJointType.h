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

#ifndef _BM_PIPEJOINTTYPE_H_
#define _BM_PIPEJOINTTYPE_H_

#define ODBM_PIPEJOINTTYPE(PARAM_DEF, ...)               \
  PARAM_DEF(Generic, 0, L"Generic")                      \
  PARAM_DEF(Flanged, 1, L"Flanged")                      \
  PARAM_DEF(Welded, 2, L"Welded")                        \
  PARAM_DEF(Threaded, 3, L"Threaded")                    \
  PARAM_DEF(Grooved, 4, L"Grooved")                      \
  PARAM_DEF(Glued, 5, L"Glued")                          \
  PARAM_DEF(Soldered, 6, L"Soldered")                    

ODBM_ENUMERATION(PipeJointType, ODBM_PIPEJOINTTYPE)

#endif // _BM_AREASPACETYPE_H_
