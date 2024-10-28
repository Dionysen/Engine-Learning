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

#ifndef _BM_REVOLUTIONELEM_H_
#define _BM_REVOLUTIONELEM_H_
#include "Database/Entities/BmGenSweep.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGLine.h"
#include "GeometryUtils/Entities/BmCurveLoop.h"
// END: Includes

class OdBmObjectId;

class OdBmRevolutionElem;
class OdBmRevolutionElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRevolutionElem object.
 */
typedef OdSmartPtr<OdBmRevolutionElem> OdBmRevolutionElemPtr;

/** \details
 A data type that represents an array of OdBmRevolutionElem objects.
 */
typedef OdArray<OdBmRevolutionElemPtr> OdBmRevolutionElemPtrArray;

//----------------------------------------------------------
//
// OdBmRevolutionElem
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmRevolutionElem : public OdBmGenSweep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRevolutionElem);
public:
  OdBmObjectId getSketchId() const;
  //
  // Main functionality
  //

  /** \details
    Gets the angle of the RevolutionElem.

    \param dAngle [out] Output angle of the RevolutionElem.
    \param index [in] Input parameter.
      index - 0 return start angle.
      index - 1 return end angle.
    \remarks
    Angle is expressed in radians.
  */
  OdResult getAngle(double& dAngle, const OdInt8 index) const;

  /** \details
    Sets the angle of the RevolutionElem.

    \param dAngle [in]  Angle of the RevolutionElem.
    \param index [in] Input parameter.
      index - 0 set start angle.
      index - 1 set end angle.
    \remarks
    Angle is expressed in radians.
  */
  OdResult setAngle(const double dAngle, const OdInt8 index);

  /** \details
    Add curves to build RevolutionElem geometry.

    \param arrCurveLoops [in]  Array of CurveLoops.
    \param idSketchPlane [in] ObjectId of the corresponding SketchPlane.
  */
  OdResult addCurveLoops(const OdArray<OdBmCurveLoopPtr>& arrCurveLoops, OdBmObjectId idSketchPlane);

  /** \details
    Sets the axis of RevolutionElem.

    \param pAxis [in]  Axis of RevolutionElem.
  */
  OdResult setAxisOfRotation(const OdBmGLinePtr& pAxis);

  /** \details
    Returns the axis of RevolutionElem.

    \param pGLine [out] Axis of RevolutionElem.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getAxis(OdBmGLinePtr& pGLine) const;
};


#endif // _BM_REVOLUTIONELEM_H_

