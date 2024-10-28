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


#ifndef _BM_SSET_H_
#define _BM_SSET_H_

#include "SSet.h"
#include "BmSubentId.h"
#include "Base/BmObjectId.h"
#include "Gs/Gs.h"

class OdBmDatabase;
class OdBmSelectionSet;

typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class ODRX_ABSTRACT TB_DB_EXPORT OdBmSelectionFilter : public OdRxObject
{
protected:
  OdBmSelectionFilter();
public:
  ODRX_DECLARE_MEMBERS(OdBmSelectionFilter);

  virtual bool accept(const OdBmObjectId& entityId) const = 0;
};

typedef OdSmartPtr<OdBmSelectionFilter> OdBmSelectionFilterPtr;


class ODRX_ABSTRACT TB_DB_EXPORT OdBmSelectionSetIterator : public OdSelectionSetIterator
{
public:
  ODRX_DECLARE_MEMBERS(OdBmSelectionSetIterator);

  /** \details
      Returns the Object ID of the entity at the current position specified by
      this Iterator object.
  */
  virtual OdBmObjectId objectId() const = 0;

protected:
  OdBmSelectionSetIterator();
};

/** \details
    This template class is a specialization of the OdSmartPtr class for OdDgSelectionSetIterator object pointers.
*/
typedef OdSmartPtr<OdBmSelectionSetIterator>  OdBmSelectionSetIteratorPtr;

/** \details
    This template class is a specialization of the OdSmartPtr class for OdDgSelectionSet object pointers.
*/
typedef OdSmartPtr<OdBmSelectionSet>  OdBmSelectionSetPtr;

/** \details
    This class represents Selection Sets in an ODA based application.

    \remarks
    Only entities from an OdBmDatabase object's may be
    added to a Selection Set.
*/
class ODRX_ABSTRACT TB_DB_EXPORT OdBmSelectionSet : public OdSelectionSet
{
protected:
  OdBmSelectionSet();
public:
  ODRX_DECLARE_MEMBERS(OdBmSelectionSet);

  /** \details
    Creates a SelectionSet object for the specified database.
    \param pDb [in]  Pointer to the database object for which to create the SelectionSet object.
    \returns
    Returns a SmartPointer to the new SelectionSet object.
  */
  static OdBmSelectionSetPtr createObject(const OdBmDatabase *pDb);

  virtual const OdBmDatabase* database() const = 0;

  /** \details
      Returns an Iterator object that provides access to the entities in this Selection Set.
  */
  //virtual OdSelectionSetIteratorPtr newIterator() const = 0;

  /** \details
    Filter selection only.

    \param nPoints [in]
    \param wcsPts [in]
    \param mode [in]
    \param pFilter [in] object of type OdDgSelectionFilter or pointer to a OdResBuf chain defining the filter.
  */
  static OdBmSelectionSetPtr select(const OdBmObjectId& vpId,
                                    int nPoints,
                                    const OdGePoint3d* wcsPts,
                                    OdDbVisualSelection::Mode mode = OdDbVisualSelection::kCrossing,
                                    OdDbVisualSelection::SubentSelectionMode sm = OdDbVisualSelection::kDisableSubents,
                                    const OdRxObject* pFilter = 0);

  /** \details
    Appends the specified entity to this SelectionSet object.

    \param entityId [in]  Object ID of the OdDgEntity.
    \param method [in] Selection method to associate with object
  */
  //TD_USING(OdSelectionSet::append);
  virtual void append(const OdBmObjectId& entityId, OdDbSelectionMethod* pMethod = 0) = 0;

  /** \details
    Appends the specified entity to this SelectionSet object.

    \param entityIds [in]  Array of Object IDs of the OdDgEntity's.
    \param method [in] Selection method to associate with objects
  */
  virtual void append(const OdBmObjectIdArray& entityIds, OdDbSelectionMethod* pMethod = 0);

  /** \details
  Appends the specified subentity to this SelectionSet object.

  \param subent [in]  Subentity path to append.
  */
  virtual void append(const OdBmFullSubentPath& subent, OdDbSelectionMethod* pMethod = 0) = 0;

  /** \details
    Appends the specified entity to this SelectionSet object.

    \param pSSet [in]  Other selection set to copy entities from.
  */
  virtual void append(const OdSelectionSet* pSSet);

  /** \details
    Removes the specified entity from this SelectionSet object.

    \param entityId [in]  Object ID of the OdDgEntity.
  */
  virtual void remove(const OdBmObjectId& entityId) = 0;

  /** \details
    Removes the specified entity from this SelectionSet object.

    \param entityIds [in]  Array Object ID of the OdDgEntity.
  */
  virtual void remove(const OdBmObjectIdArray& entityIds);

  /** \details
  Removes the specified subentity from this SelectionSet object.

  \param subent [in]  Subentity path  to remove.
  */
  virtual void remove(const OdBmFullSubentPath& subent) = 0;

  /** \details
  Removes the specified entity from this SelectionSet object.

  \param pSSet [in]  Object ID of the OdDgEntity.
  */
  virtual void remove(const OdSelectionSet* pSSet);

  /** \details
  Returns true if and only if the specified subentity is a member
  of this SelectionSet object.
  \param entityId [in]  Subentity path.
  */
  //virtual bool isMember(const OdBmFullSubentPath& subent) const = 0;

  //TD_USING(OdSelectionSet::method);
  //virtual OdDbSelectionMethodPtr method(const OdDgElementId& entityId) const = 0;

  /** \details
  Returns the given subentity path inside the entity with the given id.
  (analogous to acedSSSubentName)
  \param entityId [in]  entity id for the parent of the subentity
  \param i [in]  index of the subentity.
  \param path [out]  Path to the subentity.

  \returns
  Returns true if and only if "i" is valid index in the subentities array.
  */
  //virtual bool getSubentity(const OdDgElementId& entityId, OdUInt32 i,
  //                          OdDgFullSubentPath& path) const;

  /** \details
    Returns the selection method for the given subentity
  */
  //virtual OdDbSelectionMethodPtr method(const OdDgFullSubentPath& subent) const;
};

#endif //_BM_SSET_H_
