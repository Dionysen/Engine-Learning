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

#ifndef _BM_ELEMENTPARENTS_H_
#define _BM_ELEMENTPARENTS_H_
#include "Base/BmObject.h"

class OdTfClass;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmElementParents;
class OdBmElementParentsImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmElementParents object.
 */
typedef OdSmartPtr<OdBmElementParents> OdBmElementParentsPtr;

/** \details
 A data type that represents an array of OdBmElementParents objects.
 */
typedef OdArray<OdBmElementParentsPtr> OdBmElementParentsPtrArray;

//----------------------------------------------------------
//
// OdBmElementParents
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmElementParents : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmElementParents);
public:
  void getDeletion(OdBmObjectIdArray &) const;
  OdResult setDeletion(const OdBmObjectIdArray&);
  void getRegenOnly(OdBmObjectIdArray &) const;
  OdResult setRegenOnly(const OdBmObjectIdArray&);
  void getRegenWildcards(OdArray<OdTfClass*, OdMemoryAllocator<OdTfClass*> > &) const;
  OdResult setRegenWildcards(const OdArray<OdTfClass*, OdMemoryAllocator<OdTfClass*> >&);
  void getNonDetermRegenChildren(OdBmObjectIdArray &) const;
  OdResult setNonDetermRegenChildren(const OdBmObjectIdArray&);
  void getDependencyParents(OdBmObjectIdArray &) const;
  OdResult setDependencyParents(const OdBmObjectIdArray&);
  void getAppearanceParents(OdBmObjectIdArray &) const;
  OdResult setAppearanceParents(const OdBmObjectIdArray&);
  void getDeferredParents(OdBmObjectIdArray &) const;
  OdResult setDeferredParents(const OdBmObjectIdArray&);
  void getDeferredPropagationParents(OdBmObjectIdArray &) const;
  OdResult setDeferredPropagationParents(const OdBmObjectIdArray&);
  bool getHasNonDetermRegenChildren() const;
  OdResult setHasNonDetermRegenChildren(bool);
  //
  // Main functionality
  //

  void addToDeletion(const OdBmObjectId&);
  void addToRegenOnly(const OdBmObjectId&);
  void addToAppearanceParents(const OdBmObjectId&);
  void addToDeferredParents(const OdBmObjectId&);
};


#endif // _BM_ELEMENTPARENTS_H_

