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

#ifndef _BM_STRUCTCOLUMNUSERDATA_H_
#define _BM_STRUCTCOLUMNUSERDATA_H_
#include "Family/Entities/BmFamInstUserData.h"

class OdBmStructAttData;
typedef OdSmartPtr<OdBmStructAttData> OdBmStructAttDataPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStructColumnUserData;
class OdBmStructColumnUserDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStructColumnUserData object.
 */
typedef OdSmartPtr<OdBmStructColumnUserData> OdBmStructColumnUserDataPtr;

/** \details
 A data type that represents an array of OdBmStructColumnUserData objects.
 */
typedef OdArray<OdBmStructColumnUserDataPtr> OdBmStructColumnUserDataPtrArray;

//----------------------------------------------------------
//
// OdBmStructColumnUserData
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmStructColumnUserData : public OdBmFamInstUserData {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStructColumnUserData);
public:
  OdBmStructAttDataPtr getAttData() const;
  double getCopingDistance() const;
  OdBmObjectId getUserSelectedGridsItem(OdUInt32 idx) const;
  OdBmObjectId getAnalyticalModelId() const;
  OdInt32 getTagGroup() const;
  OdInt32 getTagLine() const;
  OdInt32 getTagEnd0() const;
  OdInt32 getTagEnd1() const;
  OdInt32 getTag3DSnapLine() const;
  OdInt32 getTag3DSnapTopPt() const;
  OdInt32 getTagLocationLine() const;
  OdInt32 getAssignToGrid() const;
  OdInt32 getVersion() const;
  OdBmObjectId getConnectionTypeItem(OdUInt32 idx) const;
  OdInt32 getAnalyzesAs() const;
  bool getAttachToGridItem(OdUInt32 idx) const;
  bool getExtendedItem(OdUInt32 idx) const;
  //
  // Main functionality
  //


};


#endif // _BM_STRUCTCOLUMNUSERDATA_H_

