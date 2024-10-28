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

#ifndef _BM_SPATIALFIELDMANAGER_H_
#define _BM_SPATIALFIELDMANAGER_H_
#include "Database/BmElement.h"

class OdBmAnalysisResultSchema;
typedef OdSmartPtr<OdBmAnalysisResultSchema> OdBmAnalysisResultSchemaPtr;
class OdBmObjectId;

class OdBmSpatialFieldManager;
class OdBmSpatialFieldManagerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSpatialFieldManager object.
 */
typedef OdSmartPtr<OdBmSpatialFieldManager> OdBmSpatialFieldManagerPtr;

/** \details
 A data type that represents an array of OdBmSpatialFieldManager objects.
 */
typedef OdArray<OdBmSpatialFieldManagerPtr> OdBmSpatialFieldManagerPtrArray;

//----------------------------------------------------------
//
// OdBmSpatialFieldManager
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmSpatialFieldManager : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSpatialFieldManager);
public:
  OdBmObjectPtr getDocChangeObserver() const;
  void getMapIdxToSpatialFieldElement(OdBmMap<OdInt32, OdBmObjectId> &) const;
  void getMapDbElementToSpatialFieldElement(OdBmMap<OdBmObjectId, OdBmObjectId> &) const;
  void getMeasurementDescriptionsStringRegistryIndex(OdInt32Array &) const;
  void getMeasurementNamesStringRegistryIndex(OdInt32Array &) const;
  void getResultsRegistry(OdBmMap<OdInt32, OdBmAnalysisResultSchemaPtr> &) const;
  void getUnitsStringRegistryIndex(OdBmMap<OdInt32, double> &) const;
  OdBmObjectId getLegendId() const;
  OdBmObjectId getLegendTextTypeId() const;
  OdInt32 getMeasurement() const;
  OdInt32 getNextUniqueIdx() const;
  OdInt32 getNumberOfMeasurements() const;
  bool getLegendShowConfigurationName() const;
  bool getLegendShowDescription() const;
  bool getResultsVisibleInView() const;
  bool getUseRangeForAllMeasurements() const;
  bool getAllowInteractiveSettings() const;
  //
  // Main functionality
  //
};
#endif // _BM_SPATIALFIELDMANAGER_H_

