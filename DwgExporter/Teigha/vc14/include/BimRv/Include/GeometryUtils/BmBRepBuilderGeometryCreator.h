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

#ifndef _BMBREPCREATOR
#define  _BMBREPCREATOR

#include "Ge/GePlane.h"
#include "Ge/GeCircArc3d.h"
#include "Ge/GeLineSeg3d.h"

/** \details
    <group GeometryUtils_Classes>
*/
class BmBrepBuilderGeometryCreatorHelper{
public:
	static OdGePlane* createPlane(OdGePoint3d origin, OdGeVector3d XVector, OdGeVector3d YVector)
	{
		if (!OdZero(XVector.normalizeGetLength()) && !OdZero(YVector.normalizeGetLength()))
			return new OdGePlane(origin, XVector, YVector);
		else
			return NULL;
	}

	static OdGePlane* createPlane(OdGePoint3d point1, OdGePoint3d point2, OdGePoint3d point3)
	{
		if (!OdZero(point2.distanceTo(point3)))
		{
			OdGeVector3d XVector = (point2 - point1);
			OdGeVector3d YVector = (point3 - point1);
			if (!OdZero(XVector.normalizeGetLength()) && !OdZero(YVector.normalizeGetLength()))
			{
				OdGeVector3d normal = XVector.normal().crossProduct(YVector.normal());

				if (!OdZero(normal.normalizeGetLength()))
					return new OdGePlane(point1, normal);
				else
					return NULL;
			}
			else
				return NULL;
		}
		else
			return NULL;
	}

	static OdGePlane* createPlane(OdGePoint3d origin, OdGeVector3d normal)
	{
		if (!OdZero(normal.normalizeGetLength()))
			return new OdGePlane(origin, normal);
		else
			return NULL;
	}

	static OdGeLineSeg3d* createLine(OdGePoint3d start, OdGePoint3d end)
	{
		if (!OdZero(start.distanceTo(end)))
			return new OdGeLineSeg3d(start, end);
		else
			return NULL;
	}

	static OdGeCircArc3d* createArc(OdGePoint3d start, OdGePoint3d end, OdGePoint3d pointOnArc)
	{
		return new OdGeCircArc3d(start, pointOnArc, end);
	}
};

#endif
