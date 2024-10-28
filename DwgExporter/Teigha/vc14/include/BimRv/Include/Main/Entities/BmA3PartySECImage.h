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

#ifndef _BM_A3PARTYSECIMAGE_H_
#define _BM_A3PARTYSECIMAGE_H_
#include "Main/Entities/BmA3PartyObject.h"



class OdBmA3PartySECImage;
class OdBmA3PartySECImageImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmA3PartySECImage object.
 */
typedef OdSmartPtr<OdBmA3PartySECImage> OdBmA3PartySECImagePtr;

/** \details
 A data type that represents an array of OdBmA3PartySECImage objects.
 */
typedef OdArray<OdBmA3PartySECImagePtr> OdBmA3PartySECImagePtrArray;

//----------------------------------------------------------
//
// OdBmA3PartySECImage
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmA3PartySECImage : public OdBmA3PartyObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmA3PartySECImage);
public:
  //
  // Main functionality
  //
};
#endif // _BM_A3PARTYSECIMAGE_H_

