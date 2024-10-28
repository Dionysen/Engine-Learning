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

#ifndef _BM_GEOSITE_H_
#define _BM_GEOSITE_H_
#include "Database/Entities/BmSymbol.h"

class OdBmObjectId;

class OdBmGeoSite;
class OdBmGeoSiteImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeoSite object.
 */
typedef OdSmartPtr<OdBmGeoSite> OdBmGeoSitePtr;

/** \details
 A data type that represents an array of OdBmGeoSite objects.
 */
typedef OdArray<OdBmGeoSitePtr> OdBmGeoSitePtrArray;

//----------------------------------------------------------
//
// OdBmGeoSite
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmGeoSite : public OdBmSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeoSite);
public:
  void getSummerDryBulbTemperature(OdDoubleArray &) const;
  void getSummerWetBulbTemperature(OdDoubleArray &) const;
  void getMeanDailyTemperature(OdDoubleArray &) const;
  OdString getPlaceName() const;
  OdString getWeatherStationName() const;
  OdString getZipCodeOrPostalCode() const;
  double getLatitude() const;
  double getLongitude() const;
  double getTimeZone() const;
  double getElevation() const;
  double getWinterDryBulbTemperature() const;
  double getClearnessNumber() const;
  OdGUID getSharedCoordGUID() const;
  OdBmObjectId getOwnerSymbolId() const;
  bool getUseDST() const;
  bool getUserDefinedWeatherData() const;
  bool getFromClimateServer() const;
  bool getIsLocationDefinedByDefaultCityList() const;
  OdInt32 getGeodeticCoordinatesBasePointType() const;
  OdString getGeoCoordinateSystem() const;
  //
  // Main functionality
  //


};


#endif // _BM_GEOSITE_H_

