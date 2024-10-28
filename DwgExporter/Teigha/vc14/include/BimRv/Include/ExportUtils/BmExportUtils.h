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

#ifndef _BM_EXPORTUTILS_H_
#define _BM_EXPORTUTILS_H_

#include "GeometryUtils/Entities/BmCurveLoop.h"
#include "Database/Entities/BmInstance.h"

/** \details
    This class is needed to get necessary internal data during export procedures.
    <group ExportUtils_Classes>
*/
class TB_EXPORTUTILS_EXPORT OdBmExportUtils {
public:

  /** \details
    Gets InsertableInstance cut loops.

    \param pInst         [in] pointer to OdBmInstance.
    \param arrCurveLoops [out] Output array of OdBmCurveLoops.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  static OdResult getInstCutLoops(const OdBmInstance* pInst,
    OdArray<OdBmCurveLoopPtr>& arrCurveLoops);
};

#endif // _BM_EXPORTUTILS_H_

