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

#ifndef _BM_VIEWPORT_H_
#define _BM_VIEWPORT_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Database/Enums/BmRotationOnSheet.h"
// END: Includes

class OdBmObjectId;

class OdBmViewport;
class OdBmViewportImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmViewport object.
 */
typedef OdSmartPtr<OdBmViewport> OdBmViewportPtr;

/** \details
 A data type that represents an array of OdBmViewport objects.
 */
typedef OdArray<OdBmViewportPtr> OdBmViewportPtrArray;

//----------------------------------------------------------
//
// OdBmViewport
//
//----------------------------------------------------------

/** \details
    This class stores information of viewport.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmViewport : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmViewport);
public:
  /** \details
    Returns viewport offset.
  */
  OdGePoint3d getOffset() const;
  /** \details
    Returns origin of viewport label on the sheet
  */
  OdGePoint3d getLabelOrigin() const;
  /** \details
    Returns stretch value of viewport.
  */
  double getStretchFactor() const;
  /** \details
    Returns length of viewport label.
  */
  double getLabelLength() const;
  /** \details
    Returns viewport scale.
  */
  double getScale() const;
  /** \details
    Returns ID of the associated OdBmDBView.
  */
  OdBmObjectId getDbViewId() const;
  /** \details
    Returns ID of OdBmDrawing of this viewport.
  */
  OdBmObjectId getDbDrawingId() const;
  /** \details
    Returns ID of viewport attributes.
  */
  OdBmObjectId getAttrId() const;
  OdInt32 getOrientation() const;
  /** \details
    Returns 'true' if viewport is clipped.
  */
  bool getClipping() const;
  /** \details
    Returns detail number of viewport.
  */
  OdString getDetailNumber() const;
  //
  // Main functionality
  //

public:

  //Has the viewport views
  /** \details
        Returns 'true' if viewport is the first in the viewport array.
  */
  bool isZerothViewport() const;

  /** \details
        Returns the GsView for the non-annotated elements of this viewport.
  */
  OdGsView* gsView() const;
  /** \details
        Returns the GsView for the annotated elements of this viewport.
  */
  OdGsView* gsFrontView() const;
  /** \details
        Returns the GsView for the background elements of this viewport.
  */
  OdGsView* gsBackView() const;

  /** \details
        Sets the views for the non-annotated and annotated elements to this viewport.

      \param pGsView [in] Input pointer to the view for the non-annotated elements.
      \param pGsFrontView [in] Input pointer to the view for the annotated elements.
      \param pGsBackView [in] Input view for the non system elements on system discipline view.
  */
  void setGsView(OdGsView* pGsView, OdGsView* pGsFrontView, OdGsView* pGsBackView);
};


#endif // _BM_VIEWPORT_H_

