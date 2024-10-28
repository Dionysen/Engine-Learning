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

#ifndef _BM_APPEARANCESCHEMAHELPER_H_
#define _BM_APPEARANCESCHEMAHELPER_H_

#include "Base/BmObject.h"
#include "Geometry/Entities/BmAsset.h"
#include "Geometry/Enums/BmPredefinedAppearanceAsset.h"
#include "BmAppearanceSchemaBaseHelper.h"

/** \details
    <group Geometry_Classes>
*/

class TB_GEOMETRY_EXPORT OdBmAppearanceSchemaHelper : public OdBmAppearanceSchemaBaseHelper {
public:
  /** \details
    Default constructor.
    
    \param pAsset [in] Input Smart pointer to asset object of Appearance asset which contains appearance schema data.
  */
  OdBmAppearanceSchemaHelper(const OdBmAssetPtr& pAsset) : OdBmAppearanceSchemaBaseHelper(pAsset) {}

  /** \details
    Retrieves an appearance color if possible.
    
    \param OdBmCmColor [out] Output appearance color.
    \returns An OdResult value: eOk if color can be retrieved, eNotApplicable if not.
  */
  virtual OdResult getColor(OdBmCmColor& color) const;

  /** \details
    Sets an appearance color if possible.
    
    \param OdBmCmColor [in] Input appearance color.
    \returns An OdResult value: eOk if schema contains color, eNotApplicable if not.
  */
  virtual OdResult setColor(const OdBmCmColor& color);

  /** \details
    Retrieves an appearance texture if possible.
    
    \param OdBmAssetPtr [out] Output texture asset (it is usually a Unified bitmap schema).
    \returns An OdResult value: eOk if schema contains texture, eNotApplicable if not.
  */
  virtual OdResult getTextureAsset(OdBmAssetPtr&) const;

  /** \details
      Sets   an appearance texture if possible.

      \param OdBmAssetPtr [in] Input texture asset.
      \returns An OdResult value: eOk if it is possible to set a defuse texture, eNotApplicable if not.
    */
  virtual OdResult setTextureAsset(OdBmAssetPtr);

  /** \details
    Retrieves an appearance relief texture if possible.

    \param OdBmAssetPtr [out] Output texture asset (it is usually a Unified bitmap schema).
    \returns An OdResult value: eOk if schema contains texture, eNotApplicable if not.
  */
  virtual OdResult getReliefTextureAsset(OdBmAssetPtr&) const;

  /** \details
    Sets an appearance relief texture if possible.

    \param OdBmAssetPtr [in] Input texture asset.
    \returns An OdResult value: eOk if it is possible to set a relief texture, eNotApplicable if not.
  */
  virtual OdResult setReliefTextureAsset(OdBmAssetPtr);

  /** \details
    Retrieves a depth of surface irregularities if possible.

    \param double [out] Output A value that contains depth of surface irregularities.
    \returns An OdResult value: eOk if value can be retrieved, eNotApplicable if not.
  */
  virtual OdResult getReliefBumpAmount(double&) const;

  /** \details
      Sets a depth of surface irregularities if possible.

      \param double [in] Input A value that contains depth of surface irregularities.
      \returns An OdResult value: eOk if it is possible to set the depth of surface irregularities, eNotApplicable if not.
    */
  virtual OdResult setReliefBumpAmount(double);
};

#endif // _BM_APPEARANCESCHEMAHELPER_H_

