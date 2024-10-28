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

#ifndef _BM_FAMILYMGRBASE_H_
#define _BM_FAMILYMGRBASE_H_
#include "Database/Entities/BmFilteredAppInfo.h"

class OdBmLoadedFamilyInfo;
typedef OdSmartPtr<OdBmLoadedFamilyInfo> OdBmLoadedFamilyInfoPtr;

class OdBmFamilyMgrBase;
class OdBmFamilyMgrBaseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyMgrBase object.
 */
typedef OdSmartPtr<OdBmFamilyMgrBase> OdBmFamilyMgrBasePtr;

/** \details
 A data type that represents an array of OdBmFamilyMgrBase objects.
 */
typedef OdArray<OdBmFamilyMgrBasePtr> OdBmFamilyMgrBasePtrArray;

//----------------------------------------------------------
//
// OdBmFamilyMgrBase
//
//----------------------------------------------------------

/** \details
A base class that implements managing functionality for imported families within a BimRv database.
Each imported family is represented with an appropriate simplified database related to the main BimRv database. 
This class provides a base interface for handling these simplified family databases.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamilyMgrBase : public OdBmFilteredAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyMgrBase);
public:
  /** \details 
    Retrieves loaded families.
    \param families [out] An array of smart pointers to OdBmLoadedFamilyInfo objects that contains information about loaded families.
    \remarks
    The method fills the passed array of smart pointers to OdBmLoadedFamilyInfo objects and returns it to a calling subroutine.
  */
  void getLoadedFamilies(OdArray<OdBmLoadedFamilyInfoPtr> &) const;
  /** \details 
    Sets a new array with information about loaded families.
    \param families [in] An array of smart pointers to OdBmLoadedFamilyInfo objects that contains information about loaded families.
    \returns eOk if the new array of loaded families was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setLoadedFamilies(const OdArray<OdBmLoadedFamilyInfoPtr>&);
  //
  // Main functionality
  //

};


#endif // _BM_FAMILYMGRBASE_H_

