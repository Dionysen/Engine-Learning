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

#ifndef _BM_MASSEAM_DIVIDEPERIMETERZONEGSTEP_H_
#define _BM_MASSEAM_DIVIDEPERIMETERZONEGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"



class OdBmMassEAM_DividePerimeterZoneGStep;
class OdBmMassEAM_DividePerimeterZoneGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMassEAM_DividePerimeterZoneGStep object.
 */
typedef OdSmartPtr<OdBmMassEAM_DividePerimeterZoneGStep> OdBmMassEAM_DividePerimeterZoneGStepPtr;

/** \details
 A data type that represents an array of OdBmMassEAM_DividePerimeterZoneGStep objects.
 */
typedef OdArray<OdBmMassEAM_DividePerimeterZoneGStepPtr> OdBmMassEAM_DividePerimeterZoneGStepPtrArray;

//----------------------------------------------------------
//
// OdBmMassEAM_DividePerimeterZoneGStep
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmMassEAM_DividePerimeterZoneGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMassEAM_DividePerimeterZoneGStep);
public:
  //
  // Main functionality
  //


};


#endif // _BM_MASSEAM_DIVIDEPERIMETERZONEGSTEP_H_

