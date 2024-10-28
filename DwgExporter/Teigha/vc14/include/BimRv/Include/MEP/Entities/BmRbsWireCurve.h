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

#ifndef _BM_RBSWIRECURVE_H_
#define _BM_RBSWIRECURVE_H_
#include "MEP/Entities/BmRbsFigureCurve.h"

class OdBmDesignPropertyManager;
typedef OdSmartPtr<OdBmDesignPropertyManager> OdBmDesignPropertyManagerPtr;

class OdBmRbsWireCurve;
class OdBmRbsWireCurveImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRbsWireCurve object.
 */
typedef OdSmartPtr<OdBmRbsWireCurve> OdBmRbsWireCurvePtr;

/** \details
 A data type that represents an array of OdBmRbsWireCurve objects.
 */
typedef OdArray<OdBmRbsWireCurvePtr> OdBmRbsWireCurvePtrArray;

//----------------------------------------------------------
//
// OdBmRbsWireCurve
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmRbsWireCurve : public OdBmRbsFigureCurve {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRbsWireCurve);
public:
  OdBmDesignPropertyManagerPtr getDesignPropManager() const;
  OdGeVector3d getStartOffsetVector() const;
  OdGeVector3d getEndOffsetVector() const;
  double getParamTickMarksPos() const;
  OdInt32 getType() const;
  OdInt32 getTickMarkState() const;
  bool getStartOffsetInitialized() const;
  bool getEndOffsetInitialized() const;
  bool getDrawCircularArc() const;
  bool getManualModifiedEndsItem(OdUInt32 idx) const;
  bool getDynamicUpdateEndsItem(OdUInt32 idx) const;
  //
  // Main functionality
  //
};
#endif // _BM_RBSWIRECURVE_H_

