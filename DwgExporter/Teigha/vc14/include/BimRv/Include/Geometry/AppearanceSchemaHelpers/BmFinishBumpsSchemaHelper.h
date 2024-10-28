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

#ifndef _BM_FINISHBUMPS_SCHEMAHELPER_H_
#define _BM_FINISHBUMPS_SCHEMAHELPER_H_
#include "Geometry/Entities/BmAsset.h"
#include "Geometry/Entities/BmAsset.h"

class TB_GEOMETRY_EXPORT OdBmFinishBumpsSchemaHelper
{
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmFinishBumpsSchemaHelper(const OdBmAssetPtr& pAsset) :m_pAsset(pAsset) {}

  /** \details
    Retrieves the type of decorative design (Relief bumps) pressed onto the surface.
    
    \param OdInt32 [out] Output A value of pattern type.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatternType(OdInt32&) const;

  /** \details
    Sets the relief pattern of the surface.
    
    \param OdInt32 [in] Input A value of relief pattern type.
  */
  void setPatternType(const OdInt32&);

  /** \details
    Retrieves a relative height of the relief pattern.
    
    \param double [out] Output A value of relief height, 0 means flat pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  virtual OdResult getHeight(double&) const;

  /** \details
    Sets the relative height of the relief pattern.
    
    \param double [in] Input A value of relief height.
  */
  virtual void setHeight(const double&);

  /** \details
    Retrieves a map of the relief pattern.
    
    \param OdBmAssetPtr [out] Output A map of the relief pattern.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  OdResult getPatternMap(OdBmAssetPtr&) const;

  /** \details
    Sets the map of the relief pattern.
    
    \param OdBmAssetPtr [in] Input A map of the relief pattern.
  */
  void setPatternMap(const OdBmAssetPtr&);

protected:
  OdBmAssetPtr m_pAsset;
};

#endif // _BM_FINISHBUMPS_SCHEMAHELPER_H_

