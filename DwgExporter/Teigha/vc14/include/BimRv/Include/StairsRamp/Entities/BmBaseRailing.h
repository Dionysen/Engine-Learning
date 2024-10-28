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

#ifndef _BM_BASERAILING_H_
#define _BM_BASERAILING_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGCurve.h"
// END: Includes

class OdBmContinuousRailOverride;
typedef OdSmartPtr<OdBmContinuousRailOverride> OdBmContinuousRailOverridePtr;
class OdBmRailingCurveOverrides;
typedef OdSmartPtr<OdBmRailingCurveOverrides> OdBmRailingCurveOverridesPtr;
class OdBmRailingCurveConnectionOverrides;
typedef OdSmartPtr<OdBmRailingCurveConnectionOverrides> OdBmRailingCurveConnectionOverridesPtr;
class OdBmPointOnFaceDriver;
typedef OdSmartPtr<OdBmPointOnFaceDriver> OdBmPointOnFaceDriverPtr;
class OdBmObjectId;

class OdBmBaseRailing;
class OdBmBaseRailingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBaseRailing object.
 */
typedef OdSmartPtr<OdBmBaseRailing> OdBmBaseRailingPtr;

/** \details
 A data type that represents an array of OdBmBaseRailing objects.
 */
typedef OdArray<OdBmBaseRailingPtr> OdBmBaseRailingPtrArray;

//----------------------------------------------------------
//
// OdBmBaseRailing
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmBaseRailing : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBaseRailing);
public:
  void getContinuousRailOverrides(OdBmMap<OdInt32, OdBmContinuousRailOverridePtr> &) const;
  void getRailCurveOverrides(OdArray<OdBmRailingCurveOverridesPtr> &) const;
  void getRailCurveConnectionOverrides(OdArray<OdBmRailingCurveConnectionOverridesPtr> &) const;
  void getContinuousRailIdsMap(OdBmMap<OdInt32, OdBmObjectId> &) const;
  double getPlacementOffset() const;
  OdBmObjectId getSketchId() const;
  OdBmObjectId getStairsRailingAttrId() const;
  OdBmObjectId getBaseRailingSymbolId() const;
  OdBmObjectId getStairsId() const;
  OdInt32 getVersion() const;
  OdInt32 getRegisteredLocation() const;
  OdInt32 getRegisteredLocationBackup() const;
  bool getFlipped() const;
  bool getUseCurveLoopsFromSketch() const;
  OdBmPointOnFaceDriverPtr getPointOnFaceDriver() const;
  void getStairsSubelementKeys(OdInt32Array &) const;
  OdGeMatrix3d getCoordinateSystemTrf() const;
  OdBmObjectId getStairsComponentId() const;
  //
  // Main functionality
  //

  /** \details
    Returns an array of curves, that belong to the path of a BmBaseRailing object

    \param path [out] an array of path curves.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getRailingPath(OdBmGCurvePtrArray& path) const;

  /** \details
    Returns top rail of the railing.
    \returns Returns id of top rail if available or null objectId.
  */
  OdBmObjectId getTopRail() const;
};
#endif // _BM_BASERAILING_H_

