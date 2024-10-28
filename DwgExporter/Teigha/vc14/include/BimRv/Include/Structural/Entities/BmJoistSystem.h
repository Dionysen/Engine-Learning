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

#ifndef _BM_JOISTSYSTEM_H_
#define _BM_JOISTSYSTEM_H_
#include "Structural/Entities/BmJoistSystemBase.h"

class OdBmHeldBeam;
typedef OdSmartPtr<OdBmHeldBeam> OdBmHeldBeamPtr;
class OdBmObjectId;

class OdBmJoistSystem;
class OdBmJoistSystemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmJoistSystem object.
 */
typedef OdSmartPtr<OdBmJoistSystem> OdBmJoistSystemPtr;

/** \details
 A data type that represents an array of OdBmJoistSystem objects.
 */
typedef OdArray<OdBmJoistSystemPtr> OdBmJoistSystemPtrArray;

//----------------------------------------------------------
//
// OdBmJoistSystem
//
//----------------------------------------------------------

/** \details
    <group Structural_Classes>
*/
class TB_STRUCTURAL_EXPORT OdBmJoistSystem : public OdBmJoistSystemBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmJoistSystem);
public:
  double getSpacing() const;
  double getMaximumSpacing() const;
  double getClearSpacing() const;
  double getElevation() const;
  OdInt32 getLayoutRule() const;
  OdInt32 getNumberOfLines() const;
  OdInt32 getJustification() const;
  OdInt32 getVersion() const;
  OdInt32 getFlipShiftDir() const;
  OdBmObjectId getNewBeamType() const;
  OdBmObjectId getSketchId() const;
  OdBmObjectId getSymbolId() const;
  OdBmObjectId getViewId() const;
  bool get3D() const;
  void getHeldBeams(OdArray<OdBmHeldBeamPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_JOISTSYSTEM_H_

