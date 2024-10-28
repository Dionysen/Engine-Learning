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

#ifndef _BM_PARAMETERVALUEPROVIDER_H_
#define _BM_PARAMETERVALUEPROVIDER_H_
#include "Database/Entities/BmFilterableValueProvider.h"

class OdBmParameterId;

class OdBmParameterValueProvider;
class OdBmParameterValueProviderImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmParameterValueProvider object.
 */
typedef OdSmartPtr<OdBmParameterValueProvider> OdBmParameterValueProviderPtr;

/** \details
 A data type that represents an array of OdBmParameterValueProvider objects.
 */
typedef OdArray<OdBmParameterValueProviderPtr> OdBmParameterValueProviderPtrArray;

typedef OdArray<OdBmParameterId> OdBmParameterIdArray;


//----------------------------------------------------------
//
// OdBmParameterValueProvider
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmParameterValueProvider : public OdBmFilterableValueProvider {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmParameterValueProvider);
public:
  OdInt32 getElemOrSymbol() const;
  OdResult setElemOrSymbol(OdInt32);
  OdBmParameterId getParameter() const;
  OdResult setParameter(const OdBmParameterId&);
  //
  // Main functionality
  //

  /** \details
    Returns parameter IDs through its argument.

	\param OdBmParameterIdArray [out] Output array of parameter IDs.
  */
  OdResult getParameters(OdBmParameterIdArray&);

  /** \details
    Sets the array of parameter IDs to this object.

	\param OdBmParameterIdArray [in] Input array of parameter IDs.
  */
  OdResult setParameters(const OdBmParameterIdArray&);

};
#endif // _BM_PARAMETERVALUEPROVIDER_H_

