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

#ifndef _BM_FACEPOINTREF_H_
#define _BM_FACEPOINTREF_H_
#include "Base/BmObject.h"



class OdBmFacePointRef;
class OdBmFacePointRefImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFacePointRef object.
 */
typedef OdSmartPtr<OdBmFacePointRef> OdBmFacePointRefPtr;

/** \details
 A data type that represents an array of OdBmFacePointRef objects.
 */
typedef OdArray<OdBmFacePointRefPtr> OdBmFacePointRefPtrArray;

//----------------------------------------------------------
//
// OdBmFacePointRef
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFacePointRef : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFacePointRef);
public:
  void getVertices(OdGePoint3dArray &) const;
  OdGePoint2d getOrigUV() const;
  OdGePoint3d getPntToRef() const;
  OdGePoint3d getComputedPnt() const;
  OdGeVector3d getComputedVec() const;
  OdGeVector3d getComputedNorm() const;
  double getAngle() const;
  OdInt32 getType() const;
  OdInt32 getEdgeTag() const;
  OdInt32 getEdgeTagNext() const;
  OdInt32 getVersion() const;
  //
  // Main functionality
  //


};


#endif // _BM_FACEPOINTREF_H_

