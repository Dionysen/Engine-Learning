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

#ifndef _BM_COVERSETTINGSCELL_H_
#define _BM_COVERSETTINGSCELL_H_
#include "Database/Entities/BmCell.h"

class OdBmCoverFaceStableRef;
typedef OdSmartPtr<OdBmCoverFaceStableRef> OdBmCoverFaceStableRefPtr;
class OdBmHostFaceInfo;
typedef OdSmartPtr<OdBmHostFaceInfo> OdBmHostFaceInfoPtr;

class OdBmCoverSettingsCell;
class OdBmCoverSettingsCellImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCoverSettingsCell object.
 */
typedef OdSmartPtr<OdBmCoverSettingsCell> OdBmCoverSettingsCellPtr;

/** \details
 A data type that represents an array of OdBmCoverSettingsCell objects.
 */
typedef OdArray<OdBmCoverSettingsCellPtr> OdBmCoverSettingsCellPtrArray;

//----------------------------------------------------------
//
// OdBmCoverSettingsCell
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCoverSettingsCell : public OdBmCell {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCoverSettingsCell);
public:
  void getConcealedFaces(OdInt32Array &) const;
  OdBmObjectPtr getParams() const;
  bool getActive() const;
  bool getUseFirstFamSymFace() const;
  void getStableFaceRefsMap(OdBmMap<OdBmCoverFaceStableRefPtr, OdBmHostFaceInfoPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_COVERSETTINGSCELL_H_

