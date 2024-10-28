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

#ifndef _BM_SHAREDSURFACE_H_
#define _BM_SHAREDSURFACE_H_
#include "Geometry/Entities/BmSurface.h"



class OdBmSharedSurface;
class OdBmSharedSurfaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSharedSurface object.
 */
typedef OdSmartPtr<OdBmSharedSurface> OdBmSharedSurfacePtr;

/** \details
 A data type that represents an array of OdBmSharedSurface objects.
 */
typedef OdArray<OdBmSharedSurfacePtr> OdBmSharedSurfacePtrArray;

//----------------------------------------------------------
//
// OdBmSharedSurface
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of a shared surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmSharedSurface : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSharedSurface);
public:
  /** \details 
  Retrieves the shared surface geometry.
  \returns A raw pointer to an OdBmObject instance that points to geometry objects.
  */
  OdBmObject* getGeom() const;
  /** \details 
  Retrieves the shared surface shared information index.
  \returns A signed 32-bit integer value that contains the retrieved index.
  */
  OdInt32 getSharedSurfInfoIdx() const;
  /** \details 
  Retrieves whether the shared surface is successfully constructed. 
  \returns true if the surface is successfully constructed; otherwise, the method returns false.
  */
  bool getisConstructedOk() const;
  //
  // Main functionality
  //

};


#endif // _BM_SHAREDSURFACE_H_

