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

#ifndef _BM_DBVIEWDRAFTING_H_
#define _BM_DBVIEWDRAFTING_H_
#include "Database/Entities/BmDBView.h"

class OdBmObjectId;

class OdBmDBViewDrafting;
class OdBmDBViewDraftingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBViewDrafting object.
 */
typedef OdSmartPtr<OdBmDBViewDrafting> OdBmDBViewDraftingPtr;

/** \details
 A data type that represents an array of OdBmDBViewDrafting objects.
 */
typedef OdArray<OdBmDBViewDraftingPtr> OdBmDBViewDraftingPtrArray;

//----------------------------------------------------------
//
// OdBmDBViewDrafting
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBViewDrafting : public OdBmDBView {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBViewDrafting);
public:
  void getRevNumMap(OdBmMap<OdBmObjectId, OdString> &) const;
  void getKeynoteTagNumMap(OdBmMap<OdBmObjectId, OdInt32> &) const;
  OdString getSheetNumber() const;
  OdString getDate() const;
  OdString getDrawnBy() const;
  OdString getCheckedBy() const;
  OdString getDesignedBy() const;
  OdString getApprovedBy() const;
  OdString getIssueDate() const;
  OdBmObjectId getGuideGridId() const;
  bool getIsScheduled() const;
  bool getIsUnused() const;
  //
  // Main functionality
  //

public:
  OdResult addView(const OdBmObjectId& viewId, const OdGePoint3d& ptLocation);

  friend class OdBmDBViewDraftingInternalImpl;
};


#endif // _BM_DBVIEWDRAFTING_H_

