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

#ifndef _BM_BOOLEANOPERATIONSUTILS_H_
#define _BM_BOOLEANOPERATIONSUTILS_H_

#include "Geometry/Entities/BmGeometry.h"
#include "BrepBuilder/BrepBuilder.h"

/** \details
    This class represents utilities for boolean operation (union/intersection/subtraction) of two bodies.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmBooleanOperationsUtils {
public:
  /** \details
    Executes boolean operation of two bodies.

    \param brepBuilder [in] Input B-Rep builder.
    \param operationType [in] Input operation type.
    \param pGeometry1 [in] Input geometry of first body.
    \param pGeometry2 [in] Input geometry of second body.
    \param pResult [out] Output geometry of resulted body.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  static OdResult executeBooleanOperation(OdBrepBuilder& brepBuilder, OdGe::BooleanType operationType,
    const OdBmGeometryPtr& pGeometry1, const OdBmGeometryPtr& pGeometry2, OdBmGeometryPtr& pResult);
};

#endif // _BM_BOOLEANOPERATIONSUTILS_H_

