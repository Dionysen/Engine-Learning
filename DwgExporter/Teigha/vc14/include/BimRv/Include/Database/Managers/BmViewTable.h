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

#ifndef _BM_VIEWTABLE_H_
#define _BM_VIEWTABLE_H_
#include "Database/Managers/BmAppInfo.h"
// BEGIN: Includes
#include "Base/BmObjectIdArray.h"
// END: Includes

class OdBmObjectId;

class OdBmViewTable;
class OdBmViewTableImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmViewTable object.
 */
typedef OdSmartPtr<OdBmViewTable> OdBmViewTablePtr;

/** \details
 A data type that represents an array of OdBmViewTable objects.
 */
typedef OdArray<OdBmViewTablePtr> OdBmViewTablePtrArray;

//----------------------------------------------------------
//
// OdBmViewTable
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmViewTable : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmViewTable);
public:
  OdBmObjectId getViewProjectId() const;
  OdResult setViewProjectId(const OdBmObjectId&);
  OdBmObjectId getDBViewSystemNavigatorId() const;
  //
  // Main functionality
  //

public:
  OdBmIteratorPtr<OdBmObjectId> createIteratorViews(bool atBeginning = true);
  bool hasView(const OdBmObjectId& elementId) const;

  void addViewsId(const OdBmObjectId& aViewId);
  void addSunAndShadowSettingId(const OdBmObjectId& aSunAndShadowSettingId);

  /** \details
   Searches the database for a view with the given name.
   
   \param sViewName [in] Name of the view to look for.
   \returns objectId for the found view. If view was not found, returns null objectId.
 */
  OdBmObjectId findViewIdByName(const OdString sViewName);
};


#endif // _BM_VIEWTABLE_H_

