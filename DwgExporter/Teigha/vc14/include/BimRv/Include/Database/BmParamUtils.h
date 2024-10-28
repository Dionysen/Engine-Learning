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
#ifndef __BM_ParamUtils_H__
#define __BM_ParamUtils_H__

#include "Geometry/Entities/BmAsset.h"
#include "BmUnitEnums.h"
#include "BmParamEnums.h"

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT BmParamUtils {
public:
  class ParameterTypeInfo {
    OdBm::UnitGroup::Enum m_group;

  public:
    /** \details
      Constructor. Sets a unit group value to none.
    */
    ParameterTypeInfo() : m_group(OdBm::UnitGroup::None) {};
    
    /** \details
      Constructor. Sets a unit group value to a passed parameter's value.
      
      \param group [in] Unit group value.
    */
    ParameterTypeInfo(OdBm::UnitGroup::Enum group): m_group(group) {};
    
    /** \details
      Returns a unit group value.
    */
    OdBm::UnitGroup::Enum getGroup() const {return m_group;};
  };

  typedef std::map<OdBm::ParameterType::Enum, ParameterTypeInfo> ParameterTypeInfoMap;
  
  /** \details
    Returns a unit group that a parameter type belongs to.
    
    \param parameterType [in] Parameter type
    \param groupType [out] Output unit group.
    
    \returns eOk if the operation completed successfully, or eInvalidKey - otherwise.
  */
  OdResult getUnitGroup(OdBm::ParameterType::Enum parameterType, OdBm::UnitGroup::Enum& groupType);
  
  /** \details
    Collects all parameter types, which unit group matches the parameter passed in.
    
    \param group [in] Input unit group, parameter types of which you want to collect.
    
    \returns An array of parameter types.
  */
  OdBm::ParameterTypeArray getParameterTypesByGroup(OdBm::UnitGroup::Enum group);

private:
  ParameterTypeInfoMap& parameterTypeInfoMap();

  ParameterTypeInfoMap m_paramInfoMap;
};

#endif //__BM_ParamUtils_H__

