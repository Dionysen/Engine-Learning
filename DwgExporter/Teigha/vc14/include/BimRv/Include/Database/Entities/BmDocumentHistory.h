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

#ifndef _BM_DOCUMENTHISTORY_H_
#define _BM_DOCUMENTHISTORY_H_
#include "Base/BmObject.h"
// BEGIN: Includes
class OdBmEpisodeId;
// END: Includes

class OdBmDatabase;
class OdBmEpisode;
typedef OdSmartPtr<OdBmEpisode> OdBmEpisodePtr;

class OdBmDocumentHistory;
class OdBmDocumentHistoryImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDocumentHistory object.
 */
typedef OdSmartPtr<OdBmDocumentHistory> OdBmDocumentHistoryPtr;

/** \details
 A data type that represents an array of OdBmDocumentHistory objects.
 */
typedef OdArray<OdBmDocumentHistoryPtr> OdBmDocumentHistoryPtrArray;

//----------------------------------------------------------
//
// OdBmDocumentHistory
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDocumentHistory : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDocumentHistory);
public:
  OdBmDatabase* getDatabase() const;
  OdBmObjectPtr getIncrementTable() const;
  void getEpisodeList(OdArray<OdBmEpisodePtr> &) const;
  OdInt32 getNextLocalSequenceNumber() const;
  OdInt32 getSubsequenceNumberDeficit() const;
  OdGUID getCreationGUID() const;
  OdGUID getDetachGUID() const;
  OdGUID getUpgradeGUID() const;
  OdGUID getPreviousUpgradeGUID() const;
  OdGUID getSaveAsGUID() const;
  void getUpgradeVersions(OdInt32Array &) const;
  //
  // Main functionality
  //

  OdBmEpisodePtr getEpisode(const OdBmEpisodeId& epId) const;
};


#endif // _BM_DOCUMENTHISTORY_H_

