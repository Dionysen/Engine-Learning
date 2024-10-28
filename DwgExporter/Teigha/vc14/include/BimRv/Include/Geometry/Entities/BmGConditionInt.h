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

#ifndef _BM_GCONDITIONINT_H_
#define _BM_GCONDITIONINT_H_
#include "Geometry/Entities/BmGConditionBase.h"
#include "Geometry/Enums/BmCompareMode.h"
#include "Base/Enums/BmViewType.h"
// BEGIN: Includes
#include "Base/Enums/BmViewType.h"
// END: Includes



class OdBmGConditionInt;
class OdBmGConditionIntImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGConditionInt object.
 */
typedef OdSmartPtr<OdBmGConditionInt> OdBmGConditionIntPtr;

/** \details
 A data type that represents an array of OdBmGConditionInt objects.
 */
typedef OdArray<OdBmGConditionIntPtr> OdBmGConditionIntPtrArray;

//----------------------------------------------------------
//
// OdBmGConditionInt
//
//----------------------------------------------------------

/** \details
    This class stores integer data of a GCondition by parameter.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGConditionInt : public OdBmGConditionBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGConditionInt);
public:
  /** \details
    Returns the parameter as an OdInt32 value.
  */
  OdInt32 getParamType() const;
  /** \details
    Returns the value of the parameter as an OdInt32 value.
  */
  OdInt32 getValue() const;
  //
  // Main functionality
  //

  /** \details
    Sets data for BmGConditionInt

    \param paramType [in] Input view type.
    \param compMode [in] Input compare mode.
    \param iValue [in] Input value.

  */
  void set(const OdBm::ViewType::Enum paramType, const OdBm::CompareMode::Enum compMode, const OdInt32 iValue);
};


#endif // _BM_GCONDITIONINT_H_

