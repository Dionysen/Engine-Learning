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

#ifndef _BM_REBARCONTAINER_H_
#define _BM_REBARCONTAINER_H_
#include "Database/BmElement.h"

class OdBmRebarContainerParameterManager;
typedef OdSmartPtr<OdBmRebarContainerParameterManager> OdBmRebarContainerParameterManagerPtr;
class OdBmRebarContainerItem;
typedef OdSmartPtr<OdBmRebarContainerItem> OdBmRebarContainerItemPtr;
class OdBmObjectId;

class OdBmRebarContainer;
class OdBmRebarContainerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarContainer object.
 */
typedef OdSmartPtr<OdBmRebarContainer> OdBmRebarContainerPtr;

/** \details
 A data type that represents an array of OdBmRebarContainer objects.
 */
typedef OdArray<OdBmRebarContainerPtr> OdBmRebarContainerPtrArray;

//----------------------------------------------------------
//
// OdBmRebarContainer
//
//----------------------------------------------------------

/** \details
This class represents a rebar container.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarContainer : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarContainer);
public:
  /** \details
    Returns parameters.
  */
  OdBmRebarContainerParameterManagerPtr getParams() const;
  /** \details
    Returns the rebar container type id.
  */
  OdBmObjectId getRebarContainerTypeId() const;
  /** \details
    Checks if the items can be presented as subelements.
  */
  bool getPresentItemsAsSubelements() const;
  /** \details
    Returns items as an array.
    \param array [out] An array to store items.
  */
  void getItems(OdArray<OdBmRebarContainerItemPtr> &) const;
  /** \details
    Returns a sched mark.
  */
  OdString getSchedMark() const;
  /** \details
    Returns a subelement map.
    \param map [out] A map to store subelements.
  */
  void getSubElementsMap(OdBmMap<OdInt32, OdInt32> &) const;
  /** \details
    Returns the host id.
  */
  OdBmObjectId getHostId() const;
  /** \details
    Returns the last element's index.
  */
  OdInt32 getLastSubElementIdx() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBARCONTAINER_H_

