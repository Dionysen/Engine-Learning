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

#ifndef _BM_PATHOFTRAVEL_H_
#define _BM_PATHOFTRAVEL_H_
#include "Database/BmElement.h"

class OdBmCurveLoop;
typedef OdSmartPtr<OdBmCurveLoop> OdBmCurveLoopPtr;
class OdBmObjectId;

class OdBmPathOfTravel;
class OdBmPathOfTravelImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPathOfTravel object.
 */
typedef OdSmartPtr<OdBmPathOfTravel> OdBmPathOfTravelPtr;

/** \details
 A data type that represents an array of OdBmPathOfTravel objects.
 */
typedef OdArray<OdBmPathOfTravelPtr> OdBmPathOfTravelPtrArray;

//----------------------------------------------------------
//
// OdBmPathOfTravel
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmPathOfTravel : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPathOfTravel);
public:
  OdBmCurveLoopPtr getCurveLoop() const;
  OdString getMark() const;
  OdString getRoomFrom() const;
  OdString getRoomTo() const;
  void getWaypoints(OdGePoint3dArray &) const;
  OdGePoint3d getPathEndXYZ() const;
  OdGePoint3d getPathStartXYZ() const;
  OdInt32 getCalculationStatus() const;
  OdBmObjectId getLineStyle() const;
  //
  // Main functionality
  //
};
#endif // _BM_PATHOFTRAVEL_H_

