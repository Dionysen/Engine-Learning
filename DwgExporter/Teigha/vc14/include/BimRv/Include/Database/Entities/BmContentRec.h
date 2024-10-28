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

#ifndef _BM_CONTENTREC_H_
#define _BM_CONTENTREC_H_
#include "Base/BmObject.h"

class OdBmDatabase;
class OdBmElementHistory;
typedef OdSmartPtr<OdBmElementHistory> OdBmElementHistoryPtr;
class OdBmEpisodeId;

class OdBmContentRec;
class OdBmContentRecImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmContentRec object.
 */
typedef OdSmartPtr<OdBmContentRec> OdBmContentRecPtr;

/** \details
 A data type that represents an array of OdBmContentRec objects.
 */
typedef OdArray<OdBmContentRecPtr> OdBmContentRecPtrArray;

//----------------------------------------------------------
//
// OdBmContentRec
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmContentRec : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmContentRec);
public:
  OdBmDatabase* getRootDatabase() const;
  OdGUID getContentKey() const;
  OdBmElementHistoryPtr getHistory() const;
  void getEpisodeCounts(OdBmMap<OdBmEpisodeId, OdInt32> &) const;
  OdString getAuthor() const;
  //
  // Main functionality
  //


};


#endif // _BM_CONTENTREC_H_

