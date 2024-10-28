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

#ifndef _BM_MASSINSTUSERDATA_H_
#define _BM_MASSINSTUSERDATA_H_
#include "Family/Entities/BmFamInstUserData.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmMassInstUserData;
class OdBmMassInstUserDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMassInstUserData object.
 */
typedef OdSmartPtr<OdBmMassInstUserData> OdBmMassInstUserDataPtr;

/** \details
 A data type that represents an array of OdBmMassInstUserData objects.
 */
typedef OdArray<OdBmMassInstUserDataPtr> OdBmMassInstUserDataPtrArray;

//----------------------------------------------------------
//
// OdBmMassInstUserData
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmMassInstUserData : public OdBmFamInstUserData {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMassInstUserData);
public:
  OdBmObject* getMass() const;
  double getGrossFloorArea() const;
  double getVolume() const;
  double getSurfaceArea() const;
  void getLevelIdsForFaces(OdBmObjectIdArray &) const;
  void getLevelDataIdsForLevels(OdBmObjectIdArray &) const;
  void getInteriorFaceTags(OdInt32Array &) const;
  void getLevelKeys(OdInt32Array &) const;
  //
  // Main functionality
  //
};
#endif // _BM_MASSINSTUSERDATA_H_

