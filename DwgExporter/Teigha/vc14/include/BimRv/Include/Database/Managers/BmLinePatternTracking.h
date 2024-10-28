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

#ifndef _BM_LINEPATTERNTRACKING_H_
#define _BM_LINEPATTERNTRACKING_H_
#include "Database/Managers/BmElemSetTracking.h"



class OdBmLinePatternTracking;
class OdBmLinePatternTrackingImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmLinePatternTracking object.
 */
typedef OdSmartPtr<OdBmLinePatternTracking> OdBmLinePatternTrackingPtr;

/** \details
 A data type that represents an array of OdBmLinePatternTracking objects.
 */
typedef OdArray<OdBmLinePatternTrackingPtr> OdBmLinePatternTrackingPtrArray;

//----------------------------------------------------------
//
// OdBmLinePatternTracking
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmLinePatternTracking : public OdBmElemSetTracking {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmLinePatternTracking);
public:
  //
  // Main functionality
  //

  /** \details
    Returns line pattern by its name.

	\param aName [in] Input line pattern name.
  */
  OdBmObjectId getLinePatternByName(const OdString& aName) const;
};


#endif // _BM_LINEPATTERNTRACKING_H_

