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

#ifndef _BM_IMPORTINSTANCE_H_
#define _BM_IMPORTINSTANCE_H_
#include "Database/Entities/BmLinkInstance.h"

class OdBmObjectId;

class OdBmImportInstance;
class OdBmImportInstanceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmImportInstance object.
 */
typedef OdSmartPtr<OdBmImportInstance> OdBmImportInstancePtr;

/** \details
 A data type that represents an array of OdBmImportInstance objects.
 */
typedef OdArray<OdBmImportInstancePtr> OdBmImportInstancePtrArray;

//----------------------------------------------------------
//
// OdBmImportInstance
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmImportInstance : public OdBmLinkInstance {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmImportInstance);
public:
  double getOffset() const;
  OdResult setOffset(double);
  OdBmObjectId getGeoLocationId() const;
  OdResult setGeoLocationId(const OdBmObjectId&);
  OdBmObjectId getSketchPlaneId() const;
  OdResult setSketchPlaneId(const OdBmObjectId&);
  OdBmObjectId getSubcategoryId() const;
  OdResult setSubcategoryId(const OdBmObjectId&);
  OdInt32 getVisibility() const;
  OdResult setVisibility(OdInt32);
  OdInt32 getViewDirIdx() const;
  OdResult setViewDirIdx(OdInt32);
  bool getIsBackground() const;
  OdResult setIsBackground(bool);
  OdString getExtGeoLocationName() const;
  OdResult setExtGeoLocationName(const OdString&);
  OdBmObjectPtr getImportFileData() const;
  OdResult setImportFileData(const OdBmObjectPtr&);
  //
  // Main functionality
  //


};


#endif // _BM_IMPORTINSTANCE_H_

