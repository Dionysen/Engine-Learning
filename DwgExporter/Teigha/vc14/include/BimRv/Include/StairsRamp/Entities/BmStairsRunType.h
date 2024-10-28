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

#ifndef _BM_STAIRSRUNTYPE_H_
#define _BM_STAIRSRUNTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmObjectId;

class OdBmStairsRunType;
class OdBmStairsRunTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsRunType object.
 */
typedef OdSmartPtr<OdBmStairsRunType> OdBmStairsRunTypePtr;

/** \details
 A data type that represents an array of OdBmStairsRunType objects.
 */
typedef OdArray<OdBmStairsRunTypePtr> OdBmStairsRunTypePtrArray;

//----------------------------------------------------------
//
// OdBmStairsRunType
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsRunType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsRunType);
public:
  double getStructuralDepth() const;
  double getTotalDepth() const;
  double getBaseTreadThickness() const;
  double getBaseRiserThickness() const;
  double getNosingLength() const;
  OdBmObjectId getRunMaterialId() const;
  OdBmObjectId getNosingProfileTypeId() const;
  OdBmObjectId getTreadProfileTypeId() const;
  OdBmObjectId getRiserProfileTypeId() const;
  OdBmObjectId getTreadMaterialId() const;
  OdBmObjectId getRiserMaterialId() const;
  OdInt32 getUndersideSurfaceType() const;
  OdInt32 getRiserTreadConnection() const;
  OdInt32 getNosingPlacement() const;
  bool getHasMonolithicSupport() const;
  bool getHasTread() const;
  bool getHasRiser() const;
  bool getRiserIsSlanted() const;
  //
  // Main functionality
  //

  double getTreadThickness() const;
  double getRiserThickness() const;
};
#endif // _BM_STAIRSRUNTYPE_H_

