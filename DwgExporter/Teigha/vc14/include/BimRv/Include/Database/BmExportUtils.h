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

#include "OdGUID.h"
#include "Database/BmElement.h"

/** \details
    This class provides methods needed for export in other formats.
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmExportUtils {
public:
  /** \details
    Retrieves the global unique identifier (GUID) of an element for DWF and IFC export.

    \param pElement [in] A smart pointer to the element for which the export GUID should be returned.

    \returns Returns an OdGUID object; in the case of error, the method returns the OdGUID::kNull value. 
    
    \remarks
    The GUID returned by the method is the result of the XOR operation between the episode GUID and element handle in hex representation.
  */
  static OdGUID getElementExportId(const OdBmElementPtr& pElement);
};

#endif // _BM_EXPORTUTILS_H_

