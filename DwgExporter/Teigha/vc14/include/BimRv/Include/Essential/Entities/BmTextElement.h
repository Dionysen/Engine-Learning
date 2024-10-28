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

#ifndef _BM_TEXTELEMENT_H_
#define _BM_TEXTELEMENT_H_
#include "Database/BmElement.h"
#include "Database/Enums/BmLeaderAttachment.h"
#include "Base/Enums/BmHorizontalAlignment.h"
#include "Base/Enums/BmVerticalAlignment.h"

class OdBmRichTextFragment;
typedef OdSmartPtr<OdBmRichTextFragment> OdBmRichTextFragmentPtr;
class OdBmRtfData;
typedef OdSmartPtr<OdBmRtfData> OdBmRtfDataPtr;
class OdBmObjectId;

class OdBmTextElement;
class OdBmTextElementImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTextElement object.
 */
typedef OdSmartPtr<OdBmTextElement> OdBmTextElementPtr;

/** \details
 A data type that represents an array of OdBmTextElement objects.
 */
typedef OdArray<OdBmTextElementPtr> OdBmTextElementPtrArray;

//----------------------------------------------------------
//
// OdBmTextElement
//
//----------------------------------------------------------

/** \details
This class represents a text element.

    <group Essential_Classes>
*/
class TB_ESSENTIAL_EXPORT OdBmTextElement : public OdBmElement {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTextElement);
public:
  void getTextFragments(OdArray<OdBmRichTextFragmentPtr> &) const;
  OdGePoint3d getOrigin() const;
  OdResult setOrigin(const OdGePoint3d&);
  OdGeVector3d getUpDirection() const;
  OdGeVector3d getBaseDirection() const;
  double getHeight() const;
  double getLineWidth() const;
  double getMaxWidth() const;
  double getTrueWidth() const;
  OdBmObjectId getAttrId() const;
  OdInt32 getFlags() const;
  /** \details
    Returns the placement of a leader attached to the left side of a text element. 
    
    \remarks 
        Possible positions for a leader:
        <table>
        <b>None</b>      -1
        <b>TopLine</b>    0
        <b>MidPoint</b>   1
        <b>BottomLine</b> 2
        </table>
  */
  OdBm::LeaderAtachement::Enum getLeaderLeftAttachment() const;
  /** \details
    Places a leader attached to the left side of a text element.
    
    \param val [in] Input position.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    
    \remarks Possible positions for a leader:
        <table>
        <b>None</b>      -1
        <b>TopLine</b>    0
        <b>MidPoint</b>   1
        <b>BottomLine</b> 2
        </table>
  */
  OdResult setLeaderLeftAttachment(OdBm::LeaderAtachement::Enum);
  /** \details
    Returns the placement of a leader attached to the right side of a text element. 
    
    \remarks 
        Possible positions for a leader:
        <table>
        <b>None</b>      -1
        <b>TopLine</b>    0
        <b>MidPoint</b>   1
        <b>BottomLine</b> 2
        </table>
  */
  OdBm::LeaderAtachement::Enum getLeaderRightAttachment() const;
  /** \details
    Places a leader attached to the right side of a text element. 
    
    \param val [in] Input position.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
    
    \remarks 
        Possible positions for a leader:
        <table>
        <b>None</b>      -1
        <b>TopLine</b>    0
        <b>MidPoint</b>   1
        <b>BottomLine</b> 2
        </table>
  */
  OdResult setLeaderRightAttachment(OdBm::LeaderAtachement::Enum);
  bool getNoWrapping() const;
  bool getFixedRotation() const;
  OdBmRtfDataPtr getSavedRtfData() const;
  OdBmObjectPtr getSavedTypeOverrides() const;
  //
  // Main functionality
  //

  /** \details
    Returns the horizontal alignment method as one value from the OdBm::HorizontalAlignment enumeration.

	\remarks
	Returning value can be one of the next values:

    <table>
      <b>NoHorizAlignment</b>  0
      <b>Left</b>              64
      <b>Center</b>            128
      <b>Right</b>             256
    </table>
  */
  OdBm::HorizontalAlignment::Enum getHorzAlign();

  /** \details
    Sets the horizontal alignment method to this element.

	\param align [in] Input horizontal alignment method.

    \remarks
	Setting value can be one of the next values:

    <table>
      <b>NoHorizAlignment</b>  0
      <b>Left</b>              64
      <b>Center</b>            128
      <b>Right</b>             256
    </table>
  */
  void setHorzAlign(OdBm::HorizontalAlignment::Enum align);

  /** \details
    Returns the vertical alignment method as one value from the OdBm::VerticalAlignment enumeration.

	\remarks
	Returning value can be one of the next values:

    <table>
      <b>NoVertAlignment</b>  0
      <b>Top</b>              512
      <b>Middle</b>           1024
      <b>Bottom</b>           2048
    </table>
  */
  OdBm::VerticalAlignment::Enum getVertAlign();

  /** \details
    Sets the vertical alignment method to this element.

	\param align [in] Input vertical alignment method.

    \remarks
	Setting value can be one of the next values:

    <table>
      <b>NoVertAlignment</b>  0
      <b>Top</b>              512
      <b>Middle</b>           1024
      <b>Bottom</b>           2048
    </table>
  */
  void setVertAlign(OdBm::VerticalAlignment::Enum align);

  /** \details
    Returns the flag which determines whether or not the text will be kept readable(f.e. readable
	text will not be mirrored).
  */
  bool isKeepReadable() const;

  /** \details
    Sets the flag which determines whether or not the text will be kept readable(f.e. readable
	text will not be mirrored).

    \param keepReadable [in] Input 'keepReadable' flag.
  */
  void setKeepReadable(bool keepReadable);

  /** \details
    Returns the minimum width allowed to this element.

	\param typeId [in] Input Id of the object that contains text element attributes.
  */
  static double getMinimumAllowedWidth(OdBmObjectId typeId);

  /** \details
    Returns the minimum width allowed to this element.
  */
  double getMinimumAllowedWidth() const;

  /** \details
    Returns the maximum width allowed to this element.

	\param typeId [in] Input Id of the object that contains text element attributes.
  */
  static double getMaximumAllowedWidth(OdBmObjectId typeId);

  /** \details
    Returns the maximum width allowed to this element.
  */
  double getMaximumAllowedWidth() const;

  /** \details
    Sets the width to this element.

    \param width [in] Input text element width.

    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setWidth(double width);

  /** \details
    Returns the width of this element.
  */
  double getWidth() const;

  /** \details
    Sets the assets to this text element.
    
    \param typeId [in] Input Id of the element inherited from OdBmTextElementAttributes.
    
    \returns eOk if the operation completed successfully, or an appropriate error code otherwise.
  */
  OdResult setType(OdBmObjectId typeId);
};


#endif // _BM_TEXTELEMENT_H_

