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

#ifndef _BM_APROPERTIES_H_
#define _BM_APROPERTIES_H_
#include "Geometry/Entities/BmAProperty.h"
// BEGIN: Includes
class OdBmCmColor;
// END: Includes



class OdBmAProperties;
class OdBmAPropertiesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAProperties object.
 */
typedef OdSmartPtr<OdBmAProperties> OdBmAPropertiesPtr;

/** \details
 A data type that represents an array of OdBmAProperties objects.
 */
typedef OdArray<OdBmAPropertiesPtr> OdBmAPropertiesPtrArray;

//----------------------------------------------------------
//
// OdBmAProperties
//
//----------------------------------------------------------

/** \details
This class allows to work with properties.

    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmAProperties : public OdBmAProperty {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAProperties);
public:
  void getAProperties(OdArray<OdBmAPropertyPtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Adds an integer property.
    
    \param name [in] Name of the property.
    \param value [in] Value of the property.
  */
  void addAPropertyInteger(const OdString& name, OdInt32 value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New value of the property.
  */
  void setAPropertyInteger(const OdString& name, OdInt32 value);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output value of the property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */  
  OdResult getAPropertyInteger(const OdString& name, OdInt32& value) const;
  
  /** \details
    Adds an enum property.
    
    \param name [in] Name of the property.
    \param value [in] Value of the property.
  */
  void addAPropertyEnum(const OdString& name, OdInt32 value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New value of the property.
  */
  void setAPropertyEnum(const OdString& name, OdInt32 value);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output value of the property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyEnum(const OdString& name, OdInt32& value) const;
  
  /** \details
    Adds a float property.
    
    \param name [in] Name of the property.
    \param value [in] Value of the property.
  */
  void addAPropertyFloat(const OdString& name, double value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New value of the property.
  */
  void setAPropertyFloat(const OdString& name, double value);
  
  
  /** \details
    Adds a double property.
    
    \param name [in] Name of the property.
    \param value [in] Value of the property.
  */
  void addAPropertyDouble1(const OdString& name, double value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New value of the property.
  */
  void setAPropertyDouble1(const OdString& name, double value);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output value of the property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyDouble1(const OdString& name, double& value) const;
  
  /** \details
    Adds a property with 2 double values.
    
    \param name [in] Name of the property.
    \param value [in] An array with 2 double values.
  */
  void addAPropertyDouble2(const OdString& name, const double (&value)[2]);
  
  /** \details
     Changes the value of a property with a given name.
     
     \param name [in] Name of the property.
     \param value [in] An array with 2 elements.
  */
  void setAPropertyDouble2(const OdString& name, const double (&value)[2]);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] An array with 2 elements.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyDouble2(const OdString& name, double (&value)[2]) const;
  
  /** \details
    Adds a property with 3 double values.
    
    \param name [in] Name of the property.
    \param value [in] An array with 3 elements.
  */
  void addAPropertyDouble3(const OdString& name, const double(&value)[3]);
  
  /** \details
     Changes the value of a property with a given name.
     
     \param name [in] Name of the property.
     \param value [in] An array with 3 elements.
  */
  void setAPropertyDouble3(const OdString& name, const double(&value)[3]);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] An array with 3 elements.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyDouble3(const OdString& name, double(&value)[3]) const;
  
  /** \details
    Adds a property with 4 double values.
    
    \param name [in] Name of the property.
    \param value [in] An array with 4 elements.
  */
  void addAPropertyDouble4(const OdString& name, const double (&value)[4]);
  
  /** \details
     Changes the value of a property with a given name.
     
     \param name [in] Name of the property.
     \param value [in] An array with 4 elements.
  */
  void setAPropertyDouble4(const OdString& name, const double (&value)[4]);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] An array with 4 elements.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyDouble4(const OdString& name, double (&value)[4]) const;
  
  /** \details
    Adds a boolean property.
    
    \param name [in] Name of the property.
    \param value [in] A boolean value.
  */
  void addAPropertyBoolean(const OdString& name, const bool value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] Value of the property.
  */
  void setAPropertyBoolean(const OdString& name, const bool value);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output value of the property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyBoolean(const OdString& name, bool& value) const;
  
  /** \details
    Adds a string property.
    
    \param name [in] Name of the property.
    \param value [in] A string value.
  */
  void addAPropertyString(const OdString& name, const OdString& value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New value of the property.
  */
  void setAPropertyString(const OdString& name, const OdString& value);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output value of the property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyString(const OdString& name, OdString& value) const;
  
  /** \details
    Adds a distance property.
    
    \param name [in] Name of the property.
    \param value [in] Distance.
    \param unit [in] Units of measurement.
  */
  void addAPropertyDistance(const OdString& name, double value, OdInt32 unit);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New distance.
    \param unit [in] New units of measurement.
  */
  void setAPropertyDistance(const OdString& name, double value, OdInt32 unit);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output distance.
    \param unit [out] The output units of measurement.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyDistance(const OdString& name, double& value, OdInt32& unit) const;
  
  /** \details
    Adds a color property.
    
    \param name [in] Name of the property.
    \param value [in] A string value.
  */
  void addAPropertyColor(const OdString& name, const OdBmCmColor& value);
  
  /** \details
    Changes the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [in] New value of the property.
  */
  void setAPropertyColor(const OdString& name, const OdBmCmColor& value);
  
  /** \details
    Returns the value of a property with a given name.
    
    \param name [in] Name of the property.
    \param value [out] The output value of the property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getAPropertyColor(const OdString& name, OdBmCmColor& value) const;
  
  /** \details
    Adds a given property.
    
    \param pProp [in] The input property.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addAProperty(OdBmAProperty* pProp);
  
  /** \details
    Returns a property with a given name.
    
    \param name [in] Name of the property.
    \param prop [out] The output property.
    
    \returns true if the property with a given name was found, false - otherwise.
  */
  bool getAProperty(const OdString& name, OdBmAPropertyPtr& prop) const;
  
  /** \details
    Deletes all properties.
  */
  void clearAProperties();
};


#endif // _BM_APROPERTIES_H_

