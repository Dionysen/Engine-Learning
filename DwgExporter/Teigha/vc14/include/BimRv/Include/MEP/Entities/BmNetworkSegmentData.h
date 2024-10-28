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

#ifndef _BM_NETWORKSEGMENTDATA_H_
#define _BM_NETWORKSEGMENTDATA_H_
#include "Base/BmObject.h"

class OdBmNetworkSegmentId;
typedef OdSmartPtr<OdBmNetworkSegmentId> OdBmNetworkSegmentIdPtr;

class OdBmNetworkSegmentData;
class OdBmNetworkSegmentDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNetworkSegmentData object.
 */
typedef OdSmartPtr<OdBmNetworkSegmentData> OdBmNetworkSegmentDataPtr;

/** \details
 A data type that represents an array of OdBmNetworkSegmentData objects.
 */
typedef OdArray<OdBmNetworkSegmentDataPtr> OdBmNetworkSegmentDataPtrArray;

//----------------------------------------------------------
//
// OdBmNetworkSegmentData
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmNetworkSegmentData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNetworkSegmentData);
public:
  void getDownstreamSegments(OdArray<OdBmNetworkSegmentIdPtr> &) const;
  void getUpstreamSegments(OdArray<OdBmNetworkSegmentIdPtr> &) const;
  double getCoefficient() const;
  double getFlow() const;
  double getFriction() const;
  double getFrictionFactor() const;
  double getPressureDrop() const;
  double getRelativeRoughness() const;
  double getReynoldNumber() const;
  double getVelocity() const;
  OdInt32 getFlowState() const;
  OdInt32 getSectionNumber() const;
  bool getIsCriticalPath() const;
  double getDesignFlow() const;
  OdInt32 getSegmentStatus() const;
  bool getIsStandby() const;
  //
  // Main functionality
  //
};
#endif // _BM_NETWORKSEGMENTDATA_H_

