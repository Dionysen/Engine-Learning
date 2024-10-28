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

#ifndef _BM_ASSETTYPES_H_
#define _BM_ASSETTYPES_H_

#define ODBM_ASSET_TYPES(PARAM_DEF, ...)   \
  PARAM_DEF(Undefined, -1)                \
  PARAM_DEF(Invalid, 0)                   \
  PARAM_DEF(Generic, 1)                   \
  PARAM_DEF(Camera, 2)                    \
  PARAM_DEF(Lighting, 3)                  \
  PARAM_DEF(Appearance, 4)                \
  PARAM_DEF(ContentRPC, 5)                \
  PARAM_DEF(Decal, 6)                     \
  PARAM_DEF(Setting, 7)                   \
  PARAM_DEF(Enviroment, 8)                \
  PARAM_DEF(Explosure, 9)                 \
  PARAM_DEF(PreviewScene, 10)             \
  PARAM_DEF(DaylightPortal, 11)           \
  PARAM_DEF(Texture, 12)      \
  PARAM_DEF(Custom, 13)                   \
  PARAM_DEF(Unknown14, 14)                \
  PARAM_DEF(Unknown15, 15)

ODBM_ENUMERATION(AssetTypes, ODBM_ASSET_TYPES)
#undef ODBM_ASSET_TYPES

#endif // _BM_ASSETTYPES_H_
