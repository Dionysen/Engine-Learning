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

#ifndef _BM_SYSTEMNAVIGATORSTATEDATA_H_
#define _BM_SYSTEMNAVIGATORSTATEDATA_H_
#include "Base/BmObject.h"

class OdBmSystemNavigatorColumnSettingsWrapper;
typedef OdSmartPtr<OdBmSystemNavigatorColumnSettingsWrapper> OdBmSystemNavigatorColumnSettingsWrapperPtr;

class OdBmSystemNavigatorStateData;
class OdBmSystemNavigatorStateDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSystemNavigatorStateData object.
 */
typedef OdSmartPtr<OdBmSystemNavigatorStateData> OdBmSystemNavigatorStateDataPtr;

/** \details
 A data type that represents an array of OdBmSystemNavigatorStateData objects.
 */
typedef OdArray<OdBmSystemNavigatorStateDataPtr> OdBmSystemNavigatorStateDataPtrArray;

//----------------------------------------------------------
//
// OdBmSystemNavigatorStateData
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmSystemNavigatorStateData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSystemNavigatorStateData);
public:
  void getMapColumnSettings(OdBmMap<OdInt32, OdBmSystemNavigatorColumnSettingsWrapperPtr> &) const;
  void getRgColWidths(OdInt32Array &) const;
  void getRgZoneColWidths(OdInt32Array &) const;
  OdInt32 getDomainFilter() const;
  void getRgASpaceColWidths(OdInt32Array &) const;
  OdInt32 getGridType() const;
  //
  // Main functionality
  //

  void addColumnSettings(const OdInt32 aKey, const OdString& aCaption, const OdBmObjectId& aParam, const OdInt32 aColType, const bool aVisible);
};


#endif // _BM_SYSTEMNAVIGATORSTATEDATA_H_

