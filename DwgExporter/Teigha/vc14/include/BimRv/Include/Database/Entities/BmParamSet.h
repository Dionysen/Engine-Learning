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

#ifndef _BM_PARAMSET_H_
#define _BM_PARAMSET_H_
#include "Geometry/Entities/BmPropertySetBase.h"
// BEGIN: Includes
#include "Database/BmSpecialId.h"
#include "Database/BmParamSetCommon.h"
// END: Includes

class OdBmParamValueSetDouble;
typedef OdSmartPtr<OdBmParamValueSetDouble> OdBmParamValueSetDoublePtr;
class OdBmParamValueSetInt;
typedef OdSmartPtr<OdBmParamValueSetInt> OdBmParamValueSetIntPtr;
class OdBmParamValueSetAString;
typedef OdSmartPtr<OdBmParamValueSetAString> OdBmParamValueSetAStringPtr;
class OdBmParamValueSetElementId;
typedef OdSmartPtr<OdBmParamValueSetElementId> OdBmParamValueSetElementIdPtr;

class OdBmParamSet;
class OdBmParamSetImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmParamSet object.
 */
typedef OdSmartPtr<OdBmParamSet> OdBmParamSetPtr;

/** \details
 A data type that represents an array of OdBmParamSet objects.
 */
typedef OdArray<OdBmParamSetPtr> OdBmParamSetPtrArray;

//----------------------------------------------------------
//
// OdBmParamSet
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmParamSet : public OdBmPropertySetBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmParamSet);
public:
  OdBmParamValueSetDoublePtr getDoubleParams() const;
  OdResult setDoubleParams(const OdBmParamValueSetDoublePtr&);
  OdBmParamValueSetIntPtr getIntParams() const;
  OdResult setIntParams(const OdBmParamValueSetIntPtr&);
  OdBmParamValueSetAStringPtr getStringParams() const;
  OdResult setStringParams(const OdBmParamValueSetAStringPtr&);
  OdBmParamValueSetElementIdPtr getObjectIdParams() const;
  OdResult setObjectIdParams(const OdBmParamValueSetElementIdPtr&);
  //
  // Main functionality
  //

  ODBM_PARAM_SET_METHODS_DECLARATION;
};
#endif // _BM_PARAMSET_H_

