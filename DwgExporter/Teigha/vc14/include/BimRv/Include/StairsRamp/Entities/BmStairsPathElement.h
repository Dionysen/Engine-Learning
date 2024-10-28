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

#ifndef _BM_STAIRSPATHELEMENT_H_
#define _BM_STAIRSPATHELEMENT_H_
#include "Database/BmElement.h"

class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmObjectId;

class OdBmStairsPathElement;
class OdBmStairsPathElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsPathElement object.
 */
typedef OdSmartPtr<OdBmStairsPathElement> OdBmStairsPathElementPtr;

/** \details
 A data type that represents an array of OdBmStairsPathElement objects.
 */
typedef OdArray<OdBmStairsPathElementPtr> OdBmStairsPathElementPtrArray;

//----------------------------------------------------------
//
// OdBmStairsPathElement
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsPathElement : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsPathElement);
public:
  OdString getUpText() const;
  OdString getDownText() const;
  OdGePoint3d getUpTextOffset() const;
  OdGePoint3d getDownTextOffset() const;
  double getStairsPathOffset() const;
  OdBmRoomBoundingItemPtr getStairsLinkElementId() const;
  OdBmObjectId getTypeId() const;
  OdInt32 getTextOrientation() const;
  bool getIsShowUpText() const;
  bool getIsShowDownText() const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSPATHELEMENT_H_

