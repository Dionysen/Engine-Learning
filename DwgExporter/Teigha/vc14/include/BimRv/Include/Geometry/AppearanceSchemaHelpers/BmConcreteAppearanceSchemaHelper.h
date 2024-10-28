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

#ifndef _BM_CONCRETEAPPEARANCESCHEMAHELPER_H_
#define _BM_CONCRETEAPPEARANCESCHEMAHELPER_H_
#include "BmAppearanceSchemaBaseHelper.h"
#include "BmConcreteAppearanceSchema.h"
#include "BmConcreteAppearanceSchemaFinishBumps.h"
#include "BmConcreteAppearanceSchemaWeathering.h"

/** \details
  A helper class to work with Concrete appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmConcreteAppearanceSchemaHelper : public OdBmAppearanceSchemaBaseHelper {
public:
  
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmConcreteAppearanceSchemaHelper(const OdBmAssetPtr& pAsset) :
    OdBmAppearanceSchemaBaseHelper(pAsset) {}

  /** \details
    Retrieves the base part of the material.
  */
  OdBmConcreteAppearanceSchema& concrete();
  
  /** \details
    Retrieves the base part of the material as a constant.
  */
  const OdBmConcreteAppearanceSchema& concrete() const;
  
  /** \details
    Retrieves the finish bumps part of the Concrete material.
  */
  OdBmConcreteAppearanceSchemaFinishBumps& finishBumps();
  
  /** \details
    Retrieves the weathering part of the Concrete material.
  */
  OdBmConcreteAppearanceSchemaWeathering& weathering();

private:
  mutable std::unique_ptr<OdBmConcreteAppearanceSchema> m_concrete;
  mutable std::unique_ptr<OdBmConcreteAppearanceSchemaFinishBumps> m_finishBumps;
  mutable std::unique_ptr<OdBmConcreteAppearanceSchemaWeathering> m_weathering;
};

#endif // _BM_CONCRETEAPPEARANCESCHEMAHELPER_H_

