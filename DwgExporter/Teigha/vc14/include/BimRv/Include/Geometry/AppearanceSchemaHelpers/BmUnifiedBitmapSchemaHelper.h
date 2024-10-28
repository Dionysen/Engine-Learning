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

#ifndef _BM_UNIFIEDBITMAPSCHEMAHELPER_H_
#define _BM_UNIFIEDBITMAPSCHEMAHELPER_H_
#include "Base/BmObject.h"
#include "Geometry/Entities/BmAsset.h"
#include "Gi/GiRasterImage.h"
#include "Geometry/BmAssetHelper.h"

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmUnifiedBitmapSchemaHelper : public OdBmAssetHelper {
public:

  /** \details
    Constructor for OdBmUnifiedBitmapSchemaHelper.
    
    \param pAsset [in] Initializing object.
  */
  OdBmUnifiedBitmapSchemaHelper(const OdBmAssetPtr& pAsset);
  
  /** \details
    Returns the 'save proportions' flag.
    
    \param value [out] The output value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getLinkTextureTransforms(bool& value) const;
  
  /** \details
    Sets the 'save proportions' flag.
    
    \param value [in] The input value of the flag.
  */
  void setLinkTextureTransforms(bool value);
  
  /** \details
    Returns true if the offset is locked.
    
    \param value [out] The output value of the flag.   
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getOffsetLock(bool& value) const;
  
  /** \details
    Sets the offset lock flag to a passed value.
    
    \param value [in] The input value of the flag.
  */
  void setOffsetLock(bool value);
  
  /** \details
    Returns the real world offset.
    
    \param value [out] The offset value represented by a point.
    \param unit [out] The unit of measurement.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getRealWorldOffset(OdGePoint2d& value, OdInt32& unit) const;
  
  /** \details
    Sets the real world offset.
    
    \param value [in] The offset value represented by a point.
    \param unit [in] The unit of measurement.
  */
  void setRealWorldOffset(const OdGePoint2d& value, OdInt32 unit);
  
  /** \details
    Returns the real world scale.
    
    \param value [out] The scale value as a point. X-value represents scale for X-axis and Y-value - scale for Y-axis.
    \param unit [out] The unit of measurement.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getRealWorldScale(OdGePoint2d& value, OdInt32& unit) const;
  
  /** \details
    Sets the real world scale.
    
    \param value [out] The scale value as a point. X-value represents scale for X-axis and Y-value - scale for Y-axis.
    \param unit [out] The unit of measurement.
  */
  void setRealWorldScale(const OdGePoint2d& value, OdInt32 unit);
  
  /** \details
    Returns true if the scale is fixed.
    
    \param value [out] The output value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getScaleLock(bool& value) const;
  
  /** \details
    Sets the 'fixed scale' flag to a passed value.
    
    \param value [in] The input value of the flag.
  */
  void setScaleLock(bool value);
  
  /** \details
    Returns the UV offset.
    
    \param u [out] The u-value of the offset.
    \param v [out] The v-value of the offset.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getUVOffset(double& u, double& v) const;
  
  /** \details
    Sets the UV offset.
    
    \param u [out] The u-value of the offset.
    \param v [out] The v-value of the offset.
  */
  void setUVOffset(double u, double v);
  
  /** \details
    Returns the 'Repeat' flag state for each of 2 axes.
    
    \param u [out] The output value of the flag for u.
    \param v [out] The output value of the flag for v.
    \remarks Repeat flag controls whether the image is tiled along U-axis and V-axis. 
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getUVRepeat(bool& u, bool& v) const;
  
  /** \details
    Sets the repeat mode for each of 2 axes.
    
    \param u [in] The input value of the flag for u.
    \param v [in] The output value of the flag for v. 
    \remarks Repeat flag controls whether the image is tiled along U-axis and V-axis. 
  */
  void setUVRepeat(bool u, bool v);
  
  /** \details
    Returns the UV scale.
    
    \param u [out] The scale value for u.
    \param v [out] The scale value for v.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getUVScale(double& u, double& v) const;
  
  /** \details
    Sets the UV scale.
    
    \param u [out] The scale value for u.
    \param v [out] The scale value for v.
  */
  void setUVScale(double u, double v);
  
  /** \details
    Returns the UV scale.
    
    \param value [out] The output value of the UV scale.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getUVScale(double& value) const;
  
  /** \details
    Sets the UV scale.
    
    \param value [in] The input value of the UV scale.
  */
  void setUVScale(double value);
  
  /** \details
    Returns the W angle.
    
    \param value [out] The output value of the angle.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getWAngle(double& value) const;
  
  /** \details
    Sets the W angle.
    
    \param value [in] The input value of the angle.
  */
  void setWAngle(double value);
  
  /** \details
    Returns the blur value.
    
    \param value [out] The output value of the blur.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getBlur(double& value) const;
  
  /** \details
    Sets the blur value.
    
    \param value [in] The input value of the blur.
  */
  void setBlur(double value);
  
  /** \details
    Returns the blur offset.
    
    \param value [out] The input value of the blur offset.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getBlur_Offset(double& value) const;
  
  /** \details
    Sets the blur offset.
    
    \param value [in] The input value of the blur offset.
  */
  void setBlur_Offset(double value);
  
  /** \details
    Returns the filtering mode.
    
    \param value [out] The output value of the filtering mode.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getFiltering(OdInt32& value) const;
  
  /** \details
    Sets the filtering mode.
    
    \param value [in] The input value of the filtering mode.
  */
  void setFiltering(OdInt32 value);
  
  /** \details
    Returns true if the image is inverted.
    
    \param value [out] The output value of the flag.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getInvert(bool& value) const;
  
  /** \details
    Sets 'Inverted' flag to the passed value.
  
    \param value [in] The input value of the flag.
  */
  void setInvert(bool value);
  
  /** \details
    Returns the current brightness setting.
    
    \param value [out] The output value of brightness.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getRGBAmount(double& value) const;
  
  /** \details
    Sets the brightness value.
    
    \param value [in] The input brightness value.
  */
  void setRGBAmount(double value);
  
  /** \details
    Returns the name of the file with a bitmap.
    
    \param value [out] The outut filename.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getTextureFileName(OdString& value) const;
  
  /** \details
    Sets the name of the file with a bitmap.
    
    \param value [in] The input filename.
  */
  void setTextureFileName(const OdString& value);

  /** \details
    Loads texture using getTextureFilename() method. If unsuccessful, loads texture using sTextureFileName.
    
    \param sTextureFileName [in] Auxillary input texture filename.
    \param pImg [out] Pointer to a raster image.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult getTextureRasterImage(OdString& sTextureFileName, OdGiRasterImagePtr& pImg) const;

  /** \details
    Creates a unified bitmap schema.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  virtual OdResult createDefaultSchema();
};


#endif // _BM_UNIFIEDBITMAPSCHEMAHELPER_H_

