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

#ifndef _BM_CATEGORYTRACKING_H_
#define _BM_CATEGORYTRACKING_H_
#include "Database/Managers/BmAppInfo.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
// BEGIN: Includes
#include "Base/BmObjectIdArray.h"
#include "Database/Entities/BmCategory.h"
// END: Includes

class OdBmCategoryDataItem;
typedef OdSmartPtr<OdBmCategoryDataItem> OdBmCategoryDataItemPtr;
class OdBmGStyleDataItem;
typedef OdSmartPtr<OdBmGStyleDataItem> OdBmGStyleDataItemPtr;

class OdBmCategoryTracking;
class OdBmCategoryTrackingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCategoryTracking object.
 */
typedef OdSmartPtr<OdBmCategoryTracking> OdBmCategoryTrackingPtr;

/** \details
 A data type that represents an array of OdBmCategoryTracking objects.
 */
typedef OdArray<OdBmCategoryTrackingPtr> OdBmCategoryTrackingPtrArray;

//----------------------------------------------------------
//
// OdBmCategoryTracking
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCategoryTracking : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCategoryTracking);
public:
  void getCategoryData(OdArray<OdBmCategoryDataItemPtr> &) const;
  OdResult setCategoryData(const OdArray<OdBmCategoryDataItemPtr>&);
  void getGStyleData(OdArray<OdBmGStyleDataItemPtr> &) const;
  OdResult setGStyleData(const OdArray<OdBmGStyleDataItemPtr>&);
  //
  // Main functionality
  //

public:
  OdBmGStyleDataItemPtr
  getGStyleDataItem(const OdBm::BuiltInCategory::Enum category,
                    const OdInt32 gStyleType = 1);
  OdBmGStyleDataItemPtr getGStyleDataItem(const OdBmObjectId& categoryId,
                                          const OdInt32 gStyleType = 1);
  OdResult addGStyleDataItem(const OdBmObjectId& aCategoryId,
                             const OdBmObjectId& aGStyleId,
                             const OdInt32 aGStyleType);
  OdResult addCategoryDataItem(const OdBmObjectId& aParentCategoryId,
                               const OdBmObjectId& aCategoryId);
  void getCategoryDataItems(OdBm::BuiltInCategory::Enum,
                            OdBmObjectIdArray&) const;
  const OdBmMap<OdBmObjectId::handle_type, OdBmCategoryPtr>
  getBuiltInCategoriesData() const;
};


#endif // _BM_CATEGORYTRACKING_H_

