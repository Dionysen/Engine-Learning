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

#ifndef _BM_CURVEELEM_H_
#define _BM_CURVEELEM_H_

#include "Database/BmElement.h"
#include "Ge/GeKnotVector.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGHermiteSpline.h"
// END: Includes

class OdBmCurveElemDriver;
typedef OdSmartPtr<OdBmCurveElemDriver> OdBmCurveElemDriverPtr;
class OdBmCurveElemData;
typedef OdSmartPtr<OdBmCurveElemData> OdBmCurveElemDataPtr;
class OdBmEllipseElemData;
typedef OdSmartPtr<OdBmEllipseElemData> OdBmEllipseElemDataPtr;
class OdBmObjectId;

class OdBmCurveElem;
class OdBmCurveElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCurveElem object.
 */
typedef OdSmartPtr<OdBmCurveElem> OdBmCurveElemPtr;

/** \details
 A data type that represents an array of OdBmCurveElem objects.
 */
typedef OdArray<OdBmCurveElemPtr> OdBmCurveElemPtrArray;

//----------------------------------------------------------
//
// OdBmCurveElem
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCurveElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCurveElem);
public:
  OdBmCurveElemDriverPtr getCurveDriver() const;
  OdBmCurveElemDataPtr getCurveElemData() const;
  OdBmObjectPtr getArcCntr() const;
  OdBmEllipseElemDataPtr getEllipseElemData() const;
  OdBmObjectId getCategoryId() const;
  OdInt32 getVisibility() const;
  OdBmObjectId getSketchPlaneId() const;
  OdBmObjectId getAreaSchemeId() const;
  OdBmObjectId getZoneSchemeId() const;
  OdInt32 getReferenceType() const;
  bool getIsAreaSeparation() const;
  bool getIsMEPSpaceSeparation() const;
  bool getIsAreaMeasurementScheme() const;
  bool getIsDetail() const;
  bool getShowCenterMark() const;
  bool getUseOffsetPos() const;
  //
  // Main functionality
  //

  /** \details
    Sets a sketch plane to the curve element.

    \param sketchPlaneId [in] Input sketch plane ID.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setSketchPlane(OdBmObjectId sketchPlaneId);

  /** \details
    Creates a straight line.

    \param start [in] Input start point.
    \param end [in] Input end point.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createLine(OdGePoint3d start, OdGePoint3d end);

  /** \details
    Creates an arc.

    \param center [in] Input arc center.
    \param xDirection [in] Input arc x-direction.
    \param yDirection [in] Input arc y-direction.
    \param radius [in] Input radius value.
    \param startAng [in] Input start angle.
    \param endAngle [in] Input end angle.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createArc(OdGePoint3d center, OdGeVector3d xDirection, OdGeVector3d yDirection, double radius, double startAng, double endAngle);
  /** \details
    Creates an arc.

    \param startPoint [in] Input start point.
    \param middlePoint [in] Input middle point.
    \param endPoint [in] Input end point.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createArc(OdGePoint3d startPoint, OdGePoint3d middlePoint, OdGePoint3d endPoint);

  /** \details
    Creates an ellipse.

    \param center [in] Input ellipse center.
    \param xDirection [in] Input ellipse x-direction.
    \param yDirection [in] Input ellipse y-direction.
    \param radiusX [in] Input value of x-direction radius.
    \param radiusY [in] Input value of y-direction radius.
    \param startAng [in] Input start angle.
    \param endAngle [in] Input end angle.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createEllipse(OdGePoint3d center, OdGeVector3d xDirection, OdGeVector3d yDirection, double radiusX, double radiusY, double startAng, double endAngle);

  /** \details
    Creates a hermite spline.

    \param controlPoints [in] Input array of HermiteSpline control points.
    \param periodic [in] Input 'periodic' status.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createHermiteSpline(OdGePoint3dArray controlPoints, bool periodic);
  /** \details
    Creates a hermite spline.

    \param controlPoints [in] Input array of HermiteSpline control points.
    \param startTangent [in] Input start tangent vector.
    \param endTangent [in] Input end tangent vector.
    \param periodic [in] Input 'periodic' status.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createHermiteSpline(OdGePoint3dArray controlPoints, OdGeVector3d startTangent, OdGeVector3d endTangent, bool periodic);

  /** \details
    Creates a NURB spline.

    \param degree [in] Input spline degree value.
    \param knots [in] Input array of knots.
    \param controlPoints [in] Input array of spline control points.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createNurbSpline(OdUInt32 degree, OdGeKnotVector knots, OdGePoint3dArray controlPoints);
  /** \details
    Creates a NURB spline.

    \param degree [in] Input spline degree value.
    \param knots [in] Input array of knots.
    \param controlPoints [in] Input array of spline control points.
    \param weights [in] Input array of point weights.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createNurbSpline(OdUInt32 degree, OdGeKnotVector knots, OdGePoint3dArray controlPoints, OdDoubleArray weights);

    /** \details
    Creates a NURB spline.

    \param pHermite [in] Input HermiteSpline.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult createNurbSpline(const OdBmGHermiteSplinePtr& pHermite);

  /** \details
    Returns geometry curve of the curve element.

    \param pGCurve [in] Input curve.
  
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getGeomCurve(OdBmGCurvePtr& pGCurve) const;
};
#endif // _BM_CURVEELEM_H_

