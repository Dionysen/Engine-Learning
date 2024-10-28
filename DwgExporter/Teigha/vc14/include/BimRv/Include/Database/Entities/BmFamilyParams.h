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

#ifndef _BM_FAMILYPARAMS_H_
#define _BM_FAMILYPARAMS_H_
#include "Base/BmObject.h"
// BEGIN: Includes
// END: Includes

class OdBmNamedParam;
typedef OdSmartPtr<OdBmNamedParam> OdBmNamedParamPtr;
class OdBmFamGeomRefHandles;
typedef OdSmartPtr<OdBmFamGeomRefHandles> OdBmFamGeomRefHandlesPtr;

class OdBmFamilyParams;
class OdBmFamilyParamsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyParams object.
 */
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;

/** \details
 A data type that represents an array of OdBmFamilyParams objects.
 */
typedef OdArray<OdBmFamilyParamsPtr> OdBmFamilyParamsPtrArray;

//----------------------------------------------------------
//
// OdBmFamilyParams
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamilyParams : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyParams);
public:
  void getParams(OdArray<OdBmNamedParamPtr> &) const;
  OdResult setParams(const OdArray<OdBmNamedParamPtr>&);
  OdBmFamGeomRefHandlesPtr getGeomRefHandles() const;
  OdResult setGeomRefHandles(const OdBmFamGeomRefHandlesPtr&);
  //
  // Main functionality
  //

};


#endif // _BM_FAMILYPARAMS_H_

