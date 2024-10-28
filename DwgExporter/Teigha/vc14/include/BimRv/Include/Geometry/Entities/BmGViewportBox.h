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

#ifndef _BM_GVIEWPORTBOX_H_
#define _BM_GVIEWPORTBOX_H_
#include "Geometry/Entities/BmGGroup.h"



class OdBmGViewportBox;
class OdBmGViewportBoxImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGViewportBox object.
 */
typedef OdSmartPtr<OdBmGViewportBox> OdBmGViewportBoxPtr;

/** \details
 A data type that represents an array of OdBmGViewportBox objects.
 */
typedef OdArray<OdBmGViewportBoxPtr> OdBmGViewportBoxPtrArray;

//----------------------------------------------------------
//
// OdBmGViewportBox
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a viewport box.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGViewportBox : public OdBmGGroup {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGViewportBox);
public:
  /** \details
    Returns the viewport offset as an object of the OdGePoint3d class.
  */
  OdGePoint3d getViewportOffset() const;
  /** \details
    Returns the viewport stretch as a double value.
  */
  double getViewportStretch() const;
  /** \details
    Returns true if stratch handles are shown.
  */
  bool getIsShowStretchHandles() const;
  /** \details
    Returns the viewport extra box as a pointer to the OdBmObject object.
  */
  OdBmObjectPtr getExtraBox() const;
  //
  // Main functionality
  //
};
#endif // _BM_GVIEWPORTBOX_H_

