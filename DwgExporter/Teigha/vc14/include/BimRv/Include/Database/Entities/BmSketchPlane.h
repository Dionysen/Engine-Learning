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

#ifndef _BM_SKETCHPLANE_H_
#define _BM_SKETCHPLANE_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Database/Entities/BmOneElementMovablePlaneRef.h"
// END: Includes

class OdBmObjectId;

class OdBmSketchPlane;
class OdBmSketchPlaneImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSketchPlane object.
 */
typedef OdSmartPtr<OdBmSketchPlane> OdBmSketchPlanePtr;

/** \details
 A data type that represents an array of OdBmSketchPlane objects.
 */

typedef OdArray<OdBmSketchPlanePtr> OdBmSketchPlanePtrArray;

class OdBmPlane;
typedef OdSmartPtr<OdBmPlane> OdBmPlanePtr;
class OdBmRef;
typedef OdSmartPtr<OdBmRef> OdBmRefPtr;

//----------------------------------------------------------
//
// OdBmSketchPlane
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmSketchPlane : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSketchPlane);
public:
  OdBmObjectPtr getPlane() const;
  OdGeMatrix3d getTransformation() const;
  OdBmObjectId getUserId() const;
  bool getIsFlipZ() const;
  //
  // Main functionality
  //

  OdResult setGeomPlane(const OdBmPlanePtr& pPlane);
  OdResult
  setDatumPlaneRef(const OdBmOneElementMovablePlaneRefPtr& pDatumPlaneRef);
  OdResult setReference(const OdBmRefPtr& pRef);
};


#endif // _BM_SKETCHPLANE_H_

