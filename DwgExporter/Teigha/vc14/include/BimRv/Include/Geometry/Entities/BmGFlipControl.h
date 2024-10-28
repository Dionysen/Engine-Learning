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

#ifndef _BM_GFLIPCONTROL_H_
#define _BM_GFLIPCONTROL_H_
#include "Geometry/Entities/BmGControl.h"



class OdBmGFlipControl;
class OdBmGFlipControlImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGFlipControl object.
 */
typedef OdSmartPtr<OdBmGFlipControl> OdBmGFlipControlPtr;

/** \details
 A data type that represents an array of OdBmGFlipControl objects.
 */
typedef OdArray<OdBmGFlipControlPtr> OdBmGFlipControlPtrArray;

//----------------------------------------------------------
//
// OdBmGFlipControl
//
//----------------------------------------------------------

/** \details
    This class stores flip control data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGFlipControl : public OdBmGControl {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGFlipControl);
public:
  /** \details
    Returns the origin point as an object of the OdGePoint3d class.
  */
  OdGePoint3d getOrigin() const;
  /** \details
    Returns the base point as an object of the OdGePoint3d class.
  */
  OdGePoint3d getBase() const;
  /** \details
    Returns the other base point as an object of the OdGePoint3d class.
  */
  OdGePoint3d getOtherBase() const;
  /** \details
    Returns the flip length as a double value.
  */
  double getLength() const;
  /** \details
    Returns the flip offset from the origin point as a double value.
  */
  double getOffsetFromOrigin() const;
  /** \details
    Returns the arrow style as an OdInt32 value.
  */
  OdInt32 getArrowStyle() const;
  /** \details
    Returns an overriding color as an OdUInt32 value.
  */
  OdUInt32 getColorOverride() const;
  /** \details
    Returns true if this object has an overriding color.
  */
  bool getHasColorOverride() const;
  double getArrowWidth() const;
  //
  // Main functionality
  //


};


#endif // _BM_GFLIPCONTROL_H_

