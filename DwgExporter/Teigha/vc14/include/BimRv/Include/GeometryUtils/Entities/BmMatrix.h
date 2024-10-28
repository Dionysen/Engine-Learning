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

#ifndef _BM_MATRIX_H_
#define _BM_MATRIX_H_
#include "Base/BmObject.h"

class OdBmMatrixRow;
typedef OdSmartPtr<OdBmMatrixRow> OdBmMatrixRowPtr;

class OdBmMatrix;
class OdBmMatrixImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmMatrix object.
 */
typedef OdSmartPtr<OdBmMatrix> OdBmMatrixPtr;

/** \details
 A data type that represents an array of OdBmMatrix objects.
 */
typedef OdArray<OdBmMatrixPtr> OdBmMatrixPtrArray;

//----------------------------------------------------------
//
// OdBmMatrix
//
//----------------------------------------------------------

/** \details
    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmMatrix : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmMatrix);
public:
  OdInt32 getNRows() const;
  OdResult setNRows(OdInt32);
  OdInt32 getNcols() const;
  OdResult setNcols(OdInt32);
  bool getUseSingleArray() const;
  OdResult setUseSingleArray(bool);
  void getArr(OdDoubleArray &) const;
  OdResult setArr(const OdDoubleArray&);
  void getRows(OdArray<OdBmMatrixRowPtr> &) const;
  OdResult setRows(const OdArray<OdBmMatrixRowPtr>&);
  //
  // Main functionality
  //


};


#endif // _BM_MATRIX_H_

