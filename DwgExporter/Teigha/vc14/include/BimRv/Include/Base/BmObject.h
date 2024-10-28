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

#ifndef _BM_OBJECT_H_
#define _BM_OBJECT_H_

#include "Tf/TfObject.h"
#include "RxObject.h"
#include "Base/BmParameterSet.h"

typedef OdRxObject OdDbBaseDatabase;
class OdDbStub;

class OdBmObject;
class OdBmObjectImpl;

typedef OdSmartPtr<OdBmObject> OdBmObjectPtr;
typedef OdArray<OdBmObjectPtr> OdBmObjectPtrArray;

//------------------------------------------------------------------------------
//
// OdBmObject
//
//------------------------------------------------------------------------------

/** \details
  A base class for working with BimRv objects.
  <group Base_Classes>
*/
class TB_BASE_EXPORT OdBmObject : public OdTfObject {
  ODBM_DECLARE_ROOT_MEMBERS(OdBmObject);
public:
  typedef OdTfObject::ItemIndexType ItemIndexType;
  typedef OdTfObject::PropertyIndexType PropertyIndexType;

  //----------------------------------------------------------------------------
  // Own methods
  //----------------------------------------------------------------------------

  /** \details 
    Retrieves the related database object.
    
    \returns A raw pointer to an OdDbBaseDatabase object that represents the database instance.
  */
  virtual OdDbBaseDatabase* database() const;

  /** \details 
    Retrieves the array of object's properties.
    
    \param properties [out] An array of property values to be returned to a calling subroutine. 
    \returns eOk if the properties collection was successfully returned; otherwise, the method returns an appropriate error code.
    \remarks
    The method fills the passed array with the object's property values and returns it to a calling subroutine.
  */
  OdResult getProperties(OdArray<OdTfVariant>& properties) const;

  /** \details
    Applies the default properties of the specified database to this entity.

    \param pDb       [in]  Pointer to the database whose default values are to be used.
    \param doSubents [in]  Set to true if subentities should be processed
    \remarks
    If pDb is null, the database containing this entity is used.
  */
  void setDatabaseDefaults(
    OdDbBaseDatabase* pDb = 0,
    bool doSubents = false);

  /** \details
    Called by setDatabaseDefaults() after the values are set.

    \param pDb       [in]  Pointer to the database whose default values are to be used.
    \param doSubents [in]  Set to true if subentities should be processed
    \remarks
    If pDb is null, the database containing this entity is used.
    This function allows custom classes to inspect and modify the values set by setDatabaseDefaults.
    The default implementation of this function is empty. This function can be
    overridden in custom classes.
    \note
    This function is not intended to be called by the user.
  */
  virtual void subSetDatabaseDefaults(
    OdDbBaseDatabase* pDb,
    bool doSubents);

  /** \details 
    Retrieves the list of built-in parameters.
    
    \param params [out] A reference to an OdBmParameterSet object that acts as a placeholder for the set of parameters.
    \remarks
    The method fills the passed set with the object's parameters and returns it to a calling subroutine.
  */
  virtual void getListParams(OdBmParameterSet& params) const;

  //----------------------------------------------------------------------------
  // TfObject methods
  //----------------------------------------------------------------------------

  virtual OdResult getProperty(
      const OdTfProperty* pPI, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const OdTfProperty* pPI, const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) ODRX_OVERRIDE;

  virtual OdResult getProperty(
      const OdString& name, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1,
      const OdTfClass* pClass = NULL) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const OdString& name, const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1,
      const OdTfClass* pClass = NULL) ODRX_OVERRIDE;

  virtual OdResult getProperty(
      const PropertyIndexType propertyIndex, OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) const ODRX_OVERRIDE;

  virtual OdResult setProperty(
      const PropertyIndexType propertyIndex,
      const OdTfVariant& value,
      const ItemIndexType arrayIndex = -1) ODRX_OVERRIDE;

  virtual void addPersistentReactor(OdTfPersistentReactor*) ODRX_OVERRIDE;

  virtual void removePersistentReactor(OdTfPersistentReactor*) ODRX_OVERRIDE;

  virtual OdTfObject* getOwner() const ODRX_OVERRIDE { throw OdError(eNotHandled); }
  virtual void addReactor(OdTfObjectReactor* pReactor) ODRX_OVERRIDE;
  virtual void removeReactor(OdTfObjectReactor* pReactor) ODRX_OVERRIDE;
  virtual void getTransientReactors(OdTfObjectReactorArray& reactors)
      ODRX_OVERRIDE;
  virtual bool hasPersistentReactor(OdTfPersistentReactor*) const ODRX_OVERRIDE;
  virtual void getPersistentReactors(OdTfPersistentReactorArray&) ODRX_OVERRIDE;

  //----------------------------------------------------------------------------
  // GiDrawable methods
  //----------------------------------------------------------------------------

  /** \details 
    Retrieves the object's identifier in the associated database.
    
    \returns A raw pointer to an OdDbStub instance that represents identifier data.
  */
  virtual OdDbStub* id(void) const ODRX_OVERRIDE;
  /** \details 
    Implements the mechanism for rendering the object. 
    
    \param draw [in] A raw pointer to an OdGiWorldDraw object that contains information about the object's geometry and traits.
    \returns true if the object was successfully rendered; otherwise, the method returns false.
  */
  virtual bool subWorldDraw(OdGiWorldDraw*) const ODRX_OVERRIDE;
  /** \details 
    Implements viewport-dependent rendering. 
    
    \param viewportDraw [in] A raw pointer to an OdGiViewportDraw object that contains information about the specific viewport's geometry and traits.
  */
  virtual void subViewportDraw(OdGiViewportDraw*) const ODRX_OVERRIDE;
  /** \details 
    Retrieves whether the object is persistent or not.
    
    \returns true if the object is persistent; otherwise, the method returns false. 
  */
  virtual bool isPersistent(void) const ODRX_OVERRIDE;
  /** \details 
    Assigns the specified OdGsCache to this object. 
    
    \param pGsNode [in] A raw pointer to the OdGsCache object to be assigned. 
  */
  virtual void setGsNode(OdGsCache*) ODRX_OVERRIDE;
  /** \details 
    Retrieves graphical system cache associated with the object.
    
    \returns An OdGsCache object associated with the object.
  */
  virtual OdGsCache* gsNode(void) const ODRX_OVERRIDE;
  /** \details 
    Sets the vectorization attributes of the object, and returns its attribute flags.
    
    \param pTraits [in] A raw pointer to OdGiDrawableTraits object from and to which the attributes are to be set. 
    \returns An unsigned 32-bit integer value that contains attribute flags.
  */
  virtual OdUInt32 subSetAttributes(OdGiDrawableTraits*) const ODRX_OVERRIDE;
  /** \details 
    Retrieves the drawable type of the object.
    
    \returns An unsigned 32-bit integer value that contains the drawable type value. 
  */
  virtual OdGiDrawable::DrawableType drawableType() const ODRX_OVERRIDE;
  /** \details 
    Retrieves the current regeneration support flags set for the object.
    
    \returns An unsigned 32-bit integer value that contains flags values. 
  */
  virtual OdUInt32 subRegenSupportFlags() const ODRX_OVERRIDE;

  /** \details
    Returns a WCS bounding box that represents the extents of this object.
  
    \param extents [out]  Receives the WCS extents.
    \returns
    Returns eOk if successful or an appropriate error code if not.
    \remarks
    The default implementation of this function always returns eInvalidExtents.
  */
  virtual OdResult getGeomExtents(OdGeExtents3d& extents) const;


  //----------------------------------------------------------------------------
  // RxObject methods
  //----------------------------------------------------------------------------

  /** \details 
    A destructor for the BimRv object.
  */
  virtual ~OdBmObject() ODRX_OVERRIDE_DESTRUCTOR;
  /** \details 
    Clones the object.
    
    \returns A smart pointer to the newly created object copied from this one.
  */
  virtual OdRxObjectPtr clone() const ODRX_OVERRIDE;

  /** \details 
    Increments the counter of references to the object.
  */
  virtual void addRef() ODRX_OVERRIDE;
  /** \details 
    Decrements the counter of references to the object.
    When the counter becomes equal to zero the object is destroyed.
  */
  virtual void release() ODRX_OVERRIDE;
  
  /** \details 
    Retrieves the current quantity of references to the object.
    
    \returns A long value that contains the number of references.
  */
  virtual long numRefs() const ODRX_OVERRIDE;
};

#endif  // _BM_OBJECT_H_
