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

#ifndef _BM_ELEMENTHEADER_H_
#define _BM_ELEMENTHEADER_H_
#include "Base/BmObject.h"
#include "Database/Entities/BmRejectedViewRules.h"

class OdTfClass;
class OdBmElementRegenHistory;
typedef OdSmartPtr<OdBmElementRegenHistory> OdBmElementRegenHistoryPtr;
class OdBmElementParents;
typedef OdSmartPtr<OdBmElementParents> OdBmElementParentsPtr;
class OdBmObjectId;

class OdBmElementHeader;
class OdBmElementHeaderImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementHeader object.
 */
typedef OdSmartPtr<OdBmElementHeader> OdBmElementHeaderPtr;

/** \details
 A data type that represents an array of OdBmElementHeader objects.
 */
typedef OdArray<OdBmElementHeaderPtr> OdBmElementHeaderPtrArray;

//----------------------------------------------------------
//
// OdBmElementHeader
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementHeader : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementHeader);
public:
  OdBmElementRegenHistoryPtr getRegenHistory() const;
  OdResult setRegenHistory(const OdBmElementRegenHistoryPtr&);
  OdBmObjectId getCategoryId() const;
  OdBmObjectId getFamilyId() const;
  OdResult setFamilyId(const OdBmObjectId&);
  OdBmObjectId getOwnerViewId() const;
  OdResult setOwnerViewId(const OdBmObjectId&);
  OdBmObjectId getDesignOptionId() const;
  OdResult setDesignOptionId(const OdBmObjectId&);
  OdBmObjectId getUnplacedOwnerId() const;
  OdResult setUnplacedOwnerId(const OdBmObjectId&);
  OdBmObjectId getMiscId() const;
  OdResult setMiscId(const OdBmObjectId&);
  OdBmRejectedViewRules getViewRules() const;
  OdResult setViewRules(const OdBmRejectedViewRules&);
  OdInt32 getAbFlags4Bytes() const;
  OdResult setAbFlags4Bytes(OdInt32);
  OdTfClass* getClassDef() const;
  OdResult setClassDef(OdTfClass*);
  OdGeExtents3d getBBox() const;
  OdResult setBBox(const OdGeExtents3d&);
  OdBmElementParentsPtr getParents() const;
  OdResult setParents(const OdBmElementParentsPtr&);
  //
  // Main functionality
  //

  /** \details
    Returns true if element is a slave symbol.
    \returns Returns true or false.
  */

  bool getIsSlaveSymbol() const;
  
};


#endif // _BM_ELEMENTHEADER_H_

