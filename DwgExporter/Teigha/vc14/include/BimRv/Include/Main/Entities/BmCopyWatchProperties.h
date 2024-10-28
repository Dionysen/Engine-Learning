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

#ifndef _BM_COPYWATCHPROPERTIES_H_
#define _BM_COPYWATCHPROPERTIES_H_
#include "Database/BmElement.h"

class OdBmPick;
typedef OdSmartPtr<OdBmPick> OdBmPickPtr;
class OdBmElementIdIntPair;
typedef OdSmartPtr<OdBmElementIdIntPair> OdBmElementIdIntPairPtr;
class OdBmElementIdArrWrapper;
typedef OdSmartPtr<OdBmElementIdArrWrapper> OdBmElementIdArrWrapperPtr;
class OdBmForeignElemRef;
typedef OdSmartPtr<OdBmForeignElemRef> OdBmForeignElemRefPtr;
class OdBmRoomBoundingItem;
typedef OdSmartPtr<OdBmRoomBoundingItem> OdBmRoomBoundingItemPtr;
class OdBmObjectId;

class OdBmCopyWatchProperties;
class OdBmCopyWatchPropertiesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCopyWatchProperties object.
 */
typedef OdSmartPtr<OdBmCopyWatchProperties> OdBmCopyWatchPropertiesPtr;

/** \details
 A data type that represents an array of OdBmCopyWatchProperties objects.
 */
typedef OdArray<OdBmCopyWatchPropertiesPtr> OdBmCopyWatchPropertiesPtrArray;

//----------------------------------------------------------
//
// OdBmCopyWatchProperties
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmCopyWatchProperties : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCopyWatchProperties);
public:
  void getTypeCopyMap(OdBmMap<OdBmPickPtr, OdBmElementIdIntPairPtr> &) const;
  void getParamIdToPageMap(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getCopiedElemsMap(OdBmMap<OdBmPickPtr, OdBmElementIdArrWrapperPtr> &) const;
  OdBmObjectId getLinkId() const;
  void getLinkedPhaseMap(OdBmMap<OdBmObjectId, OdBmForeignElemRefPtr> &) const;
  void getParamCopyTypeMap(OdBmMap<OdBmObjectId, OdInt32> &) const;
  void getCategoryCopyMap(OdBmMap<OdBmObjectId, OdBmPair<OdInt32, OdInt32> > &) const;
  void getCopyOriginalMap(OdBmMap<OdBmRoomBoundingItemPtr, OdBmObjectId> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_COPYWATCHPROPERTIES_H_

