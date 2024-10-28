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

#ifndef _BM_FAMILY_H_
#define _BM_FAMILY_H_
#include "Database/Entities/BmFamilyBase.h"

class OdBmGeomRef;
typedef OdSmartPtr<OdBmGeomRef> OdBmGeomRefPtr;
class OdBmFamDimConstrMgrImplem;
typedef OdSmartPtr<OdBmFamDimConstrMgrImplem> OdBmFamDimConstrMgrImplemPtr;
class OdBmGLine;
typedef OdSmartPtr<OdBmGLine> OdBmGLinePtr;
class OdBmFamilyReferenceIdxMgr;
typedef OdSmartPtr<OdBmFamilyReferenceIdxMgr> OdBmFamilyReferenceIdxMgrPtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmFamily;
class OdBmFamilyImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamily object.
 */
typedef OdSmartPtr<OdBmFamily> OdBmFamilyPtr;

/** \details
 A data type that represents an array of OdBmFamily objects.
 */

typedef OdArray<OdBmFamilyPtr> OdBmFamilyPtrArray;

class OdBmNamedParam;
typedef OdSmartPtr<OdBmNamedParam> OdBmNamedParamPtr;


//----------------------------------------------------------
//
// OdBmFamily
//
//----------------------------------------------------------

/** \details
This is the base class for family classes.

    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmFamily : public OdBmFamilyBase {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamily);
public:
  /** \details
    Retrieves references from the family.
    \param array [out] An array of smart pointers to OdBmObject instances, which represent referenced objects.
    \remarks
    The method fills the passed array of smart pointers to OdBmObject instances and returns it to a calling subroutine.
  */
  void getReferences(OdArray<OdBmObjectPtr> &) const;
  /** \details
    Sets a new array of references for the family. 
    \param array [in] An array of smart pointers to OdBmObject instances, which represent referenced objects.
    \returns eOk if the new array of references was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setReferences(const OdArray<OdBmObjectPtr>&);
  /** \details
    Retrieves identifiers of reference types.
    \param typeIds [out] An array of 32-bit integer values, which represent referenced type identifiers.
    \remarks
    The method fills the passed array with reference type identifiers and returns it to a calling subroutine.
  */
  void getReferenceTypeIds(OdInt32Array &) const;
  /** \details
    Sets a new array of reference type identifiers for the family. 
    \param typeIds [in] An array of 32-bit integer values, which contain reference type identifiers.
    \returns eOk if the new array of reference type identifiers was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setReferenceTypeIds(const OdInt32Array&);
  void getOutOfFamilyHostGrefs(OdArray<OdBmGeomRefPtr> &) const;
  void getOutOfFamilyRefs(OdBmObjectIdArray &) const;
  OdResult setOutOfFamilyRefs(const OdBmObjectIdArray&);
  void getOutOfFamilyHostIds(OdBmObjectIdArray &) const;
  /** \details
    Retrieves the identifier of the family surrogate.
    \returns An OdBmObjectId that contains surrogate's identifier.
  */
  OdBmObjectId getSurrogateId() const;
  /** \details
    Sets a new identifier for the family's surrogate. 
    \param id [in] An OdBmObjectId instance that represents the new identifier to be set.
    \returns eOk if the new identifier was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setSurrogateId(const OdBmObjectId&);
  OdBmFamDimConstrMgrImplemPtr getFamDimConstrMgr() const;
  OdResult setFamDimConstrMgr(const OdBmFamDimConstrMgrImplemPtr&);
  /** \details
    Retrieves the default stretch line for the family.
    \returns A smart pointer to an OdBmGLine object that represents the stretch line.
  */
  OdBmGLinePtr getDefaultStretchLine() const;
  /** \details
    Retrieves the current value of the fixed elevation for the family.
    \returns A double value that contains fixed elevation.
  */
  double getFixedElevation() const;
  /** \details
    Sets a new value of the fixed elevation. 
    \param elevation [in] A double value that represents the new fixed elevation to be set.
    \returns eOk if the new fixed elevation value was successfully set; otherwise, the method returns an appropriate error code.
  */  
  OdResult setFixedElevation(double);
  /** \details
    Retrieves default column height for the family.
    \returns A double value that contains default column height.
  */
  double getDefaultColumnHeight() const;
  /** \details
    Retrieves default host thickness for the family.
    \returns A double value that contains default host thickness.
  */
  double getDefaultHostThickness() const;
  /** \details
    Retrieves default height for above level.
    \returns A double value that contains default height for above level.
  */
  double getDefaultHeightAboveLevel() const;
  /** \details
    Retrieves the current elevation value for in-place family.
    \returns A double value that contains the elevation value.
  */    
  double getInplaceFamElevation() const;
  /** \details
    Sets a new value of the elevation for in-place family. 
    \param elevation [in] A double value that represents the new elevation value to be set.
    \returns eOk if the new elevation value was successfully set; otherwise, the method returns an appropriate error code.
  */  
  OdResult setInplaceFamElevation(double);
  /** \details
    Retrieves whether the elevation value is fixed for the family.
    \returns true if the elevation value is fixed; otherwise, the method returns false.
  */
  bool getElevationFixed() const;
  /** \details
    Sets a new value of the fixed elevation flag that determines whether the elevation value is fixed for the family (if it is equal to true); 
    otherwise, the flag is equal to false.
    \param value [in] A new flag value to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setElevationFixed(bool);
  /** \details
    Retrieves whether the family was created by a user.
    \returns true if the family was created by a user; otherwise, the method returns false.
  */
  bool getIsUserCreated() const;
  /** \details
    Sets a new value of the user creation flag. 
    This flag determines whether the family was created by a user (flag value is equal to true) or not (flag value is equal to false).
    \param value [in] A new flag value to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setIsUserCreated(bool);
  bool getSetCreated2011FaceBasedFamily() const;
  OdResult setSetCreated2011FaceBasedFamily(bool);
  bool getBHasAnyDummyRefs() const;
  OdBmFamilyReferenceIdxMgrPtr getFamilyReferenceIdxMgr() const;
  //
  // Main functionality
  //

  /** \details
    Retrieves whether the family is standalone.
    \returns true if the family is standalone; otherwise, the method returns false.
  */
  bool isStandalone() const;
  
  /** \details
    Retrieves whether the family may have a free host.
    \returns true if the family may have a free host; otherwise, the method returns false.
  */
  bool mayHaveFreeHost() const;
  
  /** \details
    Retrieves the family's host type.
    \returns A signed 32-bit integer value that represents the family's host type.
  */
  OdInt32 getHostType(OdInt32 idx) const;
};


#endif // _BM_FAMILY_H_

