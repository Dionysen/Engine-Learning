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

#ifndef _BM_COMPOUNDSTRUCTURE_H_
#define _BM_COMPOUNDSTRUCTURE_H_
#include "Base/BmObject.h"

class OdBmVerticalRegionsStructure;
typedef OdSmartPtr<OdBmVerticalRegionsStructure> OdBmVerticalRegionsStructurePtr;
class OdBmCompoundStructureLayer;
typedef OdSmartPtr<OdBmCompoundStructureLayer> OdBmCompoundStructureLayerPtr;
class OdBmSegmentIdAndRefFaceKey;
typedef OdSmartPtr<OdBmSegmentIdAndRefFaceKey> OdBmSegmentIdAndRefFaceKeyPtr;
class OdBmObjectId;
class OdBmCmColor;

class OdBmCompoundStructure;
class OdBmCompoundStructureImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmCompoundStructure object.
 */
typedef OdSmartPtr<OdBmCompoundStructure> OdBmCompoundStructurePtr;

/** \details
 A data type that represents an array of OdBmCompoundStructure objects.
 */
typedef OdArray<OdBmCompoundStructurePtr> OdBmCompoundStructurePtrArray;

//----------------------------------------------------------
//
// OdBmCompoundStructure
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmCompoundStructure : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmCompoundStructure);
public:
  OdBmVerticalRegionsStructurePtr getVertRegStructure() const;
  void getLayers(OdArray<OdBmCompoundStructureLayerPtr> &) const;
  OdResult setLayers(const OdArray<OdBmCompoundStructureLayerPtr>&);
  OdBmObjectId getCoarseScaleFillPatternElemId() const;
  OdBmCmColor getCoarseScaleFillColor() const;
  OdInt32 getEndCap() const;
  OdInt32 getOpeningWrapping() const;
  OdInt32 getNumShellLayersExt() const;
  OdInt32 getNumShellLayersInt() const;
  OdInt32 getVariableLayerIdx() const;
  OdInt32 getStructuralMaterialLayerIndex() const;
  void getSegRefFaceKeys(OdArray<OdBmSegmentIdAndRefFaceKeyPtr> &) const;
  void getSegRefFaceKeysPre40(OdArray<OdBmSegmentIdAndRefFaceKeyPtr> &) const;
  //
  // Main functionality
  //

  /** \details
    Calculates width of a CompoundStructure.
    
    \returns Width of a CompoundStructure.
  */
  double getWidth() const;
  
  /** \details
    Retrieves a material id of a layer.
    
    \param layerIndex [in] Index of a layers, which material needs to be obtained.
    
    \returns Id of material of a layer.
  */
  OdBmObjectId getMaterialId(OdInt layerIndex) const;
  
  /** \details
    Sets a material id of a layer.
    
    \param layerIndex [in] Index of a layers, which material needs to be obtained.
    \param materialId [in] Id of a material to be set to a layer.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setMaterialId(const OdUInt32 layerIndex, const OdBmObjectId& materialId);

  /** \details
    Calculates the number of layers contained in the CompoundStructure.
    
    \returns Number of layers contained in the CompoundStructure.
  */  
  unsigned int getNumLayers() const;
  
  /** \details
    Finds the index of the first core layer.
    
    \returns Index of the first core layer. 
  */
  OdInt32 getFirstCoreLayerIndex() const;
  
  /** \details
    Finds the index of the last core layer.
    
    \returns index of the last core layer.
  */
  OdInt32 getLastCoreLayerIndex() const;
  
  /** \details
    Retrieves the width of the specified layer.
    
    \param iIdx [in] Index of a layer, which width needs to be calculated.
    
    \returns  Width of the specified layer
  */
  double getLayerWidth(unsigned int iIdx) const;

  /** \details
    Checks if CompoundStructure represents a layout that is not a simple set of parallel layers.
    
    \returns True if the condition holds. False - otherwise.
  */
  bool isVerticallyCompound() const;
};


#endif // _BM_COMPOUNDSTRUCTURE_H_

