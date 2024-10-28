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

#ifndef _BM_NONELEMENTSTREAMREVISIONS_H_
#define _BM_NONELEMENTSTREAMREVISIONS_H_
#include "Base/BmObject.h"



class OdBmNonelementStreamRevisions;
class OdBmNonelementStreamRevisionsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNonelementStreamRevisions object.
 */
typedef OdSmartPtr<OdBmNonelementStreamRevisions> OdBmNonelementStreamRevisionsPtr;

/** \details
 A data type that represents an array of OdBmNonelementStreamRevisions objects.
 */
typedef OdArray<OdBmNonelementStreamRevisionsPtr> OdBmNonelementStreamRevisionsPtrArray;

//----------------------------------------------------------
//
// OdBmNonelementStreamRevisions
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmNonelementStreamRevisions : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNonelementStreamRevisions);
public:
  OdInt32 getPreviewStreamRevision() const;
  OdInt32 getGlobalStreamRevision() const;
  OdInt32 getHistoryStreamRevision() const;
  OdInt32 getElemTableStreamRevision() const;
  OdInt32 getContentDocumentsStreamRevision() const;
  OdInt32 getPartitionTableStreamRevision() const;
  OdInt32 getIncrementTableStreamRevision() const;
  OdInt32 getBasicFileInfoStreamRevision() const;
  OdInt32 getTransmissionDataStreamRevision() const;
  OdInt32 getPartAtomStreamRevision() const;
  OdInt32 getProjectXMLInfoStreamRevision() const;
  //
  // Main functionality
  //


};


#endif // _BM_NONELEMENTSTREAMREVISIONS_H_

