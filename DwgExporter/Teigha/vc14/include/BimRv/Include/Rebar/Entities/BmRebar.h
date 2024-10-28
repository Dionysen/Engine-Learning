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

#ifndef _BM_REBAR_H_
#define _BM_REBAR_H_
#include "Database/BmElement.h"
// BEGIN: Includes
#include "Rebar/Enums/BmRebarHostCategory.h"
// END: Includes

class OdBmTrfIsometric;
typedef OdSmartPtr<OdBmTrfIsometric> OdBmTrfIsometricPtr;
class OdBmRebarInstBase;
typedef OdSmartPtr<OdBmRebarInstBase> OdBmRebarInstBasePtr;
class OdBmObjectId;

class OdBmRebar;
class OdBmRebarImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmRebar object.
 */
typedef OdSmartPtr<OdBmRebar> OdBmRebarPtr;

/** \details
 A data type that represents an array of OdBmRebar objects.
 */
typedef OdArray<OdBmRebarPtr> OdBmRebarPtrArray;

//----------------------------------------------------------
//
// OdBmRebar
//
//----------------------------------------------------------

/** \details
The class that implements working with a rebar element.

    <group Rebar_Classes>
*/
class TB_REBAR_EXPORT OdBmRebar : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmRebar);
public:
  /** \details 
  Retrieves the array of joint objects for the rebar element.
  \param array [out] An array of smart pointers to joint objects.
  \remarks
  The method fills the passed array of smart pointers and returns it to a calling subroutine.
  */
  void getJoinArr(OdArray<OdBmObjectPtr> &) const;
  /** \details 
  Retrieves the schedule mark the rebar element.
  \returns A string that contains the current schedule mark.
  */  
  OdString getSchedMark() const;
  /** \details 
  Retrieves the user preferred joins for the rebar element.
  \param array [out] An array of smart pointers to joint objects.
  \remarks
  The method fills the passed array of smart pointers and returns it to a calling subroutine.
  */
  void getUserPreferredJoins(OdArray<OdBmObjectPtr> &) const;
  /** \details 
  Retrieves the isometric transformation data for the saved host object.
  \retruns A smart pointer to an OdBmTrfIsometric object that contains isometric transformation data. 
  */
  OdBmTrfIsometricPtr getSavedHostTrf() const;
  /** \details 
  Retrieves the rebar element's host.
  \returns An identifier of the host element.
  */
  OdBmObjectId getHostId() const;
  /** \details 
  Retrieves whether the rebar is a valid part of the host element. 
  \returns true if the rebar element is a valid part of the host element; otherwise, the method returns false.
  */
  bool getHostIsValidPart() const;
  /** \details 
  Retrieves the current value of the normal opposite creation flag.
  \returns A boolean value of the normal opposite creation flag.
  */
  bool getIsNormOppositeOfAPICreationNorm() const;
  /** \details 
  Retrieves the rebar base instance. 
  \returns A smart pointer to an OdBmRebarInstBase object.
  */
  OdBmRebarInstBasePtr getInstance() const;
  /** \details 
  Retrieves the server global unique identifier (GUID) for the rebar element.
  \returns An instance of the OdGUID class that contains the server's GUID value.
  */
  OdGUID getServerGUID() const;
  /** \details 
  Retrieves whether the rebar parameters are read-only.
  \returns true if the rebar parameters are read-only; otherwise, the method returns false.
  */
  bool getReadOnlyParameters() const;
  //
  // Main functionality
  //
};
#endif // _BM_REBAR_H_

