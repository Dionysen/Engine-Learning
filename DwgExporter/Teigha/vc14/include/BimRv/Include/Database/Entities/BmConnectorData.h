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

#ifndef _BM_CONNECTORDATA_H_
#define _BM_CONNECTORDATA_H_
#include "Base/BmObject.h"



class OdBmConnectorData;
class OdBmConnectorDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmConnectorData object.
 */
typedef OdSmartPtr<OdBmConnectorData> OdBmConnectorDataPtr;

/** \details
 A data type that represents an array of OdBmConnectorData objects.
 */
typedef OdArray<OdBmConnectorDataPtr> OdBmConnectorDataPtrArray;

//----------------------------------------------------------
//
// OdBmConnectorData
//
//----------------------------------------------------------

/** \details
This class contains connector matrix and index.

    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmConnectorData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmConnectorData);
public:
  /** \details
    Returns connector matrix.
    
    \returns connector matrix.
  */
  OdGeMatrix3d getTrf() const;
  /** \details
    Sets connector matrix.
    
    \param OdGeMatrix3d [in] connector matrix.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setTrf(const OdGeMatrix3d&);
  /** \details
    Returns connector index.
    
    \returns connector index.
  */
  OdInt32 getIndex() const;
  /** \details
    Sets connector index.
    
    \param OdInt32 [in] connector index.
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setIndex(OdInt32);
  //
  // Main functionality
  //
};
#endif // _BM_CONNECTORDATA_H_

