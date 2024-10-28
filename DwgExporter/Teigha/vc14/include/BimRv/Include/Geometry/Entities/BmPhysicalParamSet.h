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

#ifndef _BM_PHYSICALPARAMSET_H_
#define _BM_PHYSICALPARAMSET_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmStructuralBehavior.h"



class OdBmPhysicalParamSet;
class OdBmPhysicalParamSetImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPhysicalParamSet object.
 */
typedef OdSmartPtr<OdBmPhysicalParamSet> OdBmPhysicalParamSetPtr;

/** \details
 A data type that represents an array of OdBmPhysicalParamSet objects.
 */
typedef OdArray<OdBmPhysicalParamSetPtr> OdBmPhysicalParamSetPtrArray;

//----------------------------------------------------------
//
// OdBmPhysicalParamSet
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmPhysicalParamSet : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPhysicalParamSet);
public:
  OdString getGrade() const;
  OdResult setGrade(const OdString&);
  OdString getName() const;
  OdResult setName(const OdString&);
  OdString getSpecies() const;
  OdResult setSpecies(const OdString&);
  OdString getSubClass() const;
  OdResult setSubClass(const OdString&);
  double getBending() const;
  OdResult setBending(double);
  double getBendingReinforcement() const;
  OdResult setBendingReinforcement(double);
  double getCompressionParallel() const;
  OdResult setCompressionParallel(double);
  double getCompressionPerpendicular() const;
  OdResult setCompressionPerpendicular(double);
  double getConcreteCompression() const;
  OdResult setConcreteCompression(double);
  double getMinimumTensileStrength() const;
  OdResult setMinimumTensileStrength(double);
  double getMinimumYieldStress() const;
  OdResult setMinimumYieldStress(double);
  OdGeVector3d getPoissonModulus() const;
  OdResult setPoissonModulus(const OdGeVector3d&);
  double getReductionFactor() const;
  OdResult setReductionFactor(double);
  double getResistanceCalcStrength() const;
  OdResult setResistanceCalcStrength(double);
  OdGeVector3d getShearModulus() const;
  OdResult setShearModulus(const OdGeVector3d&);
  double getShearParallel() const;
  OdResult setShearParallel(double);
  double getShearPerpendicular() const;
  OdResult setShearPerpendicular(double);
  double getShearReinforcement() const;
  OdResult setShearReinforcement(double);
  double getShearStrengthReduction() const;
  OdResult setShearStrengthReduction(double);
  OdGeVector3d getThermalExpansionCoefficient() const;
  OdResult setThermalExpansionCoefficient(const OdGeVector3d&);
  double getUnitWeight() const;
  OdResult setUnitWeight(double);
  OdGeVector3d getYoungModulus() const;
  OdResult setYoungModulus(const OdGeVector3d&);
  OdBm::StructuralBehavior::Enum getBehavior() const;
  OdResult setBehavior(OdBm::StructuralBehavior::Enum);
  OdInt32 getStructuralMaterialType() const;
  OdResult setStructuralMaterialType(OdInt32);
  bool getIsLightWeight() const;
  OdResult setIsLightWeight(bool);
  bool getThermallyTreated() const;
  //
  // Main functionality
  //


};

#endif // _BM_PHYSICALPARAMSET_H_

