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

#ifndef _BM_APPINFO_H_
#define _BM_APPINFO_H_
#include "Base/BmObject.h"

class OdBmDatabase;

class OdBmAppInfo;
class OdBmAppInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAppInfo object.
 */
typedef OdSmartPtr<OdBmAppInfo> OdBmAppInfoPtr;

/** \details
 A data type that represents an array of OdBmAppInfo objects.
 */
typedef OdArray<OdBmAppInfoPtr> OdBmAppInfoPtrArray;

//----------------------------------------------------------
//
// OdBmAppInfo
//
//----------------------------------------------------------

/** \details
A base class that implements managing/tracking functionality for a BimRv database.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAppInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAppInfo);
public:
  /** \details 
  Retrieves the related database object.
  \returns A raw pointer to an OdBmDatabase instance related to the object.
  */
  OdBmDatabase* getDatabase() const;
  //
  // Main functionality
  //

  /** \details 
    Sets the database default settings. 
    \param pDb       [in] A raw pointer to the database object.
    \param doSubents [in] A flag value that determines whether the default settings should be set for sub-entities as well.
  */
  virtual void subSetDatabaseDefaults(
    OdDbBaseDatabase* pDb,
    bool doSubents);
};


#endif // _BM_APPINFO_H_

