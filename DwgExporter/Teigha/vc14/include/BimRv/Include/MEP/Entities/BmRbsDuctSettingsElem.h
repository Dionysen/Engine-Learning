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

#ifndef _BM_RBSDUCTSETTINGSELEM_H_
#define _BM_RBSDUCTSETTINGSELEM_H_
#include "Database/BmElement.h"

class OdBmDuctConversionData;
typedef OdSmartPtr<OdBmDuctConversionData> OdBmDuctConversionDataPtr;
class OdBmMEPCalculationServerInfo;
typedef OdSmartPtr<OdBmMEPCalculationServerInfo> OdBmMEPCalculationServerInfoPtr;

class OdBmRbsDuctSettingsElem;
class OdBmRbsDuctSettingsElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsDuctSettingsElem object.
 */
typedef OdSmartPtr<OdBmRbsDuctSettingsElem> OdBmRbsDuctSettingsElemPtr;

/** \details
 A data type that represents an array of OdBmRbsDuctSettingsElem objects.
 */
typedef OdArray<OdBmRbsDuctSettingsElemPtr> OdBmRbsDuctSettingsElemPtrArray;

//----------------------------------------------------------
//
// OdBmRbsDuctSettingsElem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsDuctSettingsElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsDuctSettingsElem);
public:
  OdString getStrDuctConnectorSeparator() const;
  OdString getStrDuctSizeSeparator() const;
  OdString getStrOvalDuctSizeSeparator() const;
  OdString getStrOvalDuctSizeSuffix() const;
  OdString getStrRectDuctSizeSuffix() const;
  OdString getStrRoundDuctSizePrefix() const;
  OdString getStrRoundDuctSizeSuffix() const;
  void getMapDuctRiseDropSettings(OdBmMap<OdInt32, OdInt32> &) const;
  void getMapDuctSystemTypeToSettings(OdBmMap<OdInt32, OdBmDuctConversionDataPtr> &) const;
  OdBmMEPCalculationServerInfoPtr getPressLossCalcServerInfo() const;
  void getSpecificAngles(OdBmMap<double, bool> &) const;
  double getAirDensity() const;
  double getAirViscosity() const;
  double getDuctElbowIncrementAngle() const;
  double getDuctFittingAnnotationSize() const;
  double getDuctRiseDropAnnoSize() const;
  double getFlexDuctLength() const;
  OdInt32 getFittingAngleUsage() const;
  bool getDuctAllowConversionSettingsPerSystemType() const;
  bool getDuctUseAnnoScaleFor1LineFittings() const;
  OdString getCenterline() const;
  OdString getFlatOnBottom() const;
  OdString getFlatOnTop() const;
  OdString getSetDown() const;
  OdString getSetUp() const;
  OdString getSetDownFromBottom() const;
  OdString getSetUpFromBottom() const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSDUCTSETTINGSELEM_H_

