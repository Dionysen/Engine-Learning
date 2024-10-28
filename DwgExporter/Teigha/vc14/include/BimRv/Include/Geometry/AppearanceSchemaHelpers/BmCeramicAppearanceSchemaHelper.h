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

#ifndef _BM_CERAMICAPPEARANCESCHEMAHELPER_H_
#define _BM_CERAMICAPPEARANCESCHEMAHELPER_H_
#include "BmAppearanceSchemaBaseHelper.h"
#include "BmCeramicAppearanceSchema.h"
#include "BmCeramicAppearanceSchemaFinishBumps.h"
#include "BmCeramicAppearanceSchemaRelief.h"

/** \details
  A helper class to work with Ceramic appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmCeramicAppearanceSchemaHelper : public OdBmAppearanceSchemaBaseHelper {
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmCeramicAppearanceSchemaHelper(const OdBmAssetPtr& pAsset) :
    OdBmAppearanceSchemaBaseHelper(pAsset) {}

  /** \details
    Retrieves the base part of the Ceramic material.
  */
  OdBmCeramicAppearanceSchema& ceramic();
  
  /** \details
    Retrieves the base part of the Ceramic material as a constant.
  */
  const OdBmCeramicAppearanceSchema& ceramic() const;
  
  /** \details
    Retrieves the finish bumps part of the Ceramic material.
  */
  OdBmCeramicAppearanceSchemaFinishBumps& finishBumps();
  
  /** \details
    Retrieves the additioanal relief part of the Ceramic material.
  */
  OdBmCeramicAppearanceSchemaRelief& relief();

private:
  mutable std::unique_ptr<OdBmCeramicAppearanceSchema> m_ceramic;
  mutable std::unique_ptr<OdBmCeramicAppearanceSchemaFinishBumps> m_finishBumps;
  mutable std::unique_ptr<OdBmCeramicAppearanceSchemaRelief> m_relief;
};

#endif // _BM_CERAMICAPPEARANCESCHEMAHELPER_H_

