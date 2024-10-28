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

#ifndef _BM_GPOINTCLOUD_H_
#define _BM_GPOINTCLOUD_H_
#include "Geometry/Entities/BmGNode.h"



class OdBmGPointCloud;
class OdBmGPointCloudImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGPointCloud object.
 */
typedef OdSmartPtr<OdBmGPointCloud> OdBmGPointCloudPtr;

/** \details
 A data type that represents an array of OdBmGPointCloud objects.
 */
typedef OdArray<OdBmGPointCloudPtr> OdBmGPointCloudPtrArray;

//----------------------------------------------------------
//
// OdBmGPointCloud
//
//----------------------------------------------------------

/** \details
    This class stores geometry data of a cloud of points.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGPointCloud : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGPointCloud);
public:
  /** \details
    Returns the cloud outline as an object of the OdGeExtents3d class.
  */
  OdGeExtents3d getOutline() const;
  /** \details
    Returns point cloud information as a pointer to an OdBmObject object.
  */
  OdBmObjectPtr getPCInfo() const;
  /** \details
    Returns the clip filter as a pointer to an OdBmObject object.
  */
  OdBmObjectPtr getClipFilter() const;
  /** \details
    Returns the hilite filter as a pointer to an OdBmObject object.
  */
  OdBmObjectPtr getHiliteFilter() const;
  //
  // Main functionality
  //


};


#endif // _BM_GPOINTCLOUD_H_

