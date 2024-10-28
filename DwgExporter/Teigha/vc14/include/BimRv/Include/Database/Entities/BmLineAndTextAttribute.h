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

#ifndef _BM_LINEANDTEXTATTRIBUTE_H_
#define _BM_LINEANDTEXTATTRIBUTE_H_
#include "Base/BmObject.h"
#include "Database/Enums/BmBackgroundType.h"

class OdBmObjectId;

class OdBmLineAndTextAttribute;
class OdBmLineAndTextAttributeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLineAndTextAttribute object.
 */
typedef OdSmartPtr<OdBmLineAndTextAttribute> OdBmLineAndTextAttributePtr;

/** \details
 A data type that represents an array of OdBmLineAndTextAttribute objects.
 */
typedef OdArray<OdBmLineAndTextAttributePtr> OdBmLineAndTextAttributePtrArray;

//----------------------------------------------------------
//
// OdBmLineAndTextAttribute
//
//----------------------------------------------------------

/** \details
This class makes it possible to format text (change fonts, backgrounds, decorations, etc.)

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmLineAndTextAttribute : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLineAndTextAttribute);
public:
  OdBmObjectId getFontId() const;
  OdResult setFontId(const OdBmObjectId&);
  OdBmObjectId getCategoryId() const;
  OdResult setCategoryId(const OdBmObjectId&);
  /** \details
    Returns the current background value.
    
    \remarks
        Possible background values:
        <table>
        <b>Opaque</b>       0
        <b>Transparent</b> -1
        </table>
  */
  OdBm::BackgroundType::Enum getBackground() const;
  /** \details
    Sets the background value from a passed parameter.
    
    \param val [in] Background value.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    
    \remarks
        Possible background values:
        <table>
        <b>Opaque</b>       0
        <b>Transparent</b> -1
        </table>
  */
  OdResult setBackground(OdBm::BackgroundType::Enum);
  /** \details
    Returns true if a text is bold.
  */
  bool getIsBold() const;
  /** \details
    Makes a text bold if a passed parameter is true.
    
    \param val [in] Input 'bold' flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsBold(bool);
  /** \details
    Returns true if a text is italic.
  */
  bool getIsItalic() const;
  /** \details
    Makes a text italic if a passed parameter is true.
    
    \param val [in] Input 'italic' flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsItalic(bool);
  /** \details
    Returns true if a text is underlined.
  */
  bool getIsUnderline() const;
  /** \details
    Makes a text underlined if a passed parameter is true.
    
    \param val [in] Input 'underlined' flag.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIsUnderline(bool);
  //
  // Main functionality
  //
};
#endif // _BM_LINEANDTEXTATTRIBUTE_H_

