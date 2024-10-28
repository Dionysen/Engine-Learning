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

#ifndef _BM_GLINE_H_
#define _BM_GLINE_H_
#include "Geometry/Entities/BmGCurve.h"
// BEGIN: Includes
class OdGeLineSeg3d;
// END: Includes



class OdBmGLine;
class OdBmGLineImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGLine object.
 */
typedef OdSmartPtr<OdBmGLine> OdBmGLinePtr;

/** \details
 A data type that represents an array of OdBmGLine objects.
 */
typedef OdArray<OdBmGLinePtr> OdBmGLinePtrArray;

//----------------------------------------------------------
//
// OdBmGLine
//
//----------------------------------------------------------

/** \details
    This class stores the geometry data of a straight line.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGLine : public OdBmGCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGLine);
public:
  /** \details
    Returns the origin point as an object of the OdGePoint3d class.
  */
  OdGePoint3d getOriginPoint() const;
  /** \details
    Returns the line direction as an object of the OdGeVector3d class.
  */
  OdGeVector3d getDirectionVector() const;
  //
  // Main functionality
  //

// Assignment operator.

  /** \details
    Sets the line acconding to the params.
    
    \param point [in] Origin point.
    \param vec [in] Direction vector.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(
    const OdGePoint3d& point,
    const OdGeVector3d& vec);
  
  /** \details
    Sets the line acconding to the params.
    
    \param point1 [in] Start point.
    \param point2 [in] End point.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(
    const OdGePoint3d& point1,
    const OdGePoint3d& point2);
  
  /** \details
    Fills properties of OdBmGLine with OdGeLineSeg3d's values.
    
    \param pGeLine [in] OdGeLineSeg3d object.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult set(const OdGeLineSeg3d& pGeLine);
};

#endif // _BM_GLINE_H_

