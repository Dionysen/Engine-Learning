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

#ifndef _BM_VIEWER3D_H_
#define _BM_VIEWER3D_H_
#include "Database/Entities/BmViewer.h"

class OdBmDBView3dCutter;
typedef OdSmartPtr<OdBmDBView3dCutter> OdBmDBView3dCutterPtr;
class OdBmBoundedSpace;
typedef OdSmartPtr<OdBmBoundedSpace> OdBmBoundedSpacePtr;
class OdBmObjectId;

class OdBmViewer3d;
class OdBmViewer3dImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmViewer3d object.
 */
typedef OdSmartPtr<OdBmViewer3d> OdBmViewer3dPtr;

/** \details
 A data type that represents an array of OdBmViewer3d objects.
 */
typedef OdArray<OdBmViewer3dPtr> OdBmViewer3dPtrArray;

//----------------------------------------------------------
//
// OdBmViewer3d
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmViewer3d : public OdBmViewer {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmViewer3d);
public:
  OdBmObjectPtr getWTPath() const;
  OdBmDBView3dCutterPtr getCutter() const;
  OdBmBoundedSpacePtr getSavedOrientation() const;
  OdBmObjectId getModelClipBoxId() const;
  bool getLockedOrientation() const;
  //
  // Main functionality
  //
};
#endif // _BM_VIEWER3D_H_

