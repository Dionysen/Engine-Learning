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

#ifndef _BM_MATERIALELEM_H_
#define _BM_MATERIALELEM_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Geometry/Entities/BmMaterial.h"
#include "Base/BmCmColor.h"
// END: Includes

class OdBmMaterial;
typedef OdSmartPtr<OdBmMaterial> OdBmMaterialPtr;
class OdBmARasterImage;
typedef OdSmartPtr<OdBmARasterImage> OdBmARasterImagePtr;

class OdBmMaterialElem;
class OdBmMaterialElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMaterialElem object.
 */
typedef OdSmartPtr<OdBmMaterialElem> OdBmMaterialElemPtr;

/** \details
 A data type that represents an array of OdBmMaterialElem objects.
 */
typedef OdArray<OdBmMaterialElemPtr> OdBmMaterialElemPtrArray;

//----------------------------------------------------------
//
// OdBmMaterialElem
//
//----------------------------------------------------------

/** \details
    This class represents a material element.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmMaterialElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMaterialElem);
public:
  /** \details
    Returns a copy of material object stored inside this material element as a pointer to an OdBmMaterial object.
  */
  OdBmMaterialPtr getMaterial() const;
  /** \details
    Sets the material object. The material will be copied and stored in the MaterialElem

    \param OdBmMaterialPtr [in] Input pointer to a material object.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setMaterial(const OdBmMaterialPtr&);
  /** \details
    Returns the copy of thumbnail(sketch) of the material as a pointer to an OdBmARasterImage object.
  */
  OdBmARasterImagePtr getThumbnail() const;
  /** \details
    Sets a thumbnail(sketch) of this material.

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

  /** \details
    Returns the material name as an OdString value.
  */
  OdString getName() const;

  /** \details
    Sets the material name.

	\param sName [in] Input name.
  */
  OdResult setName(const OdString& sName);

  /** \details
    Returns the material color as an object of OdBmCmColor class.
  */
  OdBmCmColor getColor() const;

  /** \details
    Sets the material color.

	\param clr [in] Input material color.
  */
  OdResult setColor(const OdBmCmColor& clr);

  /** \details
    Returns the cut pattern color as an object of OdBmCmColor class.
  */
  OdBmCmColor getCutPatternColor() const;

  /** \details
    Sets the cut pattern color.

	\param clr [in] Input cut pattern color.
  */
  OdResult setCutPatternColor(const OdBmCmColor& clr);

  /** \details
    Returns the surface pattern color as an object of OdBmCmColor class.
  */
  OdBmCmColor getSurfacePatternColor() const;

  /** \details
    Sets the surface pattern color.

	\param clr [in] Input surface pattern color.
  */
  OdResult setSurfacePatternColor(const OdBmCmColor& clr);

  /** \details
    Returns true if material uses render appearance assets.
  */
  bool getUseRenderAppearance() const;

  /** \details
    Sets the flag that determines whether material uses render appearance assets.

	\param bAppearance [in] Input flag.
  */
  OdResult setUseRenderAppearance(bool bAppearance);

  /** \details
    Returns the ID of the structural asset object as object of OdBmObjectId class.
  */
  OdBmObjectId getStructuralAssetId() const;

  /** \details
    Sets the ID of the structural asset object.

	\param OdBmObjectId [in] Input structural asset ID.
  */
  void setStructuralAssetId(const OdBmObjectId&);

  /** \details
    Returns the ID of the thermal asset object as object of OdBmObjectId class.
  */
  OdBmObjectId getThermalAssetId() const;

  /** \details
    Sets the ID of the thermal asset object.

	\param OdBmObjectId [in] Input structural asset ID.
  */
  void setThermalAssetId(const OdBmObjectId&);

  virtual void subSetDatabaseDefaults(OdDbBaseDatabase*, bool);

  /** \details
    Creates material element with default settings and given name

    \param pDb  [in] Database where material will be stored.
    \param name [in] Name for material element.

    \returns ObjectId of the MaterialElem that was created and added to database.
  */
  static OdBmObjectId createMaterial(OdBmDatabase *pDb, const OdString &name);

  /** \details
    Checks whether the material element name is unique in the database.

    \param pDb  [in] Database where material name will be tested for uniqueness.
    \param name [in] Material element name for test.
    \returns False if the name is used for a material element or True in other case.
  */
  static bool isNameUnique(OdBmDatabase *pDb, const OdString &name);


  /** \details
    Returns the material ID by name. If the material does not exist, then returns OdBmObjectId::kNull.
  
    \param pDb  [in] Database that will be searched for the material.
    \param name [in] Input material name.
  */
  static OdBmObjectId getMaterialIdByName(OdBmDatabase *pDb, const OdString& name);
};


#endif // _BM_MATERIALELEM_H_

