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

#ifndef _BM_LINESYSTEMCURVEDATA_H_
#define _BM_LINESYSTEMCURVEDATA_H_
#include "Database/Entities/BmUserElemCurveData.h"



class OdBmLineSystemCurveData;
class OdBmLineSystemCurveDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLineSystemCurveData object.
 */
typedef OdSmartPtr<OdBmLineSystemCurveData> OdBmLineSystemCurveDataPtr;

/** \details
 A data type that represents an array of OdBmLineSystemCurveData objects.
 */
typedef OdArray<OdBmLineSystemCurveDataPtr> OdBmLineSystemCurveDataPtrArray;

//----------------------------------------------------------
//
// OdBmLineSystemCurveData
//
//----------------------------------------------------------

/** \details
    <group HostObj_Classes>
*/
class TB_HOSTOBJ_EXPORT OdBmLineSystemCurveData : public OdBmUserElemCurveData {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLineSystemCurveData);
public:
  bool getDirectionEdge() const;
  OdBmObjectPtr getLastAssocProp() const;
  //
  // Main functionality
  //


};


#endif // _BM_LINESYSTEMCURVEDATA_H_

