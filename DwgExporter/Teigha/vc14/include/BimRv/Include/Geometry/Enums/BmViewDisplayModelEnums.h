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

#ifndef _BM_VIEWDISPLAYMODELENUMS_H_
#define _BM_VIEWDISPLAYMODELENUMS_H_

#define ODBM_EDGEDISPLAYSTYLES(PARAM_DEF, ...) \
  PARAM_DEF(None, 0)                      \
  PARAM_DEF(ShowEdges, 1)

ODBM_ENUMERATION(EdgesDisplayStyle, ODBM_EDGEDISPLAYSTYLES)
#undef ODBM_EDGEDISPLAYSTYLES


#define ODBM_VIEWDSIPLAYSTYLE(PARAM_DEF, ...)                \
  PARAM_DEF(Undefined, 0)        /* View does not use Render Style */          \
  PARAM_DEF(Wireframe, 1)                     /* always with edges */          \
  PARAM_DEF(HiddenLine, 2)                    /* always with edges */          \
  PARAM_DEF(Shaded, 3)                                                         \
  PARAM_DEF(ShadedWithEdges, 4)                                                \
  PARAM_DEF(Rendering, 5)                     /*looks like ShadedWithEdges*/   \
  PARAM_DEF(Realistic, 6)                                                      \
  PARAM_DEF(ConsistentColors, 7)              /* always with edges */          \
  PARAM_DEF(RealisticWithEdges, 8)                                             \
  PARAM_DEF(Raytrace, 9)                      /*could not be set*/

ODBM_ENUMERATION(ViewDisplayStyle, ODBM_VIEWDSIPLAYSTYLE)
#undef ODBM_VIEWDSIPLAYSTYLE

#endif // _BM_VIEWDISPLAYMODELENUMS_H_
