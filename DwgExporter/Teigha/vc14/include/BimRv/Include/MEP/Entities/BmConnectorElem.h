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

#ifndef _BM_CONNECTORELEM_H_
#define _BM_CONNECTORELEM_H_
#include "Database/BmElement.h"
#include "MEP/Enums/BmConnectorProfileType.h"
#include "MEP/Enums/BmDuctSystemType.h"
#include "MEP/Enums/BmElectricalSystemType.h"
#include "MEP/Enums/BmPipeSystemType.h"
// BEGIN: Includes
#include "Database/BmDatabase.h"
#include "Database/Entities/BmConnectorData.h"
#include "MEP/Entities/BmConnectorElemDomain.h"
// END: Includes

class OdBmPlaneRef;
typedef OdSmartPtr<OdBmPlaneRef> OdBmPlaneRefPtr;
class OdBmEdgeLoopRef;
typedef OdSmartPtr<OdBmEdgeLoopRef> OdBmEdgeLoopRefPtr;
class OdBmFace;
typedef OdSmartPtr<OdBmFace> OdBmFacePtr;
class OdBmConnectorElemDomain;
typedef OdSmartPtr<OdBmConnectorElemDomain> OdBmConnectorElemDomainPtr;
class OdBmObjectId;

class OdBmConnectorElem;
class OdBmConnectorElemImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmConnectorElem object.
 */
typedef OdSmartPtr<OdBmConnectorElem> OdBmConnectorElemPtr;

/** \details
 A data type that represents an array of OdBmConnectorElem objects.
 */
typedef OdArray<OdBmConnectorElemPtr> OdBmConnectorElemPtrArray;

//----------------------------------------------------------
//
// OdBmConnectorElem
//
//----------------------------------------------------------

/** \details
    <group MEP_Classes>
*/
class TB_MEP_EXPORT OdBmConnectorElem : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmConnectorElem);
public:
  OdBmPlaneRefPtr getPlaneRef() const;
  OdBmEdgeLoopRefPtr getEdgeLoopRef() const;
  OdBmFacePtr getFaceU() const;
  OdBmFacePtr getFaceV() const;
  OdBmConnectorElemDomainPtr getDomain() const;
  double getGrepSize() const;
  OdInt32 getIndex() const;
  OdInt32 getReservedTag() const;
  OdBmObjectId getIdLinkedElem() const;
  OdBmObjectId getIdPrimaryElem() const;
  //
  // Main functionality
  //

  /** \details
    Creates a pipe connector.

      \param pDb [in] Input pointer to a current database.
      \param system [in] Input pipe system type.
      \param subentPath [in] Input subentry path.
  */
  static OdBmConnectorElemPtr createPipeConnector(OdBmDatabasePtr& pDb, OdBm::PipeSystemType::Enum system, OdBmFullSubentPath subentPath);

  /** \details
    Creates a duct connector.

      \param pDb [in] Input pointer to a current database.
      \param system [in] Input duct system type.
      \param profileType [in] Input connector profile type.
      \param subentPath [in] Input subentry path.
  */
  static OdBmConnectorElemPtr createDuctConnector(OdBmDatabasePtr& pDb, OdBm::DuctSystemType::Enum system, OdBm::ConnectorProfileType::Enum profileType, OdBmFullSubentPath subentPath);

  /** \details
    Creates an electrical connector.

      \param pDb [in] Input pointer to a current database.
      \param system [in] Input electrical system type.
      \param subentPath [in] Input subentry path.
  */
  static OdBmConnectorElemPtr createElectricalConnector(OdBmDatabasePtr& pDb, OdBm::ElectricalSystemType::Enum system, OdBmFullSubentPath subentPath);

  /** \details
    Creates a conduit connector.

      \param pDb [in] Input pointer to a current database.
      \param subentPath [in] Input subentry path.
  */
  static OdBmConnectorElemPtr createConduitConnector(OdBmDatabasePtr& pDb, OdBmFullSubentPath subentPath);

  /** \details
    Creates a cable tray connector.

      \param pDb [in] Input pointer to a current database.
      \param subentPath [in] Input subentry path.
  */
  static OdBmConnectorElemPtr createCableTrayConnector(OdBmDatabasePtr& pDb, OdBmFullSubentPath subentPath);

  /** \details
    Sets this connector as a primary object.
  */
  OdResult assignAsPrimary();

  /** \details
    Flips connector direction.
  */
  OdResult flipDirection();

  /** \details
    Retrieves connector data of the connector element.

      \param pConnectorData [out] Connector data.
      \returns eOk if connector data retrieved successfully, eNotHandled otherwise.
  */
  OdResult getConnectorData(OdBmConnectorDataPtr& pConnectorData) const;

  /** \details
    Returns connector coordinate system.

      \param coordSystem [out] Connector coordinate system matrix.
      \returns eOk if connector data retrieved successfully, eNotHandled otherwise.
  */
  OdResult getCoordinateSystem(OdGeMatrix3d& coordSystem) const;

  /** \details
    Returns connector direction.

      \param direction [out] Connector direction vector.
      \returns eOk if connector data retrieved successfully, eNotHandled otherwise.
  */
  OdResult getDirection(OdGeVector3d& direction) const;

  /** \details
    Returns connector origin.

      \param origin [out] Connector origin point.
      \returns eOk if connector data retrieved successfully, eNotHandled otherwise.
  */
  OdResult getOrigin(OdGePoint3d& origin) const;
};
#endif // _BM_CONNECTORELEM_H_

