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

#ifndef _BM_DBVIEW3DENERGYANALYSISPREVIEW_H_
#define _BM_DBVIEW3DENERGYANALYSISPREVIEW_H_
#include "Database/Entities/BmDBView3d.h"



class OdBmDBView3dEnergyAnalysisPreview;
class OdBmDBView3dEnergyAnalysisPreviewImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBView3dEnergyAnalysisPreview object.
 */
typedef OdSmartPtr<OdBmDBView3dEnergyAnalysisPreview> OdBmDBView3dEnergyAnalysisPreviewPtr;

/** \details
 A data type that represents an array of OdBmDBView3dEnergyAnalysisPreview objects.
 */
typedef OdArray<OdBmDBView3dEnergyAnalysisPreviewPtr> OdBmDBView3dEnergyAnalysisPreviewPtrArray;

//----------------------------------------------------------
//
// OdBmDBView3dEnergyAnalysisPreview
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBView3dEnergyAnalysisPreview : public OdBmDBView3d {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBView3dEnergyAnalysisPreview);
public:
  OdInt32 getComputationLevel() const;
  bool getTransparent() const;
  bool getShowRoomBoundingElems() const;
  bool getShowShadingSurfaces() const;
  bool getShowShell() const;
  bool getPerspective() const;
  //
  // Main functionality
  //

public:
};


#endif // _BM_DBVIEW3DENERGYANALYSISPREVIEW_H_

