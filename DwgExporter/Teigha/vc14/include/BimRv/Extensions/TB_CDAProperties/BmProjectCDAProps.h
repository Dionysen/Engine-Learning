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

#include "OdaCommon.h"
#include "RxProperty.h"
#include "RxObjectImpl.h"
#include "RxAttribute.h"
#include "RxCategory.h"
#include "RxValueTypeUtil.h"

#ifndef _BMPROJECTCDAPROPS_H_
#define _BMPROJECTCDAPROPS_H_

/** \details
  Project Views RxProperty.
  Property provides "Views" node in hierarchy tree. OdBmDynamicObject is created for it, for the scheme to work in general.
*/
struct OdBmProjectInfoViewsNodeProperty : OdRxProperty
{
  /** \details
    Creates a new object and assigns it to an owner.

    \param owner [in] RxClass that the object will be assigned to.
    
    \returns A pointer to a newly created object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
  
  /** \details
   Returns the pointer to the Building object.

   \param pO [in] OdBmProjectInfo object pointer.
   \param value [out] OdRxValue of OdRxObjectPtr type, hierarchy tree "Views" node object.

   \returns eOk if the operation completed successfully. eNotApplicable - otherwise.
 */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;
  
  /** \details
    Implementation of the isReadOnly metod from the OdRxPropertyBase interface.
    
    \returns Always true.
  */
  virtual bool isReadOnly(const OdRxObject*) const ODRX_OVERRIDE { return true; }
};

/** \details
  Project Building RxProperty.
  Property provides "Building" node in hierarchy tree. OdBmDynamicObject is created for it, for the scheme to work in general.
*/
struct OdBmProjectInfoBuildingNodeProperty : OdRxProperty
{
  
  /** \details
    Creates a new object and assigns it to an owner.

    \param owner [in] RxClass that the object will be assigned to.
    
    \returns A pointer to a newly created object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
  
  /** \details
   Returns the pointer to the Building object.

   \param pO [in] OdBmProjectInfo object pointer.
   \param value [out] OdRxValue of OdRxObjectPtr type, hierarchy tree "Building" node object.

   \returns eOk if the operation completed successfully. eNotApplicable - otherwise.
 */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;

  /** \details
    Implementation of the isReadOnly metod from the OdRxPropertyBase interface.
    
    \returns Always true.
  */
  virtual bool isReadOnly(const OdRxObject*) const ODRX_OVERRIDE { return true; }
};

#endif // _BMPROJECTCDAPROPS_H_
