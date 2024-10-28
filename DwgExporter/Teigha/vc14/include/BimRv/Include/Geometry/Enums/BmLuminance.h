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

#ifndef _BM_LUMINANCE_H_
#define _BM_LUMINANCE_H_

#define ODBM_LUMINANCE_SCHEMAS(PARAM_DEF, ...)       \
  PARAM_DEF(DimGlow, 1)                              \
  PARAM_DEF(LEDPanel, 2)                             \
  PARAM_DEF(LEDScreen, 3)                            \
  PARAM_DEF(CellPhoneScreen, 4)                      \
  PARAM_DEF(CRTTelevision, 5)                        \
  PARAM_DEF(LampShadeExterior, 6)                    \
  PARAM_DEF(LampShadeInterior, 7)                    \
  PARAM_DEF(DeskLampLens, 8)                         \
  PARAM_DEF(HalogenLampLens, 9)                      \
  PARAM_DEF(FrostedBulb, 10)                         \


ODBM_ENUMERATION(Luminance, ODBM_LUMINANCE_SCHEMAS)
#undef ODBM_LUMINANCE_SCHEMAS

#endif // _BM_LUMINANCE_H_
