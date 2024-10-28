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

#ifndef _BM_VWALL_H_
#define _BM_VWALL_H_
#include "HostObj/Entities/BmHostObj.h"
#include "Database/Enums/BmWallKind.h"

class OdBmCurveDriver;
typedef OdSmartPtr<OdBmCurveDriver> OdBmCurveDriverPtr;
class OdBmCurtainAuxData;
typedef OdSmartPtr<OdBmCurtainAuxData> OdBmCurtainAuxDataPtr;
class OdBmDefiningFaceRefs;
typedef OdSmartPtr<OdBmDefiningFaceRefs> OdBmDefiningFaceRefsPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmVWall;
class OdBmVWallImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmVWall object.
 */
typedef OdSmartPtr<OdBmVWall> OdBmVWallPtr;

/** \details
 A data type that represents an array of OdBmVWall objects.
 */
typedef OdArray<OdBmVWallPtr> OdBmVWallPtrArray;

//----------------------------------------------------------
//
// OdBmVWall
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmVWall : public OdBmHostObj {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmVWall);
public:
  OdBmObjectPtr getDrivenCGLineDataU() const;
  OdBmObjectPtr getDrivenCGLineDataV() const;
  OdBmCurveDriverPtr getCurveDriver() const;
  void getRefFaces(OdArray<OdBmObjectPtr> &) const;
  void getEmbeddedTo(OdBmObjectIdArray &) const;
  OdBmObjectPtr getWallRunTimeData() const;
  double getKeyRefOffset() const;
  double getLocLineOffset() const;
  OdBmObjectId getWallAttrId() const;
  OdBmObjectId getUpToLevelId() const;
  OdBmObjectId getAnalyticalProjectionSurfaceId() const;
  OdBmObjectId getAnalyticalTopPlane() const;
  OdBmObjectId getAnalyticalBottomPlane() const;
  OdBmObjectId getContFootingId() const;
  OdBmCurtainAuxDataPtr getCurtainAuxData() const;
  OdInt32 getVersion() const;
  OdInt32 getSubWallGridIdInType() const;
  OdInt32 getWallStructuralUsage() const;
  OdInt32 getWallKeyRef() const;
  bool getIsFlipped() const;
  bool getIsStructuralSignificant() const;
  OdBmObjectPtr getUserData() const;
  OdBmDefiningFaceRefsPtr getDefiningFaceRefs() const;
  OdInt32 getWallCrossSection() const;
  //
  // Main functionality
  //

  /** \details
    Returns the kind of a wall as the one value from WallKind enumeration.

    \returns Returning value can be one of the next values:

    <table>
      <b>Unknown</b>  -1
      <b>Basic</b>    0
      <b>Curtain</b>  1
      <b>Stacked</b>  2
    </table>
  */
  virtual OdBm::WallKind::Enum getWallKind() const;

  /** \details
    Returns true if the wall is a stacked wall.
  */
  bool isStackedWall() const;
  
  /** \details
    Gets a wall curve trimmed or elongated according to the end conditions of the wall.
    \param pGCurve[out] trimmed curve
    \returns Result code of this operation (eOk if successful)
  */
  OdResult getTrimmedCurve(OdBmGCurvePtr& pGCurve) const;
};


#endif // _BM_VWALL_H_

