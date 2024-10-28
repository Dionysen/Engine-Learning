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

#ifndef _BM_NOBLE_SECONDARYDATAENTITYBASE_H_
#define _BM_NOBLE_SECONDARYDATAENTITYBASE_H_
#include "Base/BmObject.h"

class OdBmNOBLE_PrimaryDataId;
typedef OdSmartPtr<OdBmNOBLE_PrimaryDataId> OdBmNOBLE_PrimaryDataIdPtr;

class OdBmNOBLE_SecondaryDataEntityBase;
class OdBmNOBLE_SecondaryDataEntityBaseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNOBLE_SecondaryDataEntityBase object.
 */
typedef OdSmartPtr<OdBmNOBLE_SecondaryDataEntityBase> OdBmNOBLE_SecondaryDataEntityBasePtr;

/** \details
 A data type that represents an array of OdBmNOBLE_SecondaryDataEntityBase objects.
 */
typedef OdArray<OdBmNOBLE_SecondaryDataEntityBasePtr> OdBmNOBLE_SecondaryDataEntityBasePtrArray;

//----------------------------------------------------------
//
// OdBmNOBLE_SecondaryDataEntityBase
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmNOBLE_SecondaryDataEntityBase : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNOBLE_SecondaryDataEntityBase);
public:
  void getCollectedPrimaryDataIds(OdArray<OdBmNOBLE_PrimaryDataIdPtr> &) const;
  void getWarningCollection(OdArray<OdBmObjectPtr> &) const;
  bool getWorkerFailure() const;
  //
  // Main functionality
  //
};
#endif // _BM_NOBLE_SECONDARYDATAENTITYBASE_H_

