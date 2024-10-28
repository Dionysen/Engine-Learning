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

#ifndef _BM_ELEMENTCUTTING_H_
#define _BM_ELEMENTCUTTING_H_
#include "Base/BmObject.h"

class OdBmDatabase;
class OdBmElementAndGRepPointer;
typedef OdSmartPtr<OdBmElementAndGRepPointer> OdBmElementAndGRepPointerPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmElementCutting;
class OdBmElementCuttingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementCutting object.
 */
typedef OdSmartPtr<OdBmElementCutting> OdBmElementCuttingPtr;

/** \details
 A data type that represents an array of OdBmElementCutting objects.
 */
typedef OdArray<OdBmElementCuttingPtr> OdBmElementCuttingPtrArray;

//----------------------------------------------------------
//
// OdBmElementCutting
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementCutting : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementCutting);
public:
  void getExternalSymbolsAndGroups(OdBmObjectIdArray &) const;
  void getExternalSlaveToMasterMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getCutRequest(OdBmObjectIdArray &) const;
  void getCutElements(OdBmObjectIdArray &) const;
  void getCutParents(OdBmObjectIdArray &) const;
  void getDetailDrawSortOrder(OdBmObjectIdArray &) const;
  void getNeedCutParents(OdBmObjectIdArray &) const;
  void getOptionalChildren(OdBmObjectIdArray &) const;
  void getRoots(OdBmObjectIdArray &) const;
  void getTotalParents(OdBmObjectIdArray &) const;
  void getOrigTotalParents(OdBmObjectIdArray &) const;
  void getSpecificDBViewIds(OdBmObjectIdArray &) const;
  void getElemGRepCopies(OdArray<OdBmObjectPtr> &) const;
  void getElemGRepCopyMap(OdBmMap<OdBmObjectId, OdBmElementAndGRepPointerPtr> &) const;
  OdBmObjectId getOldFamilyId() const;
  OdBmDatabase* getDatabase() const;
  void getPastedTotalParentSet(OdBmObjectIdArray &) const;
  void getPastedDummyToOriginalMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getPastedToOriginalMap(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getPastedInsertsWithoutHosts(OdBmObjectIdArray &) const;
  void getPastedElements(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //
};
#endif // _BM_ELEMENTCUTTING_H_

