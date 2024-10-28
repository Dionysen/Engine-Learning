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

#ifndef _BM_PATHREINFORCEMENTASSEMBLYCOMPONENTDESCRIPTOR_H_
#define _BM_PATHREINFORCEMENTASSEMBLYCOMPONENTDESCRIPTOR_H_
#include "Database/Entities/BmAssemblyComponentDescriptor.h"

class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmPathReinforcementAssemblyComponentDescriptor;
class OdBmPathReinforcementAssemblyComponentDescriptorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmPathReinforcementAssemblyComponentDescriptor object.
 */
typedef OdSmartPtr<OdBmPathReinforcementAssemblyComponentDescriptor> OdBmPathReinforcementAssemblyComponentDescriptorPtr;

/** \details
 A data type that represents an array of OdBmPathReinforcementAssemblyComponentDescriptor objects.
 */
typedef OdArray<OdBmPathReinforcementAssemblyComponentDescriptorPtr> OdBmPathReinforcementAssemblyComponentDescriptorPtrArray;

//----------------------------------------------------------
//
// OdBmPathReinforcementAssemblyComponentDescriptor
//
//----------------------------------------------------------

/** \details
    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmPathReinforcementAssemblyComponentDescriptor : public OdBmAssemblyComponentDescriptor {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmPathReinforcementAssemblyComponentDescriptor);
public:
  void getMargins(OdDoubleArray &) const;
  void getSketchCurves(OdArray<OdBmObjectPtr> &) const;
  double getAltOffset() const;
  double getBarLengthItem(OdUInt32 idx) const;
  double getMarginBottom() const;
  double getMarginTop() const;
  double getSpacing() const;
  OdBmObjectId getBarTypeItem(OdUInt32 idx) const;
  OdInt32 getFace() const;
  OdInt32 getHookOrientationItem(OdUInt32 idx) const;
  OdBmObjectId getHookTypeItem(OdUInt32 idx) const;
  OdInt32 getNumberOfBars() const;
  OdInt32 getRuleType() const;
  bool getAlternating() const;
  //
  // Main functionality
  //


};


#endif // _BM_PATHREINFORCEMENTASSEMBLYCOMPONENTDESCRIPTOR_H_

