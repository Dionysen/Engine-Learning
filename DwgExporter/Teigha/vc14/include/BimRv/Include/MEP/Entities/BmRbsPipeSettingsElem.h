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

#ifndef _BM_RBSPIPESETTINGSELEM_H_
#define _BM_RBSPIPESETTINGSELEM_H_
#include "Database/BmElement.h"

class OdBmPipeConversionData;
typedef OdSmartPtr<OdBmPipeConversionData> OdBmPipeConversionDataPtr;
class OdBmMEPCalculationServerInfo;
typedef OdSmartPtr<OdBmMEPCalculationServerInfo> OdBmMEPCalculationServerInfoPtr;

class OdBmRbsPipeSettingsElem;
class OdBmRbsPipeSettingsElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsPipeSettingsElem object.
 */
typedef OdSmartPtr<OdBmRbsPipeSettingsElem> OdBmRbsPipeSettingsElemPtr;

/** \details
 A data type that represents an array of OdBmRbsPipeSettingsElem objects.
 */
typedef OdArray<OdBmRbsPipeSettingsElemPtr> OdBmRbsPipeSettingsElemPtrArray;

//----------------------------------------------------------
//
// OdBmRbsPipeSettingsElem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsPipeSettingsElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsPipeSettingsElem);
public:
  OdString getPipeSizeSuffix() const;
  OdString getPipeSizePrefix() const;
  OdString getPipeConnectorSeparator() const;
  void getMapSystemTypeToPipeSettings(OdBmMap<OdInt32, OdBmPipeConversionDataPtr> &) const;
  void getPipeSlopes(OdDoubleArray &) const;
  void getSpecificAngles(OdBmMap<double, bool> &) const;
  double getPipeFittingAnnotationSize() const;
  double getPipeElbowIncrementAngle() const;
  double getPipeRiseDropAnnoSize() const;
  double getPipeConnectorTolerance() const;
  OdInt32 getDipingContourRiseType() const;
  OdInt32 getDipingContourDropType() const;
  OdInt32 getDiping1LineBendRiseType() const;
  OdInt32 getDiping1LineBendDropType() const;
  OdInt32 getDiping1LineJunctionRiseType() const;
  OdInt32 getDiping1LineJunctionDropType() const;
  OdInt32 getFittingAngleUsage() const;
  bool getPipeUseAnnoScaleFor1LineFittings() const;
  bool getPipeAllowConversionSettingsPerSystemType() const;
  OdBmMEPCalculationServerInfoPtr getPressLossCalcServerInfo() const;
  OdBmMEPCalculationServerInfoPtr getFlowConvertionServerInfo() const;
  OdString getCenterline() const;
  OdString getFlatOnBottom() const;
  OdString getFlatOnTop() const;
  OdString getSetDown() const;
  OdString getSetUp() const;
  bool getEnableAnalysisForClosedLoopHydronicPipingNetworks() const;
  //
  // Main functionality
  //

  void addSystemTypeToPipeSettings(OdInt32 aKey, OdBmPipeConversionDataPtr aValue);
  void addPipeSlope(double aValue);
  void addSpecificAngle(double aAngle, bool aFlag = true);
};
#endif // _BM_RBSPIPESETTINGSELEM_H_

