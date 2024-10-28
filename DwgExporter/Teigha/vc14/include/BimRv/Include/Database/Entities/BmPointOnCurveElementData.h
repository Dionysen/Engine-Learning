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

#ifndef _BM_POINTONCURVEELEMENTDATA_H_
#define _BM_POINTONCURVEELEMENTDATA_H_
#include "Database/Entities/BmPointElementReference.h"

class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmPointLocationOnCurve;
typedef OdSmartPtr<OdBmPointLocationOnCurve> OdBmPointLocationOnCurvePtr;

class OdBmPointOnCurveElementData;
class OdBmPointOnCurveElementDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPointOnCurveElementData object.
 */
typedef OdSmartPtr<OdBmPointOnCurveElementData> OdBmPointOnCurveElementDataPtr;

/** \details
 A data type that represents an array of OdBmPointOnCurveElementData objects.
 */
typedef OdArray<OdBmPointOnCurveElementDataPtr> OdBmPointOnCurveElementDataPtrArray;

//----------------------------------------------------------
//
// OdBmPointOnCurveElementData
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPointOnCurveElementData : public OdBmPointElementReference {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPointOnCurveElementData);
public:
  OdBmGeomRefPtr getGref() const;
  OdBmPointLocationOnCurvePtr getLocation() const;
  //
  // Main functionality
  //
};
#endif // _BM_POINTONCURVEELEMENTDATA_H_

