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

#ifndef _BM_ANALYSISDISPLAYLEGENDSETTINGS_H_
#define _BM_ANALYSISDISPLAYLEGENDSETTINGS_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmAnalysisDisplayLegendSettings;
class OdBmAnalysisDisplayLegendSettingsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAnalysisDisplayLegendSettings object.
 */
typedef OdSmartPtr<OdBmAnalysisDisplayLegendSettings> OdBmAnalysisDisplayLegendSettingsPtr;

/** \details
 A data type that represents an array of OdBmAnalysisDisplayLegendSettings objects.
 */
typedef OdArray<OdBmAnalysisDisplayLegendSettingsPtr> OdBmAnalysisDisplayLegendSettingsPtrArray;

//----------------------------------------------------------
//
// OdBmAnalysisDisplayLegendSettings
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAnalysisDisplayLegendSettings : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAnalysisDisplayLegendSettings);
public:
  double getNumberForScale() const;
  double getRounding() const;
  OdInt32 getColorRangeAndScaleHeight() const;
  OdInt32 getColorRangeAndScaleWidth() const;
  OdBmObjectId getHeadingTextTypeId() const;
  OdInt32 getNumberOfSteps() const;
  OdBmObjectId getTextTypeId() const;
  bool getShowDataDescription() const;
  bool getShowDataName() const;
  bool getShowLegend() const;
  bool getShowUnits() const;
  //
  // Main functionality
  //
};
#endif // _BM_ANALYSISDISPLAYLEGENDSETTINGS_H_

