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

#ifndef _BM_STAIRSLANDINGTYPE_H_
#define _BM_STAIRSLANDINGTYPE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmObjectId;

class OdBmStairsLandingType;
class OdBmStairsLandingTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmStairsLandingType object.
 */
typedef OdSmartPtr<OdBmStairsLandingType> OdBmStairsLandingTypePtr;

/** \details
 A data type that represents an array of OdBmStairsLandingType objects.
 */
typedef OdArray<OdBmStairsLandingTypePtr> OdBmStairsLandingTypePtrArray;

//----------------------------------------------------------
//
// OdBmStairsLandingType
//
//----------------------------------------------------------

/** \details
This class represents a stairs landing type.

    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmStairsLandingType : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmStairsLandingType);
public:
  /** \details
    Returns the thickness value read from a file.
  */
  double getBaseThickness() const;
  /** \details
    Returns the tread thickness value read from a file.
  */
  double getBaseTreadThickness() const;
  double getNosingLength() const;
  OdBmObjectId getLandingMaterialId() const;
  OdBmObjectId getNosingProfileTypeId() const;
  OdBmObjectId getTreadProfileTypeId() const;
  OdBmObjectId getTreadMaterialId() const;
  OdInt32 getNosingPlacement() const;
  bool getHasMonolithicSupport() const;
  bool getIsUseSameTriserAsRun() const;
  bool getHasTread() const;
  //
  // Main functionality
  //

  /** \details
    Retrieves the thickness value.
    
    \returns Thickness value.
  */
  double getThickness() const;
  /** \details
    Returns the tread thickness value.
    
    \returns Tread thickness value.
  */
  double getTreadThickness() const;
};
#endif // _BM_STAIRSLANDINGTYPE_H_

