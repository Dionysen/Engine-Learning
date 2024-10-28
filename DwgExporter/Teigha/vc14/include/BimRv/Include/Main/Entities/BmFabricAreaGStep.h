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

#ifndef _BM_FABRICAREAGSTEP_H_
#define _BM_FABRICAREAGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmRebarSystemDoubleBoundary;
typedef OdSmartPtr<OdBmRebarSystemDoubleBoundary> OdBmRebarSystemDoubleBoundaryPtr;

class OdBmFabricAreaGStep;
class OdBmFabricAreaGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricAreaGStep object.
 */
typedef OdSmartPtr<OdBmFabricAreaGStep> OdBmFabricAreaGStepPtr;

/** \details
 A data type that represents an array of OdBmFabricAreaGStep objects.
 */
typedef OdArray<OdBmFabricAreaGStepPtr> OdBmFabricAreaGStepPtrArray;

//----------------------------------------------------------
//
// OdBmFabricAreaGStep
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricAreaGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricAreaGStep);
public:
  void getBoundary(OdArray<OdBmObjectPtr> &) const;
  OdBmRebarSystemDoubleBoundaryPtr getBoundaryEx() const;
  void getBoundaryWithCover(OdArray<OdBmObjectPtr> &) const;
  void getFace(OdArray<OdBmObjectPtr> &) const;
  OdBmRebarSystemDoubleBoundaryPtr getFaceEx() const;
  void getFaceWithCover(OdArray<OdBmObjectPtr> &) const;
  void getSideCovers(OdBmMap<OdInt32, double> &) const;
  double getBottomCover() const;
  double getTopCover() const;
  OdGePoint3d getSpanHeadPos() const;
  OdBmObjectPtr getOutline() const;
  OdGeMatrix3d getLocalCoordinateSystem() const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICAREAGSTEP_H_

