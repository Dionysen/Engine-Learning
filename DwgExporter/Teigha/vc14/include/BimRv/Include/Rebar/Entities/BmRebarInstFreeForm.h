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

#ifndef _BM_REBARINSTFREEFORM_H_
#define _BM_REBARINSTFREEFORM_H_
#include "Rebar/Entities/BmRebarInstBase.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRebarInstFreeForm;
class OdBmRebarInstFreeFormImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarInstFreeForm object.
 */
typedef OdSmartPtr<OdBmRebarInstFreeForm> OdBmRebarInstFreeFormPtr;

/** \details
 A data type that represents an array of OdBmRebarInstFreeForm objects.
 */
typedef OdArray<OdBmRebarInstFreeFormPtr> OdBmRebarInstFreeFormPtrArray;

//----------------------------------------------------------
//
// OdBmRebarInstFreeForm
//
//----------------------------------------------------------

/** \details
Implementation of RebarInstBase for FreeForm.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarInstFreeForm : public OdBmRebarInstBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarInstFreeForm);
public:
  void getBarGeometry(OdArray<OdBmObjectPtr> &) const;
  void getCustomHandlesTags(OdInt32Array &) const;
  void getDistributionPath(OdArray<OdBmObjectPtr> &) const;
  /** \details
    Returns the attachment type.
  */
  OdInt32 getAttachmentType() const;
  /** \details
    Returns the end handle.
  */
  OdInt32 getEndHandle() const;
  /** \details
    Returns the rebar style.
  */
  OdInt32 getRebarStyle() const;
  /** \details
    Returns the shape type.
  */
  OdInt32 getShapeType() const;
  /** \details
    Returns the start handle.
  */
  OdInt32 getStartHandle() const;
  bool getAllBarsMatchedReversed() const;
  /** \details
    Returns the regen parameters.
    \param array [out] An array to store the parameters.
  */
  void getRegenParams(OdBmObjectIdArray &) const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARINSTFREEFORM_H_

