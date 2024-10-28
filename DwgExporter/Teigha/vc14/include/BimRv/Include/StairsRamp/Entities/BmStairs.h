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

#ifndef _BM_STAIRS_H_
#define _BM_STAIRS_H_
#include "Database/BmElement.h"

class OdBmRunBoundaryInfo;
typedef OdSmartPtr<OdBmRunBoundaryInfo> OdBmRunBoundaryInfoPtr;
class OdBmIntStairInfo;
typedef OdSmartPtr<OdBmIntStairInfo> OdBmIntStairInfoPtr;
class OdBmBdryCurveInfo;
typedef OdSmartPtr<OdBmBdryCurveInfo> OdBmBdryCurveInfoPtr;
class OdBmStringerCurveOverrides;
typedef OdSmartPtr<OdBmStringerCurveOverrides> OdBmStringerCurveOverridesPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStairs;
class OdBmStairsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairs object.
 */
typedef OdSmartPtr<OdBmStairs> OdBmStairsPtr;

/** \details
 A data type that represents an array of OdBmStairs objects.
 */
typedef OdArray<OdBmStairsPtr> OdBmStairsPtrArray;

//----------------------------------------------------------
//
// OdBmStairs
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairs : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairs);
public:
  void getTopRiserSegIds(OdBmObjectIdArray &) const;
  void getBotRiserSegIds(OdBmObjectIdArray &) const;
  double getRiserHeight() const;
  double getTreadDepth() const;
  double getSavedHeight() const;
  OdGeVector3d getDownOffset() const;
  OdGeVector3d getUpOffset() const;
  OdBmObjectId getSketchId() const;
  OdBmObjectId getBottomId() const;
  OdBmObjectId getTopId() const;
  OdBmObjectId getMultistoryTopId() const;
  OdBmObjectId getStairsAttrId() const;
  OdBmObjectId getStairsSymbolId() const;
  OdInt32 getVersion() const;
  bool getIsLeadBoundaryIsLeft() const;
  bool getIsRailingsCreated() const;
  bool getIsCreateOldPlanGRep() const;
  bool getIsUseOldStringerHeightDef() const;
  bool getIsFlippedForPlan() const;
  bool getIsMirror() const;
  bool getIsStairsIncomplete() const;
  void getTempGLinePos(OdArray<OdInt32Array > &) const;
  void getRunBdryMap(OdArray<OdBmRunBoundaryInfoPtr> &) const;
  void getTempGLines(OdArray<OdBmObjectPtr> &) const;
  void getOrderedRisers(OdArray<OdBmIntStairInfoPtr> &) const;
  void getLeftBdry(OdArray<OdBmBdryCurveInfoPtr> &) const;
  void getRightBdry(OdArray<OdBmBdryCurveInfoPtr> &) const;
  void getRegisteredRailings(OdBmObjectIdArray &) const;
  void getRegisteredRailingsLoc(OdBoolArray &) const;
  void getStringerCurveOverrides(OdArray<OdBmStringerCurveOverridesPtr> &) const;
  OdBmObject* getPADoc() const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRS_H_

