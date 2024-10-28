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

#ifndef _BM_HOSTOBJMISCDATA_H_
#define _BM_HOSTOBJMISCDATA_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Database/Entities/BmCGDriver.h"
// END: Includes

class OdBmCurtainGridDriver;
typedef OdSmartPtr<OdBmCurtainGridDriver> OdBmCurtainGridDriverPtr;
class OdBmSurfaceOffsetOptions;
typedef OdSmartPtr<OdBmSurfaceOffsetOptions> OdBmSurfaceOffsetOptionsPtr;
class OdBmCGDriver;
typedef OdSmartPtr<OdBmCGDriver> OdBmCGDriverPtr;
class OdBmInfillInfo;
typedef OdSmartPtr<OdBmInfillInfo> OdBmInfillInfoPtr;
class OdBmHostPanelInfo;
typedef OdSmartPtr<OdBmHostPanelInfo> OdBmHostPanelInfoPtr;
class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmHostObjMiscData;
class OdBmHostObjMiscDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmHostObjMiscData object.
 */
typedef OdSmartPtr<OdBmHostObjMiscData> OdBmHostObjMiscDataPtr;

/** \details
 A data type that represents an array of OdBmHostObjMiscData objects.
 */
typedef OdArray<OdBmHostObjMiscDataPtr> OdBmHostObjMiscDataPtrArray;

//----------------------------------------------------------
//
// OdBmHostObjMiscData
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmHostObjMiscData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmHostObjMiscData);
public:
  OdBmCurtainGridDriverPtr getCurtainGridDriver() const;
  OdBmSurfaceOffsetOptionsPtr getSurfaceOffsetOptions() const;
  void getCGDrivers(OdArray<OdBmCGDriverPtr> &) const;
  OdBmInfillInfoPtr getInfillInfo() const;
  OdBmHostPanelInfoPtr getHostPanelInfo() const;
  void getDontAutoJoinIds(OdBmObjectIdArray &) const;
  void getAFaces(OdArray<OdBmGeomRefPtr> &) const;
  //
  // Main functionality
  //

  OdUInt32 numCGDrivers() const;
  OdString getHostCurtainVersion() const;
  OdResult getCGDriver(OdUInt32 iNum, OdBmCGDriverPtr& pCGDriver) const;
};
#endif // _BM_HOSTOBJMISCDATA_H_

