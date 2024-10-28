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

#ifndef _BM_SECTIONATTRIBUTES_H_
#define _BM_SECTIONATTRIBUTES_H_
#include "Database/Entities/BmLineAndTextAttributeSymbol.h"

class OdBmObjectId;

class OdBmSectionAttributes;
class OdBmSectionAttributesImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSectionAttributes object.
 */
typedef OdSmartPtr<OdBmSectionAttributes> OdBmSectionAttributesPtr;

/** \details
 A data type that represents an array of OdBmSectionAttributes objects.
 */
typedef OdArray<OdBmSectionAttributesPtr> OdBmSectionAttributesPtrArray;

//----------------------------------------------------------
//
// OdBmSectionAttributes
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmSectionAttributes : public OdBmLineAndTextAttributeSymbol {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSectionAttributes);
public:
  double getSectionTailLength() const;
  double getSectionTailWidth() const;
  OdBmObjectId getSectionHeadFamilyTagId() const;
  OdBmObjectId getSectionTailFamilyTagId() const;
  OdInt32 getStyleForBrokenDisplay() const;
  //
  // Main functionality
  //


};


#endif // _BM_SECTIONATTRIBUTES_H_

