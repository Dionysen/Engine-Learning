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

#ifndef _BM_FAMINSTCURVEDRIVER_H_
#define _BM_FAMINSTCURVEDRIVER_H_
#include "Database/Entities/BmStructCurveDriverBase.h"

class OdBmFamInstStructuralAttachment;
typedef OdSmartPtr<OdBmFamInstStructuralAttachment> OdBmFamInstStructuralAttachmentPtr;
class OdBmPick;
typedef OdSmartPtr<OdBmPick> OdBmPickPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmFamInstCurveDriver;
class OdBmFamInstCurveDriverImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamInstCurveDriver object.
 */
typedef OdSmartPtr<OdBmFamInstCurveDriver> OdBmFamInstCurveDriverPtr;

/** \details
 A data type that represents an array of OdBmFamInstCurveDriver objects.
 */
typedef OdArray<OdBmFamInstCurveDriverPtr> OdBmFamInstCurveDriverPtrArray;

//----------------------------------------------------------
//
// OdBmFamInstCurveDriver
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamInstCurveDriver : public OdBmStructCurveDriverBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamInstCurveDriver);
public:
  OdBmFamInstStructuralAttachmentPtr getAttachmentData() const;
  double getSetbacksItem(OdUInt32 idx) const;
  double getStickSetbacksItem(OdUInt32 idx) const;
  double getInsertionZ() const;
  double getInsertionS() const;
  double getInsertElevAdjZ() const;
  double getRefLevelElev() const;
  OdInt32 getSupportItem(OdUInt32 idx) const;
  OdBmObjectId getStructRefsItem(OdUInt32 idx) const;
  OdBmObjectId getRefLevelId() const;
  OdBmObjectId getEndRefTypeIdItem(OdUInt32 idx) const;
  OdInt32 getVersion() const;
  OdInt32 getVJustification() const;
  OdInt32 getHJustification() const;
  OdInt32 getOrientation() const;
  bool getAddCutbackItem(OdUInt32 idx) const;
  bool getNoJoinAtEndItem(OdUInt32 idx) const;
  OdBmPickPtr getEndRefPicksItem(OdUInt32 idx) const;
  //
  // Main functionality
  //


};


#endif // _BM_FAMINSTCURVEDRIVER_H_

