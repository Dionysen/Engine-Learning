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

#ifndef _BM_HARDWOODAPPEARANCESCHEMA_H_
#define _BM_HARDWOODAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmHardwoodFinishType.h"
#include "Geometry/Enums/BmHardwoodUseType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Hardwood appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmHardwoodAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmHardwoodAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves hardwood appearance pattern.
    
    \param OdBmAssetPtr [in] Input a properties asset.
    \returns An OdResult value: eOk if schema contains a diffuse pattern, eNotApplicable if not.
  */
  OdResult getAppearancePattern(OdBmAssetPtr&) const;

  /** \details
    Sets the hardwood appearance pattern.
    
    \param OdBmAssetPtr [in] Input A hardwood appearance pattern.
  */
  void setAppearancePattern(const OdBmAssetPtr&);

  /** \details
    Retrieves a type of hardwood finish adjustment.
    
    \param OdBm::HardwoodFinishType::Enum [out] Output A type of hardwood finish adjustment.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getFinishType(OdBm::HardwoodFinishType::Enum&) const;

  /** \details
    Sets the type of material.
    
    \param OdBm::HardwoodFinishType::Enum [in] Input A type of hardwood finish adjustment.
  */
  void setFinishType(const OdBm::HardwoodFinishType::Enum&);

  /** \details
    Retrieves true if wood is stained.
    
    \param bool [out] Output A value containing stain status of the hardwood.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getStain(bool&) const;

  /** \details
    Set true if wood is stained.
    
    \param bool [in] Input A A value containing stain status of the hardwood.
  */
  void setStain(bool);

  /** \details
  Retrieves a stain color of the hardwood.
  
  \param OdBmCmColor [out] Output A stain color.
  \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getStainColor(OdBmCmColor&) const;

  /** \details
    Sets the stain color of the hardwood.
    
    \param OdBmCmColor [in] Input A stain color.
  */
  void setStainColor(const OdBmCmColor&);

  /** \details
    Retrieves a type how the wood surface gets used.
    
    \param OdBm::HardwoodUseType::Enum [out] Output A value of flooring or furniture.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getUsedFor(OdBm::HardwoodUseType::Enum&) const;

  /** \details
    Sets the type how the wood surface gets used.
    
    \param OdBm::HardwoodUseType::Enum [in] Input A type of flooring or furniture.
  */
  void setUsedFor(const OdBm::HardwoodUseType::Enum&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_HARDWOODAPPEARANCESCHEMA_H_
