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

#ifndef _BM_DOCUMENTINCREMENT_H_
#define _BM_DOCUMENTINCREMENT_H_
#include "Base/BmObject.h"

class OdBmDocumentIncrementVersion;
typedef OdSmartPtr<OdBmDocumentIncrementVersion> OdBmDocumentIncrementVersionPtr;
class OdBmEpisodeId;

class OdBmDocumentIncrement;
class OdBmDocumentIncrementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDocumentIncrement object.
 */
typedef OdSmartPtr<OdBmDocumentIncrement> OdBmDocumentIncrementPtr;

/** \details
 A data type that represents an array of OdBmDocumentIncrement objects.
 */
typedef OdArray<OdBmDocumentIncrementPtr> OdBmDocumentIncrementPtrArray;

//----------------------------------------------------------
//
// OdBmDocumentIncrement
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDocumentIncrement : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDocumentIncrement);
public:
  void getIncrementVersions(OdArray<OdBmDocumentIncrementVersionPtr> &) const;
  OdResult setIncrementVersions(const OdArray<OdBmDocumentIncrementVersionPtr>&);
  OdString getUserName() const;
  OdResult setUserName(const OdString&);
  OdString getComment() const;
  OdResult setComment(const OdString&);
  OdBmEpisodeId getGreatest() const;
  OdResult setGreatest(const OdBmEpisodeId&);
  OdInt32 getTotalEpisodes() const;
  OdResult setTotalEpisodes(OdInt32);
  OdTimeStamp getATimeStamp() const;
  OdResult setATimeStamp(const OdTimeStamp&);
  OdInt32 getMajorVersion() const;
  OdResult setMajorVersion(OdInt32);
  OdInt32 getTotalElements() const;
  OdResult setTotalElements(OdInt32);
  OdInt32 getPreviewStreamRevision() const;
  OdResult setPreviewStreamRevision(OdInt32);
  OdInt32 getGlobalStreamRevision() const;
  OdResult setGlobalStreamRevision(OdInt32);
  OdInt32 getHistoryStreamRevision() const;
  OdResult setHistoryStreamRevision(OdInt32);
  OdInt32 getElemTableStreamRevision() const;
  OdResult setElemTableStreamRevision(OdInt32);
  OdInt32 getContentDocumentsStreamRevision() const;
  OdResult setContentDocumentsStreamRevision(OdInt32);
  OdInt32 getPartitionTableStreamRevision() const;
  OdResult setPartitionTableStreamRevision(OdInt32);
  OdInt32 getIncrementTableStreamRevision() const;
  OdResult setIncrementTableStreamRevision(OdInt32);
  OdInt32 getFormatsStreamRevision() const;
  OdResult setFormatsStreamRevision(OdInt32);
  OdInt32 getBasicFileInfoStreamRevision() const;
  OdResult setBasicFileInfoStreamRevision(OdInt32);
  OdInt32 getTransmissionDataStreamRevision() const;
  OdResult setTransmissionDataStreamRevision(OdInt32);
  OdInt32 getPartAtomStreamRevision() const;
  OdResult setPartAtomStreamRevision(OdInt32);
  OdInt32 getProjectXMLInfoStreamRevision() const;
  OdResult setProjectXMLInfoStreamRevision(OdInt32);
  bool getOverwrite() const;
  OdResult setOverwrite(bool);
  //
  // Main functionality
  //


};


#endif // _BM_DOCUMENTINCREMENT_H_

