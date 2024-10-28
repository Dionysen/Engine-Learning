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

#ifndef _BM_BORROWREQUEST_H_
#define _BM_BORROWREQUEST_H_
#include "Base/BmObject.h"

class OdBmRequestGUID;
typedef OdSmartPtr<OdBmRequestGUID> OdBmRequestGUIDPtr;
class OdBmInvariantElementId;
typedef OdSmartPtr<OdBmInvariantElementId> OdBmInvariantElementIdPtr;

class OdBmBorrowRequest;
class OdBmBorrowRequestImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBorrowRequest object.
 */
typedef OdSmartPtr<OdBmBorrowRequest> OdBmBorrowRequestPtr;

/** \details
 A data type that represents an array of OdBmBorrowRequest objects.
 */
typedef OdArray<OdBmBorrowRequestPtr> OdBmBorrowRequestPtrArray;

//----------------------------------------------------------
//
// OdBmBorrowRequest
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmBorrowRequest : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBorrowRequest);
public:
  OdBmRequestGUIDPtr getReqGuid() const;
  OdTimeStamp getAtimeStamp() const;
  OdInt16 getUserID() const;
  void getKingIds(OdArray<OdBmInvariantElementIdPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_BORROWREQUEST_H_

