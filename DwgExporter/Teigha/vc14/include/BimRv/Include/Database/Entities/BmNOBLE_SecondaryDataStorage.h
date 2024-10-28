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

#ifndef _BM_NOBLE_SECONDARYDATASTORAGE_H_
#define _BM_NOBLE_SECONDARYDATASTORAGE_H_
#include "Base/BmObject.h"

class OdBmNOBLE_AppInfo;
typedef OdSmartPtr<OdBmNOBLE_AppInfo> OdBmNOBLE_AppInfoPtr;
class OdBmNOBLE_SecondaryDataId;
typedef OdSmartPtr<OdBmNOBLE_SecondaryDataId> OdBmNOBLE_SecondaryDataIdPtr;
class OdBmSecondaryDataWrapper;
typedef OdSmartPtr<OdBmSecondaryDataWrapper> OdBmSecondaryDataWrapperPtr;
class OdBmPrimaryDataIdSetWrapper;
typedef OdSmartPtr<OdBmPrimaryDataIdSetWrapper> OdBmPrimaryDataIdSetWrapperPtr;
class OdBmNOBLE_PrimaryDataId;
typedef OdSmartPtr<OdBmNOBLE_PrimaryDataId> OdBmNOBLE_PrimaryDataIdPtr;
class OdBmSecondaryDataIdSetWrapper;
typedef OdSmartPtr<OdBmSecondaryDataIdSetWrapper> OdBmSecondaryDataIdSetWrapperPtr;

class OdBmNOBLE_SecondaryDataStorage;
class OdBmNOBLE_SecondaryDataStorageImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNOBLE_SecondaryDataStorage object.
 */
typedef OdSmartPtr<OdBmNOBLE_SecondaryDataStorage> OdBmNOBLE_SecondaryDataStoragePtr;

/** \details
 A data type that represents an array of OdBmNOBLE_SecondaryDataStorage objects.
 */
typedef OdArray<OdBmNOBLE_SecondaryDataStoragePtr> OdBmNOBLE_SecondaryDataStoragePtrArray;

//----------------------------------------------------------
//
// OdBmNOBLE_SecondaryDataStorage
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmNOBLE_SecondaryDataStorage : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNOBLE_SecondaryDataStorage);
public:
  void getAppInfoData(OdBmMap<OdString, OdBmNOBLE_AppInfoPtr> &) const;
  void getData(OdBmMap<OdBmNOBLE_SecondaryDataIdPtr, OdBmSecondaryDataWrapperPtr> &) const;
  OdBmObject* getDoc() const;
  void getEnqueuedData2primaryParents(OdBmMap<OdBmNOBLE_SecondaryDataIdPtr, OdBmPrimaryDataIdSetWrapperPtr> &) const;
  void getInvalidatedInTransaction(OdArray<OdBmNOBLE_PrimaryDataIdPtr> &) const;
  void getInvalidatingCandidates(OdArray<OdBmNOBLE_PrimaryDataIdPtr> &) const;
  void getPrimary2SecondaryDataIdMap(OdBmMap<OdBmNOBLE_PrimaryDataIdPtr, OdBmSecondaryDataIdSetWrapperPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_NOBLE_SECONDARYDATASTORAGE_H_

