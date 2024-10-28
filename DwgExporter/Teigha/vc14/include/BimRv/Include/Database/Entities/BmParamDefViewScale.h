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

#ifndef _BM_PARAMDEFVIEWSCALE_H_
#define _BM_PARAMDEFVIEWSCALE_H_
#include "Database/Entities/BmParamDefCombo.h"



class OdBmParamDefViewScale;
class OdBmParamDefViewScaleImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmParamDefViewScale object.
 */
typedef OdSmartPtr<OdBmParamDefViewScale> OdBmParamDefViewScalePtr;

/** \details
 A data type that represents an array of OdBmParamDefViewScale objects.
 */
typedef OdArray<OdBmParamDefViewScalePtr> OdBmParamDefViewScalePtrArray;

//----------------------------------------------------------
//
// OdBmParamDefViewScale
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmParamDefViewScale : public OdBmParamDefCombo {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmParamDefViewScale);
public:
  OdInt32 getUnitSystem() const;
  bool getAllowCustom() const;
  //
  // Main functionality
  //
};
#endif // _BM_PARAMDEFVIEWSCALE_H_

