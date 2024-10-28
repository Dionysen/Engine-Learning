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

#ifndef _BM_GFACE_H_
#define _BM_GFACE_H_
#include "Geometry/Entities/BmGNode.h"

class OdBmGEdgeLoop;
typedef OdSmartPtr<OdBmGEdgeLoop> OdBmGEdgeLoopPtr;
class OdBmGFace;
typedef OdSmartPtr<OdBmGFace> OdBmGFacePtr;
class OdBmGFilling;
typedef OdSmartPtr<OdBmGFilling> OdBmGFillingPtr;
class OdBmObjectId;

class OdBmGFace;
class OdBmGFaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGFace object.
 */
typedef OdSmartPtr<OdBmGFace> OdBmGFacePtr;

/** \details
 A data type that represents an array of OdBmGFace objects.
 */
typedef OdArray<OdBmGFacePtr> OdBmGFacePtrArray;

//----------------------------------------------------------
//
// OdBmGFace
//
//----------------------------------------------------------

/** \details
    This is the base class of faces.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGFace : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGFace);
public:
  /** \details
    Returns the first loop of edges as a pointer to an OdBmGEdgeLoop object.
  */
  OdBmGEdgeLoopPtr getFirstLoop() const;
  /** \details
    Returns the array of face regions as OdArray<OdBmObjectPtr>.

    \param OdArray<OdBmGFacePtr> [out] Output array of the face regions.
  */
  void getFaceRegions(OdArray<OdBmGFacePtr> &) const;
  /** \details
    Returns the filling of the face as a pointer of an OdBmGFilling object.
  */
  OdBmGFillingPtr getGFilling() const;
  /** \details
    Returns the cut type as an OdInt32 value.
  */
  OdInt32 getCutType() const;
  /** \details
    Returns the face flags as an OdUInt32 value.
  */
  OdUInt32 getFaceFlags() const;
  /** \details
    Returns the ID of the render style as an object of the OdBmObjectId class.
  */
  OdBmObjectId getRenderStyleId() const;
  OdBmObjectPtr getBackgroundFilling() const;
  //
  // Main functionality
  //


};


#endif // _BM_GFACE_H_

