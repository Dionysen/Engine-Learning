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

#ifndef _BM_FACESPLITTER_H_
#define _BM_FACESPLITTER_H_
#include "Database/BmElement.h"

class OdBmPick;
typedef OdSmartPtr<OdBmPick> OdBmPickPtr;
class OdBmObjectId;

class OdBmFaceSplitter;
class OdBmFaceSplitterImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFaceSplitter object.
 */
typedef OdSmartPtr<OdBmFaceSplitter> OdBmFaceSplitterPtr;

/** \details
 A data type that represents an array of OdBmFaceSplitter objects.
 */
typedef OdArray<OdBmFaceSplitterPtr> OdBmFaceSplitterPtrArray;

//----------------------------------------------------------
//
// OdBmFaceSplitter
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFaceSplitter : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFaceSplitter);
public:
  OdBmObjectId getSketchId() const;
  OdBmObjectId getOrientCurveId() const;
  OdBmObjectId getEdgeGStyleId() const;
  bool getSingleFace() const;
  bool getMirrored() const;
  bool getOrientCurveDirection() const;
  void getPicks(OdArray<OdBmPickPtr> &) const;
  //
  // Main functionality
  //


};


#endif // _BM_FACESPLITTER_H_

