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

#ifndef _BM_GINSTANCE_H_
#define _BM_GINSTANCE_H_
#include "Geometry/Entities/BmGNode.h"
// BEGIN: Includes
#include "Database/BmGeometryOption.h"
// END: Includes

class OdBmInstInfoBase;
typedef OdSmartPtr<OdBmInstInfoBase> OdBmInstInfoBasePtr;
class OdBmGRep;
typedef OdSmartPtr<OdBmGRep> OdBmGRepPtr;
class OdBmGTarget;
typedef OdSmartPtr<OdBmGTarget> OdBmGTargetPtr;

class OdBmGInstance;
class OdBmGInstanceImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmGInstance object.
 */
typedef OdSmartPtr<OdBmGInstance> OdBmGInstancePtr;

/** \details
 A data type that represents an array of OdBmGInstance objects.
 */
typedef OdArray<OdBmGInstancePtr> OdBmGInstancePtrArray;

//----------------------------------------------------------
//
// OdBmGInstance
//
//----------------------------------------------------------

/** \details
    This is the base class for storing instance data.
    <group Geometry_Classes>
*/
class TB_GEOMETRY_EXPORT OdBmGInstance : public OdBmGNode {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmGInstance);
public:
  /** \details
    Returns instance information as a pointer to the OdBmInstInfoBase object.
  */
  OdBmInstInfoBasePtr getInstanceInfo() const;
  /** \details
    Sets instance information to this object.

    \param OdBmInstInfoBasePtr [in] Input instance information.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setInstanceInfo(const OdBmInstInfoBasePtr&);
  /** \details
    Returns the geometrical representation of an embedded symbol as a pointer to an OdBmGRep object.
  */
  OdBmGRepPtr getEmbeddedSymbolGRep() const;
  /** \details
    Sets a geometrical representation of an embedded symbol to this object.

    \param OdBmGRepPtr [in] Input geometrical representation of an embedded symbol.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setEmbeddedSymbolGRep(const OdBmGRepPtr&);
  /** \details
    Returns the forbidden target as a pointer to an OdBmGTarget object.
  */
  OdBmGTargetPtr getForbiddenTarget() const;
  /** \details
    Sets a forbidden target to this object.

    \param OdBmGTargetPtr [in] Input forbidden target.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setForbiddenTarget(const OdBmGTargetPtr&);
  /** \details
    Returns true if the view has resolved symbols.
  */
  bool getResolveSymInView() const;
  /** \details
    Sets a flag that shows whether the view has resolved symbols.

    \param bool [in] Input flag for resolved symbols in the view.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setResolveSymInView(bool);
  /** \details
    Returns true if this object has a scale.
  */
  bool getHasScale() const;
  /** \details
    Sets a flag that shows whether this object has a scale.

    \param bool [in] Input flag.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult setHasScale(bool);
  //
  // Main functionality
  //

  /** \details
    Gets geometry of GInstance.

    \param OdBmObjectPtr [in] Input object for getting geometry of GInstance.
    \param OdBmGeometryOptions [in] Input options.

    \returns Returns eOk if successful or an appropriate error code in the other case.
  */
  OdResult getGeometry(const OdBmGeometryOptions& options, OdBmObjectPtr& pObj) const;
};


#endif // _BM_GINSTANCE_H_

