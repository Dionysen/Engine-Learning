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

#ifndef _BM_HERMITESURF_H_
#define _BM_HERMITESURF_H_
#include "Geometry/Entities/BmSurface.h"
#include "GeometryUtils/Entities/BmSplineSrfNode.h"



class OdBmHermiteSurf;
class OdBmHermiteSurfImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmHermiteSurf object.
 */
typedef OdSmartPtr<OdBmHermiteSurf> OdBmHermiteSurfPtr;

/** \details
 A data type that represents an array of OdBmHermiteSurf objects.
 */
typedef OdArray<OdBmHermiteSurfPtr> OdBmHermiteSurfPtrArray;

//----------------------------------------------------------
//
// OdBmHermiteSurf
//
//----------------------------------------------------------

/** \details
A class that implements the functionality of Hermite surface management.

    <group GeometryUtils_Classes>
*/
class TB_GEOMETRYUTILS_EXPORT OdBmHermiteSurf : public OdBmSurface {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmHermiteSurf);
public:
  bool getPeriodicItem(OdUInt32 idx) const;
  /** \details 
  Retrieves whether the Hermite surface is successfully constructed. 
  \returns true if the surface is successfully constructed; otherwise, the method returns false.
  */
  bool getisConstructedOK() const;
  /** \details 
  Retrieves the array of the surface nodes. 
  \param nodes [out] A placeholder for the nodes array.
  \remarks
  The method fills the passed array of OdBmSplineSrfNode objects and returns it to a calling subroutine.
  */
  void getNodeArray(OdArray<OdBmSplineSrfNode> &) const;
  /** \details 
  Retrieves the array of u-parameters assigned with the surface. 
  \param params [out] A placeholder for the array of the u-parameter values.
  \remarks
  The method fills the passed double array with u-parameter values and returns it to a calling subroutine.
  */
  void getuParams(OdDoubleArray &) const;
  /** \details 
  Retrieves the array of v-parameters assigned with the surface. 
  \param params [out] A placeholder for the array of the v-parameter values.
  \remarks
  The method fills the passed double array with v-parameter values and returns it to a calling subroutine.
  */
  void getvParams(OdDoubleArray &) const;
  //
  // Main functionality
  //

    /** \details
      Sets the Hermite surface parameters using an OdGeNurbSurface object.
      \param pGeNurbSurface [in] An OdGeNurbSurface object that contains Hermite surface parameters to be set.
      \returns eOk if the Hermite surface parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult set(const OdGeNurbSurface &pGeNurbSurface);
};


#endif // _BM_HERMITESURF_H_

