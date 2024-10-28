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

#ifndef _BM_APPEARANCEASSETELEM_H_
#define _BM_APPEARANCEASSETELEM_H_
#include "Database/BmElement.h"

class OdBmAppearanceAsset;
typedef OdSmartPtr<OdBmAppearanceAsset> OdBmAppearanceAssetPtr;
class OdBmARasterImage;
typedef OdSmartPtr<OdBmARasterImage> OdBmARasterImagePtr;

class OdBmAppearanceAssetElem;
class OdBmAppearanceAssetElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAppearanceAssetElem object.
 */
typedef OdSmartPtr<OdBmAppearanceAssetElem> OdBmAppearanceAssetElemPtr;

/** \details
 A data type that represents an array of OdBmAppearanceAssetElem objects.
 */
typedef OdArray<OdBmAppearanceAssetElemPtr> OdBmAppearanceAssetElemPtrArray;

//----------------------------------------------------------
//
// OdBmAppearanceAssetElem
//
//----------------------------------------------------------

/** \details
    This class represents an appearance asset element.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAppearanceAssetElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAppearanceAssetElem);
public:
  /** \details
    Returns a copy of the appearance asset object stored inside this appearance asset element as a pointer to an OdBmAppearanceAsset object.
  */
  OdBmAppearanceAssetPtr getRenderingAsset() const;
  /** \details
    Sets the appearance asset. The asset will be copied and stored in the element.

    \param OdBmAppearanceAssetPtr [in] Input pointer to an appearance asset object.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setRenderingAsset(const OdBmAppearanceAssetPtr&);
  /** \details
    Returns the thumbnail(sketch) of the appearance asset as a pointer to an OdBmARasterImage object.
  */
  OdBmARasterImagePtr getThumbnail() const;
  /** \details
    Sets a thumbnail(sketch) of this appearance asset.

    \param OdBmARasterImagePtr [in] Input thumbnail.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setThumbnail(const OdBmARasterImagePtr&);
  /** \details
    Returns the material path map as an OdBmMap object.

    \param OdBmMap [out] Output material path map.
  */
  void getMaterialPathMap(OdBmMap<OdInt32, OdBmPair<OdString, OdInt32> > &) const;
  /** \details
    Sets a material path map.

    \param OdBmMap [in] Input material path map.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setMaterialPathMap(const OdBmMap<OdInt32, OdBmPair<OdString, OdInt32> >&);
  //
  // Main functionality
  //

  virtual void subSetDatabaseDefaults(OdDbBaseDatabase*, bool);

};


#endif // _BM_APPEARANCEASSETELEM_H_

