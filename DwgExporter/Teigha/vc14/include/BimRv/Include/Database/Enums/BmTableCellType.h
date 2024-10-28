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

#ifndef _BM_TABLECELLTYPE_H_
#define _BM_TABLECELLTYPE_H_

#define ODBM_TABLECELLTYPE(PARAM_DEF, ...)                                     \
  PARAM_DEF(Text, 0)      /* Simple text */                                    \
  PARAM_DEF(Graphic, 1)   /* Embedded graphic */                               \
  PARAM_DEF(Parameter, 2) /* Data bound parameter */                           \
  PARAM_DEF(                                                                   \
      Inherited,                                                               \
      3) /* The type is inherited from the column or section if appropriate */ \
  PARAM_DEF(CombinedParameter, 4) /* The type is combined parameter */         \
  PARAM_DEF(CalculatedValue, 5)   /* The type is a calculated value */         \
  PARAM_DEF(ParameterText,                                                     \
            6) /* Read only parameter which only show formatted string */\

ODBM_ENUMERATION(TableCellType, ODBM_TABLECELLTYPE)

#undef ODBM_TABLECELLTYPE

#endif //_BM_TABLECELLTYPE_H_
