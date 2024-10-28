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

#ifndef _BM_RBSFLEXCURVE_H_
#define _BM_RBSFLEXCURVE_H_
#include "MEP/Entities/BmRbsCurve.h"



class OdBmRbsFlexCurve;
class OdBmRbsFlexCurveImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsFlexCurve object.
 */
typedef OdSmartPtr<OdBmRbsFlexCurve> OdBmRbsFlexCurvePtr;

/** \details
 A data type that represents an array of OdBmRbsFlexCurve objects.
 */
typedef OdArray<OdBmRbsFlexCurvePtr> OdBmRbsFlexCurvePtrArray;

//----------------------------------------------------------
//
// OdBmRbsFlexCurve
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsFlexCurve : public OdBmRbsCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsFlexCurve);
public:
  OdGeVector3d getStartTan() const;
  OdGeVector3d getEndTan() const;
  OdInt32 getPattern() const;
  void getPtVertex(OdGePoint3dArray &) const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSFLEXCURVE_H_

