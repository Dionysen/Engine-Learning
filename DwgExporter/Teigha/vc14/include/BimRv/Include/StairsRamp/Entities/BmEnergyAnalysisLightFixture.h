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

#ifndef _BM_ENERGYANALYSISLIGHTFIXTURE_H_
#define _BM_ENERGYANALYSISLIGHTFIXTURE_H_
#include "Base/BmObject.h"



class OdBmEnergyAnalysisLightFixture;
class OdBmEnergyAnalysisLightFixtureImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisLightFixture object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisLightFixture> OdBmEnergyAnalysisLightFixturePtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisLightFixture objects.
 */
typedef OdArray<OdBmEnergyAnalysisLightFixturePtr> OdBmEnergyAnalysisLightFixturePtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisLightFixture
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisLightFixture : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisLightFixture);
public:
  double getCoefficientOfUtilization() const;
  OdGeExtents3d getLightBox() const;
  OdGePoint3d getPhotometryOrientationPosition() const;
  OdGePoint3d getPhotometryOrientationXAxis() const;
  OdGePoint3d getPhotometryOrientationYAxis() const;
  OdGePoint3d getPhotometryOrientationZAxis() const;
  OdInt32 getLightFixtureTypeIndex() const;
  bool getHasCoefficientOfUtilization() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISLIGHTFIXTURE_H_

