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

#ifndef _BM_NAMEDPARAM_H_
#define _BM_NAMEDPARAM_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmNamedParam;
class OdBmNamedParamImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmNamedParam object.
 */
typedef OdSmartPtr<OdBmNamedParam> OdBmNamedParamPtr;

/** \details
 A data type that represents an array of OdBmNamedParam objects.
 */
typedef OdArray<OdBmNamedParamPtr> OdBmNamedParamPtrArray;

//----------------------------------------------------------
//
// OdBmNamedParam
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmNamedParam : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmNamedParam);
public:
  OdString getStr() const;
  OdResult setStr(const OdString&);
  OdBmObjectPtr getOExpression() const;
  double getValue() const;
  OdResult setValue(double);
  OdBmObjectId getElemId() const;
  OdBmObjectId getParamId() const;
  OdResult setParamId(const OdBmObjectId&);
  OdInt32 getInt() const;
  bool getInstance() const;
  OdResult setInstance(bool);
  bool getReporting() const;
  //
  // Main functionality
  //

  /** \details
    Returns a parameter value as a string.
    
    \param editing [in] If the value was stored as a Double, special editing can be done.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdString getValueAsStr(bool editing = false) const;
  
  /** \details
    Sets a parameter value from a string.
    
    \param string [in] Input value.
    \param errorComment [in] Error code description in case the method fails to finish.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setValueStr(const OdString& string, OdString& errorComment);
  
  /** \details
    Returns a value as Double.
    
    \param val [out] Output value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getValue(double& val) const;
  
  /** \details
    Returns a value as OdInt32.
    
    \param val [out] Output value.
  
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
 */
  OdResult getValue(OdInt32& val) const;
  
  /** \details
    Returns a value as a string.
    
    \param val [out] Output value.
  
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getValue(OdString& val) const;
  
  /** \details
    Returns the element id.
    
    \param val [out] Output value.
  
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getValue(OdBmObjectId& val) const;

  /** \details
    Sets a value as OdInt32.
    
    \param val [in] Input value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setValue(OdInt32 val);
  
  /** \details
    Sets a value as a string.
    
    \param val [in] Input value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setValue(const OdString& val);
  
  /** \details
    Sets the element id.
    
    \param val [in] Input value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setValue(const OdBmObjectId& val);

};


#endif // _BM_NAMEDPARAM_H_

