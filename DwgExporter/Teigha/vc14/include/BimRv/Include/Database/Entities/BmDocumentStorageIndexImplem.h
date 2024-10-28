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

#ifndef _BM_DOCUMENTSTORAGEINDEXIMPLEM_H_
#define _BM_DOCUMENTSTORAGEINDEXIMPLEM_H_
#include "Database/Entities/BmDocumentStorageIndex.h"

class OdBmUserTable;
typedef OdSmartPtr<OdBmUserTable> OdBmUserTablePtr;
class OdBmModelResolvableLocation;
typedef OdSmartPtr<OdBmModelResolvableLocation> OdBmModelResolvableLocationPtr;
class OdBmWorksetCheckoutRecord;
typedef OdSmartPtr<OdBmWorksetCheckoutRecord> OdBmWorksetCheckoutRecordPtr;
class OdBmNonelementStreamRevisions;
typedef OdSmartPtr<OdBmNonelementStreamRevisions> OdBmNonelementStreamRevisionsPtr;
class OdBmEditingPermissions;
typedef OdSmartPtr<OdBmEditingPermissions> OdBmEditingPermissionsPtr;

class OdBmDocumentStorageIndexImplem;
class OdBmDocumentStorageIndexImplemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDocumentStorageIndexImplem object.
 */
typedef OdSmartPtr<OdBmDocumentStorageIndexImplem> OdBmDocumentStorageIndexImplemPtr;

/** \details
 A data type that represents an array of OdBmDocumentStorageIndexImplem objects.
 */
typedef OdArray<OdBmDocumentStorageIndexImplemPtr> OdBmDocumentStorageIndexImplemPtrArray;

//----------------------------------------------------------
//
// OdBmDocumentStorageIndexImplem
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDocumentStorageIndexImplem : public OdBmDocumentStorageIndex {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDocumentStorageIndexImplem);
public:
  OdBmUserTablePtr getUserTable() const;
  OdBmModelResolvableLocationPtr getCentralLocation() const;
  void getCheckoutRecords(OdArray<OdBmWorksetCheckoutRecordPtr> &) const;
  OdString getOwnerName() const;
  OdString getSoftwareVersion() const;
  OdInt32 getVersion() const;
  OdInt32 getIncrementWhenWorksharingEnabled() const;
  OdInt32 getMaxBackups() const;
  OdInt32 getMastersMaxBackups() const;
  OdInt32 getOpenWorksetDefault() const;
  bool getIsSingleUser() const;
  bool getIsAlwaysRelativizeMasterPath() const;
  bool getIsDataInSeparateFiles() const;
  OdBmNonelementStreamRevisionsPtr getStreamRevisions() const;
  OdBmEditingPermissionsPtr getPermissions() const;
  OdBmObjectPtr getRequests() const;
  //
  // Main functionality
  //


};


#endif // _BM_DOCUMENTSTORAGEINDEXIMPLEM_H_

