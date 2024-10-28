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

#ifndef _BM_OPENING_HELPER_H_
#define _BM_OPENING_HELPER_H_

#include "HostObj/Entities/BmHostObj.h"

//class OdBmSiteSurfaceImpl;

//----------------------------------------------------------
//
// OdBmOpeningHelper
//
//----------------------------------------------------------

/** \details
    <group Main_Classes>
*/
class TB_MAIN_EXPORT OdBmOpeningHelper
{
public:

  /** \details
    Creates a new opening on a host element.
    
    \param pHostObj   [in] Host object element.
    \param faceTag    [in] Face tag on which opening is based on.
    \param pCurveLoop [in] Profile of the opening.
    \returns eOk if the opening is created successfully, or an appropriate error code otherwise.
  */
  static OdResult newOpening(OdBmHostObjPtr& pHostObj, OdInt32 faceTag, const OdBmCurveLoopPtr& pCurveLoop);

  /** \details
    Creates a rectangular opening on a host element.

    \param pHostObj   [in] Host object element.
    \param faceTag    [in] Face tag on which opening is based on.
    \param ptStart    [in] One corner of the rectangle.
    \param ptEnd      [in] The opposite corner of the rectangle.
    \returns eOk if the opening is created successfully, or an appropriate error code otherwise.
  */
  static OdResult newOpening(OdBmHostObjPtr& pHostObj, OdInt32 faceTag, const OdGePoint2d& ptStart, const OdGePoint2d& ptEnd);

};


#endif // _BM_SITESURFACE_HELPER_H_

