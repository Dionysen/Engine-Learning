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

#ifndef _BM_PLASTICVINYLAPPEARANCESCHEMA_H_
#define _BM_PLASTICVINYLAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmPlasticType.h"
#include "Geometry/Enums/BmPlasticFinishType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Plastic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmPlasticAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmPlasticAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves the type of the plastic material.
    
    \param OdBm::PlasticType::Enum [out] Output A value of the type of plastic.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.   
  */
  OdResult getPlasticType(OdBm::PlasticType::Enum&) const;

  /** \details
    Sets the type of the plastic material.
    
    \param OdBm::PlasticType::Enum [in] Input A value of the type of plastic.
  */
  void setPlasticType(const OdBm::PlasticType::Enum&);

  /** \details
    Retrieves a color of the plastic material.
    
    \param OdBmCmColor [out] Output A plasticVinyl color.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the color of the plastic material.
    
    \param OdBmCmColor [in] Input A plasticVinyl color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves an appearance pattern of the plastic material.
    
    \param OdBmAssetPtr [in] Input An appearance pattern of the plastic material.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getAppearancePattern(OdBmAssetPtr&) const;

  /** \details
    Sets the appearance pattern of the plastic material.
    
    \param OdBmAssetPtr [in] Input The appearance pattern of the plastic material.
  */
  void setAppearancePattern(const OdBmAssetPtr&);

  /** \details
    Retrieves the finish adjustment type of the plastic material.
    
    \param OdBm::PlasticFinishType::Enum [out] Output The finish adjustment type of the plastic material.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getFinishType(OdBm::PlasticFinishType::Enum&) const;

  /** \details
    Sets the type of the finish adjustment of the plastic material.
    
    \param OdBm::PlasticFinishType::Enum [in] Input The finish adjustment type of the plastic material.
  */
  void setFinishType(const OdBm::PlasticFinishType::Enum&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_PLASTICVINYLAPPEARANCESCHEMA_H_

