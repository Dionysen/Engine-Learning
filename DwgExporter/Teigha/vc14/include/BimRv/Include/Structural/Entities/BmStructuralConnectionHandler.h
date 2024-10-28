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

#ifndef _BM_STRUCTURALCONNECTIONHANDLER_H_
#define _BM_STRUCTURALCONNECTIONHANDLER_H_
#include "Database/BmElement.h"

class OdBmInputMemberId;
typedef OdSmartPtr<OdBmInputMemberId> OdBmInputMemberIdPtr;
class OdBmConnectionInputPoint;
typedef OdSmartPtr<OdBmConnectionInputPoint> OdBmConnectionInputPointPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStructuralConnectionHandler;
class OdBmStructuralConnectionHandlerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStructuralConnectionHandler object.
 */
typedef OdSmartPtr<OdBmStructuralConnectionHandler> OdBmStructuralConnectionHandlerPtr;

/** \details
 A data type that represents an array of OdBmStructuralConnectionHandler objects.
 */
typedef OdArray<OdBmStructuralConnectionHandlerPtr> OdBmStructuralConnectionHandlerPtrArray;

//----------------------------------------------------------
//
// OdBmStructuralConnectionHandler
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmStructuralConnectionHandler : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStructuralConnectionHandler);
public:
  void getConnElemSymbolsInvisible(OdBmObjectIdArray &) const;
  OdBmObjectId getApprovalStatus() const;
  OdInt32 getCodeCheckingStatus() const;
  OdBmObjectId getConnectionSymbolId() const;
  OdBmObjectId getGStyleId() const;
  OdInt32 getSingleElementEndIdx() const;
  OdBmObjectId getTypeId() const;
  void getInputMemberIds(OdArray<OdBmInputMemberIdPtr> &) const;
  bool getFailed() const;
  bool getOverrideTypeParams() const;
  void getInputPoints(OdArray<OdBmConnectionInputPointPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_STRUCTURALCONNECTIONHANDLER_H_

