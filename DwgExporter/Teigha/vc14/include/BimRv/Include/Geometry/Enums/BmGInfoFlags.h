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

#ifndef _BM_GINFOFLAGS_H_
#define _BM_GINFOFLAGS_H_

#define ODBM_GINFOFLAGS(PARAM_DEF, ...)\
  PARAM_DEF(Unknown0,                  0)          /*Unknown0*/                   \
  PARAM_DEF(Unknown1,                  0x2)        /*Unknown1*/                   \
  PARAM_DEF(IsPickable,                0x4)        /*Pickable*/                   \
  PARAM_DEF(IsTransparent,             0x8)        /*Transparent*/                \
  PARAM_DEF(IsMasking,                 0x10)       /*Masking*/                    \
  /*5..8 VisibleType*/                                                            \
  PARAM_DEF(IsReference,               0x200)      /*Reference*/                  \
  PARAM_DEF(IsHandle,                  0x400)      /*Handle*/                     \
  PARAM_DEF(ContainsControls,          0x800)      /*ContainsControls*/           \
  PARAM_DEF(IsDetail,                  0x1000)     /*Detail*/                     \
  PARAM_DEF(NoPolygonsInPhotoRenderer, 0x2000)     /*NoPolygonsInPhotoRenderer*/  \
  PARAM_DEF(HasBBoxInControlId,        0x4000)     /*ContainsControls*/           \
  PARAM_DEF(IsModelGNode,              0x8000)     /*ModelGNode*/                 \
  PARAM_DEF(Unknown16,                 0x10000)    /*Unknown16*/                  \
  PARAM_DEF(Unknown17,                 0x20000)    /*Unknown17*/                  \
  PARAM_DEF(Unknown18,                 0x40000)    /*Unknown18*/                  \
  PARAM_DEF(IsActive,                  0x80000)    /*IsActive*/                   \
  PARAM_DEF(Unknown20,                 0x100000)   /*Unknown20*/                  \
  PARAM_DEF(IsDoubleSided,             0x200000)   /*It uses in GFace*/           \
  PARAM_DEF(IsScreenSpecific,          0x400000)   /*ScreenSpecific*/             \
  PARAM_DEF(IsDblClkControl,           0x800000)   /*DblClkControl*/              \
  PARAM_DEF(IsCurveBounded,            0x1000000)  /*CurveBounded*/               \
  PARAM_DEF(AreCurveEndsUnPickable,    0x2000000)  /*CurveEndsUnPickable*/        \
  PARAM_DEF(Unknown26,                 0x4000000)  /*26 Unknown TwoSidedGraphicsOnly*/ \
  PARAM_DEF(Unknown27,                 0x8000000)  /*27 Unknown - IsSnapping?*/   \
  PARAM_DEF(IsHiPriHandle,             0x10000000) /*HiPriHandle*/                \
  PARAM_DEF(DatumSurface,              0x20000000) /*DatumSurface*/               \
  PARAM_DEF(TransparentSurface,        0x40000000) /*TransparentSurface*/         \
  PARAM_DEF(PickableTransient,         0x80000000) /*PickableTransient*/          \
  PARAM_DEF(Default,                   0x80004)    /*IsActive|Pickable*/          \
  PARAM_DEF(DefaultModel,              0x88004)    /*Default|IsModelGNode*/       \

ODBM_ENUMERATION(GInfoFlags, ODBM_GINFOFLAGS)

#undef ODBM_GINFOFLAGS

#endif // _BM_GINFOFLAGS_H_
