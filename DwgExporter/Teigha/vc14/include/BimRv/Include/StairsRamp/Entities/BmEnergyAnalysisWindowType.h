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

#ifndef _BM_ENERGYANALYSISWINDOWTYPE_H_
#define _BM_ENERGYANALYSISWINDOWTYPE_H_
#include "Base/BmObject.h"



class OdBmEnergyAnalysisWindowType;
class OdBmEnergyAnalysisWindowTypeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmEnergyAnalysisWindowType object.
 */
typedef OdSmartPtr<OdBmEnergyAnalysisWindowType> OdBmEnergyAnalysisWindowTypePtr;

/** \details
 A data type that represents an array of OdBmEnergyAnalysisWindowType objects.
 */
typedef OdArray<OdBmEnergyAnalysisWindowTypePtr> OdBmEnergyAnalysisWindowTypePtrArray;

//----------------------------------------------------------
//
// OdBmEnergyAnalysisWindowType
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmEnergyAnalysisWindowType : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmEnergyAnalysisWindowType);
public:
  OdString getDescription() const;
  void getHeatGainValues(OdArray<OdBmObjectPtr> &) const;
  OdString getName() const;
  void getTransmittanceValues(OdArray<OdBmObjectPtr> &) const;
  double getUValue() const;
  OdInt32 getConceptualId() const;
  OdInt32 getUValueUnits() const;
  bool getHasUValue() const;
  bool getIsConceptualWindowType() const;
  double getSHGCValue() const;
  double getVLTValue() const;
  bool getHasSHGCValue() const;
  bool getHasVLTValue() const;
  //
  // Main functionality
  //
};
#endif // _BM_ENERGYANALYSISWINDOWTYPE_H_

