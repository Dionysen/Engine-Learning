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

#ifndef _BM_GCURVE_H_
#define _BM_GCURVE_H_
#include "Geometry/Entities/BmGNode.h"



class OdBmGCurve;
class OdBmGCurveImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGCurve object.
 */
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;

/** \details
 A data type that represents an array of OdBmGCurve objects.
 */
typedef OdArray<OdBmGCurvePtr> OdBmGCurvePtrArray;

//----------------------------------------------------------
//
// OdBmGCurve
//
//----------------------------------------------------------

/** \details
    This class is the base class for all geometric representations of curves.
    (For example, OdBmGLine, OdBmGEllipse, etc.)

    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGCurve : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGCurve);
public:
  /** \details
    Returns the length and height of the curve as a static array of two doubles.

  \param idx [in] Input index of curve.
  */
  double getEndParamsItem(OdUInt32 idx) const;
  //
  // Main functionality
  //

public:
  /** \details
        Returns the GeCurve as an OdGeCurve3d object.

      \param pCurve [out] Output OdGeCurve3d object.
      \param tol [in] Input value of tolerance.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getGeCurve(OdGeCurve3d* &pCurve, const OdGeTol& tol) const;
  /** \details
        Returns the point on this curve corresponding to the specified parameter value as an OdGePoint3d object.

      \param retVal [out] Output point on curve.
      \param param [in] Input parameter to be evaluated.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult evalPoint(OdGePoint3d& retVal, double param) const;
  /** \details
        Returns curve length as a double value.
  */
  double length() const;

  /** \details
  Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult isDegenerate() const;

  /** \details
    Creates a new curve with the opposite orientation of the existing curve.
    
    \param pGCurve [out] Output curve with opposite direction.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createReversed(OdBmGCurvePtr& pGCurve) const;

  /** \details
    Returns point of existing curve.
      \param retVal [out] Output point on curve.
      \param index [in] Input parameter.
        index - 0 return start point.
        index - 1 return end point.
  */
  OdResult getEndPoint(OdGePoint3d& retVal, OdUInt32 index) const;

  /** \details
    Changes the bounds of this curve to the specified values.
      \param startParameter [in] New start interval parameter.
      \param endParameter [in] New end interval parameter.

      \returns Returns eOk if successful or an appropriate error code in the other case.

  */
  OdResult makeBound(const double startParameter, const double endParameter);

  /** \details
    Makes curve unbound.
  */
  void makeUnbound();

  /** \details
    Creates a new offset curve of the existing curve.
    \param dOffsetDist [in] Distance that controls the offset.
    \param refVec [in] Offset direction vector.
    \param pGCurve [out] New offset curve.

    \returns Returns eOk if successful or an appropriate error code in the other case.

  */
  OdResult createOffset(const double dOffsetDist, const OdGeVector3d& refVec, OdBmGCurvePtr& pGCurve) const;

  /** \details
    Returns approximate curve length.
    \param dApproximateLength [out] Approximate length.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getApproximateLength(double& dApproximateLength) const;
};


#endif // _BM_GCURVE_H_

