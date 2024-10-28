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

#ifndef _BM_RICHTEXTFRAGMENT_H_
#define _BM_RICHTEXTFRAGMENT_H_
#include "Base/BmObject.h"



class OdBmRichTextFragment;
class OdBmRichTextFragmentImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRichTextFragment object.
 */
typedef OdSmartPtr<OdBmRichTextFragment> OdBmRichTextFragmentPtr;

/** \details
 A data type that represents an array of OdBmRichTextFragment objects.
 */
typedef OdArray<OdBmRichTextFragmentPtr> OdBmRichTextFragmentPtrArray;

//----------------------------------------------------------
//
// OdBmRichTextFragment
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmRichTextFragment : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRichTextFragment);
public:
  OdString getText() const;
  OdResult setText(const OdString&);
  OdInt32 getLengthInRichEditCtrl() const;
  OdResult setLengthInRichEditCtrl(OdInt32);
  OdUInt32 getMask() const;
  OdResult setMask(OdUInt32);
  OdUInt32 getEffects() const;
  OdResult setEffects(OdUInt32);
  OdInt32 getParagraphNumberingStyle() const;
  OdResult setParagraphNumberingStyle(OdInt32);
  //
  // Main functionality
  //
};
#endif // _BM_RICHTEXTFRAGMENT_H_

