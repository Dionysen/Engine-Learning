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

#ifndef _BM_GCONDITIONBASE_H_
#define _BM_GCONDITIONBASE_H_
#include "Base/BmObject.h"
#include "Geometry/Enums/BmCompareMode.h"



class OdBmGConditionBase;
class OdBmGConditionBaseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGConditionBase object.
 */
typedef OdSmartPtr<OdBmGConditionBase> OdBmGConditionBasePtr;

/** \details
 A data type that represents an array of OdBmGConditionBase objects.
 */
typedef OdArray<OdBmGConditionBasePtr> OdBmGConditionBasePtrArray;

//----------------------------------------------------------
//
// OdBmGConditionBase
//
//----------------------------------------------------------

/** \details
    This class is the base class for all GConditions.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGConditionBase : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGConditionBase);
public:
  /** \details
    Returns the condition's compare type as a one value from the CompareMode enumeration.

    \returns Returning value can be one of the next values:
    <table>
      <b>Undefined</b>                -1
      <b>NotEqual</b>                 0
      <b>Less</b>                     1
      <b>LessOrEqual</b>              2
      <b>Equal</b>                    3
      <b>GreaterOrEqual</b>           4
      <b>Greater</b>                  5
      <b>Parallel</b>                 6
      <b>AntiParallel</b>             7
      <b>ParallelOrAnti</b>           8
      <b>SameHemisphere</b>           10
      <b>OppositeHemisphere</b>       11
      <b>AtLeastOne</b>               12
      <b>All</b>                      13
      <b>AzimuthSameQuadrant</b>      14
      <b>AzimuthOppositeQuadrant</b>  15
    </table>
  */
  OdBm::CompareMode::Enum getComp() const;
  //
  // Main functionality
  //


};


#endif // _BM_GCONDITIONBASE_H_

