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

#ifndef _BM_LABELUTILSPE_H_
#define _BM_LABELUTILSPE_H_

#include "BimCommon.h"
#include "Common/BuiltIns/BmBuiltInCategory.h"
#include "Common/BuiltIns/BmBuiltInParameter.h"
#include "Common/BuiltIns/BmBuiltInParameterGroup.h"
#include "Database/BmUnitEnums.h"
#include "Database/BmParamEnums.h"
#include "Database/Entities/BmFormatOptions.h"
#include "Database/Entities/BmAUnits.h"
#include "Common/Enums/BmAreaSpaceType.h"
#include "Common/Enums/BmSystemType.h"
#include "Common/Enums/BmColorSchemeMessage.h"
#include "Common/Enums/BmCurveElemNameType.h"
#include "Common/Enums/BmPipeJointType.h"
#include "Common/BuiltIns/BmBuiltInCircuitNamingScheme.h"

class OdBmDatabase;

#define ODBM_LABELUTILS()                                                      \
  OdBmLabelUtilsPEPtr(OdBmObject::desc()->getX(OdBmLabelUtilsPE::desc()))

// clang-format off
#define ODBM_ENUMS_WITH_LABEL_DEF(DEF, PREPROC, ...)                        \
  PREPROC(DEF, BuiltInParameters,            0, BuiltInParameter)           \
  PREPROC(DEF, BuiltInParameterGroups,       1, BuiltInParameterGroup)      \
  PREPROC(DEF, BuiltInCategories,            2, BuiltInCategory)            \
  PREPROC(DEF, ParameterTypes,               3, ParameterType)              \
  PREPROC(DEF, DisplayUnitTypes,             4, DisplayUnitType)            \
  PREPROC(DEF, UnitSymbolTypes,              5, UnitSymbolType)             \
  PREPROC(DEF, UnitTypes,                    6, UnitType)                   \
  PREPROC(DEF, FamilyNames,                  7, FamilyName)                 \
  PREPROC(DEF, SystemTypes,                  8, SystemType)                 \
  PREPROC(DEF, AreaSpaceTypes,               9, AreaSpaceType)              \
  PREPROC(DEF, ColorSchemeMessages,         10, ColorSchemeMessage)         \
  PREPROC(DEF, CurveElemNameTypes,          11, CurveElemNameType)          \
  PREPROC(DEF, PipeJointTypes,              12, PipeJointType)              \
  PREPROC(DEF, BuiltInCircuitNamingSchemes, 13, BuiltInCircuitNamingScheme)
// clang-format on

#define ODBM_ENUMS_WITH_LABEL(DEF, ...)                                             \
  ODBM_ENUMS_WITH_LABEL_DEF(DEF, ODBM_APPLY_WITHOUT_ARG2)

#define ODBM_ENUMS_WITH_LABEL2(DEF, ...) ODBM_ENUMS_WITH_LABEL_DEF(DEF, ODBM_APPLY)

ODBM_ENUMERATION(EnumsWithLabels, ODBM_ENUMS_WITH_LABEL2)

#undef ODBM_ENUMS_WITH_LABEL2

/** \details
This class is the Label Utils Protocol Extension class.

<group Database_Classes>
*/
class ODRX_ABSTRACT TB_DB_EXPORT OdBmLabelUtilsPE : public OdRxObject {
public:
  //DOM-IGNORE-BEGIN
  ODRX_DECLARE_MEMBERS(OdBmLabelUtilsPE);
  //DOM-IGNORE-END
  
  /** \details
    Checks if the value is common.
    
    \param value [in] Name of the ".csv" file.
  */
  virtual bool isCommon(const OdBm::EnumsWithLabels::Enum value) const = 0;
  
  /** \details
    Checks if the parameter has values.
    
    \param value [in] Name of the ".csv" file.
  */
  virtual bool hasValues(const OdBm::EnumsWithLabels::Enum value) const = 0;
  
  /** \details
    Gets a label for the BuiltInParameter value.
  */
  virtual OdString getLabelFor(const OdBm::BuiltInParameter::Enum value) const = 0;
  
  /** \details
    Gets a label for the BuiltInParameterGroup value.
  */
  virtual OdString
  getLabelFor(const OdBm::BuiltInParameterGroup::Enum value) const = 0;
  
  /** \details
    Gets a label for the DisplayUnitType value.
  */
  virtual OdString getLabelFor(const OdBm::DisplayUnitType::Enum value) const = 0;
  
  /** \details
    Gets a label for the ParameterType value.
  */
  virtual OdString getLabelFor(const OdBm::ParameterType::Enum value) const = 0;
  
  /** \details
    Gets a label for the UnitSymbolType value.
  */
  virtual OdString getLabelFor(const OdBm::UnitSymbolType::Enum value) const = 0;
  
  /** \details
    Gets a label for the UnitType value.
  */
  virtual OdString getLabelFor(const OdBm::UnitType::Enum value) const = 0;
  
  /** \details
    Gets a label for the BuiltInCategory value.
  */
  virtual OdString getLabelFor(const OdBm::BuiltInCategory::Enum value) const = 0;
  
  /** \details
    Gets a label for the FamilyName value.
  */
  virtual OdString getLabelFor(const OdBm::FamilyName::Enum value) const = 0;
  
  /** \details
    Gets a label for the SystemType value.
  */
  virtual OdString getLabelFor(const OdBm::SystemType::Enum value) const = 0;
  
  /** \details
    Gets a label for the AreaSpaceType value.
  */
  virtual OdString getLabelFor(const OdBm::AreaSpaceType::Enum value) const = 0;
  
  /** \details
    Gets a label for the BmColorSchemeMessage value.
  */
  virtual OdString getLabelFor(const OdBm::ColorSchemeMessage::Enum value) const = 0;

  /** \details
    Gets a label for the BmCurveElemNameType value.
  
    \param value [in] Enum of the name.
    \returns name as a string from enum value
  */
  virtual OdString getLabelFor(const OdBm::CurveElemNameType::Enum value) const = 0;

  /** \details
    Gets a label for the BmPipeJointType value.
    
    \param value [in] Enum of the name.
    \returns name as a string from enum value
  */
  virtual OdString getLabelFor(const OdBm::PipeJointType::Enum value) const = 0;

  /** \details
    Gets a label for the BuiltInCircuitNamingScheme value.

    \param value [in] Enum of the name.
    \returns name as a string from enum value
  */
  virtual OdString getLabelFor(const OdBm::BuiltInCircuitNamingScheme::Enum value) const = 0;

  /** \details
    Returns the value in desired format with options.
    
    \param aUnits [in] Possible units.
    \param unitType [in] Type of a unit.
    \param value [in] Value to format.
    \param formatOptions [in] Options to apply.
    \param editing [in] Flags whether editing should be done.
  */
  virtual OdString
  format(const OdBmAUnitsPtr& aUnits, const OdBm::UnitType::Enum unitType,
         const double value,
         const OdBmFormatOptionsPtr& formatOptions,
         const bool editing = false) = 0;
  
  /** \details
    Returns the value in desired format with options.
    
    \param aUnits [in] Possible units.
    \param unitType [in] Type of a unit.
    \param value [in] Value to format.
    \param editing [in] Flags whether editing should be done.
    \param formatOptions [in] Options to apply.
  */
  OdString
  format(const OdBmAUnitsPtr& aUnits, const OdBm::UnitType::Enum unitType,
         const double value,
         const bool editing = false,
         const OdBmFormatOptionsPtr& formatOptions = OdBmFormatOptionsPtr());
  
  /** \details
    Returns the value in desired format with options.
    
    \param pDb [in] Possible units.
    \param unitType [in] Type of a unit.
    \param value [in] Value to format.
    \param editing [in] Flags whether editing should be done.
    \param formatOptions [in] Options to apply.
  */
  OdString
  format(OdBmDatabase* pDb, const OdBm::UnitType::Enum unitType,
         const double value,
         const bool editing = false,
         const OdBmFormatOptionsPtr& formatOptions = OdBmFormatOptionsPtr());
  
  /** \details
    Returns the value in desired format with options.
    
    \param pDb [in] Possible units.
    \param unitType [in] Type of a unit.
    \param value [in] Value to format.
    \param editing [in] Flags whether editing should be done.
    \param formatOptions [in] Options to apply.
  */
  OdString
  format(OdBmDatabase* pDb, const OdBm::UnitType::Enum unitType,
         const double value,
         const OdBmFormatOptionsPtr& formatOptions,
         const bool editing = false);

                          
  /** \details
  Returns the Omni class title.
  \param code [in] OdString parameter.
  */
  virtual OdString getOmniClassTitle(const OdString& code) const = 0;
};

typedef OdSmartPtr<OdBmLabelUtilsPE> OdBmLabelUtilsPEPtr;

#endif // _BM_LABELUTILSPE_H_
