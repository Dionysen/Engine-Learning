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

#ifndef _BM_GGROUP_H_
#define _BM_GGROUP_H_
#include "Geometry/Entities/BmGNode.h"
// BEGIN: Includes
#include "Common/BmIterator.h"

typedef OdBmIteratorPtr<OdBmGNodePtr> OdBmGNodeIteratorPtr;
// END: Includes



class OdBmGGroup;
class OdBmGGroupImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGGroup object.
 */
typedef OdSmartPtr<OdBmGGroup> OdBmGGroupPtr;

/** \details
 A data type that represents an array of OdBmGGroup objects.
 */
typedef OdArray<OdBmGGroupPtr> OdBmGGroupPtrArray;

//----------------------------------------------------------
//
// OdBmGGroup
//
//----------------------------------------------------------

/** \details
    This is the base class for storing groups of GNodes.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGGroup : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGGroup);
public:
  /** \details
    Returns the array of sub-nodes as an array of OdBmGNode objects.

    \param OdArray<OdBmGNodePtr> [out] Output array of sub-nodes.
  */
  void getAllSubNodes(OdArray<OdBmGNodePtr> &) const;
  /** \details
    Sets an array of sub-nodes for this object.

    \param OdArray<OdBmGNodePtr> [in] Input array of sub-nodes.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setAllSubNodes(const OdArray<OdBmGNodePtr>&);
  //
  // Main functionality
  //

  /** \details
    Returns new iterator to iterate through GNodes array of current GGroup object.

    \returns Returns OdBmGNodeIteratorPtr.
  */
  OdBmGNodeIteratorPtr newGNodeIterator() const;

  /** \details
    Adds a GNode to the array of sub-nodes.

    \param OdBmGNodePtr [in] Input GNode.
  */
  void appendGNode(const OdBmGNodePtr& pGNode);
};


#endif // _BM_GGROUP_H_

