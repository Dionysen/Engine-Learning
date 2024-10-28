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

#ifndef _BM_FAMINSTASSEMBLYCOMPONENTDESCRIPTOR_H_
#define _BM_FAMINSTASSEMBLYCOMPONENTDESCRIPTOR_H_
#include "Database/Entities/BmAssemblyComponentDescriptor.h"

class OdBmDatabase;
class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmObjectId;

class OdBmFamInstAssemblyComponentDescriptor;
class OdBmFamInstAssemblyComponentDescriptorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamInstAssemblyComponentDescriptor object.
 */
typedef OdSmartPtr<OdBmFamInstAssemblyComponentDescriptor> OdBmFamInstAssemblyComponentDescriptorPtr;

/** \details
 A data type that represents an array of OdBmFamInstAssemblyComponentDescriptor objects.
 */
typedef OdArray<OdBmFamInstAssemblyComponentDescriptorPtr> OdBmFamInstAssemblyComponentDescriptorPtrArray;

//----------------------------------------------------------
//
// OdBmFamInstAssemblyComponentDescriptor
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmFamInstAssemblyComponentDescriptor : public OdBmAssemblyComponentDescriptor {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamInstAssemblyComponentDescriptor);
public:
  OdBmDatabase* getDatabase() const;
  void getFamRefs(OdArray<OdBmObjectPtr> &) const;
  void getGeometryDatas(OdArray<OdBmObjectPtr> &) const;
  OdBmFamilyParamsPtr getParams() const;
  OdGeMatrix3d getInstTrf() const;
  OdBmObjectId getCategoryId() const;
  OdBmObjectId getFamId() const;
  OdBmObjectId getMasterTypeId() const;
  OdBmObjectId getSymId() const;
  bool getMatchInstTrfs() const;
  bool getMirrored() const;
  bool getNeedsGeomComparison() const;
  bool getUseSymbolGeometry() const;
  //
  // Main functionality
  //


};


#endif // _BM_FAMINSTASSEMBLYCOMPONENTDESCRIPTOR_H_

