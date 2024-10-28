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

#ifndef _BM_FORMATOPTIONS_ENUM_H_
#define _BM_FORMATOPTIONS_ENUM_H_

#define ODBM_FORMATOPTIONS(PARAM_DEF, ...)                           \
  PARAM_DEF(SuppressTrailingZeros,                       0x00000001) \
  PARAM_DEF(SuppressLeadingZeros,                        0x00000002) \
  PARAM_DEF(CanUsePlusPrefix,                            0x00000004) \
  PARAM_DEF(UseDigitGrouping,                            0x00000008) \
  PARAM_DEF(SuppressSpaces,                              0x00000010) \

ODBM_ENUMERATION(FormatOptions, ODBM_FORMATOPTIONS)

#undef ODBM_FORMATOPTIONS

#endif // _BM_FORMATOPTIONS_ENUM_H_
