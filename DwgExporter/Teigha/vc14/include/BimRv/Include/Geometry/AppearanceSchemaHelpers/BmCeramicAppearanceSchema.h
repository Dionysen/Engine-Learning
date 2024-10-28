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

#ifndef _BM_CERAMICAPPEARANCESCHEMA_H_
#define _BM_CERAMICAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmCeramicType.h"
#include "Geometry/Enums/BmCeramicFinishType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Ceramic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmCeramicAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmCeramicAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a type of material.
    
    \param OdBm::CeramicType::Enum [out] Output A value of solid glass pattern type.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getCeramicType(OdBm::CeramicType::Enum&) const;

  /** \details
    Sets the type of material.
    
    \param OdBm::CeramicType::Enum [in] Input A value of ceramic or porcelain.
  */
  void setCeramicType(const OdBm::CeramicType::Enum&);

  /** \details
    Retrieves ceramic color.
    
    \param OdBmCmColor [out] Output A ceramic color.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the ceramic color.
    
    \param OdBmCmColor [in] Input A ceramic color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves ceramic appearance pattern.
    
    \param OdBmAssetPtr [in] Input a properties asset.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getAppearancePattern(OdBmAssetPtr&) const;

  /** \details
    Sets the ceramic appearance pattern.
    
    \param OdBmAssetPtr [in] Input A ceramic appearance pattern.
  */
  void setAppearancePattern(const OdBmAssetPtr&);

  /** \details
    Retrieves a type of ceramic finish adjustment.
    
    \param OdBm::CeramicFinishType::Enum [out] Output A type of ceramic finish adjustment.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getFinish(OdBm::CeramicFinishType::Enum&) const;

  /** \details
    Sets the type of finish adjustment of ceramic material.
    
    \param OdBm::CeramicFinishType::Enum [in] Input A type of ceramic finish adjustment.
  */
  void setFinish(const OdBm::CeramicFinishType::Enum&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_CERAMICAPPEARANCESCHEMA_H_

