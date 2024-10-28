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

#ifndef _BM_STAIRSCURVEDATA_H_
#define _BM_STAIRSCURVEDATA_H_
#include "Database/Entities/BmUserElemCurveData.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmStairsCurveData;
class OdBmStairsCurveDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsCurveData object.
 */
typedef OdSmartPtr<OdBmStairsCurveData> OdBmStairsCurveDataPtr;

/** \details
 A data type that represents an array of OdBmStairsCurveData objects.
 */
typedef OdArray<OdBmStairsCurveDataPtr> OdBmStairsCurveDataPtrArray;

//----------------------------------------------------------
//
// OdBmStairsCurveData
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsCurveData : public OdBmUserElemCurveData {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsCurveData);
public:
  OdInt32 getCurveType() const;
  OdBmObjectId getRunIdItem(OdUInt32 idx) const;
  OdInt32 getRiserNum() const;
  OdInt32 getBoundarySide() const;
  OdInt32 getSegmentNum() const;
  OdInt32 getFaceTag() const;
  OdInt32 getCurveTag() const;
  bool getOrientation() const;
  //
  // Main functionality
  //


};
#endif // _BM_STAIRSCURVEDATA_H_

