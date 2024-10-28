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

#ifndef _BM_WALLSWEEPINFO_H_
#define _BM_WALLSWEEPINFO_H_
#include "Base/BmObject.h"

class OdBmProfileExtents;
typedef OdSmartPtr<OdBmProfileExtents> OdBmProfileExtentsPtr;
class OdBmObjectId;

class OdBmWallSweepInfo;
class OdBmWallSweepInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWallSweepInfo object.
 */
typedef OdSmartPtr<OdBmWallSweepInfo> OdBmWallSweepInfoPtr;

/** \details
 A data type that represents an array of OdBmWallSweepInfo objects.
 */
typedef OdArray<OdBmWallSweepInfoPtr> OdBmWallSweepInfoPtrArray;

//----------------------------------------------------------
//
// OdBmWallSweepInfo
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmWallSweepInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWallSweepInfo);
public:
  double getDistance() const;
  double getWallOffset() const;
  double getDefaultSetback() const;
  OdBmObjectId getProfileId() const;
  OdBmObjectId getMatId() const;
  OdInt32 getId() const;
  OdInt32 getWallSide() const;
  OdInt32 getWallSweepType() const;
  OdInt32 getDistanceMeasuredFrom() const;
  bool getFlipped() const;
  bool getCutByInserts() const;
  bool getCutsWall() const;
  bool getVertical() const;
  bool getFixed() const;
  OdBmProfileExtentsPtr getProfileExtents() const;
  OdInt32 getWallSweepOrientation() const;
  //
  // Main functionality
  //
};
#endif // _BM_WALLSWEEPINFO_H_

