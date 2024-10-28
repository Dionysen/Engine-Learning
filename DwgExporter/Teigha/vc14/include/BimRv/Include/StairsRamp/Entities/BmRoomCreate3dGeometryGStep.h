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

#ifndef _BM_ROOMCREATE3DGEOMETRYGSTEP_H_
#define _BM_ROOMCREATE3DGEOMETRYGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmRoomFaceOffsets;
typedef OdSmartPtr<OdBmRoomFaceOffsets> OdBmRoomFaceOffsetsPtr;

class OdBmRoomCreate3dGeometryGStep;
class OdBmRoomCreate3dGeometryGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRoomCreate3dGeometryGStep object.
 */
typedef OdSmartPtr<OdBmRoomCreate3dGeometryGStep> OdBmRoomCreate3dGeometryGStepPtr;

/** \details
 A data type that represents an array of OdBmRoomCreate3dGeometryGStep objects.
 */
typedef OdArray<OdBmRoomCreate3dGeometryGStepPtr> OdBmRoomCreate3dGeometryGStepPtrArray;

//----------------------------------------------------------
//
// OdBmRoomCreate3dGeometryGStep
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmRoomCreate3dGeometryGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRoomCreate3dGeometryGStep);
public:
  void getFaceOffsetMap(OdBmMap<OdInt32, OdBmRoomFaceOffsetsPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_ROOMCREATE3DGEOMETRYGSTEP_H_

