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

#ifndef _BM_DIMSEGINFO_H_
#define _BM_DIMSEGINFO_H_
#include "Base/BmObject.h"

class OdBmDimSegValue;
typedef OdSmartPtr<OdBmDimSegValue> OdBmDimSegValuePtr;
class OdBmDimSegInfoBase;
typedef OdSmartPtr<OdBmDimSegInfoBase> OdBmDimSegInfoBasePtr;
class OdBmDimSegInfoId;
typedef OdSmartPtr<OdBmDimSegInfoId> OdBmDimSegInfoIdPtr;
class OdBmDimSegOwnedByDimension;
typedef OdSmartPtr<OdBmDimSegOwnedByDimension> OdBmDimSegOwnedByDimensionPtr;
class OdBmObjectId;

class OdBmDimSegInfo;
class OdBmDimSegInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDimSegInfo object.
 */
typedef OdSmartPtr<OdBmDimSegInfo> OdBmDimSegInfoPtr;

/** \details
 A data type that represents an array of OdBmDimSegInfo objects.
 */
typedef OdArray<OdBmDimSegInfoPtr> OdBmDimSegInfoPtrArray;

//----------------------------------------------------------
//
// OdBmDimSegInfo
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmDimSegInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDimSegInfo);
public:
  OdBmObjectPtr getOffset2() const;
  double getLockedValue() const;
  OdGePoint3d getOrigin() const;
  OdGePoint2d getOffset() const;
  OdBmObjectId getParamId() const;
  OdInt32 getEqualitySegNumber() const;
  OdInt32 getFlags() const;
  OdInt32 getLeaderVisibility() const;
  OdBmDimSegValuePtr getValuesItem(OdUInt32 idx) const;
  OdBmDimSegInfoBasePtr getDimSegInfoBase() const;
  OdBmDimSegInfoIdPtr getId() const;
  OdBmDimSegOwnedByDimensionPtr getOwningDimension() const;
  //
  // Main functionality
  //

  OdBmDimSegValuePtr getSegValue(int iNumSegmennt) const;
};


#endif // _BM_DIMSEGINFO_H_

