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

#ifndef _BM_FORMATOPTIONS_H_
#define _BM_FORMATOPTIONS_H_
#include "Base/BmObject.h"
#include "Geometry/Enums/BmRoundingMethod.h"

class OdBmForgeTypeId;

class OdBmFormatOptions;
class OdBmFormatOptionsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFormatOptions object.
 */
typedef OdSmartPtr<OdBmFormatOptions> OdBmFormatOptionsPtr;

/** \details
 A data type that represents an array of OdBmFormatOptions objects.
 */
typedef OdArray<OdBmFormatOptionsPtr> OdBmFormatOptionsPtrArray;

//----------------------------------------------------------
//
// OdBmFormatOptions
//
//----------------------------------------------------------

/** \details
This class describes getters and setters for format options.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFormatOptions : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFormatOptions);
public:
  /** \details
    Retrieves the current accuracy value.
    
    \returns Double value representing accuracy.
    \remarks Possible returned value can be something like 0.0001.
  */
  double getAccuracy() const;
  /** \details
    Sets the new accuracy value.
    
    \param double [in] New accuracy value to be set.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    \remarks Possible input value can be something like 0.0001.
  */
  OdResult setAccuracy(double);
  /** \details
    Retrieves the current value of a flag that states whether to delete leading zeros for feet and inches.
    
    \returns true if the flag is to suppress leading zeros, false - otherwise.
  */
  bool getIsSuppressLeadingZeros() const;
  /** \details
    Sets the new value of a flag that states whether to delete leading zeros for feet and inches.
    
    \param bool [in] New value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsSuppressLeadingZeros(bool);
  /** \details
    Retrieves the current value of a flag that states whether to suppress spaces.
    
    \returns true if the flag is set to suppress spaces, false - otherwise.
  */
  bool getIsSuppressSpaces() const;
  /** \details
    Sets the new value of a flag that states whether to suppress spaces.
    
    \param bool [in] New value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsSuppressSpaces(bool);
  /** \details
    Retrieves the current value of a flag that states whether to delete trailing zeros for.
    
    \returns true if the flag is to suppress leading zeros, false - otherwise.
  */
  bool getIsSuppressTrailingZeros() const;
  /** \details
    Sets the new value of a flag that states whether to suppress trailing zeros.
    
    \param bool [in] New value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsSuppressTrailingZeros(bool);
  /** \details
    Retrieves the current value of a flag that states whether to use default settings for physical quantities.
    
    \returns true if the flag is set to use default settings, false - otherwise.
  */
  bool getIsUseDefault() const;
  /** \details
    Sets the new value of a flag that states whether to use default settings for physical quantities.
    
    \param bool [in] New value of a flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsUseDefault(bool);
  /** \details
    Retrieves the current value of a flag that states whether to use grouping for digits.
    
    \returns true if the flag is set to use grouping, false - otherwise.
  */
  bool getIsUseGrouping() const;
  /** \details
    Sets the new value of a flag that states whether to use grouping for digits.
    
    \param bool [in] New value of a flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsUseGrouping(bool);
  /** \details
    Retrieves the current value of a flag that states whether to use '+' symbol before positive values.
    
    \returns true if the flag is set to use '+' symbol before positive values, false - otherwise.
  */
  bool getIsUsePlusPrefix() const;
  /** \details
    Sets the new value of a flag that states whether to use '+' symbol before positive values.
    
    \param bool [in] New value of a flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsUsePlusPrefix(bool);
  /** \details
    Retrieves the current rounding method.
    
    \returns A value from the OdBm::RoundingMethod::Enum.
    \remarks This method is not implemented yet.
  */
  OdBm::RoundingMethod::Enum getRoundingMethod() const;
  /** \details
    Sets the new rounding method.
    
    \param OdBm::RoundingMethod::Enum [in] New rounding method.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    \remarks This method is not implemented yet.
  */
  OdResult setRoundingMethod(OdBm::RoundingMethod::Enum);
  OdBmForgeTypeId getSymbolTypeId() const;
  OdResult setSymbolTypeId(const OdBmForgeTypeId&);
  OdBmForgeTypeId getUnitTypeId() const;
  OdResult setUnitTypeId(const OdBmForgeTypeId&);
  //
  // Main functionality
  //


};


#endif // _BM_FORMATOPTIONS_H_

