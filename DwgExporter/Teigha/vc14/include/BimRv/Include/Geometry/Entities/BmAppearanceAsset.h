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

#ifndef _BM_APPEARANCEASSET_H_
#define _BM_APPEARANCEASSET_H_
#include "Geometry/Entities/BmPropertySetBase.h"

class OdBmAsset;
typedef OdSmartPtr<OdBmAsset> OdBmAssetPtr;
class OdBmCmColor;

class OdBmAppearanceAsset;
class OdBmAppearanceAssetImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAppearanceAsset object.
 */
typedef OdSmartPtr<OdBmAppearanceAsset> OdBmAppearanceAssetPtr;

/** \details
 A data type that represents an array of OdBmAppearanceAsset objects.
 */
typedef OdArray<OdBmAppearanceAssetPtr> OdBmAppearanceAssetPtrArray;

//----------------------------------------------------------
//
// OdBmAppearanceAsset
//
//----------------------------------------------------------

/** \details
    This class represents an appearance asset object.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmAppearanceAsset : public OdBmPropertySetBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAppearanceAsset);
public:
  /** \details
    Returns a transparency value of this appearance asset as a double value.
  */
  double getTransparency() const;
  /** \details
    Sets a transparency value of this appearance asset.

    \param double [in] Input material transparency value.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setTransparency(double);
  /** \details
    Returns a color of this appearance asset as an OdBmCmColor object.
  */
  OdBmCmColor getColor() const;
  /** \details
    Sets a color to this appearance asset.

    \param OdBmCmColor [in] Input material color.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setColor(const OdBmCmColor&);
  /** \details
    Returns a name of this appearance asset as an OdString object.
  */
  OdString getName() const;
  /** \details
    Sets a name of the appearance asset.

    \param OdString [in] Input appearance asset name.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setName(const OdString&);
  /** \details
    Returns a copy of the appearance asset as a pointer to an OdBmAsset object.
  */
  OdBmAssetPtr getAsset() const;
  /** \details
    Sets an asset.

    \param OdBmAssetPtr [in] Input asset.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAsset(const OdBmAssetPtr&);
  //
  // Main functionality
  //


};


#endif // _BM_APPEARANCEASSET_H_

