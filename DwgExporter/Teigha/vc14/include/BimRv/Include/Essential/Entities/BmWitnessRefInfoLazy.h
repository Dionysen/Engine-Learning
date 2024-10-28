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

#ifndef _BM_WITNESSREFINFOLAZY_H_
#define _BM_WITNESSREFINFOLAZY_H_
#include "Essential/Entities/BmWitnessRefInfoBase.h"



class OdBmWitnessRefInfoLazy;
class OdBmWitnessRefInfoLazyImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWitnessRefInfoLazy object.
 */
typedef OdSmartPtr<OdBmWitnessRefInfoLazy> OdBmWitnessRefInfoLazyPtr;

/** \details
 A data type that represents an array of OdBmWitnessRefInfoLazy objects.
 */
typedef OdArray<OdBmWitnessRefInfoLazyPtr> OdBmWitnessRefInfoLazyPtrArray;

//----------------------------------------------------------
//
// OdBmWitnessRefInfoLazy
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmWitnessRefInfoLazy : public OdBmWitnessRefInfoBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWitnessRefInfoLazy);
public:
  OdBmObjectPtr getWitnessRef() const;
  double getGapToElt() const;
  double getGapToDim() const;
  bool getUseDistToDimLn() const;
  bool getModified() const;
  OdUInt8 getConstrFlags() const;
  double getRefLength() const;
  OdGePoint3d getRefToDimOffset() const;
  OdGePoint3d getRefBendOffset() const;
  OdGePoint3d getRefDir() const;
  OdGePoint3d getRefBendDir() const;
  OdInt32 getOldRefSegEndIdx() const;
  //
  // Main functionality
  //
};
#endif // _BM_WITNESSREFINFOLAZY_H_

