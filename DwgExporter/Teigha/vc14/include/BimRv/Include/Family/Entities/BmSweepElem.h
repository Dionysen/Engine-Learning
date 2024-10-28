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

#ifndef _BM_SWEEPELEM_H_
#define _BM_SWEEPELEM_H_
#include "Database/Entities/BmGenSweep.h"
#include "Main/Enums/BmProfilePlaneLocation.h"
// BEGIN: Includes
#include "Main/Enums/BmProfilePlaneLocation.h"
#include "Geometry/Entities/BmGCurve.h"
// END: Includes

class OdBmProfileData;
typedef OdSmartPtr<OdBmProfileData> OdBmProfileDataPtr;
class OdBmObjectId;

class OdBmSweepElem;
class OdBmSweepElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSweepElem object.
 */
typedef OdSmartPtr<OdBmSweepElem> OdBmSweepElemPtr;

/** \details
 A data type that represents an array of OdBmSweepElem objects.
 */
typedef OdArray<OdBmSweepElemPtr> OdBmSweepElemPtrArray;

//----------------------------------------------------------
//
// OdBmSweepElem
//
//----------------------------------------------------------

/** \details
    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmSweepElem : public OdBmGenSweep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSweepElem);
public:
  OdBmProfileDataPtr getProfileData() const;
  double getMaxSegmentAngle() const;
  OdBmObjectId getPathSketchId() const;
  OdBmObjectId getPath3dId() const;
  bool getIsTrajSegmented() const;
  //
  // Main functionality
  //

  /** \details
    Returns profile sketch id of the sweep.

  */
  OdBmObjectId getProfileSketchId() const;

  /** \details
   Sets the sweep's data, to create it.
     \param bIsSolid [in] Indicates whether a SweepElem is Solid or Void.
     \param path [in] Input path.
     \param idSketchPlane [in] id of SketchPlane for path.
     \param profile [in] Input profile.
     \param iProfileCurveIndex [in] Input index of path-curve.
     \param profilePlaneLocation [in] Input location of profile location curve.

     \returns Returns eOk if successful or an appropriate error code otherwise.

  */
  OdResult set(const bool bIsSolid, const OdBmGCurvePtrArray& path,
    const OdBmObjectId idSketchPlane, const OdArray<OdBmGCurvePtrArray>& profile,
    const OdUInt32 iProfileCurveIndex, const OdBm::ProfilePlaneLocation::Enum profilePlaneLocation);
};


#endif // _BM_SWEEPELEM_H_

