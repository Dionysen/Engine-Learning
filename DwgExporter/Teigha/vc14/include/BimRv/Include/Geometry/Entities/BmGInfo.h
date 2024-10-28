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

#ifndef _BM_GINFO_H_
#define _BM_GINFO_H_
#include "Geometry/Enums/BmGInfoFlags.h"
#include "Geometry/Enums/BmGInfoVisibility.h"
// BEGIN: Includes
#include "Base/BmObjectId.h"
// END: Includes
class OdBmObjectId;

//----------------------------------------------------------
//
// OdBmGInfo
//
//----------------------------------------------------------

/** \details
    This class stores information for OdBmGNode.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGInfo {
public:
  OdBmGInfo();
  OdBmGInfo(const OdBmGInfo& originalObject);
  OdBmGInfo& operator=(const OdBmGInfo& originalObject);
  bool operator==(const OdBmGInfo& other) const;
  bool operator!=(const OdBmGInfo& other) const;
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
  OdUInt32 getFlags() const;
  /** \details
    Sets object bit flags.

    \param OdUInt32 [in] Input flags.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setFlags(OdUInt32);
private:
  OdInt32 m_tag;
  OdInt32 m_controlCommand;
  OdBmObjectId m_categoryId;
  OdUInt32 m_flags;

  //
  // Main functionality
  //

public:
  OdBmGInfo(const OdInt32 tag, const OdInt32 controlCommand,
            const OdBmObjectId& categoryId, const OdUInt32 flags);

  //0x1E0 - VisibleTypes
  OdBm::GInfoVisibility::Enum getVisibility() const; //????


  /** \details
    Returns true if this object is able to be picked.
  */
  bool isPickable() const;
  /** \details
    Returns true if this object is transparent.
  */
  bool isTransparent() const;
  /** \details
    Returns true if this object has a mask.
  */
  bool isMasking() const;

  /** \details
    Returns true if this object is a reference.
  */
  bool isReference()  const;
  /** \details
    Returns true if this object is a handle.
  */
  bool isHandle() const;
  /** \details
    Returns true if this object contains controls.
  */
  bool containsControls() const;
  /** \details
    Returns true if this object is detailed.
  */
  bool isDetail() const;
  /** \details
  Returns true if this object is active.
  */
  bool isActive() const;
  /** \details
    Returns true if this object has no polygons in a photo renderer.
  */
  bool hasNoPolygonsInPhotoRenderer() const;
  /** \details
    Returns true if this object has a B-Box in control ID.
  */
  bool hasBBoxInControlId() const;
  /** \details
    Returns true if this object is a GNode model.
  */
  bool isModelGNode() const;

  /** \details
  Returns true if this object has two sides on rendering.
  */
  bool isDoubleSided() const;

  /** \details
  Returns true if this object has a specific screen.
  */
  bool isScreenSpecific() const;

  /** \details
    Returns true if this object has a double-click control.
  */
  bool isDblClkControl() const;
  /** \details
    Returns true if this object is bounded by a curve.
  */
  bool isCurveBounded() const;

  /** \details
    Returns true if this object is a snapping reference.
  */
  bool isSnappingRef() const;

  bool isHiPriHandle() const;
  /** \details
    Returns true if this object has a datum surface.
  */
  bool hasDatumSurface() const;
  /** \details
    Returns true if this object is a transparent surface.
  */
  bool isTransparentSurface() const;
  /** \details
    Returns true if this object is pickable transient.
  */
  bool isPickableTransient() const;

  /** \details
    Sets the GNode model flag to this object.

    \param bModel [in] Input GNode model flag.
  */
  void setModelGNode(bool bModel = true);

  /** \details
  Sets the ControlCommand to this object depending of Flags and Extents.

  \param aOutline [in] Reference to extents (bounding box).
  */
  OdResult calculateControlCommand(const OdGeExtents3d& aOutline);

  /** \details
    Returns true if input flag from GInfoFlags enumeration is set.

    \param aFlag [in] Input flag.
  */
  bool isFlagSet(OdBm::GInfoFlags::Enum aFlag) const;

  /** \details
    Sets on the input flag from GInfoFlags enumeration.

    \param aFlag [in] Input flag.
  */
  void setFlag(OdBm::GInfoFlags::Enum aFlag);

  /** \details
    Resets the input flag from GInfoFlags enumeration.

    \param aFlag [in] Input flag.
  */
  void resetFlag(OdBm::GInfoFlags::Enum aFlag);

  /** \details
    Returns a pointer to the current database.
  */
  OdDbBaseDatabase* database() const;

  /** \details
    Returns GsMarker.
  */
  OdGsMarker getGsMarker() const;
};


#endif // _BM_GINFO_H_

