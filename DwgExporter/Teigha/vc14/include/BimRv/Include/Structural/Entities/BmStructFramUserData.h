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

#ifndef _BM_STRUCTFRAMUSERDATA_H_
#define _BM_STRUCTFRAMUSERDATA_H_
#include "Family/Entities/BmFamInstUserData.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStructFramUserData;
class OdBmStructFramUserDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStructFramUserData object.
 */
typedef OdSmartPtr<OdBmStructFramUserData> OdBmStructFramUserDataPtr;

/** \details
 A data type that represents an array of OdBmStructFramUserData objects.
 */
typedef OdArray<OdBmStructFramUserDataPtr> OdBmStructFramUserDataPtrArray;

//----------------------------------------------------------
//
// OdBmStructFramUserData
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmStructFramUserData : public OdBmFamInstUserData {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStructFramUserData);
public:
  double getCopingDistance() const;
  OdBmObjectId getConnectionTypeItem(OdUInt32 idx) const;
  OdBmObjectId getAnalyticalModelId() const;
  OdInt32 getTagGroup() const;
  OdInt32 getTagLine() const;
  OdInt32 getTagEnd0() const;
  OdInt32 getTagEnd1() const;
  OdInt32 getTag3DSnapLine() const;
  OdInt32 getTagRefCurve() const;
  OdInt32 getTagLocationLine() const;
  OdInt32 getTagShapeHandleItem(OdUInt32 idx) const;
  OdInt32 getVersion() const;
  OdInt32 getBeamAnalyzesAs() const;
  OdInt32 getBraceAnalyzesAs() const;
  OdInt32 getStickSymbolLocation() const;
  bool getExtendedItem(OdUInt32 idx) const;
  bool getSymbolicExtendedItem(OdUInt32 idx) const;
  bool getEndMiterLockedItem(OdUInt32 idx) const;
  bool getEndMiterItem(OdUInt32 idx) const;
  bool getNewJoinInst() const;
  //
  // Main functionality
  //
};
#endif // _BM_STRUCTFRAMUSERDATA_H_

