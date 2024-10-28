//////////////////////////////////////////////////////////////////////////////
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

#ifndef _BM_WATERAPPEARANCESCHEMA_H_
#define _BM_WATERAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmWaterType.h"
#include "Geometry/Enums/BmWaterColorType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Water appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmWaterAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmWaterAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves the type of the water material.
    
    \param OdBm::WaterType::Enum [out] Output A value of the type of water.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getType(OdBm::WaterType::Enum&) const;

  /** \details
    Sets the type of the water material.
    
    \param OdBm::WaterType::Enum [in] Input A value of the type of water.
  */
  void setType(const OdBm::WaterType::Enum&);

  /** \details
    Retrieves the type of color applied to the water material.
    
    \param OdBm::WaterColorType::Enum [out] Output A value of the color type.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getColorType(OdBm::WaterColorType::Enum&) const;
  
  /** \details
    Retrieves the calculated color of the Water material.

    \param OdBmCmColor [out] Output A value of the color calculated using water type and water color type.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the type of color applied to the water material.
    Not applicable for types of swimming or reflecting pool.
  
    \param OdBm::WaterColorType::Enum [in] Input A value of the color type.
    returns An OdResult value: eOk if value can be set, eNotApplicable if not.
  */
  OdResult setColorType(const OdBm::WaterColorType::Enum&);

  /** \details
    Retrieves a custom color of the water.
  
    \param OdBmCmColor [out] Output A custom color of the water.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getCustomColor(OdBmCmColor&) const;

  /** \details
    Sets the custom color of the water.
    Applicable only for custom color type of the water material.
    
    \param OdBmCmColor [in] Input A custom color of the water.
    \returns An OdResult value: eOk if value can be set, eNotApplicable if not.
  */
  OdResult setCustomColor(const OdBmCmColor&);

  /** \details
    Retrieves a relative wave height of the water.
    
    \param double [out] Output A relative wave height of the water.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getWavesHeight(double&) const;

  /** \details
    Sets the relative wave height of the water.
    
    \param double [in] Input A value between 0 to 5.
  */
  void setWavesHeight(const double&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_WATERAPPEARANCESCHEMA_H_
