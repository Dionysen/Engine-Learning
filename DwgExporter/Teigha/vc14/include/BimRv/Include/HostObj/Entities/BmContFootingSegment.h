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

#ifndef _BM_CONTFOOTINGSEGMENT_H_
#define _BM_CONTFOOTINGSEGMENT_H_
#include "Base/BmObject.h"

class OdBmEndInfo;
typedef OdSmartPtr<OdBmEndInfo> OdBmEndInfoPtr;
class OdBmObjectId;

class OdBmContFootingSegment;
class OdBmContFootingSegmentImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmContFootingSegment object.
 */
typedef OdSmartPtr<OdBmContFootingSegment> OdBmContFootingSegmentPtr;

/** \details
 A data type that represents an array of OdBmContFootingSegment objects.
 */
typedef OdArray<OdBmContFootingSegmentPtr> OdBmContFootingSegmentPtrArray;

//----------------------------------------------------------
//
// OdBmContFootingSegment
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmContFootingSegment : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmContFootingSegment);
public:
  double getEndOffsetsItem(OdUInt32 idx) const;
  OdBmObjectId getParentId() const;
  OdInt32 getGeomStepId() const;
  OdInt32 getBottomFaceTag() const;
  OdInt32 getEndOfWallFlag() const;
  OdInt32 getEndEdgeTagsItem(OdUInt32 idx) const;
  bool getEndDefaultExtItem(OdUInt32 idx) const;
  OdBmObjectPtr getProfile() const;
  OdBmObjectPtr getDriverCurve() const;
  OdBmObjectPtr getRightCurve() const;
  OdBmObjectPtr getLeftCurve() const;
  void getJoinInfo0(OdArray<OdBmEndInfoPtr> &) const;
  void getJoinInfo1(OdArray<OdBmEndInfoPtr> &) const;
  OdBmObject* getParent() const;
  //
  // Main functionality
  //


};


#endif // _BM_CONTFOOTINGSEGMENT_H_

