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

#ifndef _BM_ELEMENTTRACKINGDATA_H_
#define _BM_ELEMENTTRACKINGDATA_H_
#include "Database/Managers/BmAppInfo.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
#include "Database/Enums/BmTrackingElementType.h"
// BEGIN: Includes
#include "Database/Managers/BmElementTracking.h"
// END: Includes

class OdBmDatabase;
class OdBmCategoryId;
class OdBmObjectId;

class OdBmElementTrackingData;
class OdBmElementTrackingDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementTrackingData object.
 */
typedef OdSmartPtr<OdBmElementTrackingData> OdBmElementTrackingDataPtr;

/** \details
 A data type that represents an array of OdBmElementTrackingData objects.
 */
typedef OdArray<OdBmElementTrackingDataPtr> OdBmElementTrackingDataPtrArray;

//----------------------------------------------------------
//
// OdBmElementTrackingData
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementTrackingData : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementTrackingData);
public:
  void getSymbols(OdBmMap<OdBmCategoryId, OdBmSet<OdBmObjectId> > &) const;
  void getElements(OdBmMap<OdBmCategoryId, OdBmSet<OdBmObjectId> > &) const;
  OdBmDatabase* getDatabase1() const;
  //
  // Main functionality
  //

  OdResult getElementsByType(const OdBmCategoryId& categoryId,
    const OdBm::TrackingElementType::Enum aType,
    OdBmObjectIdArray& aElements) const;

  OdResult getElementsByType(const OdBm::BuiltInCategory::Enum category,
                             const OdBm::TrackingElementType::Enum type,
                             OdBmObjectIdArray& elements) const;
};


#endif // _BM_ELEMENTTRACKINGDATA_H_

