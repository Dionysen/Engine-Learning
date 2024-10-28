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

#ifndef _BM_CURVELOOP_H_
#define _BM_CURVELOOP_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "GeometryUtils/Entities/BmPlane.h"
#include "Geometry/Entities/BmGCurve.h"
#include "Ge/GeCurve3dPtrArray.h"
typedef OdBmIteratorPtr<OdBmGCurvePtr> OdBmCurveLoopIteratorPtr;
// END: Includes

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;

class OdBmCurveLoop;
class OdBmCurveLoopImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCurveLoop object.
 */
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;

/** \details
 A data type that represents an array of OdBmCurveLoop objects.
 */
typedef OdArray<OdBmCurveLoopPtr> OdBmCurveLoopPtrArray;

//----------------------------------------------------------
//
// OdBmCurveLoop
//
//----------------------------------------------------------

/** \details
    This class represents a chain of curves.
    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmCurveLoop : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCurveLoop);
public:
  bool getIsOpen() const;
  /** \details
    Returns curves of the chain as an array of objects of the OdBmGCurve class.
    
    \param OdArray<OdBmGCurvePtr> [out] Output array of curves.
  */
  void getCurves(OdArray<OdBmGCurvePtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Returns the sequence of start and end vertices of each curve in a loop.

    \param vertices [out] Output array of vertices.
  */
  virtual void getCurveLoopVtx(OdGePoint3dArray& vertices);


  /** \details
    Calculates the sum of lengths of all curves in the loop.
    
    \returns The resulting sum of lengths.
  */
  double getExactLength() const;

  /** \details
    Append the curve to CurveLoop.
      \param pGCurve [in]  Input curve.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult append(const OdBmGCurvePtr& pGCurve);

  /** \details
    Sets array of curves to CurveLoop.
      \param aCurves [in]  Array of curves.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult set(const OdArray<OdBmGCurvePtr>& aCurves);

  /** \details
    Gets array of Ge-curves
      \param arrGeCurves [in]  Array of Ge-curves.

      \returns Returns eOk and array of Ge-curves if successful or an appropriate error code in the other case.
  */
  OdResult getArrayOfGeCurves(OdGeCurve3dPtrArray& arrGeCurves) const;

  /** \details
    Reverses the orientation of the CurveLoop.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult flip();

  /** \details
    Returns number of curves in CurveLoop.
  */
  OdUInt32 numCurves() const;

  /** \details
    Gets the plane of the CurveLoop, if it is planar.
      \param pPlane [in]  Input OdBmPlane.

      \returns Returns eOk and OdBmPlane if successful or an appropriate error code in the other case.
  */
  OdResult getPlane(OdBmPlanePtr& pPlane) const;

  /** \details
    Identifies if the CurveLoop is planar.
  */
  bool isPlanar() const;

  /** \details
    Identifies if the CurveLoop is rectangular.
  */
  bool isRectangular() const;

  /** \details
    Determines if this CurveLoop is oriented counter-clockwise or clockwise.
      \param normal [in]  Input normal vector.
      \param bIsCounterclockwise [in]  Input param.

      \returns Returns eOk and flag of orientation if successful or an appropriate error code in the other case.
  */
  OdResult isCCW(const OdGeVector3d& normal, bool& bIsCounterclockwise) const;

  /** \details
    Transforms this curve loop.
      \param xfm [in]  Input matrix of transformation.

      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult transformBy(const OdGeMatrix3d& xfm);

  /** \details
    Returns a iterator of curves in CurveLoop.
  */
  OdBmCurveLoopIteratorPtr GetCurveLoopIterator() const;
};
#endif // _BM_CURVELOOP_H_

