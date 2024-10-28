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

#ifndef _BM_FLEXGEOMINSTFAMREF_H_
#define _BM_FLEXGEOMINSTFAMREF_H_
#include "Database/Entities/BmFlexGeomInstFamRefBase.h"

class OdBmAUID;
typedef OdSmartPtr<OdBmAUID> OdBmAUIDPtr;
class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmObjectId;

class OdBmFlexGeomInstFamRef;
class OdBmFlexGeomInstFamRefImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFlexGeomInstFamRef object.
 */
typedef OdSmartPtr<OdBmFlexGeomInstFamRef> OdBmFlexGeomInstFamRefPtr;

/** \details
 A data type that represents an array of OdBmFlexGeomInstFamRef objects.
 */
typedef OdArray<OdBmFlexGeomInstFamRefPtr> OdBmFlexGeomInstFamRefPtrArray;

//----------------------------------------------------------
//
// OdBmFlexGeomInstFamRef
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFlexGeomInstFamRef : public OdBmFlexGeomInstFamRefBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFlexGeomInstFamRef);
public:
  OdBmObjectId getCsysId() const;
  void getGeomRefMap(OdBmMap<OdBmAUIDPtr, OdBmGeomRefPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_FLEXGEOMINSTFAMREF_H_

