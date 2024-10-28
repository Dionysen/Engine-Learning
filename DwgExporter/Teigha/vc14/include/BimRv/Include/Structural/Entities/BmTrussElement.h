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

#ifndef _BM_TRUSSELEMENT_H_
#define _BM_TRUSSELEMENT_H_
#include "Analytical/Entities/BmElementSystemBase.h"

class OdBmCurveDriver;
typedef OdSmartPtr<OdBmCurveDriver> OdBmCurveDriverPtr;
class OdBmObjectId;

class OdBmTrussElement;
class OdBmTrussElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTrussElement object.
 */
typedef OdSmartPtr<OdBmTrussElement> OdBmTrussElementPtr;

/** \details
 A data type that represents an array of OdBmTrussElement objects.
 */
typedef OdArray<OdBmTrussElementPtr> OdBmTrussElementPtrArray;

//----------------------------------------------------------
//
// OdBmTrussElement
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmTrussElement : public OdBmElementSystemBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTrussElement);
public:
  double getBearingOffset() const;
  double getDefaultHeight() const;
  double getHorizOffset() const;
  double getRotAngle() const;
  OdInt32 getBearingChord() const;
  OdInt32 getBvj() const;
  OdInt32 getStickJust() const;
  OdBmObjectId getAssocSketchPlaneId() const;
  OdBmObjectId getElevSketchId() const;
  OdBmObjectId getViewId() const;
  bool getUnjoinEndItem(OdUInt32 idx) const;
  bool getCreateTop() const;
  bool getCreateBottom() const;
  bool getRotateChordsWithTruss() const;
  OdString getEngType() const;
  OdBmCurveDriverPtr getCurveDriver() const;
  //
  // Main functionality
  //


};


#endif // _BM_TRUSSELEMENT_H_

