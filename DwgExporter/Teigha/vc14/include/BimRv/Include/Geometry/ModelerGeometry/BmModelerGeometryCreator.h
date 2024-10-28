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


#ifndef _BM_MODELERGEOMETRYCREATOR_INCLUDED_
#define _BM_MODELERGEOMETRYCREATOR_INCLUDED_

#include "RxObject.h"
#include "BmModelerGeometry.h"
#include "Geometry/Entities/BmGeometry.h"
#include "BrepBuilder/BrepBuilder.h"

/** \details
    The functions in this class can do the following:

    o Create OdBmModelerGeometry instances from a specified input stream.

    Library: BmModelerGeometry
    {group:Other_Classes}

    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmModelerGeometryCreator : public OdRxObject
{
protected:
  OdBmModelerGeometryCreator() {}
public:
  ODRX_DECLARE_MEMBERS(OdBmModelerGeometryCreator);


  /** \details
      Creates one or more instances of OdBmModelerGeometry from the specified Geometry.

      \param models [out] Output array of OdBmModelerGeometry SmartPointers.
      \param pGeom [in] Input pointer to the OdBmGeometry object for which.

      \returns
      Returns eOk if successful, or an appropriate error code if not.
  */
  virtual OdResult createModeler(OdArray<OdBmModelerGeometryPtr> &models, OdBmGeometry* pGeom) = 0;
  virtual OdResult initBrepBuilder(OdBrepBuilder& brepBuilder, BrepType brepType) = 0;
};

/** \details
    This template class is a specialization of the OdSmartPtr class for OdBmModelerGeometryCreator object pointers.
*/
typedef OdSmartPtr<OdBmModelerGeometryCreator> OdBmModelerGeometryCreatorPtr;

#endif // _BM_MODELERGEOMETRYCREATOR_INCLUDED_
