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

#ifndef _BM_FABRICSHEETTYPE_H_
#define _BM_FABRICSHEETTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmObjectId;

class OdBmFabricSheetType;
class OdBmFabricSheetTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricSheetType object.
 */
typedef OdSmartPtr<OdBmFabricSheetType> OdBmFabricSheetTypePtr;

/** \details
 A data type that represents an array of OdBmFabricSheetType objects.
 */
typedef OdArray<OdBmFabricSheetTypePtr> OdBmFabricSheetTypePtrArray;

//----------------------------------------------------------
//
// OdBmFabricSheetType
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricSheetType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricSheetType);
public:
  double getMajorEndOverhang() const;
  double getMajorLapSpliceLength() const;
  double getMajorStartOverhang() const;
  double getMinorEndOverhang() const;
  double getMinorLapSpliceLength() const;
  double getMinorStartOverhang() const;
  double getOverallLength() const;
  double getOverallWidth() const;
  double getUserEnteredSheetMass() const;
  OdInt32 getMajorLayoutPattern() const;
  OdInt32 getMajorNumberOfWires() const;
  OdInt32 getMinorLayoutPattern() const;
  OdInt32 getMinorNumberOfWires() const;
  OdBmObjectId getSheetMaterial() const;
  bool getIsSheetMassCalculated() const;
  OdGeMatrix3d getInsertionOrigin() const;
  double getMajorSpacing() const;
  double getMinorSpacing() const;
  OdBmObjectId getMajorDirectionWireType() const;
  OdBmObjectId getMinorDirectionWireType() const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICSHEETTYPE_H_

