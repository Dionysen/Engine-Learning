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

#ifndef _BM_CGRIDDIVIDEFACEGSTEP_H_
#define _BM_CGRIDDIVIDEFACEGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmCGCellCoords;
typedef OdSmartPtr<OdBmCGCellCoords> OdBmCGCellCoordsPtr;
class OdBmCGCellContents;
typedef OdSmartPtr<OdBmCGCellContents> OdBmCGCellContentsPtr;
class OdBmCEdgeSegSetWrapper;
typedef OdSmartPtr<OdBmCEdgeSegSetWrapper> OdBmCEdgeSegSetWrapperPtr;

class OdBmCGridDivideFaceGStep;
class OdBmCGridDivideFaceGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCGridDivideFaceGStep object.
 */
typedef OdSmartPtr<OdBmCGridDivideFaceGStep> OdBmCGridDivideFaceGStepPtr;

/** \details
 A data type that represents an array of OdBmCGridDivideFaceGStep objects.
 */
typedef OdArray<OdBmCGridDivideFaceGStepPtr> OdBmCGridDivideFaceGStepPtrArray;

//----------------------------------------------------------
//
// OdBmCGridDivideFaceGStep
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCGridDivideFaceGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCGridDivideFaceGStep);
public:
  OdInt32 getDriverId() const;
  void getCellMap(OdBmMap<OdBmCGCellCoordsPtr, OdBmCGCellContentsPtr> &) const;
  void getEdgeToOriginalEdgeMap(OdBmMap<OdInt32, OdInt32> &) const;
  void getOriginalToEdgeSegs(OdBmMap<OdInt32, OdBmCEdgeSegSetWrapperPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_CGRIDDIVIDEFACEGSTEP_H_

