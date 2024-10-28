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

#ifndef OD_GEHATCH_H
#define OD_GEHATCH_H

#include "Ge/GeGbl.h"
#include "Ge/GeTol.h"
#include "Ge/GeDoubleArray.h"
#include "Int32Array.h"
#include "Ge/GeLineSeg2d.h"
#include "GePoint2dArrayArray.h"
#include "UInt8Array.h"
#include "CmEntityColorArray.h"
#include "Ge/GePoint3d.h"
#include "Ge/GePoint3dArray.h"
#include "Ge/GeLineSeg2dArray.h"
#include "HatchPattern.h"

// Island detection style for the hatch
enum OdGeIslandStyle
{
  OdGeIslandStyle_Normal = 0, // Hatches from the outermost boundary, and toggles with each boundary encountered.
  OdGeIslandStyle_Outer  = 1, // Hatches from the outermost boundary, and turns off at the first boundary encountered. 
  OdGeIslandStyle_Ignore = 2  // Hatches from the outermost boundary, and ignores all boundaries encountered.
 };



enum OdGeHatchLoopType
{
  OdGeHatchLoopType_Default          = 0,       // The loop type has yet to be specified.
  OdGeHatchLoopType_External         = 1,       // The loop is comprised of external entities. 
  OdGeHatchLoopType_Polyline         = 2,       // The loop is an OdGePolyline2d.
  OdGeHatchLoopType_Derived          = 4,       // The loop was derived from a picked point.
  OdGeHatchLoopType_Textbox          = 8,       // The loop is the box surrounding OdDbText.
  OdGeHatchLoopType_Outermost        = 0x10,    // The loop is the outermost loop.
  OdGeHatchLoopType_NotClosed        = 0x20,    // The loop is not closed.
  OdGeHatchLoopType_SelfIntersecting = 0x40,    // The loop is self-intersecting.
  OdGeHatchLoopType_TextIsland       = 0x80     // The loop is a OdGeHatchLoopType_Textbox that are 
                                                // surrounded by even number of outer loops, 
                                                // and is avoided when during solid fill.
};

// Indexes of segments, with which stroke intersects.
class OdGeStrokeData
{
public:
  OdGeStrokeData () : m_startNum(0), m_endNum(0) {}
  OdGeStrokeData (
    OdUInt32 startNum, 
    OdUInt32 endNum) : m_startNum(startNum), m_endNum(endNum) {}
  bool operator == (
    const OdGeStrokeData &sd) const
  {
    return m_startNum == sd.m_startNum && m_endNum == sd.m_endNum;
  }
  OdUInt32 m_startNum;
  OdUInt32 m_endNum;
};


// For comments see the file GeHatch.cpp
//DD:EXPORT_ON
class GE_TOOLKIT_EXPORT OdGeHatchStrokes
{
public:
  virtual double getNearestStroke (
    double prevEvent) const = 0;
  virtual double getNextStroke (
    double prevEvent) const = 0;
  virtual ~OdGeHatchStrokes() {}
};

class GE_TOOLKIT_EXPORT OdGeEqualStepHatchStrokes : public OdGeHatchStrokes
{
  double m_dZeroPoint;
  double m_dStep;
public:
  OdGeEqualStepHatchStrokes (
    double d0, 
    double step);
  virtual double getNearestStroke (
    double prevEvent) const ODRX_OVERRIDE;
  virtual double getNextStroke (
    double prevEvent) const ODRX_OVERRIDE;
};

class GE_TOOLKIT_EXPORT OdGeNonEqualStepHatchStrokes : public OdGeHatchStrokes
{
  double m_dZeroPoint;
  OdGeDoubleArray m_Positions;
  mutable int m_curPos;
public:
  OdGeNonEqualStepHatchStrokes (
    double d0, 
    const OdGeDoubleArray &Positions);
  virtual double getNearestStroke (
    double prevEvent) const ODRX_OVERRIDE;
  virtual double getNextStroke (
    double prevEvent) const ODRX_OVERRIDE;
};

/** Description:
    Library: Ge
    {group:Structs} 
*/
struct OdGeShellData
{
  OdGePoint3dArray     m_vertices;
  OdInt32Array         m_faces;
  OdUInt8Array         m_edgeVisibilities;
  OdCmEntityColorArray m_colors;
};

// 09.09.2004 GU
// pShell - is only for solid hatch

GE_TOOLKIT_EXPORT void 
OdGeDrawSegmentHatch (
    const OdArray<OdGeLineSeg2d>& segments, 
    const OdGeIntArray& loops, 
    const OdGeIntArray& loopTypes, 
    OdGeHatchStrokes *StrokeParams, OdGeIslandStyle iStyle, 
    bool isSolid, 
    OdArray<OdGeLineSeg2d> &strokes, 
    const OdGeTol& tol = 1.0e-10,
    OdArray<OdGeStrokeData>* pStrokeData = NULL, 
    OdGeShellData* pShell = NULL);

GE_TOOLKIT_EXPORT void 
OdGeDrawSegmentHatchXY (
                      const OdArray<OdGeLineSeg2d>& segments, 
                      const OdGeIntArray& loops, 
                      const OdGeIntArray& loopTypes, 
                      OdGeHatchStrokes *StrokeParams, OdGeIslandStyle iStyle, 
                      bool isSolid, 
                      OdArray<OdGeLineSeg2d> &strokes, 
                      const OdGeTol& tol = 1.0e-10,
                      OdArray<OdGeStrokeData>* pStrokeData = NULL, 
                      OdGeShellData* pShell = NULL);

// builds 2D shell. Looks which of the contours are contours and which
// of contours are holes and puts them just like GiGeometry's shell
// primitive - holes are strictly after its contour.

// Parameters:
// contours - [in]  array of input contours
// style    - [in]  holes detection style (0 - normal, 1 - outermost, 2 - ignore)
// vertixes - [out] shell's verts
// indexes  - [out] shell's face list
// tol      - [in]  tolerance
GE_TOOLKIT_EXPORT OdResult build2dShell (
  const OdGePoint2dArrayArray& contours, 
  OdInt16 style, 
  OdGePoint2dArray& vertixes, 
  OdInt32Array& indexes, 
  const OdGeTol& tol);

class OdGeHatchDashTaker
{
public:
  virtual bool dash(const OdGePoint2d& start, const OdGePoint2d& end) = 0;
  virtual void setDashPeriod(const bool value) {};
};

GE_TOOLKIT_EXPORT OdResult odgeDrawDashedHatch(
  const OdHatchPattern& pattern,
  const OdGeLineSeg2dArray& segmentArray,
  const OdGeIntArray& loopArray,
  const OdGeIntArray& loopTypes,
  const OdGeTol& hatchTolerance,
  OdGeIslandStyle islandStyle,
  OdUInt32 maxHatchDensity,
  OdGeHatchDashTaker& dashTaker,
  const bool& bCheckDense = true);

//DD:EXPORT_OFF
#endif  /* OD_GEHATCH_H */
