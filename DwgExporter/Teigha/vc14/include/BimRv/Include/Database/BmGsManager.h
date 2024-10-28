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

#ifndef __BMGSMANAGER_H_INCLUDED_
#define __BMGSMANAGER_H_INCLUDED_

class OdBmObjectId;
class OdBmViewport;
class OdGiContextForBmDatabase;

#include "Gs/Gs.h"

#include "TD_PackPush.h"

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdGsBmDBDrawingHelper : public OdGsDevice
{
public:
  ODRX_DECLARE_MEMBERS(OdGsBmDBDrawingHelper);
  /** Description:
    Returns the BmDBDrawing object associated with this DBDrawingHelper object.
  */
  virtual OdBmObjectId DBDrawingId() const = 0;
  /** Description:
    Returns the active GsView object of the BmDBDrawing object associated with this DBDrawingHelper object.
  */
  virtual OdGsViewPtr activeView() const = 0;
  /** Description:
    Sets the active GsView object of the BmDBDrawing object associated with this DBDrawingHelper object.
    Arguments:
    pView (I) Pointer to the GsView.
  */
  virtual void makeViewActive(OdGsView* pView) = 0;
  /** Description:
    Return the OdGsModel object associated with this DBDrawingHelper.
  */
  virtual OdGsModel* gsModel() = 0;

  /** Description:
    Return OdGsModel associated with this DBDrawingHelper that is used to draw elements from MidElemTable.
  */
  virtual OdGsModel* gsMidElemTableModel() = 0;

  /** Description:
    Returns the underlying OdGsDevice object associated with this DBDrawingHelper object.
  */
  virtual OdGsDevicePtr underlyingDevice() const = 0;

  /** Description:
    Sets the active viewport
    Arguments:
    at (I) Pick point in device coordinates.
  */
  virtual bool setActiveViewport(const OdGePoint2d& screenPt) = 0;

  /** Description:
    Enables / disables thin line mode where all lineweights are rendered with 1px width
  */
  virtual void setThinLinesMode(bool enable) = 0;

  static OdGsDevicePtr setupDBDrawingViews(OdBmObjectId DBDrawingId, OdGsDevice* pDevice, OdGiContextForBmDatabase* pGiCtx);
};

typedef OdSmartPtr<OdGsBmDBDrawingHelper> OdGsBmDBDrawingHelperPtr;


#include "TD_PackPop.h"

#endif // __BMGSMANAGER_H_INCLUDED_

