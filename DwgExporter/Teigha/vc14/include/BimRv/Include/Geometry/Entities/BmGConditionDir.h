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

#ifndef _BM_GCONDITIONDIR_H_
#define _BM_GCONDITIONDIR_H_
#include "Geometry/Entities/BmGConditionBase.h"
#include "Geometry/Enums/BmCompareMode.h"



class OdBmGConditionDir;
class OdBmGConditionDirImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGConditionDir object.
 */
typedef OdSmartPtr<OdBmGConditionDir> OdBmGConditionDirPtr;

/** \details
 A data type that represents an array of OdBmGConditionDir objects.
 */
typedef OdArray<OdBmGConditionDirPtr> OdBmGConditionDirPtrArray;

//----------------------------------------------------------
//
// OdBmGConditionDir
//
//----------------------------------------------------------

/** \details
    This is the base class to work with direction conditions.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGConditionDir : public OdBmGConditionBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGConditionDir);
public:
  /** \details
    Returns the direction as an object of the OdGeVector3d class.
  */
  OdGeVector3d getDirection() const;
  /** \details
    Returns the flag of the negation direction condition as a boolean value.
  */
  bool getNegateDirCondition() const;
  //
  // Main functionality
  //

  /** \details
    Sets data for BmGConditionDir

    \param compMode [in] Input compare mode.
    \param vDirection [in] Input direction vector.
    \param bNegateDirCondition [in] Input negative flag of condition.

  */
  void set(const OdBm::CompareMode::Enum compMode, const OdGeVector3d& vDirection, const bool bNegateDirCondition);
};


#endif // _BM_GCONDITIONDIR_H_

