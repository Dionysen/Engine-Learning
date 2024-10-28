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

#ifndef _BM_ASSETHELPERS_H_
#define _BM_ASSETHELPERS_H_
#include "Base/BmObject.h"
#include "Geometry/Entities/BmPhysicalParamSet.h"
#include "Database/Entities/BmPropertySetElement.h"
#include "Database/Entities/BmAppearanceAssetElem.h"
#include "Database/Entities/BmParamSet.h"
#include "Geometry/Entities/BmAsset.h"
#include "Geometry/Entities/BmMaterial.h"
#include "Database/BmDatabase.h"
#include "Geometry/AppearanceSchemaHelpers/BmUnifiedBitmapSchemaHelper.h"
#include "Geometry/BmAssetHelper.h"
#include "Geometry/Enums/BmPredefinedAppearanceAsset.h"
#include "Database/Enums/BmStructuralAssetClass.h"
#include "Database/Enums/BmThermalMaterialType.h"
#include "Database/Enums/BmStructuralBehavior.h"


/** \details
  A helper class to work with material appearance.
*/
class TB_DB_EXPORT OdBmAppearanceAssetHelper {
public:
  /** \details
    Default constructor.
  */
  OdBmAppearanceAssetHelper(const OdBmAppearanceAssetElemPtr&);

  /** \details
    Fills an asset with properties of a specified predefined asset.
    
    \param schema [in] Schema to fill.
    \param texture [in] values to put in. Since the string is empty, default values will be set.
  */
  void fillAppearanceAssetWith(OdBm::PredefinedAppearanceAsset::Enum schema,
    const OdString& texture = OdString::kEmpty);

  /** \details
    Returns the name of the asset.
    
    \param pAsset [out] String to store the name.
    
    \returns eOk if the operation was successful.
  */
  OdResult getName(OdString& pAsset) const;

  /** \details
    Sets name of the asset.
    
    \param name [in] The name to set to the asset.
  */
  void setName(const OdString& name);

  /** \details
    Applies properties defined in an appearance asset to the material object
    
    \param pMaterial [in] Material, that the asset will be applied to.
  */
  void applyToMaterial(OdBmMaterialPtr& pMaterial);

  /** \details
    Returns a connected asset only if the asset defines a bitmap of the material appearance.
    
    \param pAsset [out] The output texture asset.
    \param propertyName [in] Defines the name of the asset property in which method will try to find the texture. If not specified, the default property will be used. 
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
  */
  OdResult getTextureAsset(OdBmAssetPtr& pAsset,
    const OdString& propertyName = OdString::kEmpty) const;
    
  /** \details
    Returns the type of asset .
  */
  OdBm::PredefinedAppearanceAsset::Enum getSchemaType() const;

  /** \details
    Returns the array of connected assets that define the appearance of the material.
    
    \param pAssets [out] Output appearance assets.
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
  */
  OdResult getAppearanceAssets(OdBmObjectPtrArray& pAssets) const;

  /** \details
    Sets the appearance data
    
    \param pAssets [in] Input appearance assets.
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
  */
  OdResult setAppearanceAssets(const OdBmObjectPtrArray& pAssets);

  /** \details
    If possible, returns array of connected assets contained an appearance data for material cutouts.
    
    \param pAssets [out] Output cutout assets.
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
  */
  OdResult getCutoutAssets(OdBmObjectPtrArray& pAssets) const;

  /** \details
    If possible, sets Cutouts appearance data.
    
    \param pAssets [in] Input cutout assets.
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
  */
  OdResult setCutoutAssets(const OdBmObjectPtrArray& pAssets);

  /** \details
    Fills asset with default values of predefined schema.
    
    \param pResultAsset [out] The resultion output asset. 
    \param schema [in] Predefined schema.
    \param texture [in] Texture.
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
    
    \remarks This is a static method.
  */
  static OdResult fillAppearanceAssetWith(OdBmAssetPtr& pResultAsset,
    OdBm::PredefinedAppearanceAsset::Enum schema,
    const OdString& texture = OdString::kEmpty);

  /** \details
    If possible, returns default connected asset contained a texture data
    
    \param pAsset [in] Input asset.
    \param pTextureAsset [in] Output texture asset.
    \param propertyName [in] Property name, empty by default.
    
    \returns eOk if the operation was successful, and appropriate error code otherwise.
    
    \remarks This is a static method.
  */
  static OdResult getTextureAsset(const OdBmAssetPtr& pAsset,
    OdBmAssetPtr& pTextureAsset, const OdString& propertyName = OdString::kEmpty);

  /** \details
    Returns schema type of specified asset.
    
    \param pAsset [out] Output asset.
    
    \remarks This is a static method.
  */
  static OdBm::PredefinedAppearanceAsset::Enum getSchemaType(const OdBmAssetPtr& pAsset);

protected:
  mutable OdBmAppearanceAssetElemPtr m_pAppearanceAssetElement;
  inline OdBmAppearanceAssetPtr renderingAsset() const;
  OdResult getConnectedAssets(const OdString& propName, OdBmObjectPtrArray& pAssets) const;
  OdResult setConnectedAssets(const OdString& propName, const OdBmObjectPtrArray& pAssets);
private:
  mutable bool m_schemaTypeIsSet;
  mutable OdBm::PredefinedAppearanceAsset::Enum m_schemaType;
};

template <class T>
struct OdBmParamType {
  typedef T type;
};

template <> struct OdBmParamType<OdBm::StructuralAssetClass::Enum> {
  typedef OdInt32 type;
};

template <> struct OdBmParamType<OdBm::ThermalMaterialType::Enum> {
  typedef OdInt32 type;
};

template <> struct OdBmParamType<OdBm::StructuralBehavior::Enum> {
  typedef OdInt32 type;
};

template <> struct OdBmParamType<bool> {
  typedef OdInt32 type;
};

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPhysicalAssetHelper {
public:
  OdBmPhysicalAssetHelper(const OdBmPropertySetElementPtr&);
  virtual void InitDefaultAssetParams();

  void applyFromPhysicalParamSet(const OdBmPhysicalParamSetPtr&);
  const OdBmPropertySetElementPtr& getPropertySetElement() const;

  OdResult getGrade(OdString&) const;
  void setGrade(const OdString&);
  OdResult getName(OdString&) const;
  void setName(const OdString&);
  OdResult getSpecies(OdString&) const;
  void setSpecies(const OdString&);
  OdResult getSubClass(OdString&) const;
  void setSubClass(const OdString&);
  OdResult getDensity(double&) const;
  void setDensity(double);
  OdResult getBehavior(OdBm::StructuralBehavior::Enum&) const;
  void setBehavior(OdBm::StructuralBehavior::Enum);
  OdResult getSourceURL(OdString&) const;
  void setSourceURL(const OdString&);
  OdResult getSource(OdString&) const;
  void setSource(const OdString&);
  OdResult getExternalMaterialId(OdString&) const;
  void setExternalMaterialId(const OdString&);
  OdResult getAssetLibId(OdString&) const;
  void setAssetLibId(const OdString&);
  OdResult getCommonSharedAsset(OdInt32&) const;
  void setCommonSharedAsset(const OdInt32&);
  OdResult getLightWeight(OdInt32&) const;
  void setLightWeight(const OdInt32&);
protected:
  template <class T>
  OdResult getParamValue(const OdBm::BuiltInParameter::Enum param,
    T& value) const {
    OdBmObjectId id = m_pPropSetElement->database()->getObjectId(
      OdBmObjectId::handle_type(param), false);
    typename OdBmParamType<T>::type rawValue;
    OdResult es = getParamSet()->getParam(id, rawValue);
    value = static_cast<T>(rawValue);
    return es;
  }

  template <class T>
  OdResult setParamValue(const OdBm::BuiltInParameter::Enum param,
    const T& value) {
    OdBmObjectId id = m_pPropSetElement->database()->getObjectId(
      OdBmObjectId::handle_type(param), false);
    return getParamSet()->setParam(
      id, static_cast<typename OdBmParamType<T>::type>(value));
  }

  OdBmParamSetPtr getParamSet() const;
protected:
  mutable OdBmPropertySetElementPtr m_pPropSetElement;
};

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmStructuralAssetHelper : public OdBmPhysicalAssetHelper {
public:
  OdBmStructuralAssetHelper(const OdBmPropertySetElementPtr&);
  virtual void InitDefaultAssetParams();

  OdResult getStructuralAssetClass(OdBm::StructuralAssetClass::Enum&) const;
  void setStructuralAssetClass(OdBm::StructuralAssetClass::Enum assetClass);

  virtual void applyFromPhysicalParamSet(const OdBmPhysicalParamSetPtr&);

  OdResult getReductionFactor(double&) const;
  void setReductionFactor(double);

  OdResult getResistanceCalcStrength(double&) const;
  void setResistanceCalcStrength(double);

  OdResult getBending(double&) const;
  void setBending(double);

  OdResult getBendingReinforcement(double&) const;
  void setBendingReinforcement(double);

  OdResult getCompressionParallel(double&) const;
  void setCompressionParallel(double);

  OdResult getCompressionPerpendicular(double&) const;
  void setCompressionPerpendicular(double);

  OdResult getConcreteCompression(double&) const;
  void setConcreteCompression(double);

  OdResult getYoungModulus(OdGeVector3d&) const;
  void setYoungModulus(const OdGeVector3d&);

  OdResult getShearModulus(OdGeVector3d&) const;
  void setShearModulus(const OdGeVector3d&);

  OdResult getPoissonModulus(OdGeVector3d&) const;
  void setPoissonModulus(const OdGeVector3d&);

  OdResult getShearParallel(double&) const;
  void setShearParallel(double);

  OdResult getShearPerpendicular(double&) const;
  void setShearPerpendicular(double);

  OdResult getShearReinforcement(double&) const;
  void setShearReinforcement(double);

  OdResult getShearStrengthReduction(double&) const;
  void setShearStrengthReduction(double);

  OdResult getThermalExpansionCoefficient(OdGeVector3d&) const;
  void setThermalExpansionCoefficient(const OdGeVector3d&);

  OdResult getUnitWeight(double&) const;
  void setUnitWeight(double);

  OdResult getMinimumTensileStrength(double&) const;
  void setMinimumTensileStrength(double);

  OdResult getMinimumYieldStress(double&) const;
  void setMinimumYieldStress(double);
};

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmThermalAssetHelper : public OdBmPhysicalAssetHelper {
public:
  OdBmThermalAssetHelper(const OdBmPropertySetElementPtr&);
  virtual void InitDefaultAssetParams();

  OdResult getThermalMaterialType(OdBm::ThermalMaterialType::Enum&) const;
  void setThermalMaterialType(OdBm::ThermalMaterialType::Enum);

  virtual void applyFromPhysicalParamSet(const OdBmPhysicalParamSetPtr&);

  OdResult getElectricalResistivity(double&) const;
  void setElectricalResistivity(double);

  OdResult getReflectivity(double&) const;
  void setReflectivity(double);

  OdResult getPorosity(double&) const;
  void setPorosity(double);

  OdResult getPermeability(double&) const;
  void setPermeability(double);

  OdResult getVaporPressure(double&) const;
  void setVaporPressure(double);

  OdResult getSpecificHeat(double&) const;
  void setSpecificHeat(double);

  OdResult getLiquidViscosity(double&) const;
  void setLiquidViscosity(double);

  OdResult getCompressibility(double&) const;
  void setCompressibility(double);

  OdResult getGasViscosity(double&) const;
  void setGasViscosity(double);

  OdResult getEmissivity(double&) const;
  void setEmissivity(double);

  OdResult getIsTransmitsLight(bool&) const;
  void setIsTransmitsLight(bool);

  OdResult getThermalConductivity(double&) const;
  void setThermalConductivity(double);
};

#endif // _BM_ASSETHELPERS_H_

