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

#ifndef _BM_FAMILYMANAGER_H_
#define _BM_FAMILYMANAGER_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/Entities/BmParamDef.h"
#include "GeometryUtils/Entities/BmCurveLoop.h"
// END: Includes



class OdBmFamilyManager;
class OdBmFamilyManagerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyManager object.
 */
typedef OdSmartPtr<OdBmFamilyManager> OdBmFamilyManagerPtr;

/** \details
 A data type that represents an array of OdBmFamilyManager objects.
 */
typedef OdArray<OdBmFamilyManagerPtr> OdBmFamilyManagerPtrArray;

//----------------------------------------------------------
//
// OdBmFamilyManager
//
//----------------------------------------------------------

/** \details
A class that implements family management operations.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamilyManager : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyManager);
public:
  //
  // Main functionality
  //

  /** \details
    Changes the type name of the current family.
    \param typeName [in] A new type name.
    \returns eOk if the new type name was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult renameCurrentFamilyType(const OdString&);

  /** \details
    Creates the type of the current family.
    \param OdString [in] A type name to be created.
    \returns Result code of the create operation.
  */
  OdInt32 createFamilyType(const OdString&);

  /** \details
    Deletes the type of the current family.
    \returns Result code of the create operation.
  */
  OdInt32 deleteCurrentFamilyType();

  /** \details
    Sets the type of the current family type by index.
    \param idx [in] A family type index value.
    \returns Result code of the create operation.
  */
  OdInt32 setCurrentFamilyType(OdInt32 idx);

  /** \details
    Creates the type of the current family.
    \param type name [in] A name of the family type to be created.
    \returns Result code of the create operation.
  */
  OdInt32 setCurrentFamilyType(const OdString&);

  /** \details
    Retrieves the current family type.
    \returns An OdString object that contains the current family type.
  */
  OdString getCurrentFamilyType();

  /** \details
    Adds a new parameter to the current family.
    \param pParamDef  [in] A definition of the parameter to be added.
    \param isInstance [in] A flag that determines whether an instance of the parameter should be created.
    \param guid       [in] A global unique identifier of the created parameter.
    \returns An identifier of the created parameter.
  */
  OdBmObjectId addParameter(const OdBmParamDefPtr& pParamDef, bool isInstance, const OdGUID& guid);
  
  /** \details
    Adds a new parameter to the current family.
    \param pParamDef  [in] A definition of the parameter to be added.
    \param isInstance [in] A flag that determines whether an instance of the parameter should be created.
    \returns An identifier of the created parameter.
  */
  OdBmObjectId addParameter(const OdBmParamDefPtr& pParamDef, bool isInstance);

  /** \details
    Retrieves the current double parameter value.
    \param parameterId [in] An identifier of the parameter.
    \param value       [out] A placeholder for the parameter value.
    \returns eOk if the parameter value was successfully returned; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed double value and returns it to a calling subroutine.
  */
  OdResult getParam(const OdBmObjectId& parameterId, double& value) const;
  
  /** \details 
    Sets a new double value for a specified parameter.
    \param parameterId [in] An identifier of the parameter.
    \param value       [in] A new double parameter value to be set.
    \returns eOk if the parameter value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const double& value);

  /** \details
    Retrieves the current signed 32-bit integer parameter value.
    \param parameterId [in] An identifier of the parameter.
    \param value       [out] A placeholder for the parameter value.
    \returns eOk if the parameter value was successfully returned; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed OdInt32 value and returns it to a calling subroutine.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdInt32& value) const;

  /** \details 
    Sets a new unsigned 32-bit value for a specified parameter.
    \param parameterId [in] An identifier of the parameter.
    \param value       [in] A new signed 32-bit integer parameter value to be set.
    \returns eOk if the parameter value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdInt32& value);

  /** \details
    Retrieves the current string parameter value.
    \param parameterId [in]  An identifier of the parameter.
    \param value       [out] A placeholder for the parameter value.
    \returns eOk if the parameter value was successfully returned; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed string value and returns it to a calling subroutine.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdString& value) const;
  
  /** \details 
    Sets a new string value for a specified parameter.
    \param parameterId [in] An identifier of the parameter.
    \param value       [in] A new string parameter value to be set.
    \returns eOk if the parameter value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdString& value);

  /** \details
    Retrieves the current parameter value represented with an object identifier.
    \param parameterId [in]  An identifier of the parameter.
    \param value       [out] A placeholder for the parameter value.
    \returns eOk if the parameter value was successfully returned; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed OdBmObjectId object and returns it to a calling subroutine.
  */
  OdResult getParam(const OdBmObjectId& parameterId, OdBmObjectId& value) const;
  
  /** \details 
    Sets a new value represented with an object identifier for a specified parameter.
    \param parameterId [in] An identifier of the parameter.
    \param value       [in] A new object identifier to be set.
    \returns eOk if the parameter value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setParam(const OdBmObjectId& parameterId, const OdBmObjectId& value);
};
#endif // _BM_FAMILYMANAGER_H_

