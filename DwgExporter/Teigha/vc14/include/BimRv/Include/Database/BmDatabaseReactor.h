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
#ifndef __BM_DATABASEREACTOR_H__
#define __BM_DATABASEREACTOR_H__

#include "Base/BmObjectReactor.h"
#include "Database/BmElement.h"

/** Description:
    This class is the base class for custom classes that receive notification
    of OdBmDatabase events.

    Remarks:
    Events consist of the addition, modification, or deletion of objects
    from an OdBmDatabase instance.

    Note:
    The default implementations of all methods in this class do nothing.

    Library: TB_Db

    {group:OdBm_Classes}

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDatabaseReactor : public OdBmObjectReactor {
public:
  ODRX_DECLARE_MEMBERS(OdBmDatabaseReactor);

  OdBmDatabaseReactor() {}

  /** Description:
    Notification function called whenever a *database* -resident system variable is about to change.

    Arguments:
    pDb (I) Pointer to the *database* being *modified*.
    name (I) Name of the system variable being *modified*.

    Remarks:
    This function is called before the operation.

    See Also:
    headerSysVarChanged
  */
  virtual void headerSysVarWillChange(
    const OdBmDatabase* pDb,
    const OdString& name);

  /** Description:
    Notification function called whenever a *database* -resident system variable has changed.

    Arguments:
    pDb (I) Pointer to the *database* being *modified*.
    name (I) Name of the system variable being *modified*.

    Remarks:
    This function is called after the operation.

    See Also:
    headerSysVarWillChange
  */
  virtual void headerSysVarChanged(
    const OdBmDatabase* pDb,
    const OdString& name);


  virtual void objectAppended(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}
  
  /** \details
    Notification function called whenever an object is constructed.
    
    \param pDb [in] Pointer to a database.
    \param pObject [out] Pointer to the object that was constructed.
  */
  virtual void objectConstructed(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}
  
  /** \details
    Notification function called whenever an object is destroyed.
    
    \param pDb [in] Pointer to a database.
    \param id [out] Id of the object that was destroyed.
  */
  virtual void objectDeconstructed(
    const OdBmDatabase* pDb,
    const OdBmObjectId& id) {}

  virtual void objectFreed(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}

  virtual void objectUnAppended(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}


  virtual void objectReAppended(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}


  virtual void objectOpenedForModify(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}


  virtual void objectModified(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject) {}


  virtual void objectErased(
    const OdBmDatabase* pDb,
    const OdBmElement* pObject,
    bool erased = true) {}

  virtual void goodbye(
    const OdBmDatabase* pDb) {}
};
/** Description:
    This template class is a specialization of the OdSmartPtr class for OdBmDatabaseReactor object pointers.
*/
typedef OdSmartPtr<OdBmDatabaseReactor> OdBmDatabaseReactorPtr;

#endif // __BM_DATABASEREACTOR_H__
