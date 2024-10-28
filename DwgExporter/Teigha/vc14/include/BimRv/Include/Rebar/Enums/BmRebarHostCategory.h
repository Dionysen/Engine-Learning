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

#ifndef _BM_REBARHOSTCATEGORY_H_
#define _BM_REBARHOSTCATEGORY_H_

#define ODBM_REBARHOSTCATEGORY(PARAM_DEF, ...) \
  PARAM_DEF(Other, 0)                  /* Other rebar host category                          */        \
  PARAM_DEF(Part, 1)                   /* Part rebar host category                           */        \
  PARAM_DEF(StructuralColumn, 2)       /* Structural column rebar host category              */        \
  PARAM_DEF(StructuralFraming, 3)      /* Structural framing host category                   */        \
  PARAM_DEF(Wall, 4)                   /* Wall rebar host category                           */        \
  PARAM_DEF(Floor, 5)                  /* Floor rebar host category                          */        \
  PARAM_DEF(StructuralFoundation, 6)   /* Structural foundation rebar host category          */        \
  PARAM_DEF(Stairs, 7)                 /* Stair rebar host category                          */        \
  PARAM_DEF(SlabEdge, 8)               /* Slab edge rebar host category                      */        \

ODBM_ENUMERATION(RebarHostCategory, ODBM_REBARHOSTCATEGORY)

#undef ODBM_REBARHOSTCATEGORY

#endif //_BM_REBARHOSTCATEGORY_H_
