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

#ifndef _BM_FAMSYMSTRETCHDESCRIPTOR_H_
#define _BM_FAMSYMSTRETCHDESCRIPTOR_H_
#include "Base/BmObject.h"

class OdBmStretchOffset;
typedef OdSmartPtr<OdBmStretchOffset> OdBmStretchOffsetPtr;
class OdBmStretchRefKey;
typedef OdSmartPtr<OdBmStretchRefKey> OdBmStretchRefKeyPtr;

class OdBmFamSymStretchDescriptor;
class OdBmFamSymStretchDescriptorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamSymStretchDescriptor object.
 */
typedef OdSmartPtr<OdBmFamSymStretchDescriptor> OdBmFamSymStretchDescriptorPtr;

/** \details
 A data type that represents an array of OdBmFamSymStretchDescriptor objects.
 */
typedef OdArray<OdBmFamSymStretchDescriptorPtr> OdBmFamSymStretchDescriptorPtrArray;

//----------------------------------------------------------
//
// OdBmFamSymStretchDescriptor
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFamSymStretchDescriptor : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamSymStretchDescriptor);
public:
  OdBmObjectPtr getFamMoveRestrictions() const;
  void getFilterConditionOffsets(OdArray<OdBmStretchOffsetPtr> &) const;
  void getControlIconOffsets(OdGePoint3dArray &) const;
  void getOffsetsAtEnd0(OdBmMap<OdBmStretchRefKeyPtr, double> &) const;
  void getOffsetsAtEnd1(OdBmMap<OdBmStretchRefKeyPtr, double> &) const;
  void getOffsetsAtMiddle(OdBmMap<OdBmStretchRefKeyPtr, double> &) const;
  void getOffsets3D(OdBmMap<OdBmStretchRefKeyPtr, OdGePoint3d> &) const;
  OdGeExtents3d getCollapsedOutline() const;
  double getOutlineOffsetItem(OdUInt32 idx) const;
  double getOriginOffsetAcrossItem(OdUInt32 idx) const;
  double getOriginOffsetAlong() const;
  OdInt32 getOutlineEndIdxItem(OdUInt32 idx) const;
  OdInt32 getLineDirIdx() const;
  OdInt32 getOriginEndIdx() const;
  //
  // Main functionality
  //
};
#endif // _BM_FAMSYMSTRETCHDESCRIPTOR_H_

