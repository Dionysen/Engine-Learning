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

#ifndef _BM_CONCRETEAPPEARANCESCHEMA_FINISHBUMPS_H_
#define _BM_CONCRETEAPPEARANCESCHEMA_FINISHBUMPS_H_
#include "BmAppearanceSchemaBaseHelper.h"
#include "BmFinishBumpsSchemaHelper.h"
#include "Geometry/Enums/BmConcreteFinishType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with finish bumps part of Concrete appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmConcreteAppearanceSchemaFinishBumps : public OdBmFinishBumpsSchemaHelper
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmConcreteAppearanceSchemaFinishBumps(const OdBmAssetPtr& pAsset) :OdBmFinishBumpsSchemaHelper(pAsset) {}

  /** \details
    Retrieves a pattern type of concrete surface texture.
    
    \param OdBm::ConcreteFinishType::Enum [out] Output A pattern type of concrete surface texture.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatternType(OdBm::ConcreteFinishType::Enum&) const;

  /** \details
    Sets the pattern type of concrete surface texture.
    
    \param OdBm::CeramicWavesType::Enum [in] Input A pattern type of concrete surface texture.
  */
  void setPatternType(const OdBm::ConcreteFinishType::Enum&);
};

#endif // _BM_CONCRETEAPPEARANCESCHEMA_FINISHBUMPS_H_

