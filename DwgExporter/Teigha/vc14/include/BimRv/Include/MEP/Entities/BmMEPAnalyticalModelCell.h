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

#ifndef _BM_MEPANALYTICALMODELCELL_H_
#define _BM_MEPANALYTICALMODELCELL_H_
#include "Database/Entities/BmCell.h"

class OdBmMEPAnalyticalFittingData;
typedef OdSmartPtr<OdBmMEPAnalyticalFittingData> OdBmMEPAnalyticalFittingDataPtr;
class OdBmMEPAnalyticalNode;
typedef OdSmartPtr<OdBmMEPAnalyticalNode> OdBmMEPAnalyticalNodePtr;
class OdBmMEPAnalyticalSegment;
typedef OdSmartPtr<OdBmMEPAnalyticalSegment> OdBmMEPAnalyticalSegmentPtr;
class OdBmObjectId;

class OdBmMEPAnalyticalModelCell;
class OdBmMEPAnalyticalModelCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMEPAnalyticalModelCell object.
 */
typedef OdSmartPtr<OdBmMEPAnalyticalModelCell> OdBmMEPAnalyticalModelCellPtr;

/** \details
 A data type that represents an array of OdBmMEPAnalyticalModelCell objects.
 */
typedef OdArray<OdBmMEPAnalyticalModelCellPtr> OdBmMEPAnalyticalModelCellPtrArray;

//----------------------------------------------------------
//
// OdBmMEPAnalyticalModelCell
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmMEPAnalyticalModelCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMEPAnalyticalModelCell);
public:
  OdBmMEPAnalyticalFittingDataPtr getFittingData() const;
  void getNodes(OdArray<OdBmMEPAnalyticalNodePtr> &) const;
  void getSegments(OdArray<OdBmMEPAnalyticalSegmentPtr> &) const;
  OdBmObjectId getBaseElementId() const;
  OdBmObjectId getEquipmentGroupId() const;
  OdBmObjectId getSystemId() const;
  bool getIsFlowOff() const;
  //
  // Main functionality
  //
};
#endif // _BM_MEPANALYTICALMODELCELL_H_

