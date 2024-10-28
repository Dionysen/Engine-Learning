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

#ifndef _BM_POINTONFACEDRIVER_H_
#define _BM_POINTONFACEDRIVER_H_
#include "Base/BmObject.h"

class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmFacePointRef;
typedef OdSmartPtr<OdBmFacePointRef> OdBmFacePointRefPtr;
class OdBmObjectId;

class OdBmPointOnFaceDriver;
class OdBmPointOnFaceDriverImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPointOnFaceDriver object.
 */
typedef OdSmartPtr<OdBmPointOnFaceDriver> OdBmPointOnFaceDriverPtr;

/** \details
 A data type that represents an array of OdBmPointOnFaceDriver objects.
 */
typedef OdArray<OdBmPointOnFaceDriverPtr> OdBmPointOnFaceDriverPtrArray;

//----------------------------------------------------------
//
// OdBmPointOnFaceDriver
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPointOnFaceDriver : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPointOnFaceDriver);
public:
  OdBmGeomRefPtr getGeomRef() const;
  OdGePoint3d getXyz() const;
  OdGeVector3d getDirection() const;
  OdGeVector3d getNorm() const;
  OdGeVector2d getUv() const;
  double getAngle() const;
  OdBmObjectId getDbViewId() const;
  OdInt32 getType() const;
  OdInt32 getWhyFrozen() const;
  bool getUseRawVector() const;
  bool getFrozen() const;
  bool getMayBeFrozen() const;
  bool getFrozenInInvalidState() const;
  OdBmFacePointRefPtr getFacePointRef() const;
  bool getDeleteWithHost() const;
  bool getIsLazy() const;
  //
  // Main functionality
  //


};


#endif // _BM_POINTONFACEDRIVER_H_

