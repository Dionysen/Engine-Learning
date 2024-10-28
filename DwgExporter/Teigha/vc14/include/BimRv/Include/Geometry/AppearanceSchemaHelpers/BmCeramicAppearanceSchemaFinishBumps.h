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

#ifndef _BM_CERAMICAPPEARANCESCHEMA_FINISHBUMPS_H_
#define _BM_CERAMICAPPEARANCESCHEMA_FINISHBUMPS_H_
#include "BmFinishBumpsSchemaHelper.h"
#include "Geometry/Enums/BmCeramicReliefType.h"
#include "Geometry/Entities/BmAsset.h"

/** \details
  A helper class to work with finish bumps part of Ceramic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmCeramicAppearanceSchemaFinishBumps : public OdBmFinishBumpsSchemaHelper
{
public:
  /** \details
    Default constructor.
  
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmCeramicAppearanceSchemaFinishBumps(const OdBmAssetPtr& pAsset) :OdBmFinishBumpsSchemaHelper(pAsset) {}

  /** \details
    Retrieves a pattern type of low frequency waves often found in ceramics.
    
    \param OdBm::CeramicReliefType::Enum [out] Output A value of pattern type.
    \returns An OdResult value: eOk if the value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatternType(OdBm::CeramicReliefType::Enum&) const;

  /** \details
    Sets the pattern type of ceramic low frequency waves.
    
    \param OdBm::CeramicReliefType::Enum [in] Input A value of pattern type.
  */
  void setPatternType(const OdBm::CeramicReliefType::Enum&);

private:
  // hide default methods
  OdResult getPatternType(OdInt32&) const;
  void setPatternType(const OdInt32&);
};

#endif // _BM_CERAMICAPPEARANCESCHEMA_FINISHBUMPS_H_

