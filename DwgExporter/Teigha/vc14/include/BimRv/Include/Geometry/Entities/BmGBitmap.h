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

#ifndef _BM_GBITMAP_H_
#define _BM_GBITMAP_H_
#include "Geometry/Entities/BmGNode.h"



class OdBmGBitmap;
class OdBmGBitmapImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGBitmap object.
 */
typedef OdSmartPtr<OdBmGBitmap> OdBmGBitmapPtr;

/** \details
 A data type that represents an array of OdBmGBitmap objects.
 */
typedef OdArray<OdBmGBitmapPtr> OdBmGBitmapPtrArray;

//----------------------------------------------------------
//
// OdBmGBitmap
//
//----------------------------------------------------------

/** \details
    This class stores bitmap data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGBitmap : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGBitmap);
public:
  /** \details
    Returns the point as an object of the OdGePoint3d class.
  */
  OdGePoint3d getPoint() const;
  /** \details
    Returns the length and height of the item as a static array of OdInt32 values.

    \param idx [in] Input index of item.
  */
  OdInt32 getSizeItem(OdUInt32 idx) const;
  /** \details
    Returns type of bitmap as an OdInt32 value.
  */
  OdInt32 getBitmapType() const;
  /** \details
    Returns alignment of bitmap as an OdInt32 value.
  */
  OdInt32 getAlignment() const;
  //
  // Main functionality
  //


};


#endif // _BM_GBITMAP_H_

