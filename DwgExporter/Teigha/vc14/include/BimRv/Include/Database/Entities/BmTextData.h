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

#ifndef _BM_TEXTDATA_H_
#define _BM_TEXTDATA_H_
#include "Base/BmObject.h"
#include "Base/Enums/BmHorizontalAlignment.h"
#include "Base/Enums/BmVerticalAlignment.h"

class OdBmObjectId;

class OdBmTextData;
class OdBmTextDataImpl;

 /** \details
 A data type that represents a smart pointer to an OdBmTextData object.
 */
typedef OdSmartPtr<OdBmTextData> OdBmTextDataPtr;

/** \details
 A data type that represents an array of OdBmTextData objects.
 */
typedef OdArray<OdBmTextDataPtr> OdBmTextDataPtrArray;

//----------------------------------------------------------
//
// OdBmTextData
//
//----------------------------------------------------------

/** \details
    <group Database_Classes>
*/
class TB_DB_EXPORT OdBmTextData : public OdBmObject {
  ODBM_DECLARE_CUSTOM_CLASS_MEMBERS(OdBmTextData);
public:
  OdGePoint3d getOrigin() const;
  OdGeVector3d getUpDirection() const;
  OdGeVector3d getBaseDirection() const;
  double getHeight() const;
  double getLineWidth() const;
  OdBmObjectId getAttrId() const;
  OdInt32 getFlags() const;
  bool getNoWrapping() const;
  bool getFixedRotation() const;
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
  OdBm::HorizontalAlignment::Enum getHorzAlign() const;

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
  OdBm::VerticalAlignment::Enum getVertAlign() const;

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
};


#endif // _BM_TEXTDATA_H_

