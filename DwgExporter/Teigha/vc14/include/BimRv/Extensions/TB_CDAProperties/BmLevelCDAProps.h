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
#include "Base/BmDynamicObject.h"

#ifndef _BMLEVELCDAPROPS_H_
#define _BMLEVELCDAPROPS_H_

/** \details
  Level categories RxCollectionProperty.
  Collects Level's elements categories.
*/
struct OdBmLevelCategoriesProperty : OdRxCollectionProperty
{
  /** \details
    Creates an iterator for a collection.
    
    \param pO [in] OdBmElement object.
    
    \returns An iterator for a collection.
  */
  virtual OdRxValueIteratorPtr subNewValueIterator(const OdRxObject* pO) const ODRX_OVERRIDE;
  
  /** \details
    Counts the number of elements on a level.
    
    \param pO [in] OdBmElement object.
    \param count [out] The output value.
    
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

#endif // _BMLEVELCDAPROPS_H_
