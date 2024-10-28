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

#ifndef _OD_BM_ABSTRACTVIEWPORTDATAFORBMVIEWPORT_
#define _OD_BM_ABSTRACTVIEWPORTDATAFORBMVIEWPORT_

#include "TD_PackPush.h"

#include "Database/BmAbstractViewportData.h"


/*
    1>          'void OdAbstractViewPE::setView(OdRxObject *,const OdGePoint3d &,const OdGeVector3d &,const OdGeVector3d &,double,double,bool,const OdGeVector2d &) const' : is abstract
    1>          E:\work\Trunk_opendesign\Core\Include\AbstractViewPE.h(184) : see declaration of 'OdAbstractViewPE::setView'
    */


/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAbstractViewportDataForBmViewport : public OdBmAbstractViewportData
{
public:
  ODRX_DECLARE_MEMBERS(OdBmAbstractViewportDataForBmViewport);

  OdGePoint3d  target  (const OdRxObject* pViewport) const;
  OdGeVector3d direction(const OdRxObject* pViewport) const;
  OdGeVector3d upVector(const OdRxObject* pViewport) const;

  virtual OdGsView* gsView(OdRxObject* pViewport) const ODRX_OVERRIDE;
  virtual OdGsView* gsFrontView(OdRxObject* pViewport) const ODRX_OVERRIDE;
  virtual OdGsView* gsBackView(OdRxObject* pViewport) const ODRX_OVERRIDE;
  virtual void setGsView(OdRxObject* pViewport, OdGsView*, OdGsView*, OdGsView*) ODRX_OVERRIDE;

  double fieldWidth(const OdRxObject* pViewport) const;
  double fieldHeight(const OdRxObject* pViewport) const;

  //OdGeVector2d viewOffset(const OdRxObject* pViewport) const;

  double viewTwist(const OdRxObject* pViewport) const;

  bool isPerspective(const OdRxObject* pViewport) const;

  void setLensLength(OdRxObject* pViewport, double lensLength) const;
  double lensLength(const OdRxObject* pViewport) const;

  bool isFrontClipOn(const OdRxObject* pViewport) const;
  void setFrontClipOn(OdRxObject* pViewport, bool frontClip) const;

  bool isBackClipOn(const OdRxObject* pViewport) const;
  void setBackClipOn(OdRxObject* pViewport, bool backClip) const;

  bool isFrontClipAtEyeOn(const OdRxObject* pViewport) const;
  void setFrontClipAtEyeOn(OdRxObject* pViewport, bool frontClipAtEye) const;

  double frontClipDistance(const OdRxObject* pViewport) const;
  void setFrontClipDistance(OdRxObject* pViewport, double frontClipDistance) const;

  double backClipDistance(const OdRxObject* pViewport) const;
  void setBackClipDistance(OdRxObject* pViewport, double backClipDistance) const;

  void setRenderMode(OdRxObject* pViewport, OdDb::RenderMode mode) const;
  OdDb::RenderMode renderMode(const OdRxObject* pViewport) const;

  void setVisualStyle(OdRxObject* pViewport, OdDbStub* visualStyleId) const;
  OdDbStub* visualStyle(const OdRxObject* pViewport) const;

  void setBackground(OdRxObject* pViewport, OdDbStub* backgroundId) const;
  OdDbStub* background(const OdRxObject* pViewport) const;

  bool viewExtents(const OdRxObject* pViewport, OdGeBoundBlock3d& extents) const;

  void setView(OdRxObject* pViewport,
                                              const OdGePoint3d& target,
                                              const OdGeVector3d& direction,
                                              const OdGeVector3d& upVector,
                                              double fieldWidth,
                                              double fieldHeight,
                                              bool isPerspective,
                                              const OdGeVector2d& viewOffset = OdGeVector2d::kIdentity) const;
};

#include "TD_PackPop.h"

#endif //_OD_BM_ABSTRACTVIEWPORTDATAFORBMVIEWPORT_
