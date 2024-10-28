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

#ifndef _BM_SAMPLELABELUTILSPE_H_
#define _BM_SAMPLELABELUTILSPE_H_

#include "BimCommon.h"
#include "OdArray.h"
#include "Database/PE/BmLabelUtilsPE.h"
#include "MEP/BmMEPEnums.h"

#define ODBM_LABELUTILS_ENUM_MEMBER_HEADER(PLURAL, SINGULAR)                   \
  ODBM_LABELUTILS_MEMBER_HEADER(SINGULAR, const OdBm::SINGULAR::Enum,          \
                                OdBm::SINGULAR::Enum, getLabelFor)

#define ODBM_LABELUTILS_MEMBER_HEADER(ParamAlias, InputParamType,              \
                                      StorageParamType, GetterName)            \
public:                                                                        \
  virtual OdString GetterName(InputParamType) const ODRX_OVERRIDE;             \
                                                                               \
private:                                                                       \
  typedef OdBmMap<StorageParamType, OdString> ParamAlias##Labels;              \
  mutable ParamAlias##Labels m_labels##ParamAlias##Map;                        \
  ParamAlias##Labels create##ParamAlias##Map() const;

/** \details
This class contains functionality for getting labels for enum values in English.

<group Extension_Classes>
*/
class OdBmSampleLabelUtilsPE : public OdBmLabelUtilsPE {

  ODBM_ENUMS_WITH_LABEL(ODBM_LABELUTILS_ENUM_MEMBER_HEADER);
  ODBM_LABELUTILS_MEMBER_HEADER(OmniClass, const OdString&, OdString,
                                getOmniClassTitle)
public:
  //DOM-IGNORE-BEGIN
  ODRX_DECLARE_MEMBERS(OdBmSampleLabelUtilsPE);
  //DOM-IGNORE-END
  
  /** \details
  Sets the lookup root.
  \param path [in] Lookup root to be set.
  */
  virtual void setLookupRoot(const OdString& path);
  
  /** \details
  Returns the lookup root. 
  */
  virtual OdString getLookupRoot() const;
  
  /** \details
  Returns the path to a ".csv" file.
  \param value [in] Name of a ".csv" file.
  */
  virtual OdString getPath(const OdBm::EnumsWithLabels::Enum value) const;
  
  /** \details
  Returns the path to "OmniClasses.csv"
  */
  virtual OdString getOmniClassesPath() const;
  
  /** \details
  Returns the path to "Checksums.txt".
  */
  virtual OdString getChecksumsPath() const;
  
  /** \details
  Checks if the parameter is common.
  \param value [in] Name of a ".csv" file.
  \returns true if the parameter is common.
  */
  virtual bool isCommon(const OdBm::EnumsWithLabels::Enum value) const ODRX_OVERRIDE;
  
  /** \details
  Checks if the parameter has values.
  \param value [in] Name of a ".csv" file.
  \returns true if the parameter has values.
  */
  virtual bool hasValues(const OdBm::EnumsWithLabels::Enum value) const ODRX_OVERRIDE;

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
         const OdBmFormatOptionsPtr& formatOptions = OdBmFormatOptionsPtr(),
         const bool editing = false) ODRX_OVERRIDE;

private:
  OdString relativePath(const OdBm::EnumsWithLabels::Enum) const;

  mutable std::map<OdBm::EnumsWithLabels::Enum, bool> m_commonness;
  mutable std::map<OdBm::EnumsWithLabels::Enum, bool> m_hasvalue;
  OdString m_lookupRoot;
};

#endif // _BM_SAMPLELABELUTILSPE_H_
