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

#ifndef _BM_GSTYLE_H_
#define _BM_GSTYLE_H_
#include "Base/BmObject.h"

class OdBmObjectId;
class OdBmCmColor;

class OdBmGStyle;
class OdBmGStyleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGStyle object.
 */
typedef OdSmartPtr<OdBmGStyle> OdBmGStylePtr;

/** \details
 A data type that represents an array of OdBmGStyle objects.
 */
typedef OdArray<OdBmGStylePtr> OdBmGStylePtrArray;

//----------------------------------------------------------
//
// OdBmGStyle
//
//----------------------------------------------------------

/** \details
    This class stores data of a geometry style.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGStyle : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGStyle);
public:
  /** \details
    Returns the pen number as an OdInt32 value.
  */
  OdInt32 getPenNumber() const;
  /** \details
    Sets a pen number to this object.

    \param OdInt32 [in] Input pen number.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setPenNumber(OdInt32);
  /** \details
    Returns the color as an object of the OdBmCmColor class.
  */
  OdBmCmColor getColor() const;
  /** \details
    Sets a color to this object.

    \param OdBmCmColor [in] Input color.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setColor(const OdBmCmColor&);
  /** \details
    Returns the ID of the line pattern as an object of the OdBmObjectId class.
  */
  OdBmObjectId getLinePatternId() const;
  /** \details
    Sets an ID of a line pattern to this object.

    \param OdBmObjectId [in] Input ID of a line pattern.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setLinePatternId(const OdBmObjectId&);
  /** \details
    Returns the ID of the element material as an object of the OdBmObjectId class.
  */
  OdBmObjectId getMaterialElemId() const;
  /** \details
    Sets an ID of an element material to this object.

    \param OdBmObjectId [in] Input ID of an element material.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setMaterialElemId(const OdBmObjectId&);
  /** \details
    Returns true if the object has the ScreenSized style, which means that the object will
    retain its size even when the screen is scaled.
  */
  bool getIsScreenSized() const;
  /** \details
    Sets a flag that indicates whether this object has the ScreenSized style.

    \param bool [in] Input flag.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setIsScreenSized(bool);
  //
  // Main functionality
  //

  OdUInt32 subSetAttributes(OdGiDrawableTraits* pDrwTraits) const;
};


#endif // _BM_GSTYLE_H_

