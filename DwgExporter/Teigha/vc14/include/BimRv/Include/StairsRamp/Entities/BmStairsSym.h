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

#ifndef _BM_STAIRSSYM_H_
#define _BM_STAIRSSYM_H_
#include "Database/Entities/BmSymbol.h"

class OdBmIntStairInfo;
typedef OdSmartPtr<OdBmIntStairInfo> OdBmIntStairInfoPtr;
class OdBmBdryCurveInfo;
typedef OdSmartPtr<OdBmBdryCurveInfo> OdBmBdryCurveInfoPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStairsSym;
class OdBmStairsSymImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsSym object.
 */
typedef OdSmartPtr<OdBmStairsSym> OdBmStairsSymPtr;

/** \details
 A data type that represents an array of OdBmStairsSym objects.
 */
typedef OdArray<OdBmStairsSymPtr> OdBmStairsSymPtrArray;

//----------------------------------------------------------
//
// OdBmStairsSym
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsSym : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsSym);
public:
  void getTopRiserSegIds(OdBmObjectIdArray &) const;
  void getBotRiserSegIds(OdBmObjectIdArray &) const;
  double getSavedHeight() const;
  double getTreadRearOffset() const;
  double getTreadVolume() const;
  double getRiserVolume() const;
  double getStringerVolume() const;
  double getMonolithicVolume() const;
  OdBmObjectId getStairsId() const;
  bool getIsStairsBadRiserTread() const;
  bool getIsStairsIncomplete() const;
  bool getUseMagentaPainting() const;
  void getOrderedRisers(OdArray<OdBmIntStairInfoPtr> &) const;
  void getLeftBdry(OdArray<OdBmBdryCurveInfoPtr> &) const;
  void getRightBdry(OdArray<OdBmBdryCurveInfoPtr> &) const;
  void getRiserGRepLoops(OdArray<OdBmObjectPtr> &) const;
  void getLeftBoundaryGRepCurves(OdArray<OdBmObjectPtr> &) const;
  void getLeftBoundaryGRepHeights(OdDoubleArray &) const;
  void getRightBoundaryGRepCurves(OdArray<OdBmObjectPtr> &) const;
  void getRightBoundaryGRepHeights(OdDoubleArray &) const;
  OdBmObjectPtr getClosedStringerGeom() const;
  OdBmObjectPtr getOpenStringerGeom() const;
  void getClosedStringerGRepLoops(OdArray<OdBmObjectPtr> &) const;
  void getOpenStringerGRepLoops(OdArray<OdBmObjectPtr> &) const;
  void getMiddleStringerGRepLoops(OdArray<OdBmObjectPtr> &) const;
  void getStairsTreadInfoArr(OdArray<OdBmObjectPtr> &) const;
  void getStairsRunInfoArr(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSSYM_H_

