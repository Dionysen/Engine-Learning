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

#ifndef _BM_GENSWEEP_H_
#define _BM_GENSWEEP_H_
#include "Database/BmElement.h"

class OdBmObjectId;

class OdBmGenSweep;
class OdBmGenSweepImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGenSweep object.
 */
typedef OdSmartPtr<OdBmGenSweep> OdBmGenSweepPtr;

/** \details
 A data type that represents an array of OdBmGenSweep objects.
 */
typedef OdArray<OdBmGenSweepPtr> OdBmGenSweepPtrArray;

//----------------------------------------------------------
//
// OdBmGenSweep
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmGenSweep : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGenSweep);
public:
  OdInt32 getVisibility() const;
  OdBmObjectId getCategoryId() const;
  OdBmObjectId getMaterialId() const;
  bool getCutting() const;
  //
  // Main functionality
  //

  /** \details
    Sets material ID for GenSweep.
      \param materialId [in] Input material ID.
      \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setMaterialId(const OdBmObjectId& materialId);
};


#endif // _BM_GENSWEEP_H_

