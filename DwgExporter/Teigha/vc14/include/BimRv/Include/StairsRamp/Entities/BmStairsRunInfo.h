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

#ifndef _BM_STAIRSRUNINFO_H_
#define _BM_STAIRSRUNINFO_H_
#include "Base/BmObject.h"



class OdBmStairsRunInfo;
class OdBmStairsRunInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsRunInfo object.
 */
typedef OdSmartPtr<OdBmStairsRunInfo> OdBmStairsRunInfoPtr;

/** \details
 A data type that represents an array of OdBmStairsRunInfo objects.
 */
typedef OdArray<OdBmStairsRunInfoPtr> OdBmStairsRunInfoPtrArray;

//----------------------------------------------------------
//
// OdBmStairsRunInfo
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsRunInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsRunInfo);
public:
  OdGeExtents2d getBndBox() const;
  OdGePoint3d getOrigin() const;
  double getSlope() const;
  double getCutElev() const;
  OdGeVector3d getNorm() const;
  OdGeVector3d getRunDirProj() const;
  OdGeVector3d getRiserDir() const;
  double getZeroHeight() const;
  OdGePoint3d getStartLineEndsItem(OdUInt32 idx) const;
  OdGePoint3d getEndLineEndsItem(OdUInt32 idx) const;
  OdInt32 getRunType() const;
  OdInt32 getFirstRiser() const;
  OdInt32 getLastRiser() const;
  bool getIsFlipped() const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSRUNINFO_H_

