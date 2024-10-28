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

#ifndef _BM_RADIALARRAY_H_
#define _BM_RADIALARRAY_H_
#include "Main/Entities/BmBaseArray.h"

class OdBmDatabase;
class OdBmGArc;
typedef OdSmartPtr<OdBmGArc> OdBmGArcPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRadialArray;
class OdBmRadialArrayImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRadialArray object.
 */
typedef OdSmartPtr<OdBmRadialArray> OdBmRadialArrayPtr;

/** \details
 A data type that represents an array of OdBmRadialArray objects.
 */
typedef OdArray<OdBmRadialArrayPtr> OdBmRadialArrayPtrArray;

//----------------------------------------------------------
//
// OdBmRadialArray
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmRadialArray : public OdBmBaseArray {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRadialArray);
public:
  void getOrigIds(OdBmObjectIdArray &) const;
  void getCopyIdArrs(OdBmObjectIdArray &) const;
  void getRotationAngles(OdDoubleArray &) const;
  void getOldGroupOrigins(OdArray<OdDoubleArray > &) const;
  OdBmGArcPtr getDimArc() const;
  OdBmGArcPtr getOldDimArc() const;
  double getUnboundedStartParam() const;
  double getOldUnboundedStartParam() const;
  OdGeVector3d getOffset() const;
  OdInt32 getNum() const;
  OdInt32 getNewElementPosition() const;
  bool getRotateItems() const;
  OdBmDatabase* getDatabase1() const;
  //
  // Main functionality
  //
};
#endif // _BM_RADIALARRAY_H_

