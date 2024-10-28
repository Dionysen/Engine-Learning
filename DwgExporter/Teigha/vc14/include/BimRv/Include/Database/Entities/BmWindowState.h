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

#ifndef _BM_WINDOWSTATE_H_
#define _BM_WINDOWSTATE_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmWindowState;
class OdBmWindowStateImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmWindowState object.
 */
typedef OdSmartPtr<OdBmWindowState> OdBmWindowStatePtr;

/** \details
 A data type that represents an array of OdBmWindowState objects.
 */
typedef OdArray<OdBmWindowStatePtr> OdBmWindowStatePtrArray;

//----------------------------------------------------------
//
// OdBmWindowState
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmWindowState : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmWindowState);
public:
  OdGePoint3d getProjLeftBottom() const;
  OdResult setProjLeftBottom(const OdGePoint3d&);
  OdGePoint3d getProjRightTop() const;
  OdResult setProjRightTop(const OdGePoint3d&);
  OdBmObjectId getDBDrawingId() const;
  OdInt32 getShowState() const;
  OdResult setShowState(OdInt32);
  OdInt32 getScreenWidth() const;
  OdResult setScreenWidth(OdInt32);
  OdInt32 getScreenHeight() const;
  OdResult setScreenHeight(OdInt32);
  OdInt32 getScreenLeft() const;
  OdResult setScreenLeft(OdInt32);
  OdInt32 getScreenRight() const;
  OdResult setScreenRight(OdInt32);
  OdInt32 getScreenTop() const;
  OdResult setScreenTop(OdInt32);
  OdInt32 getScreenBottom() const;
  OdResult setScreenBottom(OdInt32);
  //
  // Main functionality
  //


};


#endif // _BM_WINDOWSTATE_H_

