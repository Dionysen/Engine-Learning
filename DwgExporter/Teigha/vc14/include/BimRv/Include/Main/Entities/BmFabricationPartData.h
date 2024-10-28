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

#ifndef _BM_FABRICATIONPARTDATA_H_
#define _BM_FABRICATIONPARTDATA_H_
#include "Database/Entities/BmCell.h"

class OdBmObjectId;

class OdBmFabricationPartData;
class OdBmFabricationPartDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricationPartData object.
 */
typedef OdSmartPtr<OdBmFabricationPartData> OdBmFabricationPartDataPtr;

/** \details
 A data type that represents an array of OdBmFabricationPartData objects.
 */
typedef OdArray<OdBmFabricationPartDataPtr> OdBmFabricationPartDataPtrArray;

//----------------------------------------------------------
//
// OdBmFabricationPartData
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricationPartData : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricationPartData);
public:
  OdString getInsulationType() const;
  OdString getLinerType() const;
  OdString getProductCode() const;
  OdString getProductDescription() const;
  OdString getProductEntry() const;
  OdString getProductFinish() const;
  OdString getProductInstallType() const;
  OdString getProductMaterial() const;
  OdString getProductName() const;
  OdString getProductOEM() const;
  OdString getProductRange() const;
  OdString getProductSize() const;
  OdString getProductSource() const;
  OdString getProductSpecification() const;
  OdString getVendor() const;
  OdString getVendorCode() const;
  double getBottomOfPart() const;
  double getDoubleWallArea() const;
  double getDuctArea() const;
  double getInsulationArea() const;
  double getInsulationThickness() const;
  double getLinerArea() const;
  double getLinerThickness() const;
  double getTopOfPart() const;
  double getWeight() const;
  OdBmObjectId getInsulationLiningId() const;
  bool getHasDoubleWall() const;
  bool getHasInsulation() const;
  bool getHasLining() const;
  bool getIsOversized() const;
  OdInt32 getHorizontalJustification() const;
  OdInt32 getVerticalJustification() const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICATIONPARTDATA_H_

