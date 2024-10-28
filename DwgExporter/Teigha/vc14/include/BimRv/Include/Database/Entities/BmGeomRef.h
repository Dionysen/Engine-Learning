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

#ifndef _BM_GEOMREF_H_
#define _BM_GEOMREF_H_
#include "Base/BmObject.h"

class OdBmForeignElemRef;
typedef OdSmartPtr<OdBmForeignElemRef> OdBmForeignElemRefPtr;
class OdBmObjectId;

class OdBmGeomRef;
class OdBmGeomRefImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeomRef object.
 */
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;

/** \details
 A data type that represents an array of OdBmGeomRef objects.
 */
typedef OdArray<OdBmGeomRefPtr> OdBmGeomRefPtrArray;

//----------------------------------------------------------
//
// OdBmGeomRef
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmGeomRef : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeomRef);
public:
  void getIntermediateTags(OdInt32Array &) const;
  OdBmObjectPtr getNextRef() const;
  OdBmObjectId getElemId() const;
  OdBmForeignElemRefPtr getForeignElemIdRef() const;
  OdInt32 getGeomTag() const;
  OdInt32 getSubTag() const;
  OdInt32 getFlags() const;
  OdBmObjectId getOwnerDBViewId() const;
  bool getIsLazyRef() const;
  //
  // Main functionality
  //

  /** \details
    Equality operator for OdBmGeomRef.
    \param rhs [in] Object to check equality with.
  */
  bool operator==(const OdBmGeomRefPtr& rhs) const;

};

bool TB_DB_EXPORT operator<(const OdBmGeomRefPtr& lhs, const OdBmGeomRefPtr& rhs);

#endif // _BM_GEOMREF_H_

