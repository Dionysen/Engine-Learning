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

#ifndef OD_BMABSTRACTVIEWPORTDATA_H
#define OD_BMABSTRACTVIEWPORTDATA_H

#include "AbstractViewPE.h"

class OdGsView;

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmAbstractViewportData : public OdAbstractViewPE
{
public:
  ODRX_DECLARE_MEMBERS(OdBmAbstractViewportData);

  /** Description:
    Sets the parameters for the specified Viewport object according to the arguments.
    Arguments:
    pSourceView (I) Pointer to the source View object.
    pDestinationView (I) Pointer to the destination View object
  */
  virtual void setProps(OdRxObject* pViewport, const OdRxObject* pSourceView) const;


  /** Description:
  Returns true if and only if there is a view offset associated with the specified Viewport object.
  Arguments:
  pViewport (I) Pointer to the Viewport object.
  */
  virtual bool hasViewOffset(const OdRxObject* pViewport) const;

  /** \details
    Returns compatible visual style or background object for specified viewport.
    \param pViewport [in]  Pointer to the Viewport object.
    \param pCopyObject [in]  Input object ID.
    \returns Returns comptaible objectID or null in case if there is no any compatible objects found.
  */
  virtual OdDbStub* compatibleCopyObject(const OdRxObject* pViewport, OdDbStub* pCopyObject) const;

  /** \details
    Returns annotation scale object ID associated with this Viewport object.
    \param pViewport [in]  Pointer to the Viewport object.
  */
  virtual OdDbStub* annotationScale(const OdRxObject* pViewport) const;
  
  /** \details
    Returns the GsView for the non-annotated elements of pViewport.

    \param pViewport [in] Viewport, View of which will be returned.
  */
  virtual OdGsView* gsView(OdRxObject* pViewport) const = 0;

  /** \details
    Returns the GsView for the annotated elements of pViewport.

    \param pViewport [in] Viewport, FrontView of which will be returned.
  */
  virtual OdGsView* gsFrontView(OdRxObject* pViewport) const = 0;

  /** \details
    Returns the GsView for the background elements of pViewport.

    \param pViewport [in] Viewport, BackView of which will be returned.
  */
  virtual OdGsView* gsBackView(OdRxObject* pViewport) const = 0;
  
  /** \details
    Sets views to a viewport.

    \param pViewport [in] Viewport, a view will be set to.
    \param pGsView [in] Input view for the non-annotated elements.
    \param pGsFrontView [in] Input view for the annotated elements.
    \param pGsBackView [in] Input view for the background elements.
  */
  virtual void setGsView(OdRxObject* pViewport, OdGsView* pGsView, OdGsView* pGsFrontView, OdGsView* pGsBackView) = 0;
};

/** Description:
    This template class is a specialization of the OdSmartPtr class for OdDbAbstractViewportData object pointers.
*/
typedef OdSmartPtr<OdBmAbstractViewportData> OdBmAbstractViewportDataPtr;

#endif //#ifndef OD_BMABSTRACTVIEWPORTDATA_H
