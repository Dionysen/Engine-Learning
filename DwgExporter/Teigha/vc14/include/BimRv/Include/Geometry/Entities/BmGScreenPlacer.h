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

#ifndef _BM_GSCREENPLACER_H_
#define _BM_GSCREENPLACER_H_
#include "Geometry/Entities/BmGNode.h"



class OdBmGScreenPlacer;
class OdBmGScreenPlacerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGScreenPlacer object.
 */
typedef OdSmartPtr<OdBmGScreenPlacer> OdBmGScreenPlacerPtr;

/** \details
 A data type that represents an array of OdBmGScreenPlacer objects.
 */
typedef OdArray<OdBmGScreenPlacerPtr> OdBmGScreenPlacerPtrArray;

//----------------------------------------------------------
//
// OdBmGScreenPlacer
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a screen placer.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGScreenPlacer : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGScreenPlacer);
public:
  /** \details
    Returns the linked GNode as a pointer to an OdBmGNode object.
  */
  OdBmGNodePtr getGNode() const;
  /** \details
    Returns the position of the screen placer as an object of the OdGePoint3d class.
  */
  OdGePoint3d getPosition() const;
  /** \details
    Returns the size of the model for adaptive scaling as a double value.
  */
  double getModelSizeForAdaptiveScaling() const;
  /** \details
    Returns the position control as an OdInt32 value.
  */
  OdInt32 getPositionControl() const;
  /** \details
    Returns the orientation control as an OdInt32 value.
  */
  OdInt32 getOrientationControl() const;
  /** \details
    Returns the scale control as an OdInt32 value.
  */
  OdInt32 getScaleControl() const;
  //
  // Main functionality
  //
};
#endif // _BM_GSCREENPLACER_H_

