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

#ifndef _BM_DALTONEDGEHOLDER_H_
#define _BM_DALTONEDGEHOLDER_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmDaltonEdgeHolder;
class OdBmDaltonEdgeHolderImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDaltonEdgeHolder object.
 */
typedef OdSmartPtr<OdBmDaltonEdgeHolder> OdBmDaltonEdgeHolderPtr;

/** \details
 A data type that represents an array of OdBmDaltonEdgeHolder objects.
 */
typedef OdArray<OdBmDaltonEdgeHolderPtr> OdBmDaltonEdgeHolderPtrArray;

//----------------------------------------------------------
//
// OdBmDaltonEdgeHolder
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmDaltonEdgeHolder : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDaltonEdgeHolder);
public:
  double getCoefficient() const;
  double getFlow() const;
  double getFriction() const;
  double getFrictionFactor() const;
  double getPressureDrop() const;
  double getRelativeRoughness() const;
  double getReynoldsNumber() const;
  double getVelocity() const;
  OdInt32 getDaltonElementId() const;
  OdInt32 getEndNode() const;
  OdInt32 getIndex() const;
  OdInt32 getMepSegmentId() const;
  OdBmObjectId getRevitElementId() const;
  OdInt32 getSectionNumber() const;
  OdInt32 getStartNode() const;
  bool getIsCriticalPath() const;
  bool getIsReversed() const;
  double getDesignFlow() const;
  OdInt32 getEdgeStatus() const;
  OdInt32 getLoopLevel() const;
  OdInt32 getLoopNumber() const;
  bool getIsStandby() const;
  //
  // Main functionality
  //
};
#endif // _BM_DALTONEDGEHOLDER_H_

