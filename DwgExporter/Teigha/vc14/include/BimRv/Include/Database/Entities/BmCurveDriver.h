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

#ifndef _BM_CURVEDRIVER_H_
#define _BM_CURVEDRIVER_H_
#include "Base/BmObject.h"

class OdBmGCurve;
typedef OdSmartPtr<OdBmGCurve> OdBmGCurvePtr;
class OdBmIndexJoinPair;
typedef OdSmartPtr<OdBmIndexJoinPair> OdBmIndexJoinPairPtr;
class OdBmMidParam;
typedef OdSmartPtr<OdBmMidParam> OdBmMidParamPtr;
class OdBmSideAlignment;
typedef OdSmartPtr<OdBmSideAlignment> OdBmSideAlignmentPtr;
class OdBmObjectId;

class OdBmCurveDriver;
class OdBmCurveDriverImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCurveDriver object.
 */
typedef OdSmartPtr<OdBmCurveDriver> OdBmCurveDriverPtr;

/** \details
 A data type that represents an array of OdBmCurveDriver objects.
 */
typedef OdArray<OdBmCurveDriverPtr> OdBmCurveDriverPtrArray;

//----------------------------------------------------------
//
// OdBmCurveDriver
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCurveDriver : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCurveDriver);
public:
  OdBmObjectPtr getControlData() const;
  OdBmGCurvePtr getCurve() const;
  void getSideJoins(OdArray<OdBmObjectPtr> &) const;
  void getControlJoinsSet(OdArray<OdBmIndexJoinPairPtr> &) const;
  void getMidParams(OdArray<OdBmMidParamPtr> &) const;
  OdInt32 getNextMidParamId() const;
  bool getFlip() const;
  void getSideAlignments(OdBmMap<OdBmObjectId, OdBmSideAlignmentPtr> &) const;
  //
  // Main functionality
  //

  double getCurveLength() const;
};
#endif // _BM_CURVEDRIVER_H_

