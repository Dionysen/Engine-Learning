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

#ifndef _BM_WATERAPPEARANCESCHEMAHELPER_H_
#define _BM_WATERAPPEARANCESCHEMAHELPER_H_
#include "BmAppearanceSchemaBaseHelper.h"
#include "BmWaterAppearanceSchema.h"

/** \details
  A helper class to work with Water appearance schema.
*/
class TB_GEOMETRY_EXPORT OdBmWaterAppearanceSchemaHelper : public OdBmAppearanceSchemaBaseHelper {
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmWaterAppearanceSchemaHelper(const OdBmAssetPtr& pAsset) :
    OdBmAppearanceSchemaBaseHelper(pAsset) {}
  
  /** \details
    Retrieves the base part of the Water material.
  */
  OdBmWaterAppearanceSchema& water();
  
  /** \details
    Retrieves the base part of the Water material as a constant.
  */
  const OdBmWaterAppearanceSchema& water() const;

private:
  mutable std::unique_ptr<OdBmWaterAppearanceSchema> m_water;
};

#endif // _BM_WATERAPPEARANCESCHEMAHELPER_H_
