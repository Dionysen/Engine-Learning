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

#ifndef _BM_FAMILYINSTANCE_H_
#define _BM_FAMILYINSTANCE_H_
#include "Database/Entities/BmInsertableInst.h"
#include "Database/Enums/BmStructuralType.h"
// BEGIN: Includes
#include "Family/Entities/BmFamilySymbol.h"
// END: Includes

class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmFamilyRef;
typedef OdSmartPtr<OdBmFamilyRef> OdBmFamilyRefPtr;
class OdBmFamInstSpec;
typedef OdSmartPtr<OdBmFamInstSpec> OdBmFamInstSpecPtr;
class OdBmFamInstUserData;
typedef OdSmartPtr<OdBmFamInstUserData> OdBmFamInstUserDataPtr;
class OdBmDesignPropertyManager;
typedef OdSmartPtr<OdBmDesignPropertyManager> OdBmDesignPropertyManagerPtr;
class OdBmInplaceInsertionHelper;
typedef OdSmartPtr<OdBmInplaceInsertionHelper> OdBmInplaceInsertionHelperPtr;
class OdBmFamilyInstanceConnectorManager;
typedef OdSmartPtr<OdBmFamilyInstanceConnectorManager> OdBmFamilyInstanceConnectorManagerPtr;
class OdBmObjectId;

class OdBmFamilyInstance;
class OdBmFamilyInstanceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyInstance object.
 */
typedef OdSmartPtr<OdBmFamilyInstance> OdBmFamilyInstancePtr;

/** \details
 A data type that represents an array of OdBmFamilyInstance objects.
 */
typedef OdArray<OdBmFamilyInstancePtr> OdBmFamilyInstancePtrArray;

//----------------------------------------------------------
//
// OdBmFamilyInstance
//
//----------------------------------------------------------

/** \details
This class represents an instance of a family type.

    <group Family_Classes>
*/
class TB_FAMILY_EXPORT OdBmFamilyInstance : public OdBmInsertableInst {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyInstance);
public:
  void getSubInstancesTable(OdBmMap<OdBmObjectId, OdInt32> &) const;
  OdGePoint3d getInstOrigin() const;
  OdResult setInstOrigin(const OdGePoint3d&);
  OdGeVector3d getRefDir() const;
  OdResult setRefDir(const OdGeVector3d&);
  OdGeVector3d getZAxis() const;
  OdResult setZAxis(const OdGeVector3d&);
  OdBmFamilyParamsPtr getInstanceParams() const;
  OdResult setInstanceParams(const OdBmFamilyParamsPtr&);
  OdInt32 getVisibility() const;
  OdResult setVisibility(OdInt32);
  /** \details
    Retrieves the structural type of the instance.
    
    \returns A value from the OdBm::StructuralType::Enum.
  */
  OdBm::StructuralType::Enum getBaseStructType() const;
  /** \details
    Sets the new structural type of the instance.
    
    \param OdBm::StructuralType::Enum [in] New structural type.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setBaseStructType(OdBm::StructuralType::Enum);
  OdInt32 getStructUsage() const;
  OdResult setStructUsage(OdInt32);
  void getRefs(OdArray<OdBmFamilyRefPtr> &) const;
  OdResult setRefs(const OdArray<OdBmFamilyRefPtr>&);
  void getOffsetPosArr(OdArray<OdBmObjectPtr> &) const;
  OdResult setOffsetPosArr(const OdArray<OdBmObjectPtr>&);
  void getLeaders(OdArray<OdBmObjectPtr> &) const;
  OdResult setLeaders(const OdArray<OdBmObjectPtr>&);
  OdBmObjectPtr getPosRelToGrid() const;
  OdResult setPosRelToGrid(const OdBmObjectPtr&);
  OdGeMatrix3d getRefPnt() const;
  OdResult setRefPnt(const OdGeMatrix3d&);
  OdBmFamInstSpecPtr getFamInstSpec() const;
  OdResult setFamInstSpec(const OdBmFamInstSpecPtr&);
  OdBmFamInstUserDataPtr getFamInstUserData() const;
  OdResult setFamInstUserData(const OdBmFamInstUserDataPtr&);
  OdBmObjectPtr getPOFDriver() const;
  OdBmDesignPropertyManagerPtr getDesignPropManager() const;
  OdBmObjectPtr getCurveDriver() const;
  OdBmInplaceInsertionHelperPtr getInplaceInsertionHelper() const;
  OdBmFamilyInstanceConnectorManagerPtr getConnectorManager() const;
  OdBmObjectId getMasterSymbolId() const;
  OdBmObjectId getOwnerElemId() const;
  OdBmObjectId getAssocSketchPlaneId() const;
  OdResult setAssocSketchPlaneId(const OdBmObjectId&);
  OdBmObjectId getAnalyticalTopPlaneId() const;
  OdResult setAnalyticalTopPlaneId(const OdBmObjectId&);
  OdBmObjectId getAnalyticalBottomPlaneId() const;
  OdResult setAnalyticalBottomPlaneId(const OdBmObjectId&);
  OdBmObjectId getSuperInstanceId() const;
  OdResult setSuperInstanceId(const OdBmObjectId&);
  OdBmObjectId getScheduleOnlyLevelId() const;
  OdResult setScheduleOnlyLevelId(const OdBmObjectId&);
  bool getRoomBounding() const;
  OdResult setRoomBounding(bool);
  bool getFlippedX() const;
  OdResult setFlippedX(bool);
  bool getFlippedY() const;
  OdResult setFlippedY(bool);
  bool getFlippedFromToRoom() const;
  OdResult setFlippedFromToRoom(bool);
  bool getUseOffsetPos() const;
  OdResult setUseOffsetPos(bool);
  bool getInvisible() const;
  OdResult setInvisible(bool);
  bool getWorkPlaneBased() const;
  OdResult setWorkPlaneBased(bool);
  bool getWorkPlaneFlipped() const;
  OdResult setWorkPlaneFlipped(bool);
  bool getInstDormant() const;
  OdResult setInstDormant(bool);
  bool getVertical() const;
  OdInt32 getInsertOrientation() const;
  //
  // Main functionality
  //

  /** \details
       Returns true if FamilyInstance is Mullion.
  */
  bool isMullion() const;

  /** \details
       Returns true if FamilyInstance is Curtain Panel.
  */
  bool isCurtainPanel() const;

  //It is using to implement HOST_ID_PARAM
  OdBmObjectId getHostId() const;

  /** \details
    Sets the data of FamilyInstance

    \param location [in] Location where family instance is to be placed.
    \param idFamilySymbol [in] id of FamilySymbol.
    \param structuralType [in] structural type.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult set(const OdGePoint3d& location, const OdBmObjectId& idFamilySymbol, OdBm::StructuralType::Enum structuralType);

  /** \details
    Sets the data of FamilyInstance

    \param location [in] Location where family instance is to be placed.
    \param idFamilySymbol [in] id of FamilySymbol.
    \param idHost [in] id of Host element.
    \param structuralType [in] structural type.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult set(const OdGePoint3d& location, const OdBmObjectId& idFamilySymbol, const OdBmObjectId& idHost, OdBm::StructuralType::Enum structuralType);

  /** \details
    Rotates the FamilyInstance

    \param dAngle [in] rotation angle.
    \param axis [in] axis of rotation.
    \param origin [in] origin of rotation.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setRotation(const double dAngle, const OdGeVector3d& axis, const OdGePoint3d& origin);

  /** \details
    Sets the data of FamilyInstance

    \param location [in] Location where family instance is to be placed.
    \param refDir [in] Direction of FamilyInstance.
    \param idFamilySymbol [in] id of FamilySymbol.
    \param idHost [in] id of Host element.
    \param structuralType [in] structural type.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult set(const OdGePoint3d& location, const OdGeVector3d& refDir, const OdBmObjectId& idFamilySymbol, const OdBmObjectId& idHost, OdBm::StructuralType::Enum structuralType);

  /** \details
     Returns FamilySymbol of FamilyIntance. This FamilySymbol represents type of the FamilyIntance.

     \param pFamilySymbol [out] Resulting FamilySymbol.

     \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getFamilySymbol(OdBmFamilySymbolPtr& pFamilySymbol) const;

  /** \details
    Returns an array of subcomponents for the current family instance.
    
    \param aSubComponent [out] Array of subcomponents to be returned.
 */
  void getSubComponentIds(OdBmObjectIdArray& aSubComponent) const;
};
#endif // _BM_FAMILYINSTANCE_H_

