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

#ifndef _BM_SYMBOLIDMGR_H_
#define _BM_SYMBOLIDMGR_H_
#include "Database/Managers/BmAppInfo.h"

class OdBmCategoryToIdMap;
typedef OdSmartPtr<OdBmCategoryToIdMap> OdBmCategoryToIdMapPtr;
class OdBmParamSetKey;
typedef OdSmartPtr<OdBmParamSetKey> OdBmParamSetKeyPtr;
class OdBmObjectId;

class OdBmSymbolIdMgr;
class OdBmSymbolIdMgrImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSymbolIdMgr object.
 */
typedef OdSmartPtr<OdBmSymbolIdMgr> OdBmSymbolIdMgrPtr;

/** \details
 A data type that represents an array of OdBmSymbolIdMgr objects.
 */
typedef OdArray<OdBmSymbolIdMgrPtr> OdBmSymbolIdMgrPtrArray;

//----------------------------------------------------------
//
// OdBmSymbolIdMgr
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmSymbolIdMgr : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSymbolIdMgr);
public:
  double getDefRoomOffset() const;
  double getDefLegendComponentHostLength() const;
  OdInt32 getDefLegendComponentViewType() const;
  OdBmObjectId getDefLegendComponentType() const;
  OdInt32 getDefaultDraftingViewScale() const;
  OdResult setDefaultDraftingViewScale(OdInt32);
  OdInt32 getDefaultLegendViewScale() const;
  OdResult setDefaultLegendViewScale(OdInt32);
  OdBmCategoryToIdMapPtr getDefCatSymIds() const;
  OdResult setDefCatSymIds(const OdBmCategoryToIdMapPtr&);
  OdBmObjectPtr getFamRecentLists() const;
  OdResult setFamRecentLists(const OdBmObjectPtr&);
  OdBmObjectPtr getSystemRecentLists() const;
  void getParamSetKeys(OdArray<OdBmParamSetKeyPtr> &) const;
  OdResult setParamSetKeys(const OdArray<OdBmParamSetKeyPtr>&);
  void getParamSets(OdArray<OdBmObjectPtr> &) const;
  OdResult setParamSets(const OdArray<OdBmObjectPtr>&);
  void getDefElementTypeMap(OdBmMap<OdInt32, OdBmObjectId> &) const;
  OdResult setDefElementTypeMap(const OdBmMap<OdInt32, OdBmObjectId>&);
  //
  // Main functionality
  //

  OdResult addCategoryToId(const OdBmObjectId& aCategoryId, const OdBmObjectId& aId);
  OdResult setDefElementType(OdInt32 aType, const OdBmObjectId& aId);
  OdBmObjectId getDefElementIdByType(OdInt32 aType) const;

  OdBmObjectId getDefaultCategorySymbol(const OdBmObjectId& categoryId) const;
};


#endif // _BM_SYMBOLIDMGR_H_

