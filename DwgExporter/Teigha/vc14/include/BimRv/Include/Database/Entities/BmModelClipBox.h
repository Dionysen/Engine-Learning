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

#ifndef _BM_MODELCLIPBOX_H_
#define _BM_MODELCLIPBOX_H_
#include "Database/Entities/BmBox.h"

class OdBmObjectId;

class OdBmModelClipBox;
class OdBmModelClipBoxImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmModelClipBox object.
 */
typedef OdSmartPtr<OdBmModelClipBox> OdBmModelClipBoxPtr;

/** \details
 A data type that represents an array of OdBmModelClipBox objects.
 */
typedef OdArray<OdBmModelClipBoxPtr> OdBmModelClipBoxPtrArray;

//----------------------------------------------------------
//
// OdBmModelClipBox
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmModelClipBox : public OdBmBox {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmModelClipBox);
public:
  OdBmObjectId getViewer3dId() const;
  //
  // Main functionality
  //

  OdResult setSectionBoxActive(bool);

};


#endif // _BM_MODELCLIPBOX_H_

