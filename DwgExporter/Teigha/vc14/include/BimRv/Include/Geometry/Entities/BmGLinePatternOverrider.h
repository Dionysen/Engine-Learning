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

#ifndef _BM_GLINEPATTERNOVERRIDER_H_
#define _BM_GLINEPATTERNOVERRIDER_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmGLinePatternOverrider;
class OdBmGLinePatternOverriderImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGLinePatternOverrider object.
 */
typedef OdSmartPtr<OdBmGLinePatternOverrider> OdBmGLinePatternOverriderPtr;

/** \details
 A data type that represents an array of OdBmGLinePatternOverrider objects.
 */
typedef OdArray<OdBmGLinePatternOverriderPtr> OdBmGLinePatternOverriderPtrArray;

//----------------------------------------------------------
//
// OdBmGLinePatternOverrider
//
//----------------------------------------------------------

/** \details
    This class stores line pattern overrider data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGLinePatternOverrider : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGLinePatternOverrider);
public:
  /** \details
    Returns the line pattern ID as an object of the OdBmObjectId class.
  */
  OdBmObjectId getLinePatternId() const;
  /** \details
    Sets the line pattern ID from an OdBmObjectId object.

    \param OdBmOBjectId [in] Input parameter.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setLinePatternId(const OdBmObjectId&);
  //
  // Main functionality
  //


};


#endif // _BM_GLINEPATTERNOVERRIDER_H_

