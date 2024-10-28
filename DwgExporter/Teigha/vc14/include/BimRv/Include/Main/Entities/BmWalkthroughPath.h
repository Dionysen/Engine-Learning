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

#ifndef _BM_WALKTHROUGHPATH_H_
#define _BM_WALKTHROUGHPATH_H_
#include "Base/BmObject.h"



class OdBmWalkthroughPath;
class OdBmWalkthroughPathImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWalkthroughPath object.
 */
typedef OdSmartPtr<OdBmWalkthroughPath> OdBmWalkthroughPathPtr;

/** \details
 A data type that represents an array of OdBmWalkthroughPath objects.
 */
typedef OdArray<OdBmWalkthroughPathPtr> OdBmWalkthroughPathPtrArray;

//----------------------------------------------------------
//
// OdBmWalkthroughPath
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmWalkthroughPath : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWalkthroughPath);
public:
  void getCKPoints(OdGePoint3dArray &) const;
  void getCKPDerivatives(OdGeVector3dArray &) const;
  void getCameraDirections(OdGeVector3dArray &) const;
  void getCameraDirirectionsDeriv(OdGeVector3dArray &) const;
  void getAngles(OdArray<OdDoubleArray > &) const;
  void getAngDevatives(OdArray<OdDoubleArray > &) const;
  void getTravelPerFrame(OdDoubleArray &) const;
  void getLengths(OdDoubleArray &) const;
  void getAAccelerators(OdDoubleArray &) const;
  void getAFramesDbl(OdDoubleArray &) const;
  double getDistance2Target() const;
  double getActiveFrame() const;
  OdInt32 getFrameShowIncrement() const;
  OdInt32 getNTotalFrames() const;
  OdInt32 getNFramesPerSecond() const;
  bool getUniformSpeed() const;
  bool getShowIntermediateFrames() const;
  //
  // Main functionality
  //
};
#endif // _BM_WALKTHROUGHPATH_H_

