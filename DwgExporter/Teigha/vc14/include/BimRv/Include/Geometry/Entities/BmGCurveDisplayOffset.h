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

#ifndef _BM_GCURVEDISPLAYOFFSET_H_
#define _BM_GCURVEDISPLAYOFFSET_H_
#include "Geometry/Entities/BmGNode.h"

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;
class OdBmLinearInterpolationOfNormals;
typedef OdSmartPtr<OdBmLinearInterpolationOfNormals> OdBmLinearInterpolationOfNormalsPtr;

class OdBmGCurveDisplayOffset;
class OdBmGCurveDisplayOffsetImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGCurveDisplayOffset object.
 */
typedef OdSmartPtr<OdBmGCurveDisplayOffset> OdBmGCurveDisplayOffsetPtr;

/** \details
 A data type that represents an array of OdBmGCurveDisplayOffset objects.
 */
typedef OdArray<OdBmGCurveDisplayOffsetPtr> OdBmGCurveDisplayOffsetPtrArray;

//----------------------------------------------------------
//
// OdBmGCurveDisplayOffset
//
//----------------------------------------------------------

/** \details
    This class controls the displaying of curve offsets.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGCurveDisplayOffset : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGCurveDisplayOffset);
public:
  /** \details
    Returns the curve associated with this object as a pointer to an OdBmGCurve object.
  */
  OdBmGCurvePtr getGCurve() const;
  /** \details
    Returns linear interpolation of curve normals as a pointer to an OdBmLinearInterpolationOfNormals object.
  */
  OdBmLinearInterpolationOfNormalsPtr getCurveNormals() const;
  //
  // Main functionality
  //


};


#endif // _BM_GCURVEDISPLAYOFFSET_H_

