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

#ifndef _BM_DIMENSION_H_
#define _BM_DIMENSION_H_
#include "Database/BmElement.h"

class OdBmDimSegInfo;
typedef OdSmartPtr<OdBmDimSegInfo> OdBmDimSegInfoPtr;
class OdBmDimSegInfoId;
typedef OdSmartPtr<OdBmDimSegInfoId> OdBmDimSegInfoIdPtr;
class OdBmDimEqSegInfoArr;
typedef OdSmartPtr<OdBmDimEqSegInfoArr> OdBmDimEqSegInfoArrPtr;
class OdBmObjectId;

class OdBmDimension;
class OdBmDimensionImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDimension object.
 */
typedef OdSmartPtr<OdBmDimension> OdBmDimensionPtr;

/** \details
 A data type that represents an array of OdBmDimension objects.
 */
typedef OdArray<OdBmDimensionPtr> OdBmDimensionPtrArray;

//----------------------------------------------------------
//
// OdBmDimension
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmDimension : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDimension);
public:
  void getRefPoints(OdGePoint3dArray &) const;
  void getOldRefSegEndPnt(OdGePoint3dArray &) const;
  void getOldRefSegEnd(OdInt32Array &) const;
  void getArrSegInfo(OdArray<OdBmDimSegInfoPtr> &) const;
  OdGeVector3d getPlaneNormal() const;
  OdGePoint3d getOldOrigin() const;
  OdBmObjectId getStyleSymbolId() const;
  OdBmObjectId getDimSketchPlaneId() const;
  OdInt32 getDimVersion() const;
  OdUInt8 getFlags() const;
  bool getIsDimLockedForLabeling() const;
  bool getIsUseEqualityFormula() const;
  bool getShowLabelGP() const;
  OdGeMatrix3d getLastTrf() const;
  OdBmDimSegInfoIdPtr getLastDimSegInfoId() const;
  OdBmDimEqSegInfoArrPtr getArrEqualityFormulaInfo_DimEqSegInfoArr() const;
  //
  // Main functionality
  //


};


#endif // _BM_DIMENSION_H_

