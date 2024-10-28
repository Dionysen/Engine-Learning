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

#ifndef _BM_BASICFILEINFO_H_
#define _BM_BASICFILEINFO_H_
#include "Base/BmObject.h"
#include "Base/BmFileVersion.h"
// BEGIN: Includes
#include "Database/BmDatabase.h"
// END: Includes



class OdBmBasicFileInfo;
class OdBmBasicFileInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBasicFileInfo object.
 */
typedef OdSmartPtr<OdBmBasicFileInfo> OdBmBasicFileInfoPtr;

/** \details
 A data type that represents an array of OdBmBasicFileInfo objects.
 */
typedef OdArray<OdBmBasicFileInfoPtr> OdBmBasicFileInfoPtrArray;

//----------------------------------------------------------
//
// OdBmBasicFileInfo
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmBasicFileInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBasicFileInfo);
public:
  FileVersion getFileVersion() const;
  bool getIsWorkshared() const;
  OdInt8 getWorksharedFlags() const;
  OdString getUserName() const;
  OdString getCentralModelPath() const;
  OdString getFormat() const;
  OdString getSavedInVersion() const;
  OdString getLastSavePath() const;
  OdInt32 getOpenWorksetDefault() const;
  bool getIsProjectSparkFile() const;
  OdGUID getCentralModelIdentity() const;
  OdString getLanguageWhenSaved() const;
  bool getIsAllLocalSavedToCentral() const;
  OdInt32 getCMVerNumCorrToTheLRelLatest() const;
  OdGUID getCMEpGUIDCorrToTheLRelLatest() const;
  OdGUID getUniqueDocumentGuid() const;
  OdInt32 getUniqueDocumentIncrements() const;
  OdGUID getModelIdentity() const;
  bool getIsSingleUserCloudModel() const;
  OdString getAuthor() const;
  bool getIsCentral() const;
  bool getIsCreatedLocal() const;
  bool getIsInProgress() const;
  bool getIsLocal() const;
  bool getIsSavedInCurrentVersion() const;
  OdInt32 getBasicFileInfoStreamRevision() const;
  OdString getClientAppName() const;
  //
  // Main functionality
  //


};


#endif // _BM_BASICFILEINFO_H_

