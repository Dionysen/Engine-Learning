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

#ifndef _BM_BALUSTERINFO_H_
#define _BM_BALUSTERINFO_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmBalusterInfo;
class OdBmBalusterInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBalusterInfo object.
 */
typedef OdSmartPtr<OdBmBalusterInfo> OdBmBalusterInfoPtr;

/** \details
 A data type that represents an array of OdBmBalusterInfo objects.
 */
typedef OdArray<OdBmBalusterInfoPtr> OdBmBalusterInfoPtrArray;

//----------------------------------------------------------
//
// OdBmBalusterInfo
//
//----------------------------------------------------------

/** \details
    <group StairsRamp_Classes>
*/
class TB_STAIRSRAMP_EXPORT OdBmBalusterInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBalusterInfo);
public:
  OdString getBalusterName() const;
  void getSpaces(OdDoubleArray &) const;
  double getBotOffset() const;
  double getTopOffset() const;
  double getNormOffset() const;
  OdBmObjectId getBalusterTypeId() const;
  bool getIsPost() const;
  OdInt32 getBaseReferenceId() const;
  OdInt32 getTopReferenceId() const;
  //
  // Main functionality
  //


};


#endif // _BM_BALUSTERINFO_H_

