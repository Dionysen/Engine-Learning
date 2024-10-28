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

#ifndef _BM_CONCRETEAPPEARANCESCHEMA_H_
#define _BM_CONCRETEAPPEARANCESCHEMA_H_
#include "Geometry/Enums/BmConcreteSealantType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with base part of Concrete appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmConcreteAppearanceSchema
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmConcreteAppearanceSchema(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves a type of sealant used to seal the concrete.
    
    \param OdBm::ConcreteSealantType::Enum [out] Output A value of solid glass pattern type.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getSealantType(OdBm::ConcreteSealantType::Enum&) const;

  /** \details
    Sets the type of sealant used to seal the concrete.
    
    \param OdBm::ConcreteSealantType::Enum [in] Input A value of ceramic or porcelain.
  */
  void setSealantType(const OdBm::ConcreteSealantType::Enum&);

  /** \details
    Retrieves a concrete color.
    
    \param OdBmCmColor [out] Output A concrete color.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getColor(OdBmCmColor&) const;

  /** \details
    Sets the concrete color.
    
    \param OdBmCmColor [in] Input A concrete color.
  */
  void setColor(const OdBmCmColor&);

  /** \details
    Retrieves a concrete appearance pattern.
    
    \param OdBmAssetPtr [in] Input A concrete appearance pattern.
    \returns An OdResult value: eOk if schema contains a diffuse pattern, eNotApplicable if not.
  */
  OdResult getAppearancePattern(OdBmAssetPtr&) const;

  /** \details
    Sets the concrete appearance pattern.
    
    \param OdBmAssetPtr [in] Input A concrete appearance pattern
  */
  void setAppearancePattern(const OdBmAssetPtr&);

private:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_CONCRETEAPPEARANCESCHEMA_H_

