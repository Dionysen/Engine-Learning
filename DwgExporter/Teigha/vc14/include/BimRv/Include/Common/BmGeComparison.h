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
#ifndef _BM_GE_COMPARISON_H_
#define _BM_GE_COMPARISON_H_

#include "BmBuildSettings.h"
#include "Ge/GePoint2d.h"

class OdGeVector3d;
class OdGeVector2d;

/** \details
  Compares two OdGePoint2d objects.
  
  \returns True if lhs is closer to (0, 0) than rhs. False - otherwise.
*/
bool TB_COMMON_EXPORT operator<(const OdGePoint2d& lhs, const OdGePoint2d& rhs);

/** \details
  Calculates the normal vector.
  
  \param vVec1 [in] The first vector.
  \param vVec2 [in] The second vecotr.
  \param vVec3 [in] The third vector.
  \param vRes [out] The normal vector.
  
  \returns eInvalidInput if the length of vVec2 and vVec3 is zero, also if the product of lengths of vVec2 and vVec3 equals their dot product, meaning vVec2 and vVec3 are collinear. eOk - otherwise.
*/
OdResult TB_COMMON_EXPORT findVecComponents2(const OdGeVector3d& vVec1,
                                             const OdGeVector3d& vVec2,
                                             const OdGeVector3d& vVec3,
                                             OdGeVector2d& vRes);

#endif // _BM_GE_COMPARISON_H_
