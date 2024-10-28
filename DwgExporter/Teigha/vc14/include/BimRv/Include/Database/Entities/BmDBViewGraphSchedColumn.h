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

#ifndef _BM_DBVIEWGRAPHSCHEDCOLUMN_H_
#define _BM_DBVIEWGRAPHSCHEDCOLUMN_H_
#include "Database/Entities/BmDBView.h"

class OdBmLineAndTextAttribute;
typedef OdSmartPtr<OdBmLineAndTextAttribute> OdBmLineAndTextAttributePtr;
class OdBmFirstSecondInt;
typedef OdSmartPtr<OdBmFirstSecondInt> OdBmFirstSecondIntPtr;
class OdBmGCSTextInfo;
typedef OdSmartPtr<OdBmGCSTextInfo> OdBmGCSTextInfoPtr;
class OdBmFormatOptions;
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;
class OdBmGridIntPnt;
typedef OdSmartPtr<OdBmGridIntPnt> OdBmGridIntPntPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmDBViewGraphSchedColumn;
class OdBmDBViewGraphSchedColumnImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBViewGraphSchedColumn object.
 */
typedef OdSmartPtr<OdBmDBViewGraphSchedColumn> OdBmDBViewGraphSchedColumnPtr;

/** \details
 A data type that represents an array of OdBmDBViewGraphSchedColumn objects.
 */
typedef OdArray<OdBmDBViewGraphSchedColumnPtr> OdBmDBViewGraphSchedColumnPtrArray;

//----------------------------------------------------------
//
// OdBmDBViewGraphSchedColumn
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBViewGraphSchedColumn : public OdBmDBView {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBViewGraphSchedColumn);
public:
  void getAttrs(OdArray<OdBmLineAndTextAttributePtr> &) const;
  void getExceedsSet(OdBmObjectIdArray &) const;
  void getGroupInfoArr(OdArray<OdBmFirstSecondIntPtr> &) const;
  void getHiddenLevelIds(OdBmObjectIdArray &) const;
  OdBmGCSTextInfoPtr getLevelTextInfo() const;
  OdString getLocationHigh() const;
  OdString getLocationLow() const;
  OdBmGCSTextInfoPtr getLocationTextInfo() const;
  OdBmFormatOptionsPtr getFormatOptions() const;
  void getSmtEschew(OdInt32Array &) const;
  OdString getTitle() const;
  OdBmGCSTextInfoPtr getTitleTextInfo() const;
  void getVisGridIntPntArr(OdArray<OdBmGridIntPntPtr> &) const;
  void getVisLevelIds(OdBmObjectIdArray &) const;
  void getWidthScale(OdDoubleArray &) const;
  double getHeightAbove() const;
  double getHeightBelow() const;
  double getHeightBetween() const;
  double getMeshWidth() const;
  double getSideWidth() const;
  double getTextSize() const;
  double getTitleHeight() const;
  double getTitleHeightLast() const;
  OdBmObjectId getBottomLevelId() const;
  OdInt32 getBaseElevationType() const;
  OdInt32 getColumnsPerRow() const;
  OdInt32 getGroupSimilar() const;
  OdInt32 getOffGrid() const;
  OdInt32 getOldSize() const;
  OdBmObjectId getTopLevelId() const;
  bool getIsLegacy() const;
  //
  // Main functionality
  //

public:
};


#endif // _BM_DBVIEWGRAPHSCHEDCOLUMN_H_

