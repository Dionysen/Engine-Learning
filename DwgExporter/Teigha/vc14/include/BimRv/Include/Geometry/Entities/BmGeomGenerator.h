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

#ifndef _BM_GEOMGENERATOR_H_
#define _BM_GEOMGENERATOR_H_
#include "Base/BmObject.h"
#include "Geometry/Entities/BmFaceHistEntry.h"
#include "Geometry/Entities/BmCurveHistEntry.h"
#include "Geometry/Entities/BmEdgeHistEntry.h"



class OdBmGeomGenerator;
class OdBmGeomGeneratorImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGeomGenerator object.
 */
typedef OdSmartPtr<OdBmGeomGenerator> OdBmGeomGeneratorPtr;

/** \details
 A data type that represents an array of OdBmGeomGenerator objects.
 */
typedef OdArray<OdBmGeomGeneratorPtr> OdBmGeomGeneratorPtrArray;

//----------------------------------------------------------
//
// OdBmGeomGenerator
//
//----------------------------------------------------------

/** \details
Geometry generator class.

    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGeomGenerator : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGeomGenerator);
public:
  /** \details
  Creates a faceHist table.
  \param faceHistTable [out] Array to store the table.
  */
  void getFaceHistTable(OdArray<OdBmFaceHistEntry> &) const;
  /** \details
  Creates a curveHist table.
  \param curveHistTable [out] Array to store the table.
  */
  void getCurveHistTableSet(OdArray<OdBmCurveHistEntry> &) const;
  /** \details
  Creates an edgeHist table.
  \param edgeHistTable [out] Array to store the table
  */
  void getEdgeHistTable(OdArray<OdBmEdgeHistEntry> &) const;
  /** \details
  Creates a reverse edgeHist table.
  \param edgeHistTable [out] Array to store the table.
  */
  void getEdgeHistTableReverse(OdArray<OdBmEdgeHistEntry> &) const;
  /** \details
  Returns the id as OdInt32.
  */
  OdInt32 getId() const;
  //
  // Main functionality
  //

  /** \details
  Appends a face to a faceHist by id.
  
  \param faceHist [in/out] A reference to a faceHist.
  \param id [in] A face id.
  \param forceAppend [in] Flag, whether to perform a force append.
  
  \returns eOk if the operation is successful, or an appropriate error code otherwise.
  */
  OdResult append(const OdBmFaceHist& faceHist, const OdInt32 id, const bool forceAppend = true);
  
  /** \details
  Appends an edge to a edgeHist by id.
  
  \param faceHist [in/out] A reference to a edgeHist.
  \param id [in] An edge id.
  \param forceAppend [in] Flag, whether to perform a force append.
  
  \returns eOk if the operation is successful, or an appropriate error code otherwise.
  */
  OdResult append(const OdBmEdgeHist& edgeHist, const OdInt32 id, const bool forceAppend = true);
  
  /** \details
  Appends a curve to a curveHist by id.
  
  \param faceHist [in/out] A reference to a curveHist.
  \param id [in] A curve id.
  \param forceAppend [in] Flag, whether to perform a force append.
  
  \returns eOk if the operation is successful, or an appropriate error code otherwise.
  */
  OdResult append(const OdBmCurveHist& curveHist, const OdInt32 id, const bool forceAppend = true);
  
  /** \details
  Returns a faceHist by id.
  
  \param faceHist [out] Output faceHist.
  \param id [in] Input id of a face.
  
  \returns eOk if the operation is successful, or an appropriate error code otherwise.
  */
  OdResult getHistById(OdBmFaceHist& faceHist, const OdInt32 id) const;
  
  /** \details
  Returns an edgeHist by id.
  
  \param edgeHist [out] Output edgeHist.
  \param id [in] Input id of an edge.
  
  \returns eOk if the operation is successful, or an appropriate error code otherwise.
  */
  OdResult getHistById(OdBmEdgeHist& edgeHist, const OdInt32 id) const;
  
  /** \details
  Returns a curveHist by id.
  
  \param curveHist [out] Output curveHist.
  \param id [in] Input id of a curve.
  
  \returns eOk if the operation is successful, or an appropriate error code otherwise.
  */
  OdResult getHistById(OdBmCurveHist& curveHist, const OdInt32 id) const;

  /** \details
    Returns the tag of the face of the corresponding FaceHist.

    \param faceId [out] Output tag of face.
    \param faceHist [in] Input FaceHist.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getFirstFaceId(OdInt32& faceId, const OdBmFaceHist& faceHist) const;
};
#endif // _BM_GEOMGENERATOR_H_

