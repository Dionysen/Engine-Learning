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

#ifndef _BM_EDITINGPERMISSIONSIMPLEM_H_
#define _BM_EDITINGPERMISSIONSIMPLEM_H_
#include "Main/Entities/BmEditingPermissionsGuts.h"

class OdBmInvariantElementId;
typedef OdSmartPtr<OdBmInvariantElementId> OdBmInvariantElementIdPtr;
class OdBmBorrowingInfo;
typedef OdSmartPtr<OdBmBorrowingInfo> OdBmBorrowingInfoPtr;
class OdBmObjectId;
class OdBmPartitionId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmEditingPermissionsImplem;
class OdBmEditingPermissionsImplemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEditingPermissionsImplem object.
 */
typedef OdSmartPtr<OdBmEditingPermissionsImplem> OdBmEditingPermissionsImplemPtr;

/** \details
 A data type that represents an array of OdBmEditingPermissionsImplem objects.
 */
typedef OdArray<OdBmEditingPermissionsImplemPtr> OdBmEditingPermissionsImplemPtrArray;

//----------------------------------------------------------
//
// OdBmEditingPermissionsImplem
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmEditingPermissionsImplem : public OdBmEditingPermissionsGuts {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEditingPermissionsImplem);
public:
  void getInvBorrowingInfo(OdBmMap<OdBmInvariantElementIdPtr, OdBmBorrowingInfoPtr> &) const;
  void getLocalInvBorrowingInfo(OdBmMap<OdBmInvariantElementIdPtr, OdBmBorrowingInfoPtr> &) const;
  void getOriginalWorksetMap(OdBmMap<OdBmObjectId, OdBmPartitionId> &) const;
  void getUndoDeletedElementIds(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //
};
#endif // _BM_EDITINGPERMISSIONSIMPLEM_H_

