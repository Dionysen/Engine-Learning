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

#ifndef _BM_DBDRAWINGINFO_H_
#define _BM_DBDRAWINGINFO_H_
#include "Database/Managers/BmAppInfo.h"
// BEGIN: Includes
// END: Includes



class OdBmDBDrawingInfo;
class OdBmDBDrawingInfoImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDBDrawingInfo object.
 */
typedef OdSmartPtr<OdBmDBDrawingInfo> OdBmDBDrawingInfoPtr;

/** \details
 A data type that represents an array of OdBmDBDrawingInfo objects.
 */
typedef OdArray<OdBmDBDrawingInfoPtr> OdBmDBDrawingInfoPtrArray;

//----------------------------------------------------------
//
// OdBmDBDrawingInfo
//
//----------------------------------------------------------

/** \details
    This class is the manager for all OdBmDBDrawing elements.

    <group Database_Classes>

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmDBDrawingInfo : public OdBmAppInfo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDBDrawingInfo);
public:
  /** \details
    Returns array of opened OdBmDBDrawing elements.

    \param OdArray<OdBmObjectPtr> [out] Output array of OdBmDBDrawing elements.
  */
  void getOpenWindowStates(OdArray<OdBmObjectPtr> &) const;
  /** \details
    Returns horizontal resolution of the screen.
  */
  OdInt32 getHorizontalRes() const;
  /** \details
    Returns vertical resolution of the screen.
  */
  OdInt32 getVerticalRes() const;
  //
  // Main functionality
  //

public:
  /** \details
        Returns an Iterator object that can be used to traverse all OdBmDBDrawing elements.

      \param atBeginning [in] Input flag that determines where to start: at the beginning (true) or at the end (false).
  */
  OdBmIteratorPtr<OdBmObjectId> createIteratorDBDrawings(bool atBeginning = true);
  /** \details
        Returns 'true' if and only if this object has an OdBmDBDrawing with the specified ID.

      \param drawingId [in] Input OdBmDBDrawing ID.
  */
  bool hasDBDrawing(const OdBmObjectId& drawingId) const;
  /** \details
        Returns ID of active OdBmDBDrawing.
  */
  OdBmObjectId getActiveDBDrawingId() const;
  /** \details
        Sets active OdBmDBDrawing object by its ID.

      \param drawingId [in] Input OdBmDBDrawing ID.
  */
  void setActiveDBDrawingId(OdBmObjectId drawingId);
  /** \details
        Adds ID of OdBmDBDrawing object.

      \param drawingId [in] Input OdBmDBDrawing ID.
  */
  void addDBDrawingId(const OdBmObjectId& drawingId);
};


#endif // _BM_DBDRAWINGINFO_H_

