#ifndef _GE_UV_BOX_H_
#define _GE_UV_BOX_H_

#include "Ge/GeInterval.h"
#include "Ge/GeExport.h"

class OdGePoint2d;

//represents a box in UV-space of a surface
struct GE_TOOLKIT_EXPORT OdGeUvBox
{
  OdGeInterval intervals[2];

  OdGeUvBox();
  OdGeUvBox(const OdGeInterval& iIntervalU, const OdGeInterval& iIntervalV);

  const OdGeInterval& intervalU() const { return intervals[0]; }
  const OdGeInterval& intervalV() const { return intervals[1]; }
  OdGeInterval& intervalU() { return intervals[0]; }
  OdGeInterval& intervalV() { return intervals[1]; }

  OdGeUvBox& set();

  bool contains(const OdGePoint2d& point) const;
};

#endif //_GE_UV_BOX_H_
