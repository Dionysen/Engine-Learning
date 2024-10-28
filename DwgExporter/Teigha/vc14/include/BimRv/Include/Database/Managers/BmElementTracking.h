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

#ifndef _BM_ELEMENTTRACKING_H_
#define _BM_ELEMENTTRACKING_H_
#include "Database/Managers/BmAppInfo.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
#include "Database/Enums/BmTrackingElementType.h"
// BEGIN: Includes
#include "Base/BmObjectIdArray.h"
// END: Includes

class OdBmDatabase;
class OdBmElementTrackingItem;
typedef OdSmartPtr<OdBmElementTrackingItem> OdBmElementTrackingItemPtr;

class OdBmElementTracking;
class OdBmElementTrackingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementTracking object.
 */
typedef OdSmartPtr<OdBmElementTracking> OdBmElementTrackingPtr;

/** \details
 A data type that represents an array of OdBmElementTracking objects.
 */
typedef OdArray<OdBmElementTrackingPtr> OdBmElementTrackingPtrArray;
class OdBmCategoryId;

//----------------------------------------------------------
//
// OdBmElementTracking
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementTracking : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementTracking);
public:
  OdBmDatabase* getDatabase1() const;
  void getSymbols(OdArray<OdBmElementTrackingItemPtr> &) const;
  void getElems(OdArray<OdBmElementTrackingItemPtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Returns an array of element's IDs filtered by category and type.

  \param aCategory [in] Input element category.
  \param aType [in] Input element type.
  \param aElements [out] Output array of element's IDs.

    \remarks
  Element type can be one of the next values:

    <table>
      <b>Unset</b>     0
      <b>Elements</b>  1
      <b>Symbols</b>   2
    </table>
  */
  OdResult getElementsByType(const OdBmCategoryId& aCategory,
                             const OdBm::TrackingElementType::Enum aType,
                             OdBmObjectIdArray& aElements) const;

  /** \details
    Returns an array of element's IDs filtered by category and type.

  \param category [in] Input element category.
  \param type [in] Input element type.
  \param elements [out] Output array of element's IDs.

    \remarks
  Element type can be one of the next values:

    <table>
      <b>Unset</b>     0
      <b>Elements</b>  1
      <b>Symbols</b>   2
    </table>
  */
  OdResult getElementsByType(const OdBm::BuiltInCategory::Enum category,
                             const OdBm::TrackingElementType::Enum type,
                             OdBmObjectIdArray& elements) const;

  /** \details
    Returns an Id of element filtered by category and type.

  \param aCategory [in] Input element category.
  \param aType [in] Input element type.
  \param aElement [out] Output element's ID.

    \remarks
  Element type can be one of the next values:

    <table>
      <b>Unset</b>     0
      <b>Elements</b>  1
      <b>Symbols</b>   2
    </table>
  */
  OdResult trackElement(const OdBmCategoryId& aCategory,
                        const OdBm::TrackingElementType::Enum aType,
                        const OdBmObjectId& aElement);
};


#endif // _BM_ELEMENTTRACKING_H_

