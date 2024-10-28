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

#ifndef _BM_CURVEELEMNAMETYPE_H_
#define _BM_CURVEELEMNAMETYPE_H_

#define ODBM_CURVEELEMNAMETYPE(PARAM_DEF, ...)                  \
  PARAM_DEF(None,             -1,   L"None")                    \
  PARAM_DEF(ModelLines,        0,   L"Model Lines")             \
  PARAM_DEF(DetailsLines,      1,   L"Detail Lines")           \
  PARAM_DEF(RefLines,          2,   L"Reference Lines")         \
  PARAM_DEF(SymbolicLines,     3,   L"Symbolic Lines")          \
  PARAM_DEF(Line,              4,   L"Line")                    \
  PARAM_DEF(SpanDirectionEdge, 5,   L"Span Direction Edges")    
ODBM_ENUMERATION(CurveElemNameType, ODBM_CURVEELEMNAMETYPE)

#endif // _BM_CURVEELEMNAMETYPE_H_
