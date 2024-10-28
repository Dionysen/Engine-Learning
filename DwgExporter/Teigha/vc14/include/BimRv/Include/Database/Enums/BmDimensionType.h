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

#ifndef _BMDIMENSIONTYPE_H_
#define _BMDIMENSIONTYPE_H_
#define DIMENSIONTYPE(PARAM_DEF, ...)         \
PARAM_DEF(Linear, 0)         /* Linear dimension      */            \
PARAM_DEF(Angular, 1)        /* Angular dimension     */            \
PARAM_DEF(Radial, 2)         /* Radial dimension      */            \
PARAM_DEF(ArcLength, 3)      /* ArcLength dimension   */            \
PARAM_DEF(SpotElevation, 4)  /* SpotElevation         */            \
PARAM_DEF(SpotCoordinate, 5) /* SpotCoordinate        */            \
PARAM_DEF(LinearFixed, 7)    /* LinearFixed dimension. It is linear dimension which parallel to direction. */            \
PARAM_DEF(SpotSlope, 8)      /* SpotSlope             */            \
PARAM_DEF(Diameter, 9)       /* Diameter dimension    */

ODBM_ENUMERATION(DimensionType, DIMENSIONTYPE)
#endif
