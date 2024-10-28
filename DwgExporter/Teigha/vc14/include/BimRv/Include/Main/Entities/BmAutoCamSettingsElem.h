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

#ifndef _BM_AUTOCAMSETTINGSELEM_H_
#define _BM_AUTOCAMSETTINGSELEM_H_
#include "Database/Entities/BmUniqueElement.h"

class OdBmObjectId;

class OdBmAutoCamSettingsElem;
class OdBmAutoCamSettingsElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAutoCamSettingsElem object.
 */
typedef OdSmartPtr<OdBmAutoCamSettingsElem> OdBmAutoCamSettingsElemPtr;

/** \details
 A data type that represents an array of OdBmAutoCamSettingsElem objects.
 */
typedef OdArray<OdBmAutoCamSettingsElemPtr> OdBmAutoCamSettingsElemPtrArray;

//----------------------------------------------------------
//
// OdBmAutoCamSettingsElem
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmAutoCamSettingsElem : public OdBmUniqueElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAutoCamSettingsElem);
public:
  OdGeVector3d getHomeEye() const;
  OdGePoint3d getHomeCenter() const;
  OdGeVector3d getHomeUp() const;
  OdGePoint3d getHomePivot() const;
  OdGeVector3d getSceneUp() const;
  OdGeVector3d getSceneFront() const;
  OdGePoint3d getSceneCenter() const;
  double getHomeLeftFOV() const;
  double getHomeRightFOV() const;
  double getHomeTopFOV() const;
  double getHomeBottomFOV() const;
  double getHomeOrthoWidth() const;
  double getHomeOrthoHeight() const;
  double getHomeProjToPageOriginX() const;
  double getHomeProjToPageOriginY() const;
  double getHomeProjToPageScale() const;
  double getSceneRadius() const;
  OdBmObjectId getDBDrawingIdHomeIsSet() const;
  bool getHasSetHome() const;
  bool getShowCompass() const;
  bool getLockToCurrentSel() const;
  //
  // Main functionality
  //


};


#endif // _BM_AUTOCAMSETTINGSELEM_H_

