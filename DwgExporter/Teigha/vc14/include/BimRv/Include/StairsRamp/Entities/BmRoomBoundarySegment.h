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

#ifndef _BM_ROOMBOUNDARYSEGMENT_H_
#define _BM_ROOMBOUNDARYSEGMENT_H_
#include "Base/BmObject.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGCurve.h"
// END: Includes

class OdBmForeignElemRef;
typedef OdSmartPtr<OdBmForeignElemRef> OdBmForeignElemRefPtr;
class OdBmObjectId;

class OdBmRoomBoundarySegment;
class OdBmRoomBoundarySegmentImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRoomBoundarySegment object.
 */
typedef OdSmartPtr<OdBmRoomBoundarySegment> OdBmRoomBoundarySegmentPtr;

/** \details
 A data type that represents an array of OdBmRoomBoundarySegment objects.
 */
typedef OdArray<OdBmRoomBoundarySegmentPtr> OdBmRoomBoundarySegmentPtrArray;

//----------------------------------------------------------
//
// OdBmRoomBoundarySegment
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmRoomBoundarySegment : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRoomBoundarySegment);
public:
  double getStartParam() const;
  double getEndParam() const;
  OdBmObjectId getElementId() const;
  OdBmForeignElemRefPtr getForeignElemRef() const;
  OdInt32 getGNodeTag() const;
  OdBmObjectPtr getBndryCurve() const;
  //
  // Main functionality
  //

  /** \details
    Sets data of RoomBoundarySegment
    \param dStartParam [in]  Start parameter of segment.
    \param dEndParam [in]  End parameter of segment.
    \param elemId [in]  Element id of host or instance.
    \param pBndryCurve [in]  Boundary curve.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult set(const double dStartParam, const double dEndParam, const OdBmObjectId elemId, const OdBmGCurvePtr& pBndryCurve);
};
#endif // _BM_ROOMBOUNDARYSEGMENT_H_

