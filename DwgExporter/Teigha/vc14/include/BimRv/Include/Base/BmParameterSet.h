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

#ifndef _BM_PARAMETERSET_H_
#define _BM_PARAMETERSET_H_

#include "Base/BmObjectIdArray.h"

class OdBmObjectId;

typedef OdBmIteratorPtr<OdBm::BuiltInParameter::Enum> OdBmBuiltInParamIteratorPtr;

typedef OdBmIteratorPtr<OdBmObjectId> OdBmUserParamIteratorPtr;

//------------------------------------------------------------------------------
//
// OdBmParameterSet
//
//------------------------------------------------------------------------------

/** \details
    This class represents a set of parameters containing 2 sets:
      Set of OdBm::BuiltInParameter::Enum for built in parameters
      Set of OdBmObjectId for user parameters

    <group Base_Classes>
*/
class TB_BASE_EXPORT OdBmParameterSet {

private:
  std::set<OdBm::BuiltInParameter::Enum> m_builtInParams;
  std::set<OdBmObjectId> m_userParams;

public:
  /** \details
    Constructs an empty parameter set.
  */
  OdBmParameterSet() {}

  /** \details
    Constructs a copy of existing parameter set.

    \param paramset [in]  Parameter set to copy.
  */
  OdBmParameterSet(const OdBmParameterSet& paramset):
      m_builtInParams(paramset.m_builtInParams),
      m_userParams(paramset.m_userParams) {}

  /** \details
    Appends the specified entity to this SelectionSet object.

    \param parameter [in]  Built-in parameter.
  */
  void append(OdBm::BuiltInParameter::Enum parameter);

  /** \details
    Appends the specified entity to this SelectionSet object.

    \param paramId [in]  Object ID of the user parameter.
  */
  void append(const OdBmObjectId& paramId);

  /** \details
    Removes the specified entity from this SelectionSet object.

    \param parameter [in]  Built in parameter.
  */
  void remove(OdBm::BuiltInParameter::Enum parameter);

  /** \details
    Removes the specified entity from this SelectionSet object.

    \param paramId [in]  Object ID of the user parameter.
  */
  void remove(const OdBmObjectId& paramId);

  /** \details
    Checks if the SelectionSet object contains the specified entity.

    \param parameter [in]  Built-in parameter.
    \returns true if the set contains the given parameter, false - otherwise.
  */
  bool contains(OdBm::BuiltInParameter::Enum parameter) const;

  /** \details
    Checks if the SelectionSet object contains the specified entity.

    \param paramId [in]  Object ID of the user parameter.
    \returns true if the set contains the given parameter, false - otherwise.
  */
  bool contains(const OdBmObjectId& paramId) const;

  /** \details
    Clears the parameter set.
  */
  void clear();

  /** \details
    Returns reference to an array of built in parameters.
  */
  OdBmBuiltInParamIteratorPtr getBuiltInParamsIterator() const;

  /** \details
    Returns reference to an array of user parameters.
  */
  OdBmUserParamIteratorPtr getUserParamsIterator() const;

  /** \details
    Returns built-in parameters as an array.

    \param params [out]  Reference to an array to fill with built in params.
  */
  void getBuiltInParamsArray(OdBuiltInParamArray& params) const;

  /** \details
    Returns user parameters as an array.

    \param params [out]  Reference to an array to fill with user params.
  */
  void getUserParamsArray(OdBmObjectIdArray& params) const;
};

#endif // _BM_PARAMETERSET_H_
