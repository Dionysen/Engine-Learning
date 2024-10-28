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

#ifndef _BM_OBJECTID_H_
#define _BM_OBJECTID_H_

#include "DbHandle.h"
#include "Base/BmOpenMode.h"
#include "Database/Enums/BmElementPart.h"
#include "Base/BmDepositId.h"

class OdBmObject;
class OdDbStub;
class OdBmStub;

template <class T> class OdSmartPtr;
typedef OdSmartPtr<OdBmObject> OdBmObjectPtr;
typedef OdRxObject OdDbBaseDatabase;

//------------------------------------------------------------------------------
//
// OdBmObjectId
//
//------------------------------------------------------------------------------

/** \details
    <group Base_Classes>
*/
class TB_BASE_EXPORT OdBmObjectId {
public:
  typedef OdDbHandle handle_type;
  /**
    Description:
    The null OdBmObjectId object.
    */
  TB_BASE_EXPORT_STATIC static const OdBmObjectId kNull;
  TB_BASE_EXPORT_STATIC static const handle_type kNullHandle;
  TB_BASE_EXPORT_STATIC static const handle_type kElementTableHandle;
  TB_BASE_EXPORT_STATIC static const handle_type kMidElementTableHandle;
  TB_BASE_EXPORT_STATIC static const handle_type kFrontElementTableHandle;
  TB_BASE_EXPORT_STATIC static const handle_type kBackElementTableHandle;

  static bool isRegularHandle(const handle_type& handle);

  OdBmObjectId();

  /**
    Description:
    For ODA internal use only.
  */

  /* {Secret} */
  OdBmObjectId(OdDbStub* elementId);

  /**
    Description:
    Returns true and only if this ElementId object is null.
  */
  bool isNull() const;

  /**
    Description:
    Sets this Element ID to null.
  */
  void setNull() { m_Id = 0; }

  /**
    Description:
    Returns true and only if this ElementId object references a valid object.
  */
  bool isValid() const;

  OdBmObjectId& operator=(const OdBmObjectId& elementId);

  /* { Secret } */
  OdBmObjectId& operator=(OdDbStub* elementId);

  bool operator<(const OdBmObjectId& elementId) const;

  bool operator>(const OdBmObjectId& elementId) const;

  bool operator>=(const OdBmObjectId& elementId) const;

  bool operator<=(const OdBmObjectId& elementId) const;

  bool operator==(const OdBmObjectId& elementId) const;

  bool operator!=(const OdBmObjectId& elementId) const;

  bool operator!() const { return isNull(); }

  /**
    Description:
    For ODA internal use only.
  */

  /* {Secret} */
  inline operator OdDbStub*() const {
    return reinterpret_cast<OdDbStub*>(m_Id);
  }

  inline OdBmStub* operator->() const {
    return m_Id;
  }

  /**
    Description:
    Returns the *database* with which this ElementId object is associated.

    Remarks:
    Returns NULL if this ElementId object is not associated with any *database*.
  */
  OdDbBaseDatabase* database() const;

  /** Description:
    Perform erase of the object associated with this ElementId object
  */
  void erase() const;

  /** Description:
    Returns the *database* handle of the object referenced by this ElementId
    object.

    Remarks:
    Returns NULL if no *database* object is referenced by this ElementId object.

    If this ElementId object has been redirected from another *database*
    (possibly an Xref), this function
    returns the handle for this *database*.
  */
  const OdDbHandle& getHandle() const;

  /** Description:
    Opens the *database* object associated with this ElementId object, in the
    specified mode.

    Arguments:
    pObj (O) Smart pointer to opened object
    openMode (I) Mode in which to open the object.

    Remarks:
    Returns eOk if successful, otherwise an Error Code.

    openMode must be one of the following:

    @table
    Name                Value     Description
    OdBm::kForRead      0         Object is open for reading.
    OdBm::kForWrite     1         Object is open for reading and/or writing.
    OdBm::kForNotify    2         Object is open for notify.

  */
  // OdResult openObject (
  //  OdBmObjectPtr& pObj,
  //  OdBm::OpenMode openMode = OdBm::kForRead,
  //  bool openErasedOne = false) const;
  /** Description:
    Opens the *database* object associated with this ObjectId object, in the
    specified mode.

    Arguments:
    openMode (I) Mode in which to open the object.
    openErasedOne (I) If and only if true, *erased* objects will be opened.

    Remarks:
    Returns a SmartPointer to the opened object if successful, otherwise a null
    SmartPointer.

    openMode must be one of the following:

    @table
    Name                Value     Description
    OdBm::kForRead      0         Object is open for reading.
    OdBm::kForWrite     1         Object is open for reading and/or writing.
    OdBm::kForNotify    2         Object is open for notify.
  */

  OdResult openObject(OdBmObjectPtr& pObj) const;
  /** Description:
    Opens the *database* object associated with this ObjectId object, in the
    specified mode.

    Arguments:
    openMode (I) Mode in which to open the object.
    openErasedOne (I) If and only if true, *erased* objects will be opened.

    Remarks:
    Returns a SmartPointer to the opened object if successful, otherwise a null
    SmartPointer.

    openMode must be one of the following:

    @table
    Name                Value     Description
    OdDb::kForRead      0         Object is open for reading.
    OdDb::kForWrite     1         Object is open for reading and/or writing.
    OdDb::kForNotify    2         Object is open for notify.

  */
  OdBmObjectPtr openObject() const;
  /** Description:
    Opens the *database* object associated with this ObjectId object, in the
    specified mode, or throws and exception if unsucessful.

    Arguments:
    openMode (I) Mode in which to open the object.
    openErasedOne (I) If and only if true, *erased* objects will be opened.

    Remarks:
    Returns a SmartPointer to the opened object.

    openMode must be one of the following:

    @table
    Name                Value     Description
    OdBm::kForRead      0         Object is open for reading.
    OdBm::kForWrite     1         Object is open for reading and/or writing.
    OdBm::kForNotify    2         Object is open for notify.

    Throws:

    @table
    Exception           Cause
    eNullObjectId       This ElementId object is null.
    ePermanentlyErased  Not opened and openErasedOne == 1
    eWasErased          Not opened and openErasedOne == 0

  */
  OdBmObjectPtr safeOpenObject() const;
  
  /** \details
    Checks if the object's handle is regular. Id is regular if it belongs to a databse and is not built in.
  */
  bool isRegular() const;
  OdBmObjectPtr getHeader() const;
  OdBmObjectPtr getGeometry() const;

protected:
  OdDbStub* id() const;
  friend class OdDbStub;
  OdBmStub* m_Id;
};

class OdTfClass;

//
// TODO: move in proper place.
//
namespace OdBm {
namespace Utils {
  template <class T, class PE>
  OdSmartPtr<PE> getX() {
    return T::desc()->getX(PE::desc());
  }

  TB_BASE_EXPORT void setPart(const OdBmObjectId& id,
                              const OdBm::ElementPart::Enum kind,
                              const OdBmObjectPtr& value);

  TB_BASE_EXPORT OdTfClass* descById(const OdBmObjectId& id);
} // namespace Utils
} // namespace OdBm

#endif // _BM_OBJECTID_H_
