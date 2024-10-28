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

#ifndef _BM_METALAPPEARANCESCHEMA_H_
#define _BM_METALAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmMetalType.h"
#include "Geometry/Enums/BmMetalFinishType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Metal appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmMetalAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmMetalAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves metal type.
    
    \param OdBm::MetalType::Enum [out] Output An enum value that contains the metal type.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getType(OdBm::MetalType::Enum&) const;

  /** \details
    Sets the metal type.
    
    \param OdBm::MetalType::Enum [in] Input An enum value that contains the metal type.
  */
  void setType(const OdBm::MetalType::Enum&);

  /** \details
    Retrieves type of metal finish.
    
    \param OdBm::MetalFinishType::Enum [out] Output An enum value that contains the type of metal finish.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getFinishType(OdBm::MetalFinishType::Enum&) const;

  /** \details
    Sets the type of metal finish.
    
    \param OdBm::MetalFinishType::Enum [in] Input An enum value that contains the type of metal finish.
  */
  void setFinishType(const OdBm::MetalFinishType::Enum&);

  /** \details
    Retrieves the degree of discoloration as result of oxidation or the application of a chemical compound. Applicable for copper or bronze.
    
    \param double [out] Output A double value between 0 (none) and 1 (full).
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatinaDegree(double&) const;

  /** \details
    Sets the patina level.
    
    \param double [in] Input A double value between 0 (none) and 1 (full).
  */
  void setPatinaDegree(const double&);

  /** \details
    Retrieves a color of the metal. Applicable for Anodized Aluminum.
  
    \param OdBmCmColor [out] Output A color of the metal.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the color of the metal.
    
    \param OdBmCmColor [in] Input A color of the metal.
  */
  void setColor(const OdBmCmColor&);
private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_METALAPPEARANCESCHEMA_H_
