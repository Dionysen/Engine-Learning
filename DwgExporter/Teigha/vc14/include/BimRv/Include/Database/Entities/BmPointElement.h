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

#ifndef _BM_POINTELEMENT_H_
#define _BM_POINTELEMENT_H_
#include "Database/BmElement.h"

class OdBmGPoint;
typedef OdSmartPtr<OdBmGPoint> OdBmGPointPtr;
class OdBmObjectId;

class OdBmPointElement;
class OdBmPointElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPointElement object.
 */
typedef OdSmartPtr<OdBmPointElement> OdBmPointElementPtr;

/** \details
 A data type that represents an array of OdBmPointElement objects.
 */
typedef OdArray<OdBmPointElementPtr> OdBmPointElementPtrArray;

//----------------------------------------------------------
//
// OdBmPointElement
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmPointElement : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPointElement);
public:
  OdGeMatrix3d getExplicitTrf() const;
  OdGeMatrix3d getTrf() const;
  double getRotationAngle() const;
  OdInt32 getShowPlanes() const;
  OdInt32 getFamElemVisibility() const;
  OdInt32 getCurrIndexForHist() const;
  bool getShowNormalPlaneOnly() const;
  bool getZflipped() const;
  bool getMirrored() const;
  bool getCreateAxes() const;
  OdBmGPointPtr getGPoint() const;
  void getCurvesDrivenByPoint(OdBmMap<OdBmObjectId, OdInt32> &) const;
  OdString getNameParam() const;
  //
  // Main functionality
  //


};


#endif // _BM_POINTELEMENT_H_

