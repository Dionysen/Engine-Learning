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

#ifndef _BM_ES_FIELD_TYPE_H_
#define _BM_ES_FIELD_TYPE_H_

#define ODBM_ESFIELDTYPE(PARAM_DEF, ...)                                       \
  PARAM_DEF(Boolean, 1, bool, bool)                                            \
  PARAM_DEF(Byte, 2, OdInt8, char)                                             \
  PARAM_DEF(Int16, 3, OdInt16, short)                                          \
  PARAM_DEF(Int32, 4, OdInt32, int)                                            \
  PARAM_DEF(Float, 5, float, float)                                            \
  PARAM_DEF(Double, 6, double, double)                                         \
  PARAM_DEF(ElementId, 7, OdBmObjectId, ElementId)                             \
  PARAM_DEF(GUID, 8, OdGUID, GUIDvalue)                                        \
  PARAM_DEF(String, 9, OdString, TCHAR)                                        \
  PARAM_DEF(XYZ, 10, OdGePoint3d, XYZ)                                         \
  PARAM_DEF(UV, 11, OdGePoint2d, UV)                                           \
  PARAM_DEF(Entity, 12, OdBmObjectPtr, /*pass*/)

ODBM_EXTENDED_ENUMERATION(ESFieldType, ODBM_ESFIELDTYPE)

#endif // _BM_ES_FIELD_TYPE_H_
