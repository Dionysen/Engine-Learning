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

#ifndef _BM_DBVIEWENERGYANALYSIS_H_
#define _BM_DBVIEWENERGYANALYSIS_H_
#include "Database/Entities/BmDBView.h"



class OdBmDbViewEnergyAnalysis;
class OdBmDbViewEnergyAnalysisImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDbViewEnergyAnalysis object.
 */
typedef OdSmartPtr<OdBmDbViewEnergyAnalysis> OdBmDbViewEnergyAnalysisPtr;

/** \details
 A data type that represents an array of OdBmDbViewEnergyAnalysis objects.
 */
typedef OdArray<OdBmDbViewEnergyAnalysisPtr> OdBmDbViewEnergyAnalysisPtrArray;

//----------------------------------------------------------
//
// OdBmDbViewEnergyAnalysis
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDbViewEnergyAnalysis : public OdBmDBView {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDbViewEnergyAnalysis);
public:
  OdString getSReportURL() const;
  OdString getSHTML() const;
  OdInt32 getIUserID() const;
  OdInt32 getIProjectID() const;
  OdInt32 getIRunID() const;
  OdInt32 getStatus() const;
  OdString getSStartURL() const;
  OdString getSStatusURL() const;
  OdString getSResultURL() const;
  OdString getSUsername() const;
  OdString getSProjectTitle() const;
  OdString getSBuildingType() const;
  OdString getSPostalCode() const;
  OdString getSRunDate() const;
  OdString getSRunTitle() const;
  //
  // Main functionality
  //

public:
};


#endif // _BM_DBVIEWENERGYANALYSIS_H_

