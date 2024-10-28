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

#ifndef _BM_ELEMENTGROUPTYPE_H_
#define _BM_ELEMENTGROUPTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmDatabase;
class OdBmElementGroupCurveMemberData;
typedef OdSmartPtr<OdBmElementGroupCurveMemberData> OdBmElementGroupCurveMemberDataPtr;
class OdBmElementGroupTypeToExtFilesData;
typedef OdSmartPtr<OdBmElementGroupTypeToExtFilesData> OdBmElementGroupTypeToExtFilesDataPtr;
class OdBmObjectId;

class OdBmElementGroupType;
class OdBmElementGroupTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementGroupType object.
 */
typedef OdSmartPtr<OdBmElementGroupType> OdBmElementGroupTypePtr;

/** \details
 A data type that represents an array of OdBmElementGroupType objects.
 */
typedef OdArray<OdBmElementGroupTypePtr> OdBmElementGroupTypePtrArray;

//----------------------------------------------------------
//
// OdBmElementGroupType
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementGroupType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementGroupType);
public:
  void getElementGroupCurveData(OdBmMap<OdInt32, OdBmElementGroupCurveMemberDataPtr> &) const;
  OdGeMatrix3d getInsertionOrigin() const;
  OdBmObjectId getAttachedParentId() const;
  OdBmObjectId getDefiningGroupInstId() const;
  OdInt32 getNextIndex() const;
  OdInt32 getViewType() const;
  bool getArrayGroupType() const;
  bool getSuspendCurveVerification() const;
  bool getCheckMemberConsistency() const;
  bool getUseNew8ConsistencyChecks() const;
  bool getUseNew9ConsistencyChecks() const;
  bool getAllowAttachedRoomTagsWUngroupedParent() const;
  bool getNoBackup() const;
  bool getCreatedEmptyNeedsOrigin() const;
  void getDeletedIndices(OdInt32Array &) const;
  void getRemovedIndices(OdInt32Array &) const;
  void getMemberBaseHeightData(OdBmMap<OdInt32, double> &) const;
  OdBmElementGroupTypeToExtFilesDataPtr getExtFileData() const;
  OdBmObjectPtr getCB() const;
  OdBmObjectPtr getPlacementHelper() const;
  OdBmDatabase* getDatabase1() const;
  //
  // Main functionality
  //

  bool getIsAttached() const;
};


#endif // _BM_ELEMENTGROUPTYPE_H_

