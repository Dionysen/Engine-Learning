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

#ifndef _BM_GCONDITIONCUT_H_
#define _BM_GCONDITIONCUT_H_
#include "Geometry/Entities/BmGConditionDir.h"
#include "Geometry/Enums/BmCompareMode.h"



class OdBmGConditionCut;
class OdBmGConditionCutImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGConditionCut object.
 */
typedef OdSmartPtr<OdBmGConditionCut> OdBmGConditionCutPtr;

/** \details
 A data type that represents an array of OdBmGConditionCut objects.
 */
typedef OdArray<OdBmGConditionCutPtr> OdBmGConditionCutPtrArray;

//----------------------------------------------------------
//
// OdBmGConditionCut
//
//----------------------------------------------------------

/** \details
    This class stores data of a cutting condition.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGConditionCut : public OdBmGConditionDir {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGConditionCut);
public:
  /** \details
    Returns the lower end of the cut range as a double value.
  */
  double getRangeLo() const;
  /** \details
    Returns the higher end of the cut range as a double value.
  */
  double getRangeHi() const;
  //
  // Main functionality
  //


  /** \details
    Sets data for BmGConditionCut

    \param compMode [in] Input compare mode.
    \param vDirection [in] Input direction vector.
    \param bNegateDirCondition [in] Input negative flag of condition.
    \param dRangeLo [in] Input lower range.
    \param dRangeHi [in] Input high range.

  */
  void set(const OdBm::CompareMode::Enum compMode, const OdGeVector3d& vDirection, const bool bNegateDirCondition, const double dRangeLo, const double dRangeHi);
};


#endif // _BM_GCONDITIONCUT_H_

