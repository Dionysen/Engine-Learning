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

#ifndef _BM_SWEPTBLENDELEM_H_
#define _BM_SWEPTBLENDELEM_H_
#include "Database/Entities/BmGenSweep.h"
// BEGIN: Includes
#include "Geometry/Entities/BmGCurve.h"
// END: Includes

class OdBmProfileData;
typedef OdSmartPtr<OdBmProfileData> OdBmProfileDataPtr;
class OdBmVtxConnections;
typedef OdSmartPtr<OdBmVtxConnections> OdBmVtxConnectionsPtr;
class OdBmObjectId;

class OdBmSweptBlendElem;
class OdBmSweptBlendElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmSweptBlendElem object.
 */
typedef OdSmartPtr<OdBmSweptBlendElem> OdBmSweptBlendElemPtr;

/** \details
 A data type that represents an array of OdBmSweptBlendElem objects.
 */
typedef OdArray<OdBmSweptBlendElemPtr> OdBmSweptBlendElemPtrArray;

//----------------------------------------------------------
//
// OdBmSweptBlendElem
//
//----------------------------------------------------------

/** \details
    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmSweptBlendElem : public OdBmGenSweep {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmSweptBlendElem);
public:
  void getProfileData(OdArray<OdBmProfileDataPtr> &) const;
  OdBmObjectId getPathSketchId() const;
  OdBmObjectId getPath3dId() const;
  OdBmVtxConnectionsPtr getVtxConnections() const;
  //
  // Main functionality
  //

   /*Sets data for sweptBlend creation.

     \param pPath [in] path curve.
     \param aBotTopProfiles [in] array of 2 profiles (bottom and top).
     \param idSketchPlane [in] id of SketchPlane for path.

     \returns Returns eOk if successful or an appropriate error code otherwise.
  */
  OdResult set(const OdBmGCurvePtr &pPath,
    const OdArray<OdBmGCurvePtrArray>& aBotTopProfiles,
    const OdBmObjectId idSketchPlane);

  /** \details
   Sets data for sweptBlend creation.

     \param pPath [in] path curve.
     \param aBotTopProfiles [in] array of 2 profiles (bottom and top).
     \param idSketchPlane [in] id of SketchPlane for path.
     \param pConnections [in] Input vertex connections.

     \returns Returns eOk if successful or an appropriate error code otherwise.
  */
  OdResult set(const OdBmGCurvePtr &pPath,
    const OdArray<OdBmGCurvePtrArray>& aBotTopProfiles,
    const OdBmObjectId idSketchPlane, const OdBmVtxConnectionsPtr &pConnections);

  /** \details
  Sets vertex connections to swept blend element
    \param pConnections [in] Input vertex connections.
  */
  void setVtxConnections(const OdBmVtxConnectionsPtr &pConnections);
};


#endif // _BM_SWEPTBLENDELEM_H_

