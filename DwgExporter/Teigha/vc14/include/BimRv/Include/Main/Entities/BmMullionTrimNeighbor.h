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

#ifndef _BM_MULLIONTRIMNEIGHBOR_H_
#define _BM_MULLIONTRIMNEIGHBOR_H_
#include "Base/BmObject.h"

class OdBmCurveLoop;
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;
class OdBmObjectId;

class OdBmMullionTrimNeighbor;
class OdBmMullionTrimNeighborImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMullionTrimNeighbor object.
 */
typedef OdSmartPtr<OdBmMullionTrimNeighbor> OdBmMullionTrimNeighborPtr;

/** \details
 A data type that represents an array of OdBmMullionTrimNeighbor objects.
 */
typedef OdArray<OdBmMullionTrimNeighborPtr> OdBmMullionTrimNeighborPtrArray;

//----------------------------------------------------------
//
// OdBmMullionTrimNeighbor
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmMullionTrimNeighbor : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMullionTrimNeighbor);
public:
  OdBmCurveLoopPtr getTrimPath() const;
  OdBmCurveLoopPtr getTrimPath2() const;
  OdGeVector3d getTrimPathNorm() const;
  double getCornerAnglesItem(OdUInt32 idx) const;
  double getAngle() const;
  OdBmObjectId getNbrSymbolId() const;
  OdUInt8 getFlags() const;
  bool getDirection() const;
  bool getFlip() const;
  //
  // Main functionality
  //
};
#endif // _BM_MULLIONTRIMNEIGHBOR_H_

