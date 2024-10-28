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

#ifndef _BM_DBDRAWING_H_
#define _BM_DBDRAWING_H_
#include "Database/BmElement.h"
#include "Database/Enums/BmViewNameFormat.h"
// BEGIN: Includes
#include "Database/Entities/BmDBView.h"
// END: Includes

class OdBmDatabase;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmDBDrawing;
class OdBmDBDrawingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBDrawing object.
 */
typedef OdSmartPtr<OdBmDBDrawing> OdBmDBDrawingPtr;

/** \details
 A data type that represents an array of OdBmDBDrawing objects.
 */
typedef OdArray<OdBmDBDrawingPtr> OdBmDBDrawingPtrArray;

//----------------------------------------------------------
//
// OdBmDBDrawing
//
//----------------------------------------------------------

/** \details
    This class stores OdBmDBDrawing data.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBDrawing : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBDrawing);
public:
  /** \details
    Returns array of viewports of the current OdBmDBDrawing.
  */
  void getViewports(OdBmObjectIdArray &) const;
  OdBmDatabase* getDatabase2() const;
  //
  // Main functionality
  //

  /** \details
        Returns the name of this OdBmDBDrawing element (it is the name of the first view of the DBDrawing object).
  */
  OdString getName() const;

  /** \details
        Returns the name of the OdBmDBViewType of this OdBmDBDrawing element.
  */
  OdString getViewType() const;

  /** \details
        Returns the combination of ViewType and Name.
  */
  OdString getTitle() const;

  /** \details
        Returns the unique name for the OdBmDBDrawing element. It is a combination of Title and Handle.
  */
  OdString getUniqueName() const;

  /** \details
        Returns a pointer to the OdBmDBView associated with this object.
  */
  OdBmObjectId getBaseViewportId() const;

  /** \details
        Returns the view format that is stored in the OdBm::ViewNameFormat::Enum enumerator.
  */
  OdBm::ViewNameFormat::Enum getBaseViewNameFormat() const;

  /** \details
        Returns GsView for the non-annotated elements.
  */
  OdGsView* gsView() const;

  /** \details
        Returns GsView for the annotated elements.
  */
  OdGsView* gsFrontView() const;

  /** \details
        Returns GsView for the background elements.
  */
  OdGsView* gsBackView() const;

  /** \details
        Sets the views for the not annotated and annotated elements.

      \param pGsView [in] Input view for the non-annotated elements.
      \param pGsFrontView [in] Input view for the annotated elements.
      \param pGsBackView [in] Input view for the non system elements on system discipline view.
  */
  void setGsView(OdGsView* pGsView, OdGsView* pGsFrontView, OdGsView* pGsBackView);

  /** \details
        Creates a new sheet
  */
  OdResult createSheet();

  /** \details
        returns true value if the BaseDBView equal OdBmDBViewDrafting
  */
  bool isSheet() const;
};


#endif // _BM_DBDRAWING_H_

