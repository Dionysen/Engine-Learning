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

#ifndef _BM_GNODE_H_
#define _BM_GNODE_H_
#include "Base/BmObject.h"
#include "Geometry/Entities/BmGInfo.h"
#include "Geometry/Enums/BmGInfoFlags.h"
#include "Geometry/Enums/BmGInfoVisibility.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGStyle.h"
// END: Includes



class OdBmGNode;
class OdBmGNodeImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGNode object.
 */
typedef OdSmartPtr<OdBmGNode> OdBmGNodePtr;

/** \details
 A data type that represents an array of OdBmGNode objects.
 */
typedef OdArray<OdBmGNodePtr> OdBmGNodePtrArray;

class OdBmGEdgeLoop;
typedef OdSmartPtr<OdBmGEdgeLoop> OdBmGEdgeLoopPtr;

class OdBmGEdge;
typedef OdSmartPtr<OdBmGEdge> OdBmGEdgePtr;
typedef OdArray<OdBmGEdgePtr> OdBmGEdgePtrArray;

class OdBmFace;
typedef OdSmartPtr<OdBmFace> OdBmFacePtr;
typedef OdArray<OdBmFacePtr> OdBmFacePtrArray;

class OdBmObjectId;


//----------------------------------------------------------
//
// OdBmGNode
//
//----------------------------------------------------------

/** \details
    This is the base class for all objects in GElement.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGNode : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGNode);
public:
  /** \details
    Returns the geometry information as an OdBmGInfo object.
  */
  OdBmGInfo getGInfo() const;
  //
  // Main functionality
  //

public:
  /** \details
    Returns the visibility of BmGNode.
  */
  OdBm::GInfoVisibility::Enum getVisibility() const;

  /** \details
    Returns the object tag as an OdInt32 value.
  */
  OdInt32 getTag() const;
  /** \details
    Sets an object tag.
    
    \param OdInt32 [in] Input object tag.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setTag(OdInt32);
  /** \details
    Returns the control command as an OdInt32 value.
  */
  OdInt32 getControlCommand() const;
  /** \details
    Sets a control command to this object.
    
    \param OdInt32 [in] Input control command.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setControlCommand(OdInt32);
  /** \details
    Returns the ID of a category as an object of the OdBmObjectId class.
  */
  OdBmObjectId getCategoryId() const;
  /** \details
    Sets a category ID to this object.

    \param OdBmObjectId [in] Input category ID.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setCategoryId(const OdBmObjectId&);
  /** \details
    Returns the set of bit flags as an OdUInt32 value.
  */
  OdUInt32 getGInfoFlags() const;
  /** \details
    Sets object bit flags.

    \param OdUInt32 [in] Input flags.
    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setGInfoFlags(OdUInt32);

  OdResult setGInfoFlag(OdBm::GInfoFlags::Enum iFlag);

  OdResult resetGInfoFlag(OdBm::GInfoFlags::Enum iFlag);

  /** \details
    Sets the model flag to this object.

    \param bModel [in] Input model flag.
  */
  void setModelGNode(bool bModel = true);

  // Guaranteed return id referenced to GStyleElem
  OdBmObjectId getGStyleId() const;

  bool hasGStyle() const;

  /** \details
    Returns GsMarker for current GNode.
  */
  OdGsMarker getGsMarker() const;

  /** \details
    Returns GNode by GsMarker.

    \param OdBmGNodePtr [out] GNode.
    \param OdGsMarker [in] marker to look for GNode by.
    \returns Returns eOk if current GNode or subnodes have given marker, eKeyNotFound otherwise.
  */
  OdResult getGNodeByMarker(OdBmGNodePtr& pGNode, OdGsMarker marker) const;
};


#endif // _BM_GNODE_H_

