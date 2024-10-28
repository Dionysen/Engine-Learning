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

#ifndef _BM_FILLEDREGION_H_
#define _BM_FILLEDREGION_H_
#include "Essential/Entities/BmSketchedRegion.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGCurve.h"
#include "GeometryUtils/Entities/BmCurveLoop.h"
// END: Includes

class OdBmObjectId;

class OdBmFilledRegion;
class OdBmFilledRegionImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFilledRegion object.
 */
typedef OdSmartPtr<OdBmFilledRegion> OdBmFilledRegionPtr;

/** \details
 A data type that represents an array of OdBmFilledRegion objects.
 */
typedef OdArray<OdBmFilledRegionPtr> OdBmFilledRegionPtrArray;

//----------------------------------------------------------
//
// OdBmFilledRegion
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmFilledRegion : public OdBmSketchedRegion {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFilledRegion);
public:
  OdInt32 getFamElemVisibility() const;
  OdBmObjectId getAttrId() const;
  bool getMasking() const;
  //
  // Main functionality
  //

   /** \details
    Gets the boundaries.
      \param arrProfile [in] Input array.

      \returns Returns eOk if successful or an appropriate error code in the other case.

  */
  OdResult getBoundaries(OdArray<OdBmCurveLoopPtr>& arrCurveLoops) const;

   /** \details
    Sets CurveLoops, typeId and viewId for FilledRegion.
      \param aCurveLoops [in] Input array of curves.
      \param typeId [in] Input type id.
      \param viewId [in] Input view id.

      \returns Returns eOk if successful or an appropriate error code in the other case.

  */
  OdResult set(const OdArray<OdBmCurveLoopPtr>& aCurveLoops, const OdBmObjectId typeId, const OdBmObjectId viewId);

  /** \details
    Determines whether the given id is valid for FilledRegion.
      \param typeId [in] Input type id.

  */
  bool isValidFilledRegionTypeId(const OdBmObjectId typeId) const;
};


#endif // _BM_FILLEDREGION_H_

