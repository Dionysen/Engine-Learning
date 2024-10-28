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

#ifndef _BM_INSERTABLEOBJ_H_
#define _BM_INSERTABLEOBJ_H_
#include "Database/Entities/BmSymbol.h"
// BEGIN: Includes
#include "Ge/GeVector3dArray.h"
// END: Includes



class OdBmInsertableObj;
class OdBmInsertableObjImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmInsertableObj object.
 */
typedef OdSmartPtr<OdBmInsertableObj> OdBmInsertableObjPtr;

/** \details
 A data type that represents an array of OdBmInsertableObj objects.
 */
typedef OdArray<OdBmInsertableObjPtr> OdBmInsertableObjPtrArray;

//----------------------------------------------------------
//
// OdBmInsertableObj
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmInsertableObj : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmInsertableObj);
public:
  void getCutLoops(OdArray<OdBmObjectPtr> &) const;
  OdResult setCutLoops(const OdArray<OdBmObjectPtr>&);
  void getCutDirs(OdGeVector3dArray &) const;
  OdResult setCutDirs(const OdGeVector3dArray&);
  void getCutIndices(OdInt32Array &) const;
  OdResult setCutIndices(const OdInt32Array&);
  //
  // Main functionality
  //
};
#endif // _BM_INSERTABLEOBJ_H_

