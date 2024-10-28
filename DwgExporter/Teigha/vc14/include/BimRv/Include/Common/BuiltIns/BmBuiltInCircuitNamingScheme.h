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
#ifndef __BM_BUILTINCIRCUITNAMINGSCHEME_H__
#define __BM_BUILTINCIRCUITNAMINGSCHEME_H__

#include "Common/BmExtendedEnum.h"

#define ODBM_BUILTINCIRCUITNAMINGSCHEMES(DEF, ...)                        \
/************************************************************************/\
/*DEF(NAME,               KEY,        LABEL,          CIRCUIT NAMING    */\
/************************************************************************/\
  DEF(PREFIXED,           -7000010,   L"Prefixed",    0)                  \
  DEF(STANDARD,           -7000011,   L"Standard",    1)                  \
  DEF(PANEL_NAME,         -7000012,   L"Panel Name",  2)                  \
  DEF(BY_PHASE,           -7000013,   L"By Phase",    3)                  \
  DEF(BY_PROJECT,         -7000014,   L"By Project",  4)                  \

ODBM_BUILTIN_ENUMERATION(TB_COMMON_EXPORT, BuiltInCircuitNamingScheme, ODBM_BUILTINCIRCUITNAMINGSCHEMES)

#endif //__BM_BUILTINCIRCUITNAMINGSCHEME_H__
