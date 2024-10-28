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

#ifndef _BM_PREDEFINEDAPPEARANCEASSET_H_
#define _BM_PREDEFINEDAPPEARANCEASSET_H_

#define ODBM_APPEARANCE_ASSETS(PARAM_DEF, ...) \
  PARAM_DEF(DecalAppearance, -13, "DecalAppearance")  \
  PARAM_DEF(UnifiedBitmap, -12)                \
  PARAM_DEF(Checker, -11)                      \
  PARAM_DEF(Gradient, -10)                     \
  PARAM_DEF(Marble, -9)                        \
  PARAM_DEF(Noise, -8)                         \
  PARAM_DEF(Speckle, -7)                       \
  PARAM_DEF(Tiles, -6)                         \
  PARAM_DEF(Waves, -5)                         \
  PARAM_DEF(Wood, -4)                          \
  PARAM_DEF(ByName, -3)                        \
  PARAM_DEF(ByCategory, -2)                    \
  PARAM_DEF(Undefined, -1)                     \
  PARAM_DEF(Ceramic, 0)                        \
  PARAM_DEF(Concrete, 1)                       \
  PARAM_DEF(Generic, 2)                        \
  PARAM_DEF(Glazing, 3)                        \
  PARAM_DEF(Hardwood, 4)                       \
  PARAM_DEF(MasonryCMU, 5)                     \
  PARAM_DEF(Metal, 6)                          \
  PARAM_DEF(MetallicPaint, 7)                  \
  PARAM_DEF(Mirror, 8)                         \
  PARAM_DEF(PlasticVinyl, 9)                   \
  PARAM_DEF(SolidGlass, 10)                    \
  PARAM_DEF(Stone, 11)                         \
  PARAM_DEF(WallPaint, 12)                     \
  PARAM_DEF(Water, 13)                         \
  PARAM_DEF(Generic_026, 14)                   \

ODBM_EXTENDED_ENUMERATION(PredefinedAppearanceAsset, ODBM_APPEARANCE_ASSETS)

#undef ODBM_APPEARANCE_ASSETS

#endif // _BM_PREDEFINEDAPPEARANCEASSET_H_
