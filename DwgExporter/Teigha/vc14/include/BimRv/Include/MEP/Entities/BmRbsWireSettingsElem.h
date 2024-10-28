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

#ifndef _BM_RBSWIRESETTINGSELEM_H_
#define _BM_RBSWIRESETTINGSELEM_H_
#include "Database/BmElement.h"

class OdBmCWireTickMarkStyle;
typedef OdSmartPtr<OdBmCWireTickMarkStyle> OdBmCWireTickMarkStylePtr;
class OdBmObjectId;

class OdBmRbsWireSettingsElem;
class OdBmRbsWireSettingsElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsWireSettingsElem object.
 */
typedef OdSmartPtr<OdBmRbsWireSettingsElem> OdBmRbsWireSettingsElemPtr;

/** \details
 A data type that represents an array of OdBmRbsWireSettingsElem objects.
 */
typedef OdArray<OdBmRbsWireSettingsElemPtr> OdBmRbsWireSettingsElemPtrArray;

//----------------------------------------------------------
//
// OdBmRbsWireSettingsElem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsWireSettingsElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsWireSettingsElem);
public:
  OdBmCWireTickMarkStylePtr getCWireTickMarkStyle() const;
  OdString getStrElectricalConnectorSeparator() const;
  double getWiringCrossingGap() const;
  double getMaxVoltageBranchSizing() const;
  double getMaxVoltageFeederSizing() const;
  double getAmbientTemperature() const;
  OdInt32 getShowTickMarks() const;
  OdInt32 getWireTickMarkStyle() const;
  OdInt32 getElectricalDataStyle() const;
  OdInt32 getCircuitDescriptionStyle() const;
  OdInt32 getWireHomeRunArrowCountStyle() const;
  OdBmObjectId getWireHomeRunArrowLeaderStyle() const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSWIRESETTINGSELEM_H_

