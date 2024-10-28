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

#ifndef _BM_VIEWER_H_
#define _BM_VIEWER_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Database/Enums/BmViewerProjection.h"
#include "Database/Enums/BmViewerFlags.h"
// END: Includes

class OdBmBoundedSpace;
typedef OdSmartPtr<OdBmBoundedSpace> OdBmBoundedSpacePtr;
class OdBmAnnotationCropOffsets;
typedef OdSmartPtr<OdBmAnnotationCropOffsets> OdBmAnnotationCropOffsetsPtr;
class OdBmViewLayout;
typedef OdSmartPtr<OdBmViewLayout> OdBmViewLayoutPtr;
class OdBmObjectId;

class OdBmViewer;
class OdBmViewerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmViewer object.
 */
typedef OdSmartPtr<OdBmViewer> OdBmViewerPtr;

/** \details
 A data type that represents an array of OdBmViewer objects.
 */
typedef OdArray<OdBmViewerPtr> OdBmViewerPtrArray;

//----------------------------------------------------------
//
// OdBmViewer
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmViewer : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmViewer);
public:
  OdBmBoundedSpacePtr getBoundedSpace() const;
  OdBmAnnotationCropOffsetsPtr getAnnotationCropOffsets() const;
  OdGePoint3d getTargetPos() const;
  OdGeVector3d getAxisDir() const;
  double getProjDist() const;
  OdBmObjectId getViewId() const;
  OdBmObjectId getVisibleInDesignOption() const;
  OdBmObjectId getSketchId() const;
  OdInt32 getProjMethodType() const;
  OdInt16 getViewerFlags() const;
  bool getIsReflected() const;
  bool getIsIntentionallyPlaced() const;
  bool getIsViewerReference() const;
  bool getIsAnnotationCropActive() const;
  OdResult setIsAnnotationCropActive(bool);
  OdBmViewLayoutPtr getViewLayout() const;
  void getNonRectangularCropAreaCurvesLoops(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //

  /** \details
  Sets flag of crop view in current view.

  \param bool [in] Input enabling crop view flag.
  */
  OdResult setCropRegionActive(bool);

  /** \details
  Sets visibility of crop region in current view.

  \param bool [in] Input crop region visibility flag.
  */
  OdResult setCropRegionVisible(bool);

  /** \details
  Sets flag of far clip in current view.

  \param bool [in] Input enabling far clip flag.
  */
  OdResult setFarClipActive(bool);
};


#endif // _BM_VIEWER_H_

