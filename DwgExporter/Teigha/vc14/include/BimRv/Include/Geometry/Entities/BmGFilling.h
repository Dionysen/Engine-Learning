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

#ifndef _BM_GFILLING_H_
#define _BM_GFILLING_H_
#include "Geometry/Entities/BmGNode.h"

class OdBmFillPatternPlacer;
typedef OdSmartPtr<OdBmFillPatternPlacer> OdBmFillPatternPlacerPtr;
class OdBmFillPatternData;
typedef OdSmartPtr<OdBmFillPatternData> OdBmFillPatternDataPtr;
class OdBmObjectId;
class OdBmCmColor;

class OdBmGFilling;
class OdBmGFillingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGFilling object.
 */
typedef OdSmartPtr<OdBmGFilling> OdBmGFillingPtr;

/** \details
 A data type that represents an array of OdBmGFilling objects.
 */
typedef OdArray<OdBmGFillingPtr> OdBmGFillingPtrArray;

//----------------------------------------------------------
//
// OdBmGFilling
//
//----------------------------------------------------------

/** \details
    This class stores the data of filled geometry objects.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGFilling : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGFilling);
public:
  /** \details
    Returns the face that is filled by this object.
  */
  OdBmGNode* getFace() const;
  /** \details
    Returns the filling pattern placer as a pointer to an OdBmFillPatternPlacer object.
  */
  OdBmFillPatternPlacerPtr getPlacer() const;
  /** \details
    Returns the filling pattern data as a pointer to an OdBmFillPatternData object.
  */
  OdBmFillPatternDataPtr getData() const;
  /** \details
    Returns the filling pattern ID as an object of an OdBmObjectId class.
  */
  OdBmObjectId getPatternId() const;
  /** \details
    Returns the filling color as an object of the OdBmCmColor class.
  */
  OdBmCmColor getFillColor() const;
  /** \details
    Returns the flags of the filling object as an OdInt32 value.
  */
  OdInt32 getFlags() const;
  //
  // Main functionality
  //


};


#endif // _BM_GFILLING_H_

