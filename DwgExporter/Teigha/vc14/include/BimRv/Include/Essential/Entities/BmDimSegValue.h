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

#ifndef _BM_DIMSEGVALUE_H_
#define _BM_DIMSEGVALUE_H_
#include "Base/BmObject.h"

class OdBmDimSegValueTextFields;
typedef OdSmartPtr<OdBmDimSegValueTextFields> OdBmDimSegValueTextFieldsPtr;
class OdBmDimSegValueBase;
typedef OdSmartPtr<OdBmDimSegValueBase> OdBmDimSegValueBasePtr;
class OdBmDimSegOwnedByDimension;
typedef OdSmartPtr<OdBmDimSegOwnedByDimension> OdBmDimSegOwnedByDimensionPtr;

class OdBmDimSegValue;
class OdBmDimSegValueImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmDimSegValue object.
 */
typedef OdSmartPtr<OdBmDimSegValue> OdBmDimSegValuePtr;

/** \details
 A data type that represents an array of OdBmDimSegValue objects.
 */
typedef OdArray<OdBmDimSegValuePtr> OdBmDimSegValuePtrArray;

//----------------------------------------------------------
//
// OdBmDimSegValue
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmDimSegValue : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmDimSegValue);
public:
  double getValue() const;
  OdBmDimSegValueTextFieldsPtr getTextFields() const;
  OdBmDimSegValueBasePtr getDimSegValueBase() const;
  OdBmDimSegOwnedByDimensionPtr getOwningDimension() const;
  //
  // Main functionality
  //


};


#endif // _BM_DIMSEGVALUE_H_

