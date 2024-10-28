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

#ifndef _BM_SLABSHAPEEDITGSTEP_H_
#define _BM_SLABSHAPEEDITGSTEP_H_
#include "Geometry/Entities/BmGeomStep.h"

class OdBmSSE_CornerVertex;
typedef OdSmartPtr<OdBmSSE_CornerVertex> OdBmSSE_CornerVertexPtr;
class OdBmSSE_EdgeVertex;
typedef OdSmartPtr<OdBmSSE_EdgeVertex> OdBmSSE_EdgeVertexPtr;
class OdBmSSE_InteriorVertex;
typedef OdSmartPtr<OdBmSSE_InteriorVertex> OdBmSSE_InteriorVertexPtr;
class OdBmSSE_ExplicitCrease;
typedef OdSmartPtr<OdBmSSE_ExplicitCrease> OdBmSSE_ExplicitCreasePtr;

class OdBmSlabShapeEditGStep;
class OdBmSlabShapeEditGStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSlabShapeEditGStep object.
 */
typedef OdSmartPtr<OdBmSlabShapeEditGStep> OdBmSlabShapeEditGStepPtr;

/** \details
 A data type that represents an array of OdBmSlabShapeEditGStep objects.
 */
typedef OdArray<OdBmSlabShapeEditGStepPtr> OdBmSlabShapeEditGStepPtrArray;

//----------------------------------------------------------
//
// OdBmSlabShapeEditGStep
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmSlabShapeEditGStep : public OdBmGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSlabShapeEditGStep);
public:
  double getOriginalFaceHeight() const;
  OdInt32 getOriginalBottomFaceTag() const;
  OdInt32 getNextVertexId() const;
  bool getMirrored() const;
  bool getDormant() const;
  bool getPreferChordOverCurves() const;
  OdBmObjectPtr getOriginalFaceGeom() const;
  void getPoints(OdArray<OdBmObjectPtr> &) const;
  void getCornerVertices(OdArray<OdBmSSE_CornerVertexPtr> &) const;
  void getEdgeVertices(OdArray<OdBmSSE_EdgeVertexPtr> &) const;
  void getInteriorVertices(OdArray<OdBmSSE_InteriorVertexPtr> &) const;
  void getExplicitCreases(OdArray<OdBmSSE_ExplicitCreasePtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_SLABSHAPEEDITGSTEP_H_

