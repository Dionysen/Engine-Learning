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

#ifndef _BM_GCYLINDRICALHELIX_H_
#define _BM_GCYLINDRICALHELIX_H_
#include "Geometry/Entities/BmGCurve.h"



class OdBmGCylindricalHelix;
class OdBmGCylindricalHelixImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGCylindricalHelix object.
 */
typedef OdSmartPtr<OdBmGCylindricalHelix> OdBmGCylindricalHelixPtr;

/** \details
 A data type that represents an array of OdBmGCylindricalHelix objects.
 */
typedef OdArray<OdBmGCylindricalHelixPtr> OdBmGCylindricalHelixPtrArray;

//----------------------------------------------------------
//
// OdBmGCylindricalHelix
//
//----------------------------------------------------------

/** \details
    This class stores cylindrical helix data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGCylindricalHelix : public OdBmGCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGCylindricalHelix);
public:
  /** \details
    Returns the radius of the cylindrical helix as a double value.
  */
  double getRadius() const;
  /** \details
    Returns the pitch of the cylindrical helix as a double value.
  */
  double getPitchOver2PI() const;
  /** \details
    Returns the base point of the cylindrical helix as an object of the OdGePoint3d class.
  */
  OdGePoint3d getBasePoint() const;
  /** \details
    Returns the X-Vector of the cylindrical helix as an object of the OdGeVector3d class.
  */
  OdGeVector3d getXVector() const;
  /** \details
    Returns the Y-Vector of the cylindrical helix as an object of the OdGeVector3d class.
  */
  OdGeVector3d getYVector() const;
  /** \details
    Returns the Z-Vector of the cylindrical helix as an object of the OdGeVector3d class.
  */
  OdGeVector3d getZVector() const;
  //
  // Main functionality
  //


};


#endif // _BM_GCYLINDRICALHELIX_H_

