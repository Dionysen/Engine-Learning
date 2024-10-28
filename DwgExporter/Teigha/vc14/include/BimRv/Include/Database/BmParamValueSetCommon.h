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

#ifndef _BM_PARAM_VALUE_SET_COMMON_H_
#define _BM_PARAM_VALUE_SET_COMMON_H_
#include "Database/Enums/BmParamMethod.h"
// NB! Change following macroses to add/remove methods to ParamSet/ParamValueSet



#define ODBM_PARAM_GET_METHOD(MACRO, ...) \
  ODBM_EXPAND(MACRO(get, , const, __VA_ARGS__))

#define ODBM_PARAM_SET_METHOD(MACRO, ...) \
  ODBM_EXPAND(MACRO(set, const, , __VA_ARGS__))

#define ODBM_PARAM_OUT_METHODS(MACRO, ...) \
  ODBM_EXPAND(MACRO(pop, , , __VA_ARGS__))      \
  ODBM_PARAM_GET_METHOD(MACRO, __VA_ARGS__)

#define ODBM_PARAM_IN_METHODS(MACRO, ...)  \
  ODBM_PARAM_SET_METHOD(MACRO, __VA_ARGS__)\
  ODBM_EXPAND(MACRO(add, const, , __VA_ARGS__))

#define ODBM_PARAM_METHODS(MACRO, ...)      \
  ODBM_PARAM_IN_METHODS(MACRO, __VA_ARGS__) \
  ODBM_PARAM_OUT_METHODS(MACRO, __VA_ARGS__)

#define ODBM_BUILTIN_PARAM_METHODS(MACRO, ...)\
  ODBM_PARAM_GET_METHOD(MACRO, __VA_ARGS__)\
  ODBM_PARAM_SET_METHOD(MACRO, __VA_ARGS__)

#define ODBM_PARAM_METHOD_SIGNATURE(METHOD, VALUE_CONSTNESS, METHOD_CONSTNESS, \
                                    PARAM_TYPE, PREFIX, SUFFIX, ENDING_MACRO, \
                                    PARAM_ID_TYPE, PARAM_NAME)          \
  PREFIX OdResult SUFFIX METHOD##PARAM_NAME(                            \
      const PARAM_ID_TYPE& parameterId, VALUE_CONSTNESS PARAM_TYPE& value)              \
      METHOD_CONSTNESS ENDING_MACRO(METHOD)

#define ODBM_PARAM_METHODS_BY_OBJECT_ID_SIGN(TYPE, PREFIX, SUFFIX, ENDING_MACRO) \
  ODBM_PARAM_METHODS(ODBM_PARAM_METHOD_SIGNATURE, TYPE, PREFIX, SUFFIX, \
                     ENDING_MACRO, OdBmObjectId, Param)

#define ODBM_PARAM_VALUE_SET_API_DECLARATION(TYPE)          \
  ODBM_PARAM_METHODS(ODBM_PARAM_METHOD_SIGNATURE, TYPE, , , \
                     ODBM_SEMICOLON, OdBmObjectId, Param)


#define ODBM_PARAM_METHODS_DECLARATION_GENERIC(...)                 \
   ODBM_PARAM_OUT_METHODS(ODBM_PARAM_METHOD_SIGNATURE, __VA_ARGS__) \
   ODBM_PARAM_IN_METHODS(ODBM_PARAM_METHOD_SIGNATURE, __VA_ARGS__)


//-----------------------------------------------------------------------------
// Define *Param methods on ObjectId according *BuiltInParam methods list
//-----------------------------------------------------------------------------

#define ODBM_BUILTIN_PARAM_METHODS_DECL(TYPE, ENDING)           \
  ODBM_BUILTIN_PARAM_METHODS(ODBM_PARAM_METHOD_SIGNATURE, TYPE, \
                             ODBM_VIRTUAL, , ENDING,            \
                             OdBmObjectId, Param);


#endif //_BM_PARAM_VALUE_SET_COMMON_H_
