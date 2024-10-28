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


#ifndef _BM_MODELERGEOMETRY_INCLUDED_
#define _BM_MODELERGEOMETRY_INCLUDED_

#include "RxObject.h"
#include "Ge/GeNurbCurve3d.h"
#include "Ge/GeCurve3dPtrArray.h"
#include "Geometry/Entities/BmGeometry.h"
#include "MaterialResolver.h"
#include "Ge/GeTrMeshSimplification.h"
#include "BrepRenderModes.h"

class OdBmObjectId;
class OdBrBrep;
class OdGiCommonDraw;
class OdGiViewportDraw;
class wrTriangulationParams;

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmModelerGeometry : public OdRxObject
{
protected:
  OdBmModelerGeometry() {}

public:
  ODRX_DECLARE_MEMBERS(OdBmModelerGeometry);

  /** \details
      Populates the specified BrBrep object with the BREP data of this ModelerGeometry object.

	  \param brBrep [out] Output BREP data.

      \returns
      Returns true if and only if successful
  */
  virtual bool brep(OdBrBrep& brBrep) const = 0;

  /** \details
      Returns eOk if successful, or an appropriate error code if not.
  */
  virtual OdResult in(OdBmGeometry* pGeometry) = 0;

  struct NumIsolines
  {
    OdUInt32 numU, numV;
  };
  /** \details
    Creates a viewport-independent geometric representation of this BmModelerGeometry object.

    Note:
    A return value of false indicates that viewportDraw() must be called of this object.

    The 3D GS will call this function at least once, but may cache subsequent *display* updates.

    \param pWd [in] Input pointer to the OdGiCommonDraw interface.
    \param geomType [in] Input geometry type.
    \param pNumIsolines [in] Input number of isolines in U and V directions.

    \returns
    Returns true if and only if the geometric representation can be generated *in* a
    viewport-independent manner.

    \remarks
    geomType must be a combination of one or more of the following:

    @table
    Name            Value
    kNothing        0
    kIsolines       1
    kEdges          2
    kShells         4
    kOrderedEdges   8
    kSurfIsolines   16
  */
  virtual bool worldDraw(OdGiCommonDraw* pWd, OdUInt32 geomType, const NumIsolines *pNumIsolines = 0) = 0;

  virtual bool drawSilhouettes(OdGiViewportDraw* pVd) = 0;

  virtual OdResult drawFace(OdGiCommonDraw * pWd, OdGsMarker iFace, const wrTriangulationParams& triangulationParams) = 0;

  /** \details
    Returns a mesh for a face.

    \param mesh [out] Output mesh of Face.
    \param iFace [in] Face marker.
    \param dLevelOfDetail [in] Mesh detail level. It has values from 0 to 1.

    \returns eOk if the operation completed successfuly, or an appropriate error code otherwise.
  */
  virtual OdResult getFaceMesh(GeMesh::OdGeTrMesh& mesh, OdGsMarker iFace, double dLevelOfDetail, bool bIsUsedForCalculation) = 0;

  /** \details
    Sets mesh level of detail.

    \param dLevelOfDetail [in] Mesh detail level. It has values from 0 to 1.
  */
  virtual void setLevelOfDetail(double dLevelOfDetail) = 0;
};

/** \details
    This template class is a specialization of the OdSmartPtr class for OdBmModelerGeometry object pointers.
*/
typedef OdSmartPtr<OdBmModelerGeometry> OdBmModelerGeometryPtr;

#endif // _BM_MODELERGEOMETRY_INCLUDED_
