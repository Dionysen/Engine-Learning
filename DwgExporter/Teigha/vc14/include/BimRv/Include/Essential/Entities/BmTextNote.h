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

#ifndef _BM_TEXTNOTE_H_
#define _BM_TEXTNOTE_H_
#include "Essential/Entities/BmTextElement.h"
// BEGIN: Includes
#include "Database/Entities/BmTextNoteAttributes.h"
#include "Database/Entities/BmLeaderStyle.h"
// END: Includes

class OdBmLeader;
typedef OdSmartPtr<OdBmLeader> OdBmLeaderPtr;

class OdBmTextNote;
class OdBmTextNoteImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTextNote object.
 */
typedef OdSmartPtr<OdBmTextNote> OdBmTextNotePtr;

/** \details
 A data type that represents an array of OdBmTextNote objects.
 */
typedef OdArray<OdBmTextNotePtr> OdBmTextNotePtrArray;

//----------------------------------------------------------
//
// OdBmTextNote
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmTextNote : public OdBmTextElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTextNote);
public:
  void getLeaders(OdArray<OdBmLeaderPtr> &) const;
  OdResult setLeaders(const OdArray<OdBmLeaderPtr>&);
  bool getIsArcLeaders() const;
  OdResult setIsArcLeaders(bool);
  void getArrLeaderExtensionPoints(OdGePoint3dArray &) const;
  OdResult setArrLeaderExtensionPoints(const OdGePoint3dArray&);
  //
  // Main functionality
  //

  /** \details
    Returns the text in rich text format as OdAnsiString.
  */
  OdAnsiString getRtfText() const;
  
  /** \details
    Sets the text in rich text format from an OdAnsiString.
    
    \param rtfText [in] Input ansi string.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setRtfText(const OdAnsiString& rtfText);
  
  /** \details
    Sets the raw text from a string.
    
    \param rawText [in] Input string.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setRawText(const OdString& rawText);
  
  /** \details
    Sets the direction of a text note.
    
    \param direction [in] Direction vector.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setDirection(const OdGeVector3d& direction);
};


#endif // _BM_TEXTNOTE_H_

