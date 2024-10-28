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

#ifndef __OD_GI_METAFILER__
#define __OD_GI_METAFILER__

#include "Gi/GiConveyorNode.h"
#include "ChunkAllocator.h"
#include "Ge/GeDoubleArray.h"

class OdGiDeviation;

#include "TD_PackPush.h"

/** \details

    <group OdGi_Classes> 
*/
class ODGI_EXPORT OdGiGeometryMetafile : public OdRxObject
{
public:
  ODRX_DECLARE_MEMBERS(OdGiGeometryMetafile);

  ODCA_HEAP_OPERATORS();

  class Record
  {
  protected:
    Record* m_pTail;
  public:
    ODRX_HEAP_OPERATORS();

    Record()
      : m_pTail(0)
    {}

    virtual ~Record() {}

    Record* tail()
    {
      return m_pTail;
    }

    const Record* tail() const
    {
      return m_pTail;
    }

    void setTail(Record* pTail)
    {
      m_pTail = pTail;
    }

    inline void deleteList()
    {
      Record* pCurr = this;
      while(pCurr)
      {
        Record* pTail = pCurr->m_pTail;
        delete pCurr;
        pCurr = pTail;
      }
    }

    virtual void play(OdGiConveyorGeometry* pGeom, OdGiConveyorContext* pCtx) const = 0;

    virtual OdUInt64 recordSize() const { return (OdUInt64)sizeof(*this); }
  };

private:
  Record*               m_pHead;

  void destroyRecords()
  {
    if(m_pHead)
    {
      m_pHead->deleteList();
      m_pHead = NULL;
    }
  }

public:

  OdGiGeometryMetafile();
  virtual ~OdGiGeometryMetafile();

  void clear();
  void play(OdGiConveyorGeometry* pGeom, OdGiConveyorContext* pCtx) const;
  void play(OdGiConveyorOutput& output, OdGiConveyorContext* pCtx) const;
  virtual OdUInt64 metafileSize() const;
  void setRecords(Record* pRec)
  {
    ODA_ASSERT(m_pHead == 0);
    m_pHead = pRec;
  }
  bool isEmpty() const { return m_pHead == 0; }
  Record *firstRecord() const { return m_pHead; }
  Record *lastRecord() const;
};

/** \details
    This template class is a specialization of the OdSmartPtr class for OdGiGeometryMetafile object pointers.
*/
typedef OdSmartPtr<OdGiGeometryMetafile> OdGiGeometryMetafilePtr;

/** \details

    <group OdGi_Classes> 
*/
class ODGI_EXPORT OdGiMetafiler : public OdGiConveyorNode
{
public:
  ODRX_DECLARE_MEMBERS(OdGiMetafiler);
  
  /** \details
    Sets a metafile.
    \param pMetafile [in]  Pointer to a geometry metafile.
  */
  virtual void setMetafile(OdGiGeometryMetafile* pMetafile) = 0;
  
  /** \details
    Retrieves a metafile associated with this object.
    \returns
    pointer to the geometry metafile.
  */
  virtual OdGiGeometryMetafile* metafile() = 0;

  /** \details
    Replaces a metafile, sets the last metafile record to be the current.
    \param pMetafile [in]  Pointer to a geometry metafile.
  */
  virtual void exchangeMetafile(OdGiGeometryMetafile* pMetafile) = 0;

  /** \details
  Sets max deviation for curve tesselation.
  \param deviations [in]  Array of deviation values.
  */
  virtual void setDeviation(const OdGeDoubleArray& deviations) = 0;

  /** \details
  Sets deviation object to obtain max deviation for curve tesselation.
  \param pDeviation [in]  Pointer to the deviation object.
  */
  virtual void setDeviation(const OdGiDeviation* pDeviation) = 0;

  /** \details
  Sets the draw context object (to access to traits, etc).
  \param pDeviation [in]  Pointer to the deviation object.
  */
  virtual void setDrawContext(OdGiConveyorContext* pDrawCtx) = 0;

  /** Coordinate types for geometry.
  */
  enum CoordType
  {
    /** Unknown.
    */
    kUnknown = 0,
    /** Model space coordinates.
    */
    kModel,
    /** World space coordinates.
    */
    kWorld,
    /** Eye space coordinates.
    */
    kEye,
    /** Device space coordinates.
    */
    kDevice
  };

  /** \details
  Sets coordinates type for geometry stored by metafiler.
  \param ct [in]  Coordinate type.
  */
  virtual void setCoordinatesType(CoordType ct) = 0;

  /** \details
  Retrieves coordinates type used by this metafiler object.
  \returns
  a value from the CoordType enumeration that represents a coordinate type for geometry.
  */
  virtual CoordType coordinatesType() const = 0;

  /** \details
  Saves traits into metafile. Optionally saves ByBlock traits.
  \param entTraits [in]  Entity traits to save.
  \param byBlockTraits [in]  Pointer to optional byBlock traits to save.
  \returns
  true if underlaying metafile is not NULL, false otherwise.
  */
  virtual bool saveTraits(const OdGiSubEntityTraitsData& entTraits, const OdGiSubEntityTraitsData *byBlockTraits = NULL) = 0;
  /** \details
  Saves ByBlock traits into metafile.
  \param byBlockTraits [in]  Pointer to ByBlock traits to save.
  \returns
  true if underlaying metafile is not NULL, false otherwise.
  */
  virtual bool saveTraits(const OdGiSubEntityTraitsData *byBlockTraits) = 0;
  /** \details
  Saves only effective traits into metafile.
  \returns
  true if underlaying metafile is not NULL, false otherwise.
  */
  virtual bool saveTraits() = 0;

  /** \details
  Flushes all data to the metafile.
  \param bForceTraits [in]  Flag that specifies whether data should be flushed even if geometry buffers are empty.
  */
  virtual void flush(bool bForceTraits = true) = 0;

  /** \details
  Adds metafile record to the records list.
  \param pRec [in]  Pointer to the metafile record to be added.
  */
  virtual void add(OdGiGeometryMetafile::Record* pRec) = 0;

  enum EOptions
  {
    kTextAsText = 1,            //keep text as text, not converted into geometry
    kNurbsAsNurbs = 2,          //keep nurbs as nurbs, not simplified
    kDisableImageConversion = 2 //disable image conversion
  };

  /** \details
  Sets metafiler options
  */
  virtual void setOptions(OdUInt32 options) {}

  /** \details
  Retrieves options used by this metafiler object.
  \returns
  Options.
  */
  virtual OdUInt32 options() const { return 0; }
};

/** \details
    This template class is a specialization of the OdSmartPtr class for OdGiMetafiler object pointers.
*/
typedef OdSmartPtr<OdGiMetafiler> OdGiMetafilerPtr;

#include "TD_PackPop.h"

#endif //#ifndef __OD_GI_METAFILER__
