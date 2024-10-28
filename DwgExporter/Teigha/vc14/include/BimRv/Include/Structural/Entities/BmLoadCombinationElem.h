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

#ifndef _BM_LOADCOMBINATIONELEM_H_
#define _BM_LOADCOMBINATIONELEM_H_
#include "Database/Entities/BmLoadMiscBaseElem.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmLoadCombinationElem;
class OdBmLoadCombinationElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLoadCombinationElem object.
 */
typedef OdSmartPtr<OdBmLoadCombinationElem> OdBmLoadCombinationElemPtr;

/** \details
 A data type that represents an array of OdBmLoadCombinationElem objects.
 */
typedef OdArray<OdBmLoadCombinationElemPtr> OdBmLoadCombinationElemPtrArray;

//----------------------------------------------------------
//
// OdBmLoadCombinationElem
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmLoadCombinationElem : public OdBmLoadMiscBaseElem {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLoadCombinationElem);
public:
  void getCaseIds(OdBmObjectIdArray &) const;
  void getFactors(OdDoubleArray &) const;
  void getUsageIds(OdBmObjectIdArray &) const;
  OdInt32 getState() const;
  OdInt32 getType() const;
  bool getMadeByApp() const;
  //
  // Main functionality
  //


};


#endif // _BM_LOADCOMBINATIONELEM_H_

