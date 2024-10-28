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

#ifndef _BM_FILTERNUMERICRULEEVALUATOR_H_
#define _BM_FILTERNUMERICRULEEVALUATOR_H_
#include "Base/BmObject.h"



class OdBmFilterNumericRuleEvaluator;
class OdBmFilterNumericRuleEvaluatorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFilterNumericRuleEvaluator object.
 */
typedef OdSmartPtr<OdBmFilterNumericRuleEvaluator> OdBmFilterNumericRuleEvaluatorPtr;

/** \details
 A data type that represents an array of OdBmFilterNumericRuleEvaluator objects.
 */
typedef OdArray<OdBmFilterNumericRuleEvaluatorPtr> OdBmFilterNumericRuleEvaluatorPtrArray;

//----------------------------------------------------------
//
// OdBmFilterNumericRuleEvaluator
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFilterNumericRuleEvaluator : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFilterNumericRuleEvaluator);
public:
  //
  // Main functionality
  //

  /** \details
    Evaluates two intger values.

	\param x [in] Input first value for evaluation.
	\param y [in] Input second value for evaluation.
  */
  virtual bool eval(const OdInt32 x, const OdInt32 y) const;

  /** \details
    Evaluates two double values with giving precision.

	\param x [in] Input first value for evaluation.
	\param y [in] Input second value for evaluation.
	\param epsilon [in] Input precision.
  */
  virtual bool eval(const double x, const double y, const double epsilon) const;

};
#endif // _BM_FILTERNUMERICRULEEVALUATOR_H_

