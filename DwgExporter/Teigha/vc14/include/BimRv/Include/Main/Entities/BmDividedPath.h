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

#ifndef _BM_DIVIDEDPATH_H_
#define _BM_DIVIDEDPATH_H_
#include "Database/BmElement.h"

class OdBmPolycurveParam;
typedef OdSmartPtr<OdBmPolycurveParam> OdBmPolycurveParamPtr;
class OdBmDividedPathPointKey;
typedef OdSmartPtr<OdBmDividedPathPointKey> OdBmDividedPathPointKeyPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmDividedPath;
class OdBmDividedPathImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDividedPath object.
 */
typedef OdSmartPtr<OdBmDividedPath> OdBmDividedPathPtr;

/** \details
 A data type that represents an array of OdBmDividedPath objects.
 */
typedef OdArray<OdBmDividedPathPtr> OdBmDividedPathPtrArray;

//----------------------------------------------------------
//
// OdBmDividedPath
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmDividedPath : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDividedPath);
public:
  void getIntersectingElements(OdBmObjectIdArray &) const;
  void getIntersectionPolycurveParams(OdArray<OdBmPolycurveParamPtr> &) const;
  void getLayoutPolycurveParams(OdArray<OdBmPolycurveParamPtr> &) const;
  void getMergedPointKeys(OdArray<OdBmDividedPathPointKeyPtr> &) const;
  void getCurves(OdArray<OdBmObjectPtr> &) const;
  double getBeginningIndent() const;
  double getDistance() const;
  double getEndIndent() const;
  double getMaximumDistance() const;
  double getMinimumDistance() const;
  double getTotalPathLength() const;
  OdBmObjectId getNPSId() const;
  OdInt32 getBackUpLayout() const;
  OdInt32 getFixedNumberOfPoints() const;
  OdInt32 getJustification() const;
  OdInt32 getLayout() const;
  OdInt32 getMeasurementType() const;
  OdInt32 getNumberControlTag() const;
  bool getDisplayNodeNumbers() const;
  bool getDisplayNodes() const;
  bool getDisplayReferenceCurves() const;
  bool getFlipDirection() const;
  bool getIsClosedLoop() const;
  bool getIsCyclical() const;
  //
  // Main functionality
  //


};


#endif // _BM_DIVIDEDPATH_H_

