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

#ifndef _BM_BOX_H_
#define _BM_BOX_H_
#include "Database/Entities/BmBoxBase.h"

class OdBmBoundedSpace;
typedef OdSmartPtr<OdBmBoundedSpace> OdBmBoundedSpacePtr;

class OdBmBox;
class OdBmBoxImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmBox object.
 */
typedef OdSmartPtr<OdBmBox> OdBmBoxPtr;

/** \details
 A data type that represents an array of OdBmBox objects.
 */
typedef OdArray<OdBmBoxPtr> OdBmBoxPtrArray;

//----------------------------------------------------------
//
// OdBmBox
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmBox : public OdBmBoxBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmBox);
public:
  OdBmBoundedSpacePtr getBoundedSpace() const;
  //
  // Main functionality
  //


};


#endif // _BM_BOX_H_

