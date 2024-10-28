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

#ifndef _BM_GVIEWPORTLABEL_H_
#define _BM_GVIEWPORTLABEL_H_
#include "Geometry/Entities/BmGGroup.h"



class OdBmGViewportLabel;
class OdBmGViewportLabelImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGViewportLabel object.
 */
typedef OdSmartPtr<OdBmGViewportLabel> OdBmGViewportLabelPtr;

/** \details
 A data type that represents an array of OdBmGViewportLabel objects.
 */
typedef OdArray<OdBmGViewportLabelPtr> OdBmGViewportLabelPtrArray;

//----------------------------------------------------------
//
// OdBmGViewportLabel
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a viewport label.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGViewportLabel : public OdBmGGroup {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGViewportLabel);
public:
  /** \details
    Returns viewport offset as an object of the OdGePoint3d class.
  */
  OdGePoint3d getViewportOffset() const;
  /** \details
    Returns the viewport stretch as a double value.
  */
  double getViewportStretch() const;
  /** \details
    Returns the length of the viewport label as a double value.
  */
  double getLabelLength() const;
  //
  // Main functionality
  //
};
#endif // _BM_GVIEWPORTLABEL_H_

