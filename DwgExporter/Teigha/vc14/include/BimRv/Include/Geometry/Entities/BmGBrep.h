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

#ifndef _BM_GBREP_H_
#define _BM_GBREP_H_
#include "Geometry/Entities/BmGNode.h"

class OdBmFace;
typedef OdSmartPtr<OdBmFace> OdBmFacePtr;

class OdBmGBrep;
class OdBmGBrepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGBrep object.
 */
typedef OdSmartPtr<OdBmGBrep> OdBmGBrepPtr;

/** \details
 A data type that represents an array of OdBmGBrep objects.
 */
typedef OdArray<OdBmGBrepPtr> OdBmGBrepPtrArray;

//----------------------------------------------------------
//
// OdBmGBrep
//
//----------------------------------------------------------

/** \details
    This class is used to work with B-Rep data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGBrep : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGBrep);
public:
  /** \details
    Returns the array of faces as an array of pointers to the objects of the OdBmFace class.

      \param OdArray<OdBmFacePtr> [out] Output index of array of faces.
  */
  void getFaces(OdArray<OdBmFacePtr> &) const;
  //
  // Main functionality
  //

public:
  /** Description:
      Returns the face that is next after pFace in the faces array of the current B-Rep.
      Returns the first face in the array if pFace is null or the last face in the faces array.
  */
  OdBmFacePtr getNextFace(OdBmFacePtr pFace) const;
};


#endif // _BM_GBREP_H_

