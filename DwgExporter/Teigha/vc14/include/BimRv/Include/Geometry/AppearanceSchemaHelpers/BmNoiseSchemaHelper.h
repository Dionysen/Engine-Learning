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

#ifndef _BM_NOISESCHEMAHELPER_H_
#define _BM_NOISESCHEMAHELPER_H_
#include "Base/BmObject.h"
#include "Geometry/Entities/BmAsset.h"
#include "Geometry/BmAssetHelper.h"

/** \details
    A helper class to work with noise asset.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmNoiseSchemaHelper : public OdBmAssetHelper {
public:
  /** \details
    Constructor for OdBmNoiseSchemaHelper.
    
    \param pAsset [in] Initializing object.
  */
  OdBmNoiseSchemaHelper(const OdBmAssetPtr& pAsset);
  
  /** \details
    Returns the noise type.
    
    \param value [out] The output value of the noise type.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getNoiseType(OdInt32& value) const;
  
  /** \details
    Sets the noise type.
    
    \param value [in] The input value of the noise type.
  */
  void setNoiseType(OdInt32 value);
  
  /** \details
    Returns the noise levels.
    
    \param value [out] The output value of the noise levels.    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getNoiseLevels(double& value) const;
  
  /** \details
    Sets the noise levels.
    
    \param value [in] TThe input value of the noise levels.
  */
  void setNoiseLevels(double value);
  
  /** \details
    Returns the noise phase.
    
    \param value [out] The output value of the noise phase.    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getNoisePhase(double& value) const;
  
  /** \details
    Sets the noise phase.
    
    \param double [in] The input value of the noise phase.
  */
  void setNoisePhase(double);
  
  /** \details
    Returns the noise size.
    
    \param double [out] The output value of the noise size.  
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getNoiseSize(double&) const;
  
  /** \details
    Sets the noise size.
    
    \param double [in] The input value of the noise size.
  */
  void setNoiseSize(double);
  
  /** \details
    Returns the high noise threshold.
    
    \param double [out] The output value of the high noise threshold.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getNoiseThresholdHigh(double&) const;
  
  /** \details
    Sets the high noise threshold.
    
    \param double [in] The input value of the high noise threshold.
  */
  void setNoiseThresholdHigh(double);
  
  /** \details
    Returns the low noise threshold.
    
    \param double [out] The output value of the low noise threshold.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getNoiseThresholdLow(double&) const;
  
  /** \details
    Sets the low noise threshold.
    
    \param double [in] The input value of the low noise threshold.
  */
  void setNoiseThresholdLow(double);
  
  /** \details
    Returns the textue angle.
    
    \param OdGeVector3d [out] The output vector.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getTextureAngle(OdGeVector3d&) const;
  
  /** \details
    Sets the texture angle.
    
    \param OdGeVector3d [in] The input vector.
  */
  void setTextureAngle(OdGeVector3d);
  
  /** \details
    Returns the texture offset.
    
    \param OdGePoint3d [out] The output value of the texture offset.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getTextureOffset(OdGePoint3d&) const;
  
  /** \details
    Sets the texture offset.
    
    \param OdGePoint3d [in] The input value of the texture offset.
  */
  void setTextureOffset(OdGePoint3d);
  
  /** \details
    Returns the 'save proportions' flag.
    
    \param bool [out] The output value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getLinkTextureTransforms(bool&) const;
  
  /** \details
    Sets the 'save proportions' flag.
    
    \param bool [in] The input value of the flag.
  */
  void setLinkTextureTransforms(bool);

  /**
    Description:
    Returns asset #1 in Noise schema.
    The asset can be one of the following types:
    image, checker, gradient, marble, noise, speckle, tiles, wave, wood
  */
  OdResult getAppearanceAsset1(OdBmAssetPtr&) const;
  void setAppearanceAsset1(const OdBmAssetPtr&);
  /**
    Description:
    Returns asset #2 in Noise schema.
    The asset can be one of the following types:
    image, checker, gradient, marble, noise, speckle, tiles, wave, wood
  */
  OdResult getAppearanceAsset2(OdBmAssetPtr&) const;
  void setAppearanceAsset2(const OdBmAssetPtr&);
  /**
    Description:
    Returns color #1 in Noise schema.
    The asset can be one of the following types:
    image, checker, gradient, marble, noise, speckle, tiles, wave, wood
  */
  OdResult getNoiseColor1(double& red, double& green, double& blue) const;
  void setNoiseColor1(double red, double green, double blue);
  /**
    Description:
    Returns asset #2 in Noise schema.
    The asset can be one of the following types:
    image, checker, gradient, marble, noise, speckle, tiles, wave, wood
  */
  OdResult getNoiseColor2(double& red, double& green, double& blue) const;
  void setNoiseColor2(double red, double green, double blue);

  virtual OdResult createDefaultSchema();
};


#endif // _BM_NOISESCHEMAHELPER_H_

