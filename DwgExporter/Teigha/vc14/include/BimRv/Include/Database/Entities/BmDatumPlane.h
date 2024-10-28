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

#ifndef _BM_DATUMPLANE_H_
#define _BM_DATUMPLANE_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Database/Entities/BmDBView.h"
// END: Includes

class OdBmFace;
typedef OdSmartPtr<OdBmFace> OdBmFacePtr;
class OdBmSurface;
typedef OdSmartPtr<OdBmSurface> OdBmSurfacePtr;
class OdBmObjectId;

class OdBmDatumPlane;
class OdBmDatumPlaneImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDatumPlane object.
 */
typedef OdSmartPtr<OdBmDatumPlane> OdBmDatumPlanePtr;

/** \details
 A data type that represents an array of OdBmDatumPlane objects.
 */
typedef OdArray<OdBmDatumPlanePtr> OdBmDatumPlanePtrArray;

//----------------------------------------------------------
//
// OdBmDatumPlane
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDatumPlane : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDatumPlane);
public:
  OdString getText() const;
  OdBmFacePtr getFace() const;
  OdBmSurfacePtr getSurface() const;
  OdBmObjectPtr getLeader() const;
  OdGePoint3d getFreeEnd() const;
  OdGePoint3d getBubbleEnd() const;
  OdGeVector3d getCutVector() const;
  OdGePoint3d getRefPointsForNewViewsItem(OdUInt32 idx) const;
  double getSheetTextHeight() const;
  OdBmObjectId getGenDbViewId() const;
  bool getIsV2Datum() const;
  bool getUseConstVForDatumLine3dRep() const;
  //
  // Main functionality
  //

  /** \details
        Returns true if this plane is perpendicular to the specified view.

      \param pView [out] Pointer to view.
  */
  bool isPerpToView(const OdBmDBView* pView) const;
};


#endif // _BM_DATUMPLANE_H_

