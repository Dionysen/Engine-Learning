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

#ifndef _BM_SLOPEOFFSETCURVEDATA_H_
#define _BM_SLOPEOFFSETCURVEDATA_H_
#include "Database/Entities/BmUserElemCurveData.h"

class OdBmObjectId;

class OdBmSlopeOffsetCurveData;
class OdBmSlopeOffsetCurveDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSlopeOffsetCurveData object.
 */
typedef OdSmartPtr<OdBmSlopeOffsetCurveData> OdBmSlopeOffsetCurveDataPtr;

/** \details
 A data type that represents an array of OdBmSlopeOffsetCurveData objects.
 */
typedef OdArray<OdBmSlopeOffsetCurveDataPtr> OdBmSlopeOffsetCurveDataPtrArray;

//----------------------------------------------------------
//
// OdBmSlopeOffsetCurveData
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmSlopeOffsetCurveData : public OdBmUserElemCurveData {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSlopeOffsetCurveData);
public:
  double getOffset() const;
  double getAngle() const;
  double getConcreteCantilever() const;
  double getSteelCantilever() const;
  OdInt32 getAlignmentMethod() const;
  OdInt32 getBaseProjectionType() const;
  OdBmObjectId getProjectionDatumPlaneId() const;
  OdBmObjectId getLevelId() const;
  OdBmObjectId getPrimaryLeaderId() const;
  OdBmObjectId getSecondaryLeaderId() const;
  OdBmObjectId getAutodetectId() const;
  bool getDefinesHeight() const;
  bool getDefiningCurve() const;
  bool getCorrectionOnFlip() const;
  //
  // Main functionality
  //

  OdInt32 getProjectionType() const;
};
#endif // _BM_SLOPEOFFSETCURVEDATA_H_

