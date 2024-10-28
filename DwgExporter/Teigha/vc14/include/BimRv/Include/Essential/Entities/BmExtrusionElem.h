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

#ifndef _BM_EXTRUSIONELEM_H_
#define _BM_EXTRUSIONELEM_H_
#include "Database/Entities/BmGenSweep.h"
// BEGIN: Includes
#include "GeometryUtils/Entities/BmCurveLoop.h"
// END: Includes



class OdBmExtrusionElem;
class OdBmExtrusionElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmExtrusionElem object.
 */
typedef OdSmartPtr<OdBmExtrusionElem> OdBmExtrusionElemPtr;

/** \details
 A data type that represents an array of OdBmExtrusionElem objects.
 */
typedef OdArray<OdBmExtrusionElemPtr> OdBmExtrusionElemPtrArray;

class OdBmExtrusionElemExtrusionHelper;
typedef OdSmartPtr<OdBmExtrusionElemExtrusionHelper> OdBmExtrusionElemExtrusionHelperPtr;

//----------------------------------------------------------
//
// OdBmExtrusionElem
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmExtrusionElem : public OdBmGenSweep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmExtrusionElem);
public:
  bool getAlwaysRefPlaneNorm() const;
  bool getSideRefPlane() const;
  //
  // Main functionality
  //

  /** \details
    Sets the extrusion's start and end built-in parameters.

    \param startParam [in] Input start parameter.
    \param endParam [in] Input end parameter.
      
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setStartEndExtrursionParam(double startParam, double endParam);

  /** \details
    Adds the curve loop to this extrusion element.

    \param arrCurves [in] Input array of CurveLoops.
    \param idSketchPlane [in] Input ID of the sketch plane.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult addCurveLoops(const OdArray<OdBmCurveLoopPtr>& arrCurveLoops, OdBmObjectId idSketchPlane);
};


#endif // _BM_EXTRUSIONELEM_H_

