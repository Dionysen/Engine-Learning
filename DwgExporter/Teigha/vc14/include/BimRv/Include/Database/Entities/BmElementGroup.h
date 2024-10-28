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

#ifndef _BM_ELEMENTGROUP_H_
#define _BM_ELEMENTGROUP_H_
#include "Database/Entities/BmGroupBase.h"

class OdBmElementIdArrWrap;
typedef OdSmartPtr<OdBmElementIdArrWrap> OdBmElementIdArrWrapPtr;
class OdBmGroupViewSpecificData;
typedef OdSmartPtr<OdBmGroupViewSpecificData> OdBmGroupViewSpecificDataPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmElementGroup;
class OdBmElementGroupImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementGroup object.
 */
typedef OdSmartPtr<OdBmElementGroup> OdBmElementGroupPtr;

/** \details
 A data type that represents an array of OdBmElementGroup objects.
 */
typedef OdArray<OdBmElementGroupPtr> OdBmElementGroupPtrArray;

//----------------------------------------------------------
//
// OdBmElementGroup
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementGroup : public OdBmGroupBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementGroup);
public:
  double getOffsetFromLevel() const;
  OdBmObjectId getInitialDBViewId() const;
  OdBmObjectId getAttachedParentId() const;
  bool getIsUserChangedElev() const;
  bool getIsDetailPresentationType() const;
  OdGeMatrix3d getLastUpdatedAttachedParentTrf() const;
  OdBmElementIdArrWrapPtr getDrawOrderIds() const;
  OdBmObjectPtr getPlacementHelper() const;
  void getRefFaces(OdArray<OdBmObjectPtr> &) const;
  OdBmGroupViewSpecificDataPtr getGroupViewSpecificData() const;
  void getDeletedIndices(OdInt32Array &) const;
  void getRemovedIndices(OdInt32Array &) const;
  void getExcludedIndices(OdInt32Array &) const;
  void getMemberIndexToTagMap(OdBmMap<OdInt32, OdInt32> &) const;
  void getInstRefIds(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //

  bool getIsAttached() const;
};


#endif // _BM_ELEMENTGROUP_H_

