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

#ifndef _BM_ABSLAYOUTAPPINFO_H_
#define _BM_ABSLAYOUTAPPINFO_H_
#include "Database/Managers/BmAppInfo.h"

class OdBmRbsOffsetSetWrapper;
typedef OdSmartPtr<OdBmRbsOffsetSetWrapper> OdBmRbsOffsetSetWrapperPtr;
class OdBmSystemNavigatorStateData;
typedef OdSmartPtr<OdBmSystemNavigatorStateData> OdBmSystemNavigatorStateDataPtr;
class OdBmObjectId;

class OdBmAbsLayoutAppInfo;
class OdBmAbsLayoutAppInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAbsLayoutAppInfo object.
 */
typedef OdSmartPtr<OdBmAbsLayoutAppInfo> OdBmAbsLayoutAppInfoPtr;

/** \details
 A data type that represents an array of OdBmAbsLayoutAppInfo objects.
 */
typedef OdArray<OdBmAbsLayoutAppInfoPtr> OdBmAbsLayoutAppInfoPtrArray;

//----------------------------------------------------------
//
// OdBmAbsLayoutAppInfo
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAbsLayoutAppInfo : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAbsLayoutAppInfo);
public:
  OdString getWireSizeTableFilePath() const;
  void getMapDuctLevelToOffsets(OdBmMap<OdBmObjectId, OdBmRbsOffsetSetWrapperPtr> &) const;
  void getMapPipeLevelToOffsets(OdBmMap<OdBmObjectId, OdBmRbsOffsetSetWrapperPtr> &) const;
  void getMapCabelTrayLevelToOffsets(OdBmMap<OdBmObjectId, OdBmRbsOffsetSetWrapperPtr> &) const;
  void getMapConduitLevelToOffsets(OdBmMap<OdBmObjectId, OdBmRbsOffsetSetWrapperPtr> &) const;
  double getWidthOrDiameter() const;
  double getHeight() const;
  double getFlexWidthOrDiameter() const;
  double getFlexHeight() const;
  double getFlow() const;
  double getVelocity() const;
  double getFriction() const;
  double getDuctMaxHeight() const;
  double getDuctMaxWidth() const;
  double getPipeVelocity() const;
  double getPipeFriction() const;
  double getPipeMaxSize() const;
  double getPipeMainSlope() const;
  double getPipeBranchSlope() const;
  double getSelectedPipeSlope() const;
  OdInt32 getDuctSizingMethod() const;
  OdInt32 getDuctEquipmentSizeLock() const;
  OdInt32 getPipeSizingMethod() const;
  OdInt32 getPipeEquipmentSizeLock() const;
  bool getDuctMaxHeightLock() const;
  bool getDuctMaxWidthLock() const;
  bool getVelocityLock() const;
  bool getFrictionLock() const;
  bool getFrictionSizing() const;
  bool getPipeMaxSizeLock() const;
  OdBmSystemNavigatorStateDataPtr getSysNavStateData() const;
  double getDuctInsulationThickness() const;
  double getPipeInsulationThickness() const;
  double getDuctLiningThickness() const;
  //
  // Main functionality
  //


};


#endif // _BM_ABSLAYOUTAPPINFO_H_

