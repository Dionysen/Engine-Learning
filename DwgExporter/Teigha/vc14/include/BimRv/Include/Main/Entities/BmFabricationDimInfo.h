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

#ifndef _BM_FABRICATIONDIMINFO_H_
#define _BM_FABRICATIONDIMINFO_H_
#include "Base/BmObject.h"



class OdBmFabricationDimInfo;
class OdBmFabricationDimInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFabricationDimInfo object.
 */
typedef OdSmartPtr<OdBmFabricationDimInfo> OdBmFabricationDimInfoPtr;

/** \details
 A data type that represents an array of OdBmFabricationDimInfo objects.
 */
typedef OdArray<OdBmFabricationDimInfoPtr> OdBmFabricationDimInfoPtrArray;

//----------------------------------------------------------
//
// OdBmFabricationDimInfo
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFabricationDimInfo : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFabricationDimInfo);
public:
  OdString getPrefix() const;
  OdGePoint3d getPtFrom() const;
  OdGePoint3d getPtRefFrom() const;
  OdGePoint3d getPtRefTo() const;
  OdGePoint3d getPtTo() const;
  double getValue() const;
  OdInt32 getDimType() const;
  OdInt32 getUid() const;
  //
  // Main functionality
  //
};
#endif // _BM_FABRICATIONDIMINFO_H_

