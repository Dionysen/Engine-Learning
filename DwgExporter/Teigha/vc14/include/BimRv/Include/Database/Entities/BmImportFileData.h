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

#ifndef _BM_IMPORTFILEDATA_H_
#define _BM_IMPORTFILEDATA_H_
#include "Base/BmObject.h"

class OdBmModelIdentity;
typedef OdSmartPtr<OdBmModelIdentity> OdBmModelIdentityPtr;
class OdBmObjectId;

class OdBmImportFileData;
class OdBmImportFileDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmImportFileData object.
 */
typedef OdSmartPtr<OdBmImportFileData> OdBmImportFileDataPtr;

/** \details
 A data type that represents an array of OdBmImportFileData objects.
 */
typedef OdArray<OdBmImportFileDataPtr> OdBmImportFileDataPtrArray;

//----------------------------------------------------------
//
// OdBmImportFileData
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmImportFileData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmImportFileData);
public:
  OdString getFullName() const;
  OdString getFileNameOnly() const;
  OdString getViewName() const;
  void getLayersToNotLink(OdArray<OdString> &) const;
  void getMaterialPathMap(OdBmMap<OdInt32, OdString> &) const;
  void getMaterialPathTypeMap(OdBmMap<OdInt32, OdInt32> &) const;
  void getMaterialPathStatusMap(OdBmMap<OdInt32, OdInt32> &) const;
  OdBmObjectId getDbDrawingId() const;
  OdBmObjectId getSymbolId() const;
  OdInt32 getLoadedStatus() const;
  OdInt32 getFileType() const;
  OdInt32 getExternalFileReferenceType() const;
  OdBmModelIdentityPtr getModelIdentity() const;
  bool getIsRelative() const;
  //
  // Main functionality
  //
};
#endif // _BM_IMPORTFILEDATA_H_

