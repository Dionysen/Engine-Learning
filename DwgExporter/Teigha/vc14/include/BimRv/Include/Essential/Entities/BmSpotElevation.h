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

#ifndef _BM_SPOTELEVATION_H_
#define _BM_SPOTELEVATION_H_
#include "Essential/Entities/BmSpotElevationConstraint.h"

class OdBmSpotDimTypeState;
typedef OdSmartPtr<OdBmSpotDimTypeState> OdBmSpotDimTypeStatePtr;

class OdBmSpotElevation;
class OdBmSpotElevationImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSpotElevation object.
 */
typedef OdSmartPtr<OdBmSpotElevation> OdBmSpotElevationPtr;

/** \details
 A data type that represents an array of OdBmSpotElevation objects.
 */
typedef OdArray<OdBmSpotElevationPtr> OdBmSpotElevationPtrArray;

//----------------------------------------------------------
//
// OdBmSpotElevation
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmSpotElevation : public OdBmSpotElevationConstraint {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSpotElevation);
public:
  OdGeVector3d getBendOrPosPtOffset() const;
  OdGeVector2d getBendOffsetOriented() const;
  double getHorizLeaderLength() const;
  OdInt32 getDisplayElevation() const;
  bool getIsLeader() const;
  bool getIsBendLeader() const;
  OdBmSpotDimTypeStatePtr getTypeState() const;
  bool getLeaderLine() const;
  //
  // Main functionality
  //


};


#endif // _BM_SPOTELEVATION_H_

