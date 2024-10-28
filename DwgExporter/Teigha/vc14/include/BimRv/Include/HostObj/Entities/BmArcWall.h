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

#ifndef _BM_ARCWALL_H_
#define _BM_ARCWALL_H_
#include "HostObj/Entities/BmVWall.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGArc.h"

class OdBmGLine;
typedef OdSmartPtr<OdBmGLine> OdBmGLinePtr;
// END: Includes



class OdBmArcWall;
class OdBmArcWallImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmArcWall object.
 */
typedef OdSmartPtr<OdBmArcWall> OdBmArcWallPtr;

/** \details
 A data type that represents an array of OdBmArcWall objects.
 */
typedef OdArray<OdBmArcWallPtr> OdBmArcWallPtrArray;

//----------------------------------------------------------
//
// OdBmArcWall
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmArcWall : public OdBmVWall {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmArcWall);
public:
  //
  // Main functionality
  //

  /** \details
    Creates ArcWall

      \param pGCurve [in] Input base arc of Wall.
      \param idLevel [in] Input ID of Level.
      \param isStructural [in] Input sets whether the wall is structural.
  */
  OdResult set(const OdBmGArcPtr& pGCurve, const OdBmObjectId& idLevel, const bool isStructural);

  /** \details
    Creates ArcWall

      \param pGCurve [in] Input base arc of Wall.
      \param idLevel [in] Input ID of Level.
      \param idWallType [in] Input ID of WallType.
      \param dHeight [in] Input height of Wall.
      \param dOffset [in] Input base offset of Wall(its vertical placement).
      \param isFlip [in] Input change which side of the wall is considered to be the inside and outside of the wall.
      \param isStructural [in] Input sets whether the wall is structural.
  */
  OdResult set(const OdBmGArcPtr& pGCurve, const OdBmObjectId& idLevel, const OdBmObjectId& idWallType,
    const double dHeight, const double dOffset, const bool isFlip, const bool isStructural);

  /** \details
    Creates ArcWall

      \param pGCurve [in] Input base arc of Wall.
      \param isStructural [in] Input sets whether the wall is structural.
  */
  OdResult set(const OdBmGArcPtr& pGCurve, const bool isStructural);
};
#endif // _BM_ARCWALL_H_

