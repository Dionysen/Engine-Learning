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

#ifndef _BM_ES_ENTITYHELPER_H_
#define _BM_ES_ENTITYHELPER_H_

#include "Base/BmObject.h"
#include "Common/Enums/BmDisplayUnitType.h"
#include "Database/BmESSchemaHelper.h"
#include "Database/Enums/BmESSchemaAccessLevel.h"

class OdBmESEntityHelperImpl;

/** \details
    <group Database_Classes>

  Description:
  This class is used to create Schemas in the Extensible Storage framework.
*/
class TB_DB_EXPORT OdBmESEntityHelper {
public:
  /** \details
    Constructor for OdBmESEntityHelper.

    \param pESEntity [in] An entity to initialize.
  */
  OdBmESEntityHelper(const OdBmObjectPtr& pESEntity);

  /** \details
    Destructor for OdBmESEntityHelper.
  */
  ~OdBmESEntityHelper();

  /** Description:
    Returns a helper for an entity schema.
  */
  OdBmESSchemaHelper getSchema() const;

  /** Description:
    Sets a value of the specified field.

    \param fieldName [in] Name of a field.
    \param value [in] Input value.
    \param valueDUT [in] Set to DUT_UNDEFINED.
  */
  template <class T>
  TB_DB_EXPORT void set(const OdString& fieldName, const T& value,
                        const OdBm::DisplayUnitType::Enum valueDUT =
                            OdBm::DisplayUnitType::DUT_UNDEFINED);

  /** Description:
    Returns the value of the specified field.

    \param fieldName [in] Name of a field.
    \param valueDUT [in] Set to DUT_UNDEFINED.
  */
  template <typename T>
  TB_DB_EXPORT T get(const OdString& fieldName,
                     const OdBm::DisplayUnitType::Enum valueDUT =
                         OdBm::DisplayUnitType::DUT_UNDEFINED) const;

private:
  inline OdBmESEntityHelperImpl* getImpl() {
    return reinterpret_cast<OdBmESEntityHelperImpl*>(m_pImpl);
  }
  inline const OdBmESEntityHelperImpl* getImpl() const {
    return reinterpret_cast<const OdBmESEntityHelperImpl*>(m_pImpl);
  }
  friend class OdBmESEntityHelperImpl;

  OdBmESEntityHelper(){};
  OdBmESEntityHelperImpl* m_pImpl;
};

#endif // _BM_ES_ENTITYHELPER_H_
