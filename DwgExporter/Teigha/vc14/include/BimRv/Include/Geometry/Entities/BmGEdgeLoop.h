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

#ifndef _BM_GEDGELOOP_H_
#define _BM_GEDGELOOP_H_
#include "Geometry/Entities/BmGEdgeBase.h"

class OdBmFace;
class OdBmGEdgeLoop;
typedef OdSmartPtr<OdBmGEdgeLoop> OdBmGEdgeLoopPtr;

class OdBmGEdgeLoop;
class OdBmGEdgeLoopImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGEdgeLoop object.
 */
typedef OdSmartPtr<OdBmGEdgeLoop> OdBmGEdgeLoopPtr;

/** \details
 A data type that represents an array of OdBmGEdgeLoop objects.
 */
typedef OdArray<OdBmGEdgeLoopPtr> OdBmGEdgeLoopPtrArray;

//----------------------------------------------------------
//
// OdBmGEdgeLoop
//
//----------------------------------------------------------

/** \details
    This class stores data of a loop of edges.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGEdgeLoop : public OdBmGEdgeBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGEdgeLoop);
public:
  /** \details
    Returns the pointer to the next loop of edges as a pointer to an OdBmGEdgeLoop object
    or NULL if it doesn't exist.
  */
  OdBmGEdgeLoopPtr getNextLoop() const;
  /** \details
    Returns the face that is associated with this loop of edges as pointer to an OdBmFace object.
  */
  OdBmFace* getFace() const;
  /** \details
    Returns the next edge in the loop of edges as a pointer to an OdBmGEdgeBase object
    or NULL if it doesn't exist.
  */
  OdBmGEdgeBase* getNext() const;
  /** \details
    Returns the previous edge in the loop of edges as a pointer to the OdBmGEdgeBase object
    or NULL if it doesn't exist.
  */
  OdBmGEdgeBase* getPrev() const;
  /** \details
    Returns the envelope of the loop of edges as an object of the OdGeExtents2d class.
  */
  OdGeExtents2d getEnvelope() const;
  /** \details
    Returns true if the loop is open.
  */
  bool getOpen() const;
  /** \details
    Sets or unsets the 'open' status for the loop of edges.
  */
  OdResult setOpen(bool);
  //
  // Main functionality
  //


};


#endif // _BM_GEDGELOOP_H_

