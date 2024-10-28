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

#ifndef _BM_AREALOAD_H_
#define _BM_AREALOAD_H_
#include "Database/Entities/BmLoadBase.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmAreaLoad;
class OdBmAreaLoadImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAreaLoad object.
 */
typedef OdSmartPtr<OdBmAreaLoad> OdBmAreaLoadPtr;

/** \details
 A data type that represents an array of OdBmAreaLoad objects.
 */
typedef OdArray<OdBmAreaLoadPtr> OdBmAreaLoadPtrArray;

//----------------------------------------------------------
//
// OdBmAreaLoad
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmAreaLoad : public OdBmLoadBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAreaLoad);
public:
  OdGeVector3d getForce_1() const;
  OdGeVector3d getForce_2() const;
  OdGeVector3d getForce_3() const;
  OdGeVector3d getForceDir() const;
  OdGePoint3d getPlaneOrigin() const;
  OdGeVector3d getPlaneNorm() const;
  OdBmObjectId getRefPointsElemId1Item(OdUInt32 idx) const;
  OdBmObjectId getRefPointsElemId2Item(OdUInt32 idx) const;
  OdInt32 getRefPointsEnd1Item(OdUInt32 idx) const;
  OdInt32 getRefPointsEnd2Item(OdUInt32 idx) const;
  OdBmObjectId getSketchId() const;
  OdInt32 getNumRefPoints() const;
  bool getNoDir() const;
  //
  // Main functionality
  //
};
#endif // _BM_AREALOAD_H_

