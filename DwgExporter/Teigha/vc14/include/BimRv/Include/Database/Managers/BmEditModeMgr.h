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

#ifndef _BM_EDITMODEMGR_H_
#define _BM_EDITMODEMGR_H_
#include "Database/Managers/BmAppInfo.h"

class OdBmObjectId;

class OdBmEditModeMgr;
class OdBmEditModeMgrImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEditModeMgr object.
 */
typedef OdSmartPtr<OdBmEditModeMgr> OdBmEditModeMgrPtr;

/** \details
 A data type that represents an array of OdBmEditModeMgr objects.
 */
typedef OdArray<OdBmEditModeMgrPtr> OdBmEditModeMgrPtrArray;

//----------------------------------------------------------
//
// OdBmEditModeMgr
//
//----------------------------------------------------------

/** \details
This base class for Edit managers.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmEditModeMgr : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEditModeMgr);
public:
  /** \details
    Returns Id of Element in Edit mode.
    
    \returns Id of the element in edit mode.
  */
  OdBmObjectId getBaseEditedElemId() const;
  /** \details
    Returns current state EditMode variable for the manager.
    
    \returns true if the manager in Edit mode, false - otherwise.
  */
  OdInt32 getInEditMode() const;
  //
  // Main functionality
  //

  /** \details
    Finish edit mode.
  */
  void finish();

  /** \details
    Set Id of the element which are in edit mode.

    \param ibjId [in] Id of the element.
  */
  void setEditedElemId(OdBmObjectId& ibjId);
};


#endif // _BM_EDITMODEMGR_H_

