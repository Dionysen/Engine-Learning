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

#ifndef _BM_MASSEAM_COPYALLSOLIDGEOMETRIESGSTEP_H_
#define _BM_MASSEAM_COPYALLSOLIDGEOMETRIESGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmObjectId;

class OdBmMassEAM_CopyAllSolidGeometriesGStep;
class OdBmMassEAM_CopyAllSolidGeometriesGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMassEAM_CopyAllSolidGeometriesGStep object.
 */
typedef OdSmartPtr<OdBmMassEAM_CopyAllSolidGeometriesGStep> OdBmMassEAM_CopyAllSolidGeometriesGStepPtr;

/** \details
 A data type that represents an array of OdBmMassEAM_CopyAllSolidGeometriesGStep objects.
 */
typedef OdArray<OdBmMassEAM_CopyAllSolidGeometriesGStepPtr> OdBmMassEAM_CopyAllSolidGeometriesGStepPtrArray;

//----------------------------------------------------------
//
// OdBmMassEAM_CopyAllSolidGeometriesGStep
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmMassEAM_CopyAllSolidGeometriesGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMassEAM_CopyAllSolidGeometriesGStep);
public:
  void getPartIdsPairSet(OdBmMap<OdBmObjectId, OdInt32> &) const;
  OdInt32 getNextIndex() const;
  //
  // Main functionality
  //
};
#endif // _BM_MASSEAM_COPYALLSOLIDGEOMETRIESGSTEP_H_

