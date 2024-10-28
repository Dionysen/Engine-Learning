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

#ifndef _BM_STAIRSTREADINFO_H_
#define _BM_STAIRSTREADINFO_H_
#include "Base/BmObject.h"

class OdBmIntStairInfo;
typedef OdSmartPtr<OdBmIntStairInfo> OdBmIntStairInfoPtr;

class OdBmStairsTreadInfo;
class OdBmStairsTreadInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsTreadInfo object.
 */
typedef OdSmartPtr<OdBmStairsTreadInfo> OdBmStairsTreadInfoPtr;

/** \details
 A data type that represents an array of OdBmStairsTreadInfo objects.
 */
typedef OdArray<OdBmStairsTreadInfoPtr> OdBmStairsTreadInfoPtrArray;

//----------------------------------------------------------
//
// OdBmStairsTreadInfo
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsTreadInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsTreadInfo);
public:
  OdBmIntStairInfoPtr getStartRiser() const;
  OdBmIntStairInfoPtr getEndRiser() const;
  OdBmObjectPtr getStartLine() const;
  OdBmObjectPtr getEndLine() const;
  OdGeExtents2d getBndBox() const;
  double getActDepth() const;
  OdGePoint3d getOrigin() const;
  double getSlope() const;
  OdGeVector3d getNorm() const;
  OdGeVector3d getRunDirProj() const;
  OdGeVector3d getRiserDir() const;
  double getZeroHeight() const;
  OdInt32 getTreadType() const;
  OdInt32 getRunNum() const;
  OdInt32 getRunType() const;
  bool getFlipped() const;
  //
  // Main functionality
  //
};
#endif // _BM_STAIRSTREADINFO_H_

