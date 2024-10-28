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

#ifndef _BM_STAIRSRUNANDLANDING_H_
#define _BM_STAIRSRUNANDLANDING_H_
#include "Database/BmElement.h"

class OdBmStairsRunLayoutInfo;
typedef OdSmartPtr<OdBmStairsRunLayoutInfo> OdBmStairsRunLayoutInfoPtr;
class OdBmBdryCurveInfo;
typedef OdSmartPtr<OdBmBdryCurveInfo> OdBmBdryCurveInfoPtr;
class OdBmStairsTreadInfo;
typedef OdSmartPtr<OdBmStairsTreadInfo> OdBmStairsTreadInfoPtr;
class OdBmStairsRunInfo;
typedef OdSmartPtr<OdBmStairsRunInfo> OdBmStairsRunInfoPtr;
class OdBmStairsLogicJoinInfo;
typedef OdSmartPtr<OdBmStairsLogicJoinInfo> OdBmStairsLogicJoinInfoPtr;
class OdBmCurveLoop;
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStairsRunAndLanding;
class OdBmStairsRunAndLandingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsRunAndLanding object.
 */
typedef OdSmartPtr<OdBmStairsRunAndLanding> OdBmStairsRunAndLandingPtr;

/** \details
 A data type that represents an array of OdBmStairsRunAndLanding objects.
 */
typedef OdArray<OdBmStairsRunAndLandingPtr> OdBmStairsRunAndLandingPtrArray;

//----------------------------------------------------------
//
// OdBmStairsRunAndLanding
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsRunAndLanding : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsRunAndLanding);
public:
  OdBmStairsRunLayoutInfoPtr getCompatibleCrvInfo() const;
  void getLeftBoundary(OdArray<OdBmBdryCurveInfoPtr> &) const;
  void getRightBoundary(OdArray<OdBmBdryCurveInfoPtr> &) const;
  void getStairsTreadInfos(OdArray<OdBmStairsTreadInfoPtr> &) const;
  void getStairsRunInfos(OdArray<OdBmStairsRunInfoPtr> &) const;
  OdBmStairsLogicJoinInfoPtr getLogicJoinInfo() const;
  void getNotchDrvCrv(OdArray<OdBmObjectPtr> &) const;
  OdBmObjectId getStairsId() const;
  OdBmObjectId getTriserSymId() const;
  OdInt32 getBaseRiserIndex() const;
  bool getIsMirrored() const;
  void getStringers(OdBmObjectIdArray &) const;
  void getSupportPathCurveLoops(OdArray<OdBmCurveLoopPtr> &) const;
  void getSupportExistenceStatusMap(OdBmMap<OdInt32, OdInt32> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSRUNANDLANDING_H_

