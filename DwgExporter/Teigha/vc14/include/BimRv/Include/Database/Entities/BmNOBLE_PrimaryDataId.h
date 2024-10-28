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

#ifndef _BM_NOBLE_PRIMARYDATAID_H_
#define _BM_NOBLE_PRIMARYDATAID_H_
#include "Base/BmObject.h"

class OdBmNOBLE_DocumentId;
class OdBmObjectId;

class OdBmNOBLE_PrimaryDataId;
class OdBmNOBLE_PrimaryDataIdImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNOBLE_PrimaryDataId object.
 */
typedef OdSmartPtr<OdBmNOBLE_PrimaryDataId> OdBmNOBLE_PrimaryDataIdPtr;

/** \details
 A data type that represents an array of OdBmNOBLE_PrimaryDataId objects.
 */
typedef OdArray<OdBmNOBLE_PrimaryDataIdPtr> OdBmNOBLE_PrimaryDataIdPtrArray;

//----------------------------------------------------------
//
// OdBmNOBLE_PrimaryDataId
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmNOBLE_PrimaryDataId : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNOBLE_PrimaryDataId);
public:
  OdBmNOBLE_DocumentId getDocId() const;
  OdInt32 getAppInfoType() const;
  OdInt32 getDataType() const;
  OdBmObjectId getElementId() const;
  OdGUID getSecondaryId() const;
  //
  // Main functionality
  //

};

bool TB_DB_EXPORT operator<(const OdBmNOBLE_PrimaryDataIdPtr& lhs,
                              const OdBmNOBLE_PrimaryDataIdPtr& rhs);

#endif // _BM_NOBLE_PRIMARYDATAID_H_

