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

#ifndef _BM_REBARASSEMBLYCOMPONENTDESCRIPTOR_H_
#define _BM_REBARASSEMBLYCOMPONENTDESCRIPTOR_H_
#include "Database/Entities/BmAssemblyComponentDescriptor.h"

class OdBmDatabase;
class OdBmGArc;
typedef OdSmartPtr<OdBmGArc> OdBmGArcPtr;
class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmRebarAssemblyComponentDescriptor;
class OdBmRebarAssemblyComponentDescriptorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarAssemblyComponentDescriptor object.
 */
typedef OdSmartPtr<OdBmRebarAssemblyComponentDescriptor> OdBmRebarAssemblyComponentDescriptorPtr;

/** \details
 A data type that represents an array of OdBmRebarAssemblyComponentDescriptor objects.
 */
typedef OdArray<OdBmRebarAssemblyComponentDescriptorPtr> OdBmRebarAssemblyComponentDescriptorPtrArray;

//----------------------------------------------------------
//
// OdBmRebarAssemblyComponentDescriptor
//
//----------------------------------------------------------

/** \details
Descriptor of Component RebarAssembly.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarAssemblyComponentDescriptor : public OdBmAssemblyComponentDescriptor {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarAssemblyComponentDescriptor);
public:
  /** \details
    Returns the arc.
  */
  OdBmGArcPtr getArc() const;
  /** \details
    Returns the norm vector.
  */
  OdGeVector3d getNorm() const;
  /** \details
    Returns the signed length (of what?).
  */
  double getSignedLength() const;
  /** \details
    Returns the id of a bar type.
  */
  OdBmObjectId getBarTypeId() const;
  /** \details
    Returns the hook id 0.
  */
  OdBmObjectId getHookId0() const;
  /** \details
    Returns the hook id 1.
  */
  OdBmObjectId getHookId1() const;
  /** \details
    Returns the quantity of rebars.
  */
  OdInt32 getQuantity() const;
  /** \details
    Checks if the rebar is represented by segments.
  */
  bool getIsSegments() const;
  /** \details
    Checks if the shape is reversible.
  */
  bool getIsShapeReversible() const;
  /** \details
    Returns the parameter array.
    \param array [out] An array for the parameters.
  */
  void getArrParam(OdArray<OdBmFamilyParamsPtr> &) const;
  /** \details
    Returns the bar vertices.
    \param array [out] An array for the vertices.
  */
  void getBarsVertices(OdArray<OdBmObjectPtr> &) const;
  /** \details
    Returns the database.
  */
  OdBmDatabase* getDatabase() const;
  /** \details
    Checks if the rebar is free form.
  */
  bool getIsFreeForm() const;
  /** \details
    Returns the shape ids.
    \param array [out] An array for the shape ids.
  */
  void getShapeIds(OdBmObjectIdArray &) const;
  double getHookRotationAtEnd() const;
  double getHookRotationAtStart() const;
  //
  // Main functionality
  //


};


#endif // _BM_REBARASSEMBLYCOMPONENTDESCRIPTOR_H_

