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

#ifndef _BM_DECALTYPE_H_
#define _BM_DECALTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmDecalSymbolData;
typedef OdSmartPtr<OdBmDecalSymbolData> OdBmDecalSymbolDataPtr;
class OdBmObjectId;

class OdBmDecalType;
class OdBmDecalTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDecalType object.
 */
typedef OdSmartPtr<OdBmDecalType> OdBmDecalTypePtr;

/** \details
 A data type that represents an array of OdBmDecalType objects.
 */
typedef OdArray<OdBmDecalTypePtr> OdBmDecalTypePtrArray;

//----------------------------------------------------------
//
// OdBmDecalType
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmDecalType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDecalType);
public:
  OdBmDecalSymbolDataPtr getDSD() const;
  OdBmObjectId getFamilyTagId() const;
  OdBmObjectId getCategoryId() const;
  //
  // Main functionality
  //

  /** \details
    Retrieves the name of Decal source image file
    \returns A string that contains the file name
  */
  OdString getImageFileName() const;

  /** \details
    Sets the Decal source image file name.
    \param OdString [in] Input image file name.
  */
  void setImageFileName(const OdString&);
  
  /** \details
    Retrieves the brightness of Decal image.
    \returns A signed 32-bit integer value that contains the multiplier of image brightness.
  */
  OdInt32 getImageBrightness() const;

  /** \details
    Sets the brightness of Decal image.
    \param OdInt32 [in] Input image brightness multiplier value.
  */
  void setImageBrightness(OdInt32);

  /** \details
    Retrieves the reflectivity of Decal image.
    \returns A double value that contains the image reflectivity value.
  */
  double getImageReflectivity() const;

  /** \details
    Sets the reflectivity of Decal image.
    \param double [in] Input image reflectivity value.
  */
  void setImageReflectivity(const double&);
 
  /** \details
    Retrieves the transparency of Decal image.
    \returns A double value that contains the image transparency value.
  */
  double getImageTransparency() const;

  /** \details
    Sets the transparency of Decal image.
    \param double [in] Input image transparency value.
  */
  void setImageTransparency(const double&);

  /** \details
    Retrieves the glossiness of Decal image.
    \returns A double value that contains the image glossiness value.
  */
  double getImageGlossiness() const;

  /** \details
    Sets the glossiness of Decal image.
    \param double [in] Input image glossiness value.
  */
  void setImageGlossiness(const double&);
  
  /** \details
    Retrieves the luminance of Decal image.
    \returns A double value that contains the image luminance value.
  */
  double getImageLuminance() const;

  /** \details
    Sets the luminance of Decal image.
    \param double [in] Input image luminance value.
  */
  void setImageLuminance(const double&);

  // Decaltype bump data

  /** \details
    Retrieves the name of Decal bump image file.
    \returns A string that contains the file name.
  */
  OdString getBumpImageFileName() const;

  /** \details
    Sets the name of Decal bump image file.
    \param OdString [in] Input bump image filename.
  */
  void setBumpImageFileName(const OdString&);

  /** \details
    Retrieves the Decal bump patternt color
    \returns OdBmCmColor object that contains the color of bump pattern
  */
  OdBmCmColor getBumpPatternColor() const;

  /** \details
    Sets the Decal bump patternt color
    \param OdBmCmColor [in] Input bump pattern color.
  */
  void setBumpPatternColor(const OdBmCmColor&);

  /** \details
    Retrieves true if the Decal bump image is inverted.
    \returns true if the bump image is inverted, otherwise, the method returns false.
  */
  bool getBumpIsInverted() const;

  /** \details
    Sets the inversion flag of Decal bump image.
    \param bool [in] Input bump image inversion flag value.
  */
  void setBumpIsInverted(bool);

  /** \details
  Retrieves Decal bump amount.
  \returns A double value that contains the image bump amount value.
*/
  double getBumpAmount() const;

  /** \details
    Sets the bump amount of Decal bump image.
    \param double [in] Input bump amount of bump image.
  */
  void setBumpAmount(const double&);

  /** \details
    Removes Decal bump image.
  */
  void removeBumpImage();

  
  // Decaltype CutOut data

  /** \details
    Retrieves the name of Decal cutout image file
    \returns A string that contains the file name
  */
  OdString getCutoutImageFileName() const;

  /** \details
    Sets the Decal cutout image file name.
    \param OdString [in] Input cutout image filename.
  */
  void setCutoutImageFileName(const OdString&);

  /** \details
    Retrieves the brightness of Decal cutout image.
    \returns A signed 32-bit integer value that contains the multiplier of cutout image brightness.
  */
  OdInt32 getCutoutBrightness() const;

  /** \details
    Sets the brightness of Decal cutout image.
    \param OdInt32 [in] Input cutout image brightness multiplier value.
  */
  void setCutoutBrightness(OdInt32);

  /** \details
    Removes Decal cutout image.
  */
  void removeCutoutImage();
};
#endif // _BM_DECALTYPE_H_

