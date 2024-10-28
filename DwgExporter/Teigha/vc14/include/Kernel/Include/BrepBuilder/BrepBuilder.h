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

#ifndef _BREPBUILDER_H_
#define _BREPBUILDER_H_

#include "OdaCommon.h"
#include "BrepBuilderExport.h"
#include "Ge/GeCurve3d.h"
#include "CmColorBase.h"
#include "OdResult.h"
#include "TD_PackPush.h"

class OdDbStub;
class OdGiMapper;

/** \details
  Defines brep object types.

  <group OdBrepBuilder_Classes>
*/
enum BrepType
{
  /** The output geometry is an open shell. */
  kOpenShell,
  /** The output geometry is an solid. */
  kSolid,
  /** The output geometry is an void (i.e., an inverted solid). */
  kVoid
};

typedef OdUInt32 BRepBuilderGeometryId;

/** \details
BrepBuilderErrorsHolder contains information about errors found during validation.

<group OdBrepBuilder_Classes>
*/
struct BREPBUILDEREXPORT BrepBuilderErrorsHolder
{
public:
  static const BRepBuilderGeometryId kInvalidId = BRepBuilderGeometryId(-1);

  /** \details
  Creates a new instance of a BrepBuilderErrorsHolder object with default parameters.
  */
  BrepBuilderErrorsHolder()
    : m_errorCode(::eOk)
    , m_complexId(kInvalidId)
    , m_shellId(kInvalidId)
    , m_faceId(kInvalidId)
    , m_loopId(kInvalidId)
    , m_edgeId(kInvalidId)
    , m_coedgeId(kInvalidId)
    , m_errorMessage("")
  {};

  /** \details
  Creates a new instance of a BrepBuilderErrorsHolder object with given parameters.

    \param errCode   [in] Error code.
    \param errMsg    [in] Error message.
    \param complexId [in] Complex Id. Optional parameter
    \param shellId   [in] Shell Id. Optional parameter.
    \param faceId    [in] Face Id. Optional parameter.
    \param loopId    [in] Loop Id. Optional parameter.
    \param edgeId    [in] Edge Id. Optional parameter.
    \param coedgeId  [in] Coedge Id. Optional parameter.
  */
  explicit BrepBuilderErrorsHolder(OdResult errCode, const OdString &errMsg = "",
    BRepBuilderGeometryId complexId = kInvalidId,
    BRepBuilderGeometryId shellId = kInvalidId,
    BRepBuilderGeometryId faceId = kInvalidId,
    BRepBuilderGeometryId loopId = kInvalidId,
    BRepBuilderGeometryId edgeId = kInvalidId,
    BRepBuilderGeometryId coedgeId = kInvalidId)
  {
    m_errorCode = errCode;
    m_complexId = complexId;
    m_shellId = shellId;
    m_faceId = faceId;
    m_loopId = loopId;
    m_edgeId = edgeId;
    m_coedgeId = coedgeId;
    m_errorMessage = errMsg;
  };

  OdResult m_errorCode;
  BRepBuilderGeometryId m_complexId;
  BRepBuilderGeometryId m_shellId;
  BRepBuilderGeometryId m_faceId;
  BRepBuilderGeometryId m_loopId;
  BRepBuilderGeometryId m_edgeId;
  BRepBuilderGeometryId m_coedgeId;
  OdString m_errorMessage;
};

typedef OdArray <BrepBuilderErrorsHolder> ValidationErrors;


/** \details
  A class that allows direct construction of geometry objects (solids, surfaces or open shells).

<group OdBrepBuilder_Classes>
*/
class BREPBUILDEREXPORT OdBrepBuilder
{
public:
  BREPBUILDEREXPORT_STATIC static const BRepBuilderGeometryId kDefaultShellId;
  BREPBUILDEREXPORT_STATIC static const BRepBuilderGeometryId kDefaultVertexId;

  /** \details
    Creates a new instance of a OdBrepBuilder object with default parameters.
  */
  OdBrepBuilder();

  /** \details
    Destroys the OdBrepBuilder object.
  */
  ~OdBrepBuilder();

  /** \details
    Defines entity direction in relation to the parent entity.
  */
  enum EntityDirection
  {
    /** the direction of the entity is the same as direction of the parent entity */
    kForward,
    /** the direction of the entity is opposite to direction of the parent entity */
    kReversed
  };

  /** \details
    Returns type of output geometry.
  */
  BrepType getType();

  /** \details
    Sets the product-dependent implementation

    \param pFile [in] pointer to product-dependent implementation
  */
  void set(const void* pFile);

  /** \details
    Adds a coedge associated to a previously added edge. 
    A coedge represents the use of an edge on one of the edge's faces.

    \param loopId         [in] The Id of the loop which the added code belongs.
    \param edgeId         [in] The Id of the edge.
    \param codgeDirection [in] The coedge direction in relation to the edge.
    \param pParCur        [in] Pointer to paramectic curve. Optional parameter.
    \returns BRepBuilderGeometryId of added coedge.

    \remarks:
    OdError(eInvalidInput) exception throws if type of parametric curve(pParCur) is not supported by BrepBuilder implementation.
  */
  BRepBuilderGeometryId addCoedge(const BRepBuilderGeometryId& loopId, const BRepBuilderGeometryId& edgeId, EntityDirection codgeDirection = kForward, const OdGeCurve2d* pParCur = NULL);

  /** \details
    Adds a new edge to the geometry being built.

    \param pCurveForEdge  [in] Pointer to edge geometry (object-space curve).
    \returns BRepBuilderGeometryId of added edge.
  */
  BRepBuilderGeometryId addEdge(const OdGeCurve3d* pCurveForEdge);
  
  /** \details
    Adds a new edge to the geometry being built.

    \param pCurveForEdge  [in] Pointer to edge geometry (object-space curve).
    \param vertex1Id      [in] The Id of the first vertex.
    \param vertex2Id      [in] The Id of the second vertex.
    \returns BRepBuilderGeometryId of added edge.
  */
  BRepBuilderGeometryId addEdge(const OdGeCurve3d* pCurveForEdge, const BRepBuilderGeometryId& vertex1Id, const BRepBuilderGeometryId& vertex2Id);

  /** \details
    Adds a new vertex to the geometry being built.

    \param point  [in] 3d point
    \returns BRepBuilderGeometryId of added vertex.
  */
  BRepBuilderGeometryId addVertex(const OdGePoint3d& point);

  /** \details
    Creates an empty face in the geometry being built

    \param pSurf          [in] Pointer to the underlying surface.
    \param faceDirection  [in] Face's orientation in relation to underlying surface.
    \param shellId        [in] Shell Id.
    \returns BRepBuilderGeometryId of added face.
  */
  BRepBuilderGeometryId addFace(const OdGeSurface* pSurf, EntityDirection faceDirection, const BRepBuilderGeometryId& shellId = kDefaultShellId);

  /** \details
    Creates an empty loop in a given face of the geometry being built.

    \param faceId [in] Face Id.
    \returns BRepBuilderGeometryId of added face.
  */
  BRepBuilderGeometryId addLoop(const BRepBuilderGeometryId& faceId);

  /** \details
    Creates an empty shell.

    \param complexId [in] Complex Id.
    \returns BRepBuilderGeometryId of added face.
  */
  BRepBuilderGeometryId addShell(const BRepBuilderGeometryId& complexId);

  /** \details
    Creates an empty complex - upper topology element.

    \returns BRepBuilderGeometryId of added complex.
  */
  BRepBuilderGeometryId addComplex();

  /** \details
    Allows BRepBuilder to remove problematic faces (e.g., due to inaccurate edge geometry). 
    If this option is enabled and BRepBuilder removes some faces, 
    the output geometry's type will be OpenShell regardless of the expected type specified when the BRepBuilder was created.

    \remarks:
    Currently not implemented.
  */
  void allowRemovalOfProblematicFaces();
 
  /** \details
    A validator function that checks the state of this BRepBuilder object.

    \returns true if this BRepBuilder object is accepting brep data, false otherwise.
    \remarks:
    Currently not implemented.
  */
  bool canAddGeometry();

  /** \details
    Indicates that the caller has finished defining the given complex.

     \param complexId [in] Complex Id.
  */
  void finishComplex(const BRepBuilderGeometryId& complexId);

  /** \details
    Indicates that the caller has finished defining the given shell.

     \param shellId [in] Shell Id.
  */
  void finishShell(const BRepBuilderGeometryId& shellId);

  /** \details
    Indicates that the caller has finished defining the given face.

     \param faceId [in] Face Id.
  */
  void finishFace(const BRepBuilderGeometryId& faceId);

  /** \details
    Indicates that the caller has finished defining the given loop.

     \param loopId [in] Loop Id.
  */
  void finishLoop(const BRepBuilderGeometryId& loopId);
    
  /** \details
    Gets the Geometry object built by this BRepBuilder. This clears the built Geometry stored in the BRepBuilder.
    This function throws if this BRepBuilderGeometryId hasn't completed building the b-rep. Use IsResultAvailable() to verify that this BRepBuilder contains a valid result.

    \returns built entity specific for each product-dependent implementation
    \remarks
    Currently not implemented.
  */
  OdRxObjectPtr getResult();

  /** \details
    A validator function that checks whether the surface object is of type supported as face surface by BRepBuilder.
 
   \param pSurf [in] Pointer to surface object.
   \returns true if product-dependent implementation of brep builder can use this surface.

   \remarks
   Not implemented by default, but product-dependent implementation brep builder may have an their own implemetnations.
  */
  bool isPermittedSurfaceType(const OdGeSurface* pSurf);

  /** \details
    A validator function that checks the state of this BRepBuilder object.
    
    \returns true if this BRepBuilder object has successfully built a brep.
    \remarks
    Currently not implemented.
  */
  bool isResultAvailable();

  /** \details
    A validator function that checks whether the edge id corresponds to an edge previously added to this BRepBuilder object.

    \param edgeId [in] Edge Id.
    \returns true if edgeId has been already added.
  */
  bool isValidEdgeId(const BRepBuilderGeometryId& edgeId);

  /** \details
    A validator function that checks whether the complex id corresponds to a complex previously added to this BRepBuilder object.

    \param complexId [in] Complex Id.
    \returns true if complexId has been already added.
  */

  bool isValidComplexId(const BRepBuilderGeometryId& complexId);

  /** \details
    A validator function that checks whether the shell id corresponds to a shell previously added to this BRepBuilder object.
    
    \param shellId [in] Shell Id.
    \returns true if shellId has been already added.
  */
  bool isValidShellId(const BRepBuilderGeometryId& shellId);

  /** \details
    A validator function that checks whether the face id corresponds to a face previously added to this BRepBuilder object.

    \param faceId [in] Face Id.
    \returns true if faceId has been already added.
  */
  bool isValidFaceId(const BRepBuilderGeometryId& faceId);

  /** \details
    A validator function that checks whether the loop id corresponds to a loop previously added to this BRepBuilder object.
  
    \param loopId [in] Loop Id.
    \returns true if loopId has been already added.
  */
  bool isValidLoopId(const BRepBuilderGeometryId& loopId);

  /** \details
    This function removes  some problematic faces from the output geometry.

    \returns true if BRepBuilder removed some problematic faces, false if not.
    \remarks
    If allowRemovalOfProblematicFaces was not called to enable removal of problematic faces, this function will return 'false'. Note that if some faces were removed,
    the output geometry's type will be OpenShell regardless of the expected type that was specified when the BRepBuilder was created.
    Currently not implemented.
  */
  bool removedSomeFaces();

  /** \details
    Makes BRepBuilder allows edges that it would normally disallow as being too short for geometry.
    
    \remarks
    Currently not implemented.
  */
  void setAllowShortEdges();

  /** \details
    Sets material id to a face.

    \param faceId     [in] Face Id.
    \param materialId [in] Material Id.
  */
  void setFacesMaterial(const BRepBuilderGeometryId &faceId, OdDbStub &materialId);

  /** \details
    Sets material mapping for face.

    \param faceId         [in] Face Id.
    \param materialMapper [in] Material mapper.
    \returns eNotApplicable if not supported in implementation or material mapping is part of material,
             eOk if succes.
  */
  OdResult setFaceMaterialMapping(const BRepBuilderGeometryId &faceId,
    const OdGiMapper& materialMapper);

  /** \details
    Sets edge color.

    \param edgeId    [in] Edge Id.
    \param edgeColor [in] Edge color.
    \returns eNotApplicable if setEdgeColor not supported in implementation,
             eInvalidInput if color method not supported in implementation,
             eOk if success.
  */
  OdResult setEdgeColor(const BRepBuilderGeometryId& edgeId, const OdCmEntityColor& edgeColor);

  /** \details
    Sets face color.

    \param faceId    [in] Face Id.
    \param faceColor [in] Face color.
    /returns eNotApplicable if not supported in implementation or face color is part of material,
             eOk if success.
  */
  OdResult setFaceColor(const BRepBuilderGeometryId& faceId, const OdCmEntityColor& faceColor);

  /** \details
    Completes construction of the geometry. The geometry validates and, if valid, stores in this Builder.
    
    \returns built entity specific for each product-dependent implementation
  */
  OdRxObjectPtr finish();

  /** \details
    Sets initial tag value(it is used for faces and edges)

    \param indTag [in] Tag Id.
  */
  void setInitialTag(OdUInt32 indTag = 0);

  /** \details
    Sets tag value(it is used for faces and edges) MODE: kSetTagMode; 
    Use setTag just after addEdge and addFace calls.

    \param id  [in] brep builder entity Id.
    \param tag [in] tag.

    \remarks
    kSetTagMode and kAutoMode are incompatible. You cannot use methods setTag(...) and setInitialTag(...) at the same time.
  */
  void setTag(const BRepBuilderGeometryId &id, OdUInt32 tag);   

  /** \details
    Enables/disables validation in BRepBuilder
  
    \param bEnable [in] if true - enables validation.
  */
  void enableValidator(bool bEnable = true);

  /** \details
    Returns errors found during validation

    \returns pointer to ValidationErrors object that stores errors encountered during the validation.
  */
  const ValidationErrors *getValidationErrors() const;

  /** \details
    Checks state of product-dependent implementation

    \returns true if the product-dependent implementation isn't NULL
  */
  bool isValid() const;

protected:
    void* m_pImpl;
};

#include "TD_PackPop.h"

#endif //_BREPBUILDER_H_
