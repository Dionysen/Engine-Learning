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

#ifndef _ODRXBASETREENODE_INCLUDED_
#define _ODRXBASETREENODE_INCLUDED_

#include "OdString.h"
#include "OdArray.h"
#include "RxValue.h"
#include "RxObject.h"
#include "RxPropertyVariant.h"
#define STL_USING_SET
#include "OdaSTL.h"

/** \details
  Defines versions of the Hierarchy Tree for the Common Data Access API.
*/
enum HierarchyTreeVersion
{

  /** HierarchyTree version 1 */
  eHT1 = 1,    

  /** HierarchyTree version 2 */
  eHT2 = 2,

  /** HierarchyTree version 3 */
  eHT3 = 3,

  /** The current Hierarchy Tree version */
  eCURRENT = eHT3,  
};

/** \details
  Defines the types of Hierarchy Tree node.
*/
enum HierarchyTreeObjectType
{
  /** The node object type is Database */
  eDatabase = 0,

  /** The node object type is Model */
  eModel,

  /** The node object type is Block */
  eBlock,

  /** The node object type is BlockReference */
  eBlockReference,

  /** The node object type is Entity */
  eEntity,

  /** The node object type is hidden object */
  eHidden
};

/** \details
  Represents object properties information for the Common Data Access API.
  <group OdRx_Classes>
*/
struct PropertyInfo
{
  /** \details
 Default constructor for instance of PropertyInfo.
 */
  PropertyInfo()
    :weight(0.0)
  {
  }

  /** The property name */
  OdString            name;

  /** The localized property name */
  OdString            localizedName;

  /** The Ui placement group name */
  OdString            uiPlacement;

  /** The Ui placement weight */
  float               weight;

  /** The property value */
  OdRxPropertyVariant value;

  /** The array of subproperties */
  OdArray<PropertyInfo> subProperties;
};

  //DOM-IGNORE-BEGIN
class OdRxModelTreeBaseNodeImpl;
class OdBaseHierarchyTreeFiler;
class OdRxModelTreeBaseNode; 
class OdRxModelHierarchyTreeBaseImpl;
  //DOM-IGNORE-END

/** \details
  A data type that represents a smart pointer to an OdRxModelTreeBaseNode object.
*/
typedef OdSmartPtr<OdRxModelTreeBaseNode> OdRxModelTreeBaseNodePtr; 

/** \details
 A data type that represents an array of smart pointers to an OdRxModelTreeBaseNode object.
*/
typedef OdArray<OdRxModelTreeBaseNodePtr> OdRxModelTreeBaseNodePtrArray;

/** \details
 A data type that represents an array of pointers to an OdRxModelTreeBaseNode object.
*/
typedef OdArray<OdRxModelTreeBaseNode*> OdRxModelTreeBaseNodeRawPtrArray;

/** \details
    This class is a base class that implements a database hierarchical tree node for the Common Data Access API
	
	<group OdRx_Classes>
*/
class ODCDA_EXPORT OdRxModelTreeBaseNode : public OdRxObject
{
  public:
    //DOM-IGNORE-BEGIN
    ODRX_DECLARE_MEMBERS(OdRxModelTreeBaseNode);
    ODRX_HEAP_OPERATORS();
    //DOM-IGNORE-END

    /** \details
      Destroys an instance of the OdRxModelTreeBaseNode class.
    */
    virtual ~OdRxModelTreeBaseNode();

    /** \details
      Gets the name of the node object - element of the hierarchical tree.

      \returns Returns the string containing the node name.
    */
    virtual const OdString& getNodeName() const;

    /** \details
      Gets the unique identifier of the node - the object of the hierarchical tree.
      
      \returns Returns the unique identifier represented as OdUInt64.
    */
    virtual OdUInt64 getUniqueSourceID() const;

    /** \details
      Gets the unique identifier of the database.

      \returns Returns the unique identifier represented as OdUInt64.
    */
    virtual OdUInt64 getUniqueDBID() const;

    /** \details
      Gets the type of node - the object of the hierarchical tree.

      \returns Returns the type of node.
    */
    virtual HierarchyTreeObjectType getNodeType() const;

    /** \details
      Gets the parent nodes.

      \returns Returns the array of pointers to nodes.
    */
    virtual const OdRxModelTreeBaseNodeRawPtrArray& getParents() const;

    /** \details
      Gets child nodes.

      \returns Returns the array of smart pointers to nodes.
    */
    virtual const OdRxModelTreeBaseNodePtrArray& getChildren() const;

    /** \details
      Gets properties info for node.

      \returns Returns the array PropertyInfo.
    */
    virtual const OdArray<PropertyInfo>& getProperties() const;

    //DOM-IGNORE-BEGIN
  protected:
    virtual bool addChild(OdRxModelTreeBaseNodePtr& elem);

    virtual void outFields(OdBaseHierarchyTreeFiler* pFiler) const;
    virtual OdResult inFields(OdBaseHierarchyTreeFiler* pFiler, std::set<OdString>& string_storage);

    OdRxModelTreeBaseNode();
    OdRxModelTreeBaseNode(OdRxModelTreeBaseNodeImpl* impl);
    friend class OdRxModelTreeBaseNodeImpl;
    OdRxModelTreeBaseNodeImpl* m_pImpl;
    friend class OdRxModelHierarchyTreeBaseImpl;
    //DOM-IGNORE-END
};

/** \details
    This class is the abstract base class for classes that are used for file I/O operations.
	<group Other_Classes>
*/
class ODCDA_EXPORT OdBaseHierarchyTreeFiler
{
public:

  /** \details
    Destroys an instance of the OdBaseHierarchyTreeFiler class.
  */
  ~OdBaseHierarchyTreeFiler() {}

  /** \details
    Reads the boolean value of the current item of this Filer object.

    \returns Returns the boolean value
  */
  virtual bool rdBool() = 0;

  /** \details
    Reads the double value of the current item of this Filer object.

    \returns Returns the double value
  */
  virtual double rdDouble() = 0;

  /** \details
    Reads the Int8 value of the current item of this Filer object.

    \returns Returns the Int8 value
  */
  virtual OdUInt8 rdInt8() = 0;

  /** \details
    Reads the UInt8 value of the current item of this Filer object.

    \returns Returns the UInt8 value
  */
  virtual OdUInt8 rdUInt8() = 0;

  /** \details
    Reads the Int16 value of the current item of this Filer object.

    \returns Returns the Int16 value
  */
  virtual OdUInt16 rdInt16() = 0;

  /** \details
    Reads the UInt16 value of the current item of this Filer object.

    \returns Returns the UInt16 value
  */
  virtual OdUInt16 rdUInt16() = 0;

  /** \details
    Reads the Int32 value of the current item of this Filer object.

    \returns Returns the Int32 value
  */
  virtual OdUInt32 rdInt32() = 0;

  /** \details
    Reads the UInt16 value of the current item of this Filer object.

    \returns Returns the UInt16 value
  */
  virtual OdUInt32 rdUInt32() = 0;

  /** \details
    Reads the Int64 value of the current item of this Filer object.

    \returns Returns the Int64 value
  */
  virtual OdInt64 rdInt64() = 0;

  /** \details
    Reads the UInt64 value of the current item of this Filer object.

    \returns Returns the UInt64 value
  */
  virtual OdInt64 rdUInt64() = 0;

  /** \details
    Reads the string value of the current item of this Filer object.

    \returns Returns the string value
  */
  virtual OdString rdString() = 0;

  /** \details
  Reads the AnsiString value of the current item of this Filer object.

  \returns Returns the string value
 */
  virtual OdAnsiString rdAnsiString() = 0;

  /** \details
    Reads the 2D point value of the current item of this Filer object.

    \returns Returns the 2D point value
  */
  virtual OdGePoint2d rdGePoint2d() = 0;

  /** \details
    Reads the 3D point value of the current item of this Filer object.

    \returns Returns the 3D point value
  */
  virtual OdGePoint3d rdGePoint3d() = 0;

  /** \details
    Reads the 2D vector value of the current item of this Filer object.

    \returns Returns the 2D vector value
  */
  virtual OdGeVector2d rdGeVector2d() = 0;

  /** \details
    Reads the 3D vector value of the current item of this Filer object.

    \returns Returns the 3D vector value
  */
  virtual OdGeVector3d rdGeVector3d() = 0;

  /** \details
    Reads the entity color object value of the current item of this Filer object.

    \returns Returns the entity color object value
  */
  virtual OdCmEntityColor rdCmEntityColor() = 0;

  /** \details
    Reads the transparency object value of the current item of this Filer object.

    \returns Returns the transparency object value
  */
  virtual OdCmTransparency rdCmTransparency() = 0;

  /** \details
    Writes the specified boolean value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrBool(const bool value) = 0;

  /** \details
    Writes the specified double value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrDouble(const double value) = 0;

  /** \details
    Writes the specified Int8 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrInt8(const OdInt8 value) = 0;

  /** \details
    Writes the specified UInt8 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrUInt8(const OdUInt8 value) = 0;

  /** \details
    Writes the specified Int16 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrInt16(const OdInt16 value) = 0;

  /** \details
    Writes the specified UInt16 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrUInt16(const OdUInt16 value) = 0;

  /** \details
    Writes the specified Int32 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrInt32(const OdInt32 value) = 0;

  /** \details
    Writes the specified UInt32 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrUInt32(const OdUInt32 value) = 0;

  /** \details
    Writes the specified Int64 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrInt64(const OdInt64 value) = 0;

  /** \details
    Writes the specified UInt64 value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrUInt64(const OdUInt64 value) = 0;

  /** \details
    Writes the specified string value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrString(const OdString& value) = 0;

  /** \details
    Writes the specified AnsiString value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrAnsiString(const OdAnsiString& value) = 0;

  /** \details
    Writes the specified 2D point value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrGePoint2d(const OdGePoint2d& value) = 0;

  /** \details
    Writes the specified 3D point value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrGePoint3d(const OdGePoint3d& value) = 0;

  /** \details
    Writes the specified 2D vector value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrGeVector2d(const OdGeVector2d& value) = 0;

  /** \details
    Writes the specified 3D vector value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrGeVector3d(const OdGeVector3d& value) = 0;

  /** \details
    Writes the specified the entity color object value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrCmEntityColor(const OdCmEntityColor& value) = 0;

  /** \details
    Writes the specified the transparency object value to this Filer object.

    \param value [in] Value to write.
  */
  virtual void wrCmTransparency(const OdCmTransparency& value) = 0;

};

#endif

