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

#ifndef _BM_BEAMMITERGSTEP_H_
#define _BM_BEAMMITERGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmEndInfo;
typedef OdSmartPtr<OdBmEndInfo> OdBmEndInfoPtr;
class OdBmPlane;
typedef OdSmartPtr<OdBmPlane> OdBmPlanePtr;

class OdBmBeamMiterGStep;
class OdBmBeamMiterGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBeamMiterGStep object.
 */
typedef OdSmartPtr<OdBmBeamMiterGStep> OdBmBeamMiterGStepPtr;

/** \details
 A data type that represents an array of OdBmBeamMiterGStep objects.
 */
typedef OdArray<OdBmBeamMiterGStepPtr> OdBmBeamMiterGStepPtrArray;

//----------------------------------------------------------
//
// OdBmBeamMiterGStep
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmBeamMiterGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBeamMiterGStep);
public:
  OdInt32 getEnd() const;
  OdBmEndInfoPtr getOtherInfoAtMiter() const;
  bool getMiterPlaneIsSet() const;
  OdBmPlanePtr getMiterPlane() const;
  //
  // Main functionality
  //


};


#endif // _BM_BEAMMITERGSTEP_H_

