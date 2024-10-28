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

#ifndef _BM_STAIRSRUNLAYOUTINFO_H_
#define _BM_STAIRSRUNLAYOUTINFO_H_
#include "Base/BmObject.h"

class OdBmRiserIntersectionInfos;
typedef OdSmartPtr<OdBmRiserIntersectionInfos> OdBmRiserIntersectionInfosPtr;
class OdBmCurveChain;
typedef OdSmartPtr<OdBmCurveChain> OdBmCurveChainPtr;
class OdBmIntStairInfo;
typedef OdSmartPtr<OdBmIntStairInfo> OdBmIntStairInfoPtr;

class OdBmStairsRunLayoutInfo;
class OdBmStairsRunLayoutInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsRunLayoutInfo object.
 */
typedef OdSmartPtr<OdBmStairsRunLayoutInfo> OdBmStairsRunLayoutInfoPtr;

/** \details
 A data type that represents an array of OdBmStairsRunLayoutInfo objects.
 */
typedef OdArray<OdBmStairsRunLayoutInfoPtr> OdBmStairsRunLayoutInfoPtrArray;

//----------------------------------------------------------
//
// OdBmStairsRunLayoutInfo
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsRunLayoutInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsRunLayoutInfo);
public:
  void getRiserIntInfos(OdArray<OdBmRiserIntersectionInfosPtr> &) const;
  void getBdries(OdArray<OdBmCurveChainPtr> &) const;
  void getRisers(OdArray<OdBmCurveChainPtr> &) const;
  void getSortedRiserIdxes(OdInt32Array &) const;
  void getOrderedRisers(OdArray<OdBmIntStairInfoPtr> &) const;
  bool getIsLeadingIsLeft() const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSRUNLAYOUTINFO_H_

