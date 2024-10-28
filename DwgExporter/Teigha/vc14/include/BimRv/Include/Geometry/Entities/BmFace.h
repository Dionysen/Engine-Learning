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

#ifndef _BM_FACE_H_
#define _BM_FACE_H_
#include "Geometry/Entities/BmGFace.h"

class OdBmSurface;
typedef OdSmartPtr<OdBmSurface> OdBmSurfacePtr;

class OdBmFaceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFace object.
 */

/** \details
 A data type that represents an array of OdBmFace objects.
 */
//----------------------------------------------------------
//
// OdBmFace
//
//----------------------------------------------------------

/** \details
    This class represents a face of 3D solid. A face is a bounded region of a surface.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmFace : public OdBmGFace {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFace);
public:
  /** \details
    Returns the underlying surface of this entity.
  */
  OdBmSurfacePtr getSurface() const;
  //
  // Main functionality
  //

  /** \details
    Returns true if Envelope of Face is set.
  */
  bool isEnvelopeCurrent() const;

  /** \details
    Returns true if normal of Face is flipped.
  */
  bool isNormalFlipped() const;

  /** \details
    Returns true if surface of Face if OdBmPlane.
  */
  bool isPlanar() const;

  /** \details
    Sets Flip normal of Face.
  */
  void setNormalFlipped();

  /** \details
    Flip normal of Face.
    If value of Face is true, then result is false.
  */
  void flipNormal();

  /** \details
    Returns true if Face is active.
  */
  bool isActive() const;

  /** \details
    Returns true if surface of Face is OdBmSurfRev.
  */
  bool isRevolved() const;

  /** \details
  Returns true if surface of Face is OdBmRuledSurf.
  */
  bool isRuled() const;
};

#endif // _BM_FACE_H_

