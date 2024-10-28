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

#ifndef _BM_REBARSYSTEMLAYER_H_
#define _BM_REBARSYSTEMLAYER_H_
#include "Base/BmObject.h"

class OdBmObjectId;

class OdBmRebarSystemLayer;
class OdBmRebarSystemLayerImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebarSystemLayer object.
 */
typedef OdSmartPtr<OdBmRebarSystemLayer> OdBmRebarSystemLayerPtr;

/** \details
 A data type that represents an array of OdBmRebarSystemLayer objects.
 */
typedef OdArray<OdBmRebarSystemLayerPtr> OdBmRebarSystemLayerPtrArray;

//----------------------------------------------------------
//
// OdBmRebarSystemLayer
//
//----------------------------------------------------------

/** \details
    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebarSystemLayer : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebarSystemLayer);
public:
  double getSpacing() const;
  OdBmObjectId getBarType() const;
  OdBmObjectId getHookType() const;
  OdInt32 getFace() const;
  OdInt32 getDirection() const;
  OdInt32 getHookOrientation() const;
  OdInt32 getNumberOfLines() const;
  bool getActive() const;
  //
  // Main functionality
  //


};


#endif // _BM_REBARSYSTEMLAYER_H_

