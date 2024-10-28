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

#ifndef _BM_LOCATIONLINEOFFSETDATA_H_
#define _BM_LOCATIONLINEOFFSETDATA_H_
#include "Base/BmObject.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmLocationLineOffsetData;
class OdBmLocationLineOffsetDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLocationLineOffsetData object.
 */
typedef OdSmartPtr<OdBmLocationLineOffsetData> OdBmLocationLineOffsetDataPtr;

/** \details
 A data type that represents an array of OdBmLocationLineOffsetData objects.
 */
typedef OdArray<OdBmLocationLineOffsetDataPtr> OdBmLocationLineOffsetDataPtrArray;

//----------------------------------------------------------
//
// OdBmLocationLineOffsetData
//
//----------------------------------------------------------

/** \details
    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmLocationLineOffsetData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLocationLineOffsetData);
public:
  OdBmObject* getOwnerCell() const;
  OdGePoint3d getOffsetItem(OdUInt32 idx) const;
  OdInt32 getOffsetTypeItem(OdUInt32 idx) const;
  OdInt32 getOffsetYRefTypeItem(OdUInt32 idx) const;
  OdInt32 getOffsetZRefTypeItem(OdUInt32 idx) const;
  OdBmObjectId getRefElemIdItem(OdUInt32 idx) const;
  bool getIsOffsettingEnabledItem(OdUInt32 idx) const;
  //
  // Main functionality
  //
};
#endif // _BM_LOCATIONLINEOFFSETDATA_H_

