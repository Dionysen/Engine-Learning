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

#ifndef _BM_RVTLINKINSTANCE_H_
#define _BM_RVTLINKINSTANCE_H_
#include "Database/Entities/BmLinkInstance.h"

class OdBmForeignElemRef;
typedef OdSmartPtr<OdBmForeignElemRef> OdBmForeignElemRefPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRvtLinkInstance;
class OdBmRvtLinkInstanceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRvtLinkInstance object.
 */
typedef OdSmartPtr<OdBmRvtLinkInstance> OdBmRvtLinkInstancePtr;

/** \details
 A data type that represents an array of OdBmRvtLinkInstance objects.
 */
typedef OdArray<OdBmRvtLinkInstancePtr> OdBmRvtLinkInstancePtrArray;

//----------------------------------------------------------
//
// OdBmRvtLinkInstance
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRvtLinkInstance : public OdBmLinkInstance {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRvtLinkInstance);
public:
  OdBmForeignElemRefPtr getSourceLocationId() const;
  OdBmForeignElemRefPtr getInOtherDoc() const;
  OdBmObjectId getParentInstanceId() const;
  bool getIsRoomBounding() const;
  void getChildInstanceIds(OdBmObjectIdArray &) const;
  OdString getName() const;
  //
  // Main functionality
  //

  /** \details
  Creating a RvtLinkInstance for new linked file.

  /param idSymbolInfo [in] Input id of RvtLinkSymbol object.
  */
  OdResult addNewLinkInstance(OdBmObjectId idSymbolInfo);

};
#endif // _BM_RVTLINKINSTANCE_H_

