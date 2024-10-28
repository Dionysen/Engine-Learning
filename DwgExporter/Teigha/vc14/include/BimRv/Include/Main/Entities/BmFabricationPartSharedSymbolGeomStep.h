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

#ifndef _BM_FABRICATIONPARTSHAREDSYMBOLGEOMSTEP_H_
#define _BM_FABRICATIONPARTSHAREDSYMBOLGEOMSTEP_H_
#include "Database/Entities/BmSharedSymbolBaseGeomStep.h"



class OdBmFabricationPartSharedSymbolGeomStep;
class OdBmFabricationPartSharedSymbolGeomStepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricationPartSharedSymbolGeomStep object.
 */
typedef OdSmartPtr<OdBmFabricationPartSharedSymbolGeomStep> OdBmFabricationPartSharedSymbolGeomStepPtr;

/** \details
 A data type that represents an array of OdBmFabricationPartSharedSymbolGeomStep objects.
 */
typedef OdArray<OdBmFabricationPartSharedSymbolGeomStepPtr> OdBmFabricationPartSharedSymbolGeomStepPtrArray;

//----------------------------------------------------------
//
// OdBmFabricationPartSharedSymbolGeomStep
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricationPartSharedSymbolGeomStep : public OdBmSharedSymbolBaseGeomStep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricationPartSharedSymbolGeomStep);
public:
  void getCenterLines(OdArray<OdBmObjectPtr> &) const;
  void getDetailSymbology(OdArray<OdBmObjectPtr> &) const;
  void getDimInfo(OdArray<OdBmObjectPtr> &) const;
  void getEndFaces(OdArray<OdBmObjectPtr> &) const;
  void getEndPoints(OdArray<OdBmObjectPtr> &) const;
  void getEnds(OdArray<OdBmObjectPtr> &) const;
  void getGeometry(OdArray<OdBmObjectPtr> &) const;
  void getReferencePoints(OdArray<OdBmObjectPtr> &) const;
  void getSelectLines(OdArray<OdBmObjectPtr> &) const;
  bool getHasShells() const;
  OdGeExtents3d getBodyBoundingBox() const;
  OdBmObjectPtr getSkinBoundingBox() const;
  void getSingleLines(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICATIONPARTSHAREDSYMBOLGEOMSTEP_H_

