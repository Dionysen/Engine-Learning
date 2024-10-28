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

#ifndef _BM_TAPPEDPIPEDATA_H_
#define _BM_TAPPEDPIPEDATA_H_
#include "Base/BmObject.h"

class OdBmConnectorId;
typedef OdSmartPtr<OdBmConnectorId> OdBmConnectorIdPtr;

class OdBmTappedPipeData;
class OdBmTappedPipeDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTappedPipeData object.
 */
typedef OdSmartPtr<OdBmTappedPipeData> OdBmTappedPipeDataPtr;

/** \details
 A data type that represents an array of OdBmTappedPipeData objects.
 */
typedef OdArray<OdBmTappedPipeDataPtr> OdBmTappedPipeDataPtrArray;

//----------------------------------------------------------
//
// OdBmTappedPipeData
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmTappedPipeData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTappedPipeData);
public:
  OdBmConnectorIdPtr getBeginConnectorId() const;
  OdBmConnectorIdPtr getEndConnectorId() const;
  double getCoefficient() const;
  double getFixtureUnit() const;
  double getFlow() const;
  double getFriction() const;
  double getFrictionFactor() const;
  double getPressureDrop() const;
  double getReynoldsNumber() const;
  double getVelocity() const;
  double getVelocityPressure() const;
  OdInt32 getFlowState() const;
  //
  // Main functionality
  //


};


#endif // _BM_TAPPEDPIPEDATA_H_

