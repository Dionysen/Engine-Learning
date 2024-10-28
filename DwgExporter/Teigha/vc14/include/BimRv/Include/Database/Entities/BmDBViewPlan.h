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

#ifndef _BM_DBVIEWPLAN_H_
#define _BM_DBVIEWPLAN_H_
#include "Database/Entities/BmDBView.h"
#include "Database/Enums/BmViewNameFormat.h"

class OdBmPlanViewRange;
typedef OdSmartPtr<OdBmPlanViewRange> OdBmPlanViewRangePtr;
class OdBmPlanViewRange2;
typedef OdSmartPtr<OdBmPlanViewRange2> OdBmPlanViewRange2Ptr;
class OdBmObjectId;

class OdBmDBViewPlan;
class OdBmDBViewPlanImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBViewPlan object.
 */
typedef OdSmartPtr<OdBmDBViewPlan> OdBmDBViewPlanPtr;

/** \details
 A data type that represents an array of OdBmDBViewPlan objects.
 */
typedef OdArray<OdBmDBViewPlanPtr> OdBmDBViewPlanPtrArray;

//----------------------------------------------------------
//
// OdBmDBViewPlan
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBViewPlan : public OdBmDBView {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBViewPlan);
public:
  OdBmObjectPtr getCutter() const;
  OdBmPlanViewRangePtr getPlanViewRange() const;
  OdBmPlanViewRange2Ptr getPlanViewRange2() const;
  OdBmObjectPtr getViewDepthCutter() const;
  double getBottomClipElev() const;
  double getColumnSymbolElev() const;
  double getCutPlaneElev() const;
  double getLevelBelowElev() const;
  double getTopClipElev() const;
  double getUnderlayBottom() const;
  double getUnderlayTop() const;
  OdBmObjectId getIdUnderlayLevel() const;
  OdBmObjectId getIdUnderlayTopLevel() const;
  OdInt32 getJoinCleanType() const;
  OdInt32 getPlanViewType() const;
  OdInt32 getUnderlayOrientation() const;
  bool getUseTrueNorth() const;
  bool getUnderlayIsAbsolute() const;
  //
  // Main functionality
  //

public:
  virtual OdBm::ViewNameFormat::Enum getViewNameFormat() const;
};


#endif // _BM_DBVIEWPLAN_H_

