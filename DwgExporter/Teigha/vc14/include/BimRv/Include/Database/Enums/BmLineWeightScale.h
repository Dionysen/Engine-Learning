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

#ifndef _BM_LINEWEIGHTSCALE_H_
#define _BM_LINEWEIGHTSCALE_H_

#define LINEWEIGHTSCALES(PARAM_DEF, ...)  \
  PARAM_DEF(LW_SCALE_NONE, -1)       \
  PARAM_DEF(LW_SCALE_1, 1)           \
  PARAM_DEF(LW_SCALE_2, 2)           \
  PARAM_DEF(LW_SCALE_4, 4)           \
  PARAM_DEF(LW_SCALE_5, 5)           \
  PARAM_DEF(LW_SCALE_8, 8)           \
  PARAM_DEF(LW_SCALE_10, 10)         \
  PARAM_DEF(LW_SCALE_12, 12)         \
  PARAM_DEF(LW_SCALE_16, 16)         \
  PARAM_DEF(LW_SCALE_20, 20)         \
  PARAM_DEF(LW_SCALE_24, 24)         \
  PARAM_DEF(LW_SCALE_25, 25)         \
  PARAM_DEF(LW_SCALE_32, 32)         \
  PARAM_DEF(LW_SCALE_48, 48)         \
  PARAM_DEF(LW_SCALE_50, 50)         \
  PARAM_DEF(LW_SCALE_64, 64)         \
  PARAM_DEF(LW_SCALE_96, 96)         \
  PARAM_DEF(LW_SCALE_100, 100)       \
  PARAM_DEF(LW_SCALE_120, 120)       \
  PARAM_DEF(LW_SCALE_128, 128)       \
  PARAM_DEF(LW_SCALE_192, 192)       \
  PARAM_DEF(LW_SCALE_200, 200)       \
  PARAM_DEF(LW_SCALE_240, 240)       \
  PARAM_DEF(LW_SCALE_256, 256)       \
  PARAM_DEF(LW_SCALE_360, 360)       \
  PARAM_DEF(LW_SCALE_384, 384)       \
  PARAM_DEF(LW_SCALE_480, 480)       \
  PARAM_DEF(LW_SCALE_500, 500)       \
  PARAM_DEF(LW_SCALE_600, 600)       \
  PARAM_DEF(LW_SCALE_720, 720)       \
  PARAM_DEF(LW_SCALE_768, 768)       \
  PARAM_DEF(LW_SCALE_960, 960)       \
  PARAM_DEF(LW_SCALE_1000, 1000)     \
  PARAM_DEF(LW_SCALE_1200, 1200)     \
  PARAM_DEF(LW_SCALE_1920, 1920)     \
  PARAM_DEF(LW_SCALE_2000, 2000)     \
  PARAM_DEF(LW_SCALE_2400, 2400)     \
  PARAM_DEF(LW_SCALE_2600, 2600)     \
  PARAM_DEF(LW_SCALE_4800, 4800)     \
  PARAM_DEF(LW_SCALE_5000, 5000)

ODBM_ENUMERATION(LineWeightScale, LINEWEIGHTSCALES)

#undef LINEWEIGHTSCALES

#endif // _BM_LINEWEIGHTSCALE_H_
