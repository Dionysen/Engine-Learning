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

#ifndef _BM_APROPERTY_H_
#define _BM_APROPERTY_H_
#include "Base/BmObject.h"



class OdBmAProperty;
class OdBmAPropertyImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmAProperty object.
 */
typedef OdSmartPtr<OdBmAProperty> OdBmAPropertyPtr;

/** \details
 A data type that represents an array of OdBmAProperty objects.
 */
typedef OdArray<OdBmAPropertyPtr> OdBmAPropertyPtrArray;

//----------------------------------------------------------
//
// OdBmAProperty
//
//----------------------------------------------------------

/** \details
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmAProperty : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmAProperty);
public:
  OdString getName() const;
  OdResult setName(const OdString&);
  OdBmObjectPtr getAChild() const;
  void getAConnected(OdArray<OdBmObjectPtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Method adds the assets to the properties array of connected assets.
    \param OdBmObjectPtr [in] Input The asset to be connected to the property.
  */
  void addToConnected(const OdBmObjectPtr&);

  /** \details
    Method clears array of assets connected to property.
  */
  void clearConnected();
};


#endif // _BM_APROPERTY_H_

