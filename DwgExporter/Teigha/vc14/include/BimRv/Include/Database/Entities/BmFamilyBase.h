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

#ifndef _BM_FAMILYBASE_H_
#define _BM_FAMILYBASE_H_
#include "Database/BmElement.h"
#include "Database/Enums/BmPartType.h"
#include "Database/Enums/BmRoundConnectorDimType.h"
#include "Database/Enums/BmStructConnectionApplyTo.h"
#include "Geometry/Enums/BmStructuralMaterialType.h"
#include "Database/Enums/BmProfileFamilyUsage.h"
#include "Database/Enums/BmProfileFamilyDefinition.h"

class OdBmDatabase;
class OdBmFamilyDocument;
typedef OdSmartPtr<OdBmFamilyDocument> OdBmFamilyDocumentPtr;
class OdBmFamilyParams;
typedef OdSmartPtr<OdBmFamilyParams> OdBmFamilyParamsPtr;
class OdBmFamilyTypeTable;
typedef OdSmartPtr<OdBmFamilyTypeTable> OdBmFamilyTypeTablePtr;
class OdBmObjectId;
typedef OdArray<OdBmObjectId, OdMemoryAllocator<OdBmObjectId> > OdBmObjectIdArray;

class OdBmFamilyBase;
class OdBmFamilyBaseImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmFamilyBase object.
 */
typedef OdSmartPtr<OdBmFamilyBase> OdBmFamilyBasePtr;

/** \details
 A data type that represents an array of OdBmFamilyBase objects.
 */
typedef OdArray<OdBmFamilyBasePtr> OdBmFamilyBasePtrArray;

//----------------------------------------------------------
//
// OdBmFamilyBase
//
//----------------------------------------------------------

/** \details
This is the base class for family classes.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmFamilyBase : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmFamilyBase);
public:
  /** \details
    Retrieves whether the family is from ADPX or not.
    \returns true if the family is from ADPX; otherwise, it returns false.
  */
  bool getFromADPx() const;
  /** \details
    Retrieves whether the family is an in-place family or is a loadable one.
    \returns true if the family is an in-place family; if the family is a loadable family the method returns false.
  */
  bool getInPlace() const;
  /** \details
    Sets new value of the in-place flag. In-place flag determines whether the family is an in-place family (if it is equal to true) or not (if it is equal to false).
    \param bool value [in] A new value of the flag to be set.
  */
  OdResult setInPlace(bool);
  /** \details
    Retrieves whether the family is an AdHoc.
    \returns true if the family is an AdHoc; otherwise, the method returns false.
  */
  bool getIsAdHoc() const;
  /** \details
    Retrieves whether the family is a curtain panel family. 
    \returns true if the family is a curtain panel family; otherwise, the method returns false.
  */
  bool getIsCurtainPanel() const;
  /** \details
    Retrieves whether the family is a model family.
    \returns true if the family is the model family; otherwise, the method returns false.
  */
  bool getIsModel() const;
  /** \details
    Sets new value of the model flag. 
    The model flag determines whether the family is a model family (if it is equal to true) or not (if it is equal to false).
    \param value [in] A new value of the flag to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setIsModel(bool);
  /** \details
    Retrieves whether the family is a 2d-family.
    \returns true if the family is a 2d-family; otherwise, the method returns false.
  */
  bool getIs2d() const;
  /** \details
    Retrieves whether the family is a curve driven family.
    \returns true if the family is a curve driven family; otherwise, the method returns false.
  */
  bool getIsCrvDriven() const;
  /** \details
    Retrieves whether the family is vertical or horizontal.
    \returns true if the family is vertical or false if the family is horizontal.
  */
  bool getIsVertical() const;
  /** \details
    Retrieves whether the family's tag is rotated with a component.
    \returns true if the family's tag is rotated with a component.
  */
  bool getRotateTagWithComponent() const;
  /** \details
    Retrieves whether the family text should be kept readable.
    \returns true if the text is kept readable; otherwise the method returns false.
  */
  bool getKeepTextReadable() const;
  /** \details
    Retrieves whether the family has parametric relations between its components.
    \returns true if the family has parametric relations between its components; otherwise, the method returns false.
  */
  bool getIsParametric() const;
  /** \details
    Sets a new value of the parametric relations flag. 
    This flag determines whether the family has parametric relations between its components (if is equal to true) or not (if is equal to false).
    \param value [in] A new flag value to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setIsParametric(bool);
  /** \details
    Retrieves whether the family should stay a parametric family.
    \returns true if the family should stay a parametric family; otherwise, the method returns false.
  */
  bool getShouldStayParametric() const;
  /** \details
    Retrieves whether the family's content is protected.
    \returns true if the family's content is protected; otherwise, the method returns false.
  */
  bool getContentProtected() const;
  /** \details
    Retrieves whether the family is about to become a parametric family.
    \returns true if the family is about to become a parametric family; otherwise the method returns false.
  */
  bool getIsAboutToBecomeParametric() const;
  /** \details
    Retrieves whether a data can be auto-join to the family.
    \returns true if a data can be auto-joined to the family; otherwise, the method returns false.
  */
  bool getCouldAutojoin() const;
  /** \details
    Retrieves whether the family is a savable family.
    \returns true if the family is savable; otherwise, the method returns false.
  */
  bool getIsSavable() const;
  /** \details
    Retrieves whether the family has types form the catalog.
    \returns true if the family has types from the catalog; otherwise, the method returns false.
  */
  bool getHasTypesFromCatalog() const;
  /** \details
    Retrieves whether the family has simple cuts.
    \returns true if the family has simple cuts; otherwise, the method returns false.
  */
  bool getHasSimpleCuts() const;
  /** \details
    Retrieves whether the family has complex cuts.
    \returns true if the family has complex cuts; otherwise, the method returns false.
  */
  bool getHasComplexCuts() const;
  /** \details
    Retrieves whether the family has base arrays
    \returns true if the family has base arrays; otherwise, the method returns false.
  */
  bool getHasBaseArrays() const;
  /** \details
    Retrieves whether the family is host based
    \returns true if the family is host based; otherwise, the method returns false.
  */
  bool getIsHostBased() const;
  /** \details
    Retrieves whether the family has instances
    \returns true if the family has instances; otherwise, the method returns false.
  */
  bool getHasInstances() const;
  /** \details
    Retrieves whether the family is work plane based
    \returns true if the family is work plane based; otherwise, the method returns false.
  */
  bool getIsWorkPlaneBased() const;
  /** \details
    Retrieves whether the family is shared
    \returns true if the family is shared; otherwise, the method returns false.
  */
  bool getIsShared() const;
  /** \details
    Retrieves whether the family shows pre-cut in plan view
    \returns true if the family shows pre-cut in plan view; otherwise, the method returns false.
  */
  bool getUsePreCutShape() const;
  /** \details
    Sets new value of the flag which controls whether the family shows pre-cut in plan view.
    If the flag value is equal to true, the family shows pre-cut in plan view; otherwise, if the flag is equal to false, the family does not.
    \param value [in] A new value of the flag to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setUsePreCutShape(bool);
  /** \details
    Retrieves whether the family uses elevation mark.
    \returns true if the family uses elevation mark; otherwise, the method returns false.
  */
  bool getElevationMarkBody() const;
  /** \details
    Sets a new value of the elevation mark flag. 
    This flag determines whether the family uses an elevation mark (if is equal to true) or not (if is equal to false).
    \param value [in] A new flag value to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setElevationMarkBody(bool);
  /** \details
    Retrieves whether the family is forsed to proper mirroring.
    \returns true if the family is forsed to proper mirroring; otherwise, the method returns false.
  */
  bool getForceProperMirroring() const;
  /** \details
    Retrieves whether the family is using cap.
    \returns true if the family is using cap; otherwise, the method returns false.
  */
  bool getStructUseCap() const;
  /** \details
    Retrieves whether the family is curve based.
    \returns true if the family is curve based; otherwise, the method returns false.
  */
  bool getCurveBased() const;
  /** \details
    Retrieves whether the family maintains annotation orientation.
    \returns true if the family maintains annotation orientation; otherwise, the method returns false.
  */
  bool getElecKeepAnnotationOrientation() const;
  /** \details
    Retrieves whether the family contains rebar shape type.
    \returns true if the family contains rebar shape type; otherwise, the method returns false.
  */
  bool getIsRebarShape() const;
  /** \details
    Retrieves whether the family disallows stretching.
    \returns true if the family disallows stretching; otherwise, the method returns false.
  */
  bool getStretchingDisallowed() const;
  /** \details
    Retrieves whether the family family has 2010 format.
    \returns true if the family has 2010 format; otherwise, the method returns false.
  */
  bool getIsNew2010() const;
  /** \details
    Retrieves whether the family has labeled dimensions.
    \returns true if the family has labeled dimensions; otherwise, the method returns false.
  */
  bool getHasLabeledDimensions() const;
  /** \details
    Retrieves whether the family is a cutback.
    \returns true if the family is a cutback; otherwise, the method returns false.
  */
  bool getCutback() const;
  /** \details
    Retrieves whether the family allows to cut with unattached voids.
    \returns true if the family allows to cut with unattached voids; otherwise, the method returns false.
  */
  bool getAllowCutWithUnattachedVoids() const;
  /** \details
    Retrieves whether the family can host rebar.
    \returns true if the family can host rebar; otherwise, the method returns false.
  */
  bool getCanHostRebar() const;
  /** \details
    Retrieves whether the family is a spiral shape.
    \returns true if the family is a spiral shape; otherwise, the method returns false.
  */
  bool getIsSpiralShape() const;
  /** \details
    Retrieves whether the family enables cutting in views.
    \returns true if the family enables cutting in views; otherwise, the method returns false.
  */
  bool getEnableCuttingInViews() const;
  /** \details
    Sets a new value of the cutting in views flag. 
    This flag determines whether cutting views are enabled (if is equal to true) or not (if is equal to false) for the family.
    \param value [in] A new flag value to be set.
    \returns eOk if the new flag value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setEnableCuttingInViews(bool);
  /** \details
    Retrieves whether the family has room calculation point
    \returns true if the family has room calculation point; otherwise, the method returns false.
  */
  bool getHasRoomCalculationPoint() const;
  /** \details
    Retrieves the next absorbed index for the family.
    \returns A 32-bit integer value that represents the next absorbed index.
  */
  OdUInt32 getNextAbsorbedIndex() const;
  /** \details
    Sets the next absorbed index for the family.
    \param value [in] A next index value to be set.
    \returns eOk if new next absorbed index value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setNextAbsorbedIndex(OdUInt32);
  /** \details
    Retrieves the current predefined limit for the family.
    \returns An unsigned 32-bit integer value that represents the current predefined limit.
  */
  OdUInt32 getPredefinedLimitIdx() const;
  /** \details
    Sets a new predefined limit value for the family.
    \param value [in] A new predefined limit value to be set.
    \returns eOk if the new predefined limit value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setPredefinedLimitIdx(OdUInt32);
  /** \details
    Retrieves the current application version at loading.
    \returns An unsigned 32-bit integer value that represents the current application version at loading.
  */
  OdUInt32 getAppVersionAtLoad() const;
  /** \details
    Sets a new application version at loading.
    \param value [in] A new application version value to be set.
    \returns eOk if the new application version value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setAppVersionAtLoad(OdUInt32);
  /** \details
    Retrieves the current application version at initial loading.
    \returns An unsigned 32-bit integer value that represents the current application version at initial loading.
  */
  OdUInt32 getAppVersionAtInitialLoad() const;
  /** \details
    Sets a new application version at initial loading.
    \param value [in] A new application version value to be set.
    \returns eOk if the new application version value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setAppVersionAtInitialLoad(OdUInt32);
  /** \details
    Retrieves the current light source definition bits.
    \returns An unsigned 32-bit integer value that contains light source definition bits.
  */
  OdUInt32 getLightSourceDefBits() const;
  /** \details
    Sets new light source definition bits.
    \param value [in] An unsigned 32-bit integer value that contains light source definition bits to be set.
    \returns eOk if the new light source defintion bits were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setLightSourceDefBits(OdUInt32);
  /** \details
    Retrieves the current part type of the family.
    \returns The current part type of the family.
  */
  OdBm::PartType::Enum getPartType() const;
  /** \details
    Sets a new part type of the family.
    \param value [in] A new part type value to be set.
    \returns eOk if the new part type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setPartType(OdBm::PartType::Enum);
  /** \details
    Retrieves the current round connector dimension type.
    \returns The current round connector dimension type.
  */
  OdBm::RoundConnectorDimType::Enum getRoundConnDimType() const;
  /** \details
    Sets a new round connector dimension type.
    \param value [in] A new round connector dimension type value to be set.
    \returns eOk if the new round connector dimension type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setRoundConnDimType(OdBm::RoundConnectorDimType::Enum);
  /** \details
    Retrieves the current panel configuration for the family.
    \returns An unsigned 32-bit integer value that represents the current panel configuration.
  */
  OdUInt32 getPanelConfig() const;
  /** \details
    Sets a new panel configuration value.
    \param value [in] A new panel configuration value to be set.
    \returns eOk if the new panel configuration value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setPanelConfig(OdUInt32);
  /** \details
    Retrieves the current rendering model type for the family.
    \returns An unsigned 32-bit integer value that represents the current rendering model type.
  */
  OdUInt32 getRenderModelType() const;
  /** \details
    Sets a new rendering model type for the family.
    \param value [in] A new rendering model type value to be set.
    \returns eOk if the new rendering model type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setRenderModelType(OdUInt32);
  /** \details
    Retrieves the current symbolic representation type of the family.
    \returns An unsigned 32-bit integer value that represents the current symbolic representation type.
  */
  OdUInt32 getSymbolicRepType() const;
  /** \details
    Sets a new symbolic representation type for the family.
    \param value [in] A new symbolic representation type value to be set.
    \returns eOk if the new symbolic representation type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setSymbolicRepType(OdUInt32);
  /** \details
    Retrieves the connection on which the family should be connected to.
    \returns the connection on which the family should be connected to.
  */
  OdBm::StructConnectionApplyTo::Enum getStructConnectionApplyTo() const;
  /** \details
    Sets the connection on which the family should be connected to.
    \param value [in] A new structure connection to be connected to.
    \returns eOk if the new structure connection was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setStructConnectionApplyTo(OdBm::StructConnectionApplyTo::Enum);
  /** \details
    Retrieves the current brace representation type.
    \returns An unsigned 32-bit integer value that represents the current brace representation type.
  */
  OdUInt32 getBraceRepType() const;
  /** \details
    Sets a new value of the brace representation type.
    \param value [in] A new brace representation type value to be set.
    \returns eOk if the new brace representation type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setBraceRepType(OdUInt32);
  /** \details
    Retrieves the current physical material type of the family.
    \returns The current physical material type value.
    \remarks 
    Returned value can be Steel, Concrete, Wood or some other material.
  */
  OdBm::StructuralMaterialType::Enum getStructuralMaterialType() const;
  /** \details
    Sets a new physical material type value for the family.
    \param value [in] A new physical material type value to be set.
    \returns eOk if the new physical material type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setStructuralMaterialType(OdBm::StructuralMaterialType::Enum);
  /** \details
    Retrieves the current beam cutback for a column.
    \returns An unsigned 32-bit integer value that represents the current beam cutback for a column.
  */
  OdUInt32 getBeamCutbackForColumn() const;
  /** \details
    Sets a new beam cutback for a column.
    \param value [in] A new beam cutback value to be set.
    \returns eOk if the new beam cutback for a column value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setBeamCutbackForColumn(OdUInt32);
  /** \details
    Retrieves the current display type of a hidden view.
    \returns An unsigned 32-bit integer value that represents the current display type of a hidden view.
  */
  OdUInt32 getStructHiddenViewDisplayType() const;
  /** \details
    Sets a new display type of a hidden view.
    \param value [in] A new value of the display type to be set.
    \returns eOk if the new display type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setStructHiddenViewDisplayType(OdUInt32);
  /** \details
    Retrieves the current profile families.
    \returns The current profile families.
  */
  OdBm::ProfileFamilyUsage::Enum getProfileFamUsage() const;
  /** \details
    Sets new profile families.
    \param value [in] New profile families to be set.
    \returns eOk if the new profile families were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setProfileFamUsage(OdBm::ProfileFamilyUsage::Enum);
  /** \details
    Retrieves the current profile families definition.
    \returns The current profile families definition.
  */
  OdBm::ProfileFamilyDefinition::Enum getProfileFamDefinition() const;
  /** \details
    Sets a new profile families definition.
    \param value [in] A new profile families definition to be set.
    \returns eOk if the new profile families definition was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setProfileFamDefinition(OdBm::ProfileFamilyDefinition::Enum);
  /** \details
    Retrieves the current protein render type.
    \returns An unsigned 32-bit integer value that represents the current protein render type.
  */
  OdUInt32 getProteinRenderType() const;
  /** \details
    Sets a new protein render type value.
    \param value [in] A new render type value to be set.
    \returns eOk if the new protein render type value was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setProteinRenderType(OdUInt32);
  /** \details
    Retrieves the family name.
    \returns A string that contains the current name of the family.
  */
  OdString getName() const;
  /** \details
    Sets a new family name.
    \param name [in] A string that contains the new family name to be set.
    \returns eOk if the new family name was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setName(const OdString&);
  /** \details
    Retrieves the current path to the family.
    \returns A string that contains the family path.
  */
  OdString getPath() const;
  /** \details
    Sets a new family path.
    \param path [in] A string that contains the new family path.
    \returns eOk if the new family path was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setPath(const OdString&);
  /** \details
    Retrieves the dump symbolic name.
    \returns A string object that contains the dump symbolic name.
  */
  OdString getDumpSymName() const;
  /** \details
    Sets a new dump symbolic name.
    \param name [in] A string that contains the new dump symbolic name.
    \returns eOk if the new dump symbolic name was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setDumpSymName(const OdString&);
  /** \details
    Retrieves the omniclass number.
    \returns A string that contains the omniclass number.
  */
  OdString getOmniClassCode() const;
  /** \details
    Retrieves the identifier of the seek item.
    \returns A string that contains the seek item identifier.
  */
  OdString getSeekItemId() const;
  /** \details
    Retrieves the current projection access key.
    \returns A string that contains the projection access key.
  */
  OdString getProtectionAccessKey() const;
  /** \details
    Retrieves the identifier of the current family category.
    \returns An identifier of the family category.
  */
  OdBmObjectId getFamilyCategoryId() const;
  /** \details
   Sets a new family category identifier.
   \param id [in] A new family category identifier to be set.
   \returns eOk if the new family category identifier was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setFamilyCategoryId(const OdBmObjectId&);
  /** \details
    Retrieves the identifier of the family filter parameter.
    \returns The identifier of the family filter parameter.
  */
  OdBmObjectId getKeyExtParamId() const;
  /** \details
    Retrieves the owner symbol identifier.
    \returns An OdBmObjectId object that contains the owner symbol identifier.
  */
  OdBmObjectId getOwnerSymbolId() const;
  /** \details
   Sets a new owner symbol Id.
   \param id [in] An OdBmObjectId object that contains the new owner symbol identifier to be set.
   \returns eOk if the new owner symbol identifier was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setOwnerSymbolId(const OdBmObjectId&);
  /** \details
    Retrieves the identifier of the regeneration group.
    \returns An OdBmObjectId object that contains the regeneration group identifier.
  */
  OdBmObjectId getRegeneratingGroupId() const;
  /** \details
    Retrieves family's document.
    \returns A smart pointer to an OdBmFamilyDocument object.
  */
  OdBmFamilyDocumentPtr getFamilyDocument() const;
  /** \details
    Retrieves the reference to the face geometry of the family's host.
    \returns A smart pointer to an OdBmObject object that contains the host face geometry.
  */
  OdBmObjectPtr getHostFaceGeomRef() const;
  /** \details
    Retrieves the current parameters of the family.
    \returns A smart pointer to an OdBmFamilyParams object that contains the family parameters.
  */
  OdBmFamilyParamsPtr getFamilyParams() const;
  /** \details
   Sets new family parameters.
   \param params [in] A smart pointer to an OdBmFamilyParams object that represents family parameters to be set.
   \returns eOk if the new parameters were successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setFamilyParams(const OdBmFamilyParamsPtr&);
  /** \details
    Retrieves the family types. 
    \returns A smart pointer to an OdBmFamilyTypeTable object that represents the family types table.
  */
  OdBmFamilyTypeTablePtr getFamilyTypes() const;
  /** \details
   Sets a new family type table.
   \param types [in] A smart pointer to an OdBmFamilyTypeTable object that represents a new family type table to be set.
   \returns eOk if the new type table was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setFamilyTypes(const OdBmFamilyTypeTablePtr&);
  /** \details
    Retrieves the set of the family identifiers.
    \returns A smart pointer to an OdBmElementIdIndexPairSet object that represents the set of the family identifiers.
  */
  void getFamilyIds(OdBmMap<OdBmObjectId, OdInt32> &) const;
  /** \details
    Sets a new set of family identifiers.
    \param ids [in] A smart pointer to an OdBmElementIdIndexPairSet object that contains a new set of the family identifiers to be set.
    \returns eOk if the new set of family identifiers was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setFamilyIds(const OdBmMap<OdBmObjectId, OdInt32>&);
  /** \details
    Retrieves the array of trivial parameter identifiers for the family.
    \param params [out] An OdBmObjectIdArray object that contains trivial parameter identifiers.
    \remarks
    The method fills the passed OdBmObjectIdArray object with trivial parameter identifiers and returns it to a calling subroutine.
  */
  void getTrivialParamIds(OdBmObjectIdArray &) const;
  /** \details
    Retrieves the identifiers of deletable elements for the family.
    \param elements [out] An OdBmObjectIdArray object that contains identifiers of deletable elements.
    \remarks
    The method fills the passed OdBmObjectIdArray object with identifiers of deletable elements and returns it to a calling subroutine.
  */
  void getDeletableElements(OdBmObjectIdArray &) const;
  /** \details
    Retrieves the array that contains identifiers of the old curves with bad sketches.
    \param array [out] An OdBmObjectIdArray object that contains identifiers of the old curves with bad sketches.
    \remarks
    The method fills the passed OdBmObjectIdArray object with identifiers of the old curves with bad sketches and returns it to a calling subroutine.
  */
  void getOldCurveElemsWithBadSketchAndSP(OdBmObjectIdArray &) const;
  /** \details
    Retrieves the array that contains identifiers of the locked parameters for direct manipulation.
    \param array [out] An OdBmObjectIdArray object that contains identifiers of the locked parameters for direct manipulation.
    \remarks
    The method fills the passed OdBmObjectIdArray object with identifiers of the locked parameters for direct manipulation and returns it to a calling subroutine.
  */
  void getLockedParameterIdsForDirectManipulation(OdBmObjectIdArray &) const;
  /** \details
    Retrieves FsDos.
    \param array [out] An array of smart pointers to OdBmObject instances.
    \remarks
    The method fills the passed array of smart pointers to OdBmObject instances and returns it to a calling subroutine.
  */
  void getFsDos(OdArray<OdBmObjectPtr> &) const;
  /** \details
    Retrieves the current curve attachment point tag.
    \returns A double value that represents the current curve attachment point tag.
  */
  double getTagCurveAttachmentProportion() const;
  /** \details
    Sets a new curve attachment point tag.
    \param tag [in] A double value that represents the new value of the curve attachment point tag to be set.
    \returns eOk if the new value of the curve attachment point tag was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setTagCurveAttachmentProportion(double);
  /** \details
    Retrieves the family documentation global unique identifier (GUID).
    \returns An OdGUID object that represents the family documentation GUID.
  */
  OdGUID getFamilyDocGUID() const;
  /** \details
    Sets a new family documentation global unique identifier (GUID).
    \param guid [in] An OdGUID object that represents the family documentation GUID to be set.
    \returns eOk if the new documentation GUID was successfully set; otherwise, the method returns an appropriate error code.
  */
  OdResult setFamilyDocGUID(const OdGUID&);
  OdString getFamilyCatalogKeysItem(OdUInt32 idx) const;
  /** \details 
    Retrieves a BimRv database object associated with the family.
    \returns A raw pointer to an OdBmDatabase object.
  */
  OdBmDatabase* getDatabase2() const;
  /** \details 
    Associates a specified BimRv database with the family.
    \param database [in] A raw pointer to the BimRv database object.
    \returns eOk if the database was successfully set for the family; otherwise, the method returns an appropriate error code.
  */
  OdResult setDatabase2(OdBmDatabase*);
  /** \details
    Retrieves the array of DB Views.
    \param views [out] An array of smart pointers to OdBmObject instances, which represent DB Views.
    \remarks
    The method fills the passed array with smart pointers to OdBmObject instances with information about DB Views and returns it to a calling subroutine.
  */
  void getDBViewInfos(OdArray<OdBmObjectPtr> &) const;
  /** \details
    Sets a new array of DB Views for the family.
    \param views [in] An array of smart pointers to OdBmObject instances, which represent DB Views.
    \returns eOk if the new array of DB Views was successfully set for the family; otherwise, the method returns an appropriate error code.
  */
  OdResult setDBViewInfos(const OdArray<OdBmObjectPtr>&);
  /** \details
    Retrieves the text of the family name key.
    \returns A string that contains the family name key text.
  */
  OdString getFamilyNameKeyText() const;
  /** \details
    Retrieves the current structural code name of the family.
    \returns A string that contains the structural code name.
  */
  OdString getStructuralCodeName() const;
  /** \details
    Retrieves whether the family is self-oriented.
    \returns true if the family is self-oriented; otherwise, the method returns false.
  */
  bool getIsSelfOrienting() const;
  bool getRotateTagTextWithComponent() const;
  //
  // Main functionality
  //

  /** \details
    Checks whether a specified identifier is registered in the family.
    \param id [in] An identifier to be checked.
    \returns true if the specified identifier is registered in the family; otherwise the method returns false.
  */
  bool isRegistred(const OdBmObjectId&) const;

  /** \details
    Registers a specified identifier in the family.
    \param id [in] An identifier to be registered.
    \return true if registration was successful or false in other cases.
  */
  bool registerId(const OdBmObjectId&);
};


#endif // _BM_FAMILYBASE_H_

