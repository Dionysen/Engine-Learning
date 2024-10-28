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
#include "Database/BmElement.h"

#ifndef _BMVIEWSCDAPROPS_H_
#define _BMVIEWSCDAPROPS_H_

/** \details
  RxProperty for Views node represents 3DViews collection.
  Collects all database 3DViews elements and attach them to the Views node.
*/
struct OdBmViewsNodeProperty : OdRxCollectionProperty {
  /** \details
    Creates an iterator for a collection.
    
    \param pO [in] An OdBmDynamicObject object representing "Views" in hierarchy tree.
    
    \return An iterator for a collection.
  */
  virtual OdRxValueIteratorPtr subNewValueIterator(const OdRxObject* pO) const ODRX_OVERRIDE;
  
  /** \details
    Counts the number of database 3DViews elements.
    
    \param pO [in] An OdBmDynamicObject object representing "Views" in hierarchy tree.
    \param count [out] Output value.
    
    \returns eOk if the operation completed successfully. eNotApplicable - otherwise.
  */
  virtual OdResult subTryGetCount(const OdRxObject* pO, int& count) const ODRX_OVERRIDE;
  
  /** \details
    Creates a new object and assigns it to an owner.

    \param owner [in] RxClass that the object will be assigned to.
    
    \returns A pointer to a newly created object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);
};

/** \details
  Views node name RxProperty.
*/
struct OdBmViewsNodeNameProperty : OdRxProperty
{
  /** \details
    Creates a new object and assigns it to an owner.

    \param owner [in] RxClass that the object will be assigned to.
    
    \returns A pointer to a newly created object.
  */
  static OdRxMemberPtr createObject(const OdRxClass* owner);

  /** \details
   Returns the Views node name.

   \param pO [in] An OdBmDynamicObject object representing "Views" in hierarchy tree.
   \param value [out] OdRxValue of OdString type, containing Views node name.

   \returns eOk if the operation completed successfully. eNotApplicable - otherwise.
 */
  virtual OdResult subGetValue(const OdRxObject* pO, OdRxValue& value) const ODRX_OVERRIDE;

  /** \details
    Implementation of the isReadOnly metod from the OdRxPropertyBase interface.
    
    \returns Always true.
  */
  virtual bool isReadOnly(const OdRxObject*) const ODRX_OVERRIDE { return true; }
};

#endif // _BMVIEWSCDAPROPS_H_
