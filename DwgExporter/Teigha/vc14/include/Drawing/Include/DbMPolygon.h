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

#ifndef _DBMPOLYGON_H_INCLUDED_
#define _DBMPOLYGON_H_INCLUDED_

#include "DbHatch.h"


class OdDbCircle;
class OdDb2dPolyline;
class OdDbPolyline;
class OdDbMPolygonCrossing;
typedef OdArray<OdDbMPolygonCrossing,OdPlainObjectsAllocator<OdDbMPolygonCrossing> > OdDbMPolygonCrossingArray;
typedef OdArray<OdGePoint2dArray> OdGePoint2dArrayArray;
class OdDbMPolygonNode;

const double OdDbMPolygonCrossingFuzz = 1E-6;

#ifdef MPOLYGON_EXPORTS
# define MPOLYGON_EXPORT            OD_TOOLKIT_EXPORT
#else
# define MPOLYGON_EXPORT            OD_TOOLKIT_IMPORT
#endif

/** \details
    This class processes one or more closed polygons as a single polygon.
    Corresponding C++ library: AcMPolygonObj15
    
    \sa
    TD_Db
   
    <group OdDb_Classes>
*/
class MPOLYGON_EXPORT OdDbMPolygon : public OdDbEntity {
public:
  /** \details
    Creates a new instance of a multi polygon object with default parameters.
  */
  OdDbMPolygon();

  /** \details
    Destroys the multi polygon object.
  */
  virtual ~OdDbMPolygon();

  //DOM-IGNORE-BEGIN
  ODDB_DECLARE_MEMBERS(OdDbMPolygon);
  //DOM-IGNORE-END

  /** \details
    \returns the OdSmartPtr class for OdDbHatch object pointer. 
  */
  virtual OdDbHatchPtr hatch();

  /** \details
  \returns the OdSmartPtr class for OdDbHatch object pointer.
*/
  virtual OdDbHatchPtr hatch() const;

  /** \details
    Returns the elevation of this entity in the OCS.

    \remarks
    The elevation is the distance from the WCS origin to the plane of this entity.
  */
  virtual double elevation() const;

  /** \details
    Sets the elevation of this entity in the OCS.

    \param elevation [in] Elevation.

    \remarks
    The elevation is the distance from the WCS origin to the plane of this entity.
  */
  virtual void setElevation(double elevation);

  /** \details
    Returns the WCS normal to the plane of this entity.
   */
  virtual OdGeVector3d normal() const;

  /** \details
    Sets the WCS normal to the plane of this entity.

    \param normal [in] Normal.
  */
  virtual void setNormal(const OdGeVector3d& normal);

  /** \details
    Evaluates the hatch for this MPolygon entity.
    \param bUnderestimateNumLines [in]  Underestimates the hatch count before aborting.

    \returns
    Returns eOk if successful, or an appropriate error code if not.
  */
  virtual OdResult evaluateHatch(bool bUnderestimateNumLines = false);

  /** \details
    Returns the hatch pattern type for this MPolygon entity.

    \remarks

    patternType() returns one of the following:

    <table>
    Name              Value
    kUserDefined      0
    kPreDefined       1
    kCustomDefined    2
    </table>
  */
  virtual OdDbHatch::HatchPatternType patternType() const;

  /** \details
      Returns the name of the pattern.
  */
  virtual OdString patternName() const;

  /** \details
    Sets the pattern data.

    \param patType [in]  Pattern type.
    \param patName [in]  Pattern name.

    \remarks
    patType must be one of the following:

    <table>
    Name              Value
    kUserDefined      0
    kPreDefined       1
    kCustomDefined    2
    </table>

    patName is ignored for patType == kUserDefined; appearance is defined by setPatternAngle(),
    setPatternSpace() and setPatternDouble().
  */
  virtual void setPattern(OdDbHatch::HatchPatternType patType,
    const OdString& patName);

  /** \details
    Returns the pattern angle.

    \remarks
    All angles are expressed in radians.
  */
  virtual double patternAngle() const;

  /** \details
    Sets the pattern angle.

    \remarks
    All angles are expressed in radians.
  */
  virtual void setPatternAngle(double angle);

  /** \details
   Returns the pattern spacing.

   \remarks
   Pattern spacing is the distance between parallel lines for kUserDefined hatch.
 */
  virtual double patternSpace() const;

  /** \details
    Sets the pattern spacing.

    \param space [in]  Pattern spacing.

    \remarks
    Pattern spacing is the distance between parallel lines for kUserDefined hatch.
  */
  virtual void setPatternSpace(double space);

  /** \details
    Returns the pattern scale.
  */
  virtual double patternScale() const;

  /** \details
    Sets the pattern scale.

    \param scale [in]  Pattern scale.
  */
  virtual void setPatternScale(double scale);

  /** \details
    Returns the pattern double flag.

    \remarks
    Setting the pattern double flag causes a second set of lines, at 90° to the first, for kUserDefined hatch.
  */
  virtual bool patternDouble() const;

  /** \details
    Sets the pattern double flag.

    \param isDouble [in]  Sets the pattern double flag if true, clears it otherwise.

    \remarks
    Setting the pattern double flag causes a second set of lines, at 90° to the first, for kUserDefined hatch.
  */
  virtual void setPatternDouble(bool isDouble);

  /** \details
    Returns the number of pattern definition lines.
 */
  virtual int numPatternDefinitions() const;

  /** \details
    Returns the specified pattern definition line.

    \param lineIndex [in]   Line index.
    \param lineAngle [out]  Receives the line angle.
    \param baseX     [out]  Receives the line base point X.
    \param baseY     [out]  Receives the line base point Y.
    \param offsetX   [out]  Receives the line offset X.
    \param offsetY   [out]  Receives the line offset Y.
    \param dashes    [out]  Receives the line dash lengths.
  */
  virtual void getPatternDefinitionAt(int index, 
    double& angle,
    double& baseX,
    double& baseY,
    double& offsetX,
    double& offsetY,
    OdGeDoubleArray& dashes)
    const;

  /** \details
    Returns the angle of the gradient.

    \param angle [in]  Gradient angle.

    \remarks
    All angles are expressed in radians.
  */
  void setGradientAngle(double angle);

  /** \details
      Sets the interpolation value between the
      default and shifted values of the gradient's definition.

      \param gradientShift [in]  Shift value.

      \remarks
      A gradientShift of 0 indicates a fully unshifted gradient.
      A gradientShift of 1 indicates a fully shifted gradient.
  */
  void setGradientShift( float shiftValue );

  /** \details
    Controls the oneColorMode.
    \param oneColorMode [in]  Controls the oneColorMode.
  */
  void setGradientOneColorMode( bool oneColorMode );

  /** \details
    Set the colors and interpolation values describing the gradient fill.

    \param count  [in]  Size of 'colors' and 'values' arrays.
    \param colors [in]  Array of colors defining the gradient.
    \param values [in]  Array of interpolation values for the gradient.

    \remarks
    count must be two for the current implementation.

    Throws:
    <table>
    Exception             Cause
    eInvalidInput         count < 2 || values[0] != 0. || values[count-1] != 1.
    eNotImplementedYet    count > 2
    </table>
  */
  void setGradientColors( unsigned int count, 
    const OdCmColor* colors,
    const double* values );

  /** \details
    Sets the gradient type and name.
    \param gradientType [in]  Gradient type.
    \param gradientName [in]  Gradient name: SPHERICAL, HEMISPHERICAL, CURVED,
    LINEAR, CYLINDER, INVSPHERICAL, INVHEMISPHERICAL, INVCURVED, INVLINEAR,
    or INVCYLINDER.

    \remarks
    gradientType is one of the following:

    <table>
    Name                    Value
    kPreDefinedGradient     0
    kUserDefinedGradient    1
    </table>
  */
  void setGradient(OdDbHatch::GradientPatternType gradType,
    const OdString& gradName);

  /** \details
    Returns the color information as an OdCmColor instance.
  */
  virtual OdCmColor patternColor() const;

  /** \details
   Sets the color information an OdCmColor instance.

   \param color [in]  OdCmColor object.
 */
  virtual void setPatternColor(const OdCmColor& pc);

  /** \details
    Returns the area of this entity.

    \param area        [out]   Receives the area.
    \param areaViaHatch [in]   Set true, if need calculate area like a hatch(used before version 20.3).
    \returns
    Returns eOk if successful, or an appropriate error code if not.
  */
  virtual OdResult getArea(double& area, bool areaViaHatch = false) const;

  /** \details
    \returns
    Returns the offset vector.
  */
  virtual OdGeVector2d getOffsetVector() const;

  /** \details
      Appends a polygon loop.

      \param pCircle         [in] Pointer to OdDbCircle entity.
      \param excludeCrossing [in] Set true to disable creating a polygon if there are crosses between loops.
      \param tol             [in] Measurement accuracy tolerance.

      \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops;
        eOk if a polygon appended successfully.

      \remarks OdDbCircle must be closed.
    */
  virtual OdResult appendLoopFromBoundary(const OdDbCircle* pCircle,
    bool excludeCrossing = true, double tol = OdDbMPolygonCrossingFuzz);

  /** \details
      Appends a polygon loop.

      \param pPoly           [in] Pointer to OdDbPolyline entity.
      \param excludeCrossing [in] Set true to disable creating a polygon if there are crosses between loops.
      \param tol             [in] Measurement accuracy tolerance.

      \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops;
        eOk if a polygon appended successfully.

      \remarks OdDbPolyline must be closed - means has three points or more and all points should not lie on one straight line.
    */
  virtual OdResult appendLoopFromBoundary(const OdDbPolyline* pPoly,
    bool excludeCrossing = true, double tol = OdDbMPolygonCrossingFuzz);

  /** \details
      Appends a polygon loop.

      \param pPoly           [in] Pointer to OdDb2dPolyline entity.
      \param excludeCrossing [in] Set true to disable creating a polygon if there are crosses between loops.
      \param tol             [in] Measurement accuracy tolerance.

      \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops;
        eOk if a polygon appended successfully.

      \remarks OdDb2dPolyline must be closed - means has three points or more and all points should not lie on one straight line.
    */
  virtual OdResult appendLoopFromBoundary(const OdDb2dPolyline* pPoly,
    bool excludeCrossing = true, double tol = OdDbMPolygonCrossingFuzz);

  /** \details
    Returns the number of loops in the closed polygon.
  */
  virtual int numMPolygonLoops() const;

  /** \details
    Returns the specified loop.

    \param loopIndex [in]   Loop index.
    \param vertices  [out]  Receives the vertices that comprise this loop.
    \param bulges    [out]  Receives a set of bulges corresponding to the vertices array.

    \returns eInvalidInput if loopIndex equal or greate that OdDbMPolygon::numMPolygonLoops() or if loopIndex less than 0. 
        eOk if a polygon loop returned successfully.
   */
  virtual OdResult getMPolygonLoopAt(int loopIndex, OdGePoint2dArray& vertices,
    OdGeDoubleArray& bulges) const;

  /** \details
    Appends a polygon loop.
    
    \param vertices        [in] An array of vertices.
    \param bulges          [in] An array of bulge values for loops.
    \param excludeCrossing [in] Set true to disable creating a polygon if there are crosses between loops.
    \param tol             [in] Measurement accuracy tolerance.

    \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops;
      eOk if a polygon appended successfully.
  */
  virtual OdResult appendMPolygonLoop(const OdGePoint2dArray& vertices,
    const OdGeDoubleArray& bulges, bool excludeCrossing = true,
    double tol = OdDbMPolygonCrossingFuzz);

  /** \details
    Insert a polygon loop to the specified position.

    \param loopIndex       [in] Loop index.
    \param vertices        [in] An array of vertices.
    \param bulges          [in] An array of bulge values for loops.
    \param excludeCrossing [in] Set true to disable creating a polygon if there are crosses between loops.
    \param tol             [in] Measurement accuracy tolerance.

    \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops;
      eOk if a polygon insert successfully.
  */
  virtual OdResult insertMPolygonLoopAt(int loopIndex, 
    const OdGePoint2dArray& vertices, const OdGeDoubleArray& bulges, 
    bool excludeCrossing = true, double tol = OdDbMPolygonCrossingFuzz);

  /** \details
    Remove a polygon loop from the specified position.

    \param loopIndex       [in] Loop index.

    \returns eInvalidInput if loopIndex equal or greate that OdDbMPolygon::numMPolygonLoops() or if loopIndex less than 0.
        eOk if a polygon loop returned successfully.
    Throws:
    <table>
    Exception             Cause
    eNotApplicable     OdDbMPolygon::numMPolygonLoops() == 0
    </table>
  */
  virtual OdResult removeMPolygonLoopAt(int loopIndex);

  /** \details
    Declares the loop directions.
  */
  enum loopDir {
    kExterior   = 0,   // Loop direction is counter-clockwise
    kInterior   = 1,   // Loop direction is clockwise
    kAnnotation = 2    // Text
  };

  /** \details
    Gets the direction of the specified loop in the closed polygon.
    Returns eOk if successful, or eInvalidInput if loop index is out of range.

    \param lindex [in]  Loop index as an Ingeter value in the range 0 to numMPolygonLoops()-1.
    \param dir [out]  Reference to a variable in which the loop direction must be saved.
  */
  virtual OdResult getLoopDirection(int lindex, OdDbMPolygon::loopDir& dir) const;

  /** \details
    Sets the direction for the specified loop in the closed polygon.
    Returns eOk if successful, or eInvalidInput if loop index is out of range.

    \param lindex [in]  Loop index as an Ingeter value in range 0 to numMPolygonLoops()-1.
    \param dir [in]  Loop direction.
  */
  virtual OdResult setLoopDirection(int lindex, OdDbMPolygon::loopDir dir);

  /** \details
    Determines whether the specified point in WCS is on the specified loop of the polygon.

    \param worldPt [in] Point in WCS.
    \param loop    [in] The loop index.
    \param tol     [in] Measurement accuracy tolerance.

    \returns True if the specified point is on the specified loop of the polygon; false otherwise.
  */
  virtual bool isPointOnLoopBoundary(const OdGePoint3d& worldPt, int loop,
    double tol = OdDbMPolygonCrossingFuzz) const;
  
  /** \details
    The function projects worldPt to the polygon plane, then if the point is on some boundary, 
    indices of these boundaries are added to the loopsArray and the function returns, 
    otherwise it finds innermost loop containing the point and adds its index to the loopsArray before returning. 
    
    \returns The function returns loopsArray.size().
  */
  virtual int isPointInsideMPolygon(const OdGePoint3d& worldPt, OdGeIntArray& loopsArray,
    double tol = OdDbMPolygonCrossingFuzz) const;

  /** \details
  Returns a index of the parent loop, related to the specified loop.

  \param curLoop [in] The specified loop index
  \returns Non-negative index if the loop is found,
  or -1 if the specified loop does not have a parent loop,
  or -2 if the specified loop does not exist,
  or -3 if the specified loop intersects with a possible outer loop
  */
  virtual int getParentLoop(int curLoop) const;

  /** \details
  Creates a nesting tree of nodes. Where the nodes represent the nesting of the loops.

  \param loopNode [out] set pointer to root node of tree
  \returns eOk if creating tree is successful.
  \remarks
    - Return eOk if count loops in OdDbMPolygon is zero.
    - To avoid memory leak need use OdDbMPolygon::deleteMPolygonTree(loopNode).
    - If loops in OdDbMPolygon was changed, need get new tree by OdDbMPolygon::getMPolygonTree(loopNode).
  */
  virtual OdResult getMPolygonTree(OdDbMPolygonNode*& loopNode) const;

  /** \details
  Recursive delete tree created by OdDbMPolygon::getMPolygonTree(OdDbMPolygonNode*&)

  \param loopNode [in] pointer to root of tree
  */
  virtual void deleteMPolygonTree(OdDbMPolygonNode* loopNode) const;

  /** \details
  Find within pick box the closest loop from OdDbMPolygon to input 3d point within pick box.

  \param worldPt [in] 3d point of world coordinate
  \returns index of closest loop.
  \remarks
    - Return -1 if no one loop into pick box
    - Around of point created a pick box. Size of pick box get from system variable PICKBOX.
    - If two loop at the same distance from the point will be returned loop with lower index.
    - If two loop within pick box - return more closest to worldPt
  */
  virtual int getClosestLoopTo(const OdGePoint3d& worldPt) const;

  /** \details
  Perimeter calculation by adding the length of all borders.

  \returns perimeter of the OdDbMPolygon.
  \remarks Annotation boundaries not taken into account
  */
  virtual double getPerimeter() const;


  /** \details
  Checks the direction of the loops and changes to the correct one. The directivity check is based on the resulting tree from getMPolygonTree. 
  Where the depth of the tree indicates the direction of the loop (even values are counterclockwise, not even clockwise). 
  If in MPolygon are loops that are not displayed (invalid), they will be marked again as valid (and will be drawn) if they do not intersect with others.
  Also check for intersections of the displayed loops(valid). Intersected loops marks as invalid, and there will be not draw.

  \returns eOk if check and changes is successful, or eInvalidInput if getMPolygonTree not generate tree. 
  */
  virtual OdResult balanceTree();

  /** \details
  Checks if there are loops that are not drawn(invalid). Do not check loops that are draw(valid) for intersection or direction.

  \returns true if all loops are draw, or return false if MPolygon has loops that not draw (invalid).
  \remarks use balanceDisplay/balanceTree to check and mark valid and invalid loops(loops that be draw or not draw).
  */
  virtual bool isBalanced() const;

  /** \details
  Checks loops for intersection and direction. If the cycle is placed at an even level of the tree, and the direction is clockwise, it will be marked as invalid (it will not be displayed).
To change direction to the right, use balanceTree. If the cycle intersects with another cycle, the cycle with a higher index will be marked as invalid (do not draw).
Loops that have been marked as invalid but have the correct direction and no intersections will be marked as valid and will be drawn again.

  \returns eOk if check and changes is successful, or eInvalidInput if getMPolygonTree not generate tree. 
  */
  virtual OdResult balanceDisplay();


  /** \details
  Create loops from entities for empty OdDbMPolygon. Every ObjectId must be one closed loop.
    \param ids             [in]  array of entities objects ids.
    \param rejectedObjs    [out] return indices of objectId from array ids that led to errors creating loops
    \param excludeCrossing [in]  Set true to disable creating a polygon if there are crosses between loops.
    \param tol             [in]  Measurement accuracy tolerance.
  \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops or if OdDbMPolygon has loops;
           eInvalidInput if ids array is empty or has rejected objects
           eOk if a polygon appended successfully.
  \note        if there is at least one rejected objectId a loops will not be added.
               OdDbMPolygon should not contain loops.
  */
  virtual OdResult createLoopsFromBoundaries(const OdDbObjectIdArray &ids,
                                             OdIntArray &rejectedObjs,
                                             bool excludeCrossing = true, double tol = OdDbMPolygonCrossingFuzz);

  /** \details
  Create loops from for empty OdDbMPolygon.
    \param vertices        [in]  An array of vertices array.
    \param bulges          [in]  An array of bulge value array.
    \param rejectedObjs    [out] return indices of objectId from array ids that led to errors creating loops
    \param excludeCrossing [in]  Set true to disable creating a polygon if there are crosses between loops.
    \param tol             [in]  Measurement accuracy tolerance.
  \returns eAmbiguousInput if excludeCrossing is true and there are crosses between loops or if OdDbMPolygon has loops;
           eInvalidInput if ids array is empty or has rejected objects
           eOk if a polygon appended successfully.
  \note        if there is at least one rejected objectId a loops will not be added.
               OdDbMPolygon should not contain loops.
  */
  virtual OdResult createLoops(const OdGePoint2dArrayArray &vertices,
                               const OdArray<OdGeDoubleArray> &bulges, OdIntArray &rejectedObjs,
                               bool excludeCrossing = true, double tol = OdDbMPolygonCrossingFuzz);

  /* Not implemented


  
  

  
  

  
  

  //virtual OdResult getLoopAtGsMarker(OdGsMarker gsMark, int &loop) const;
  virtual void getChildLoops(int curLoop, OdGeIntArray& selectedLoopIndexes) const;
  
  

  // Mpolyon loop crossing and inside methods.
  //

  virtual OdResult loopCrossesItself(bool& crosses, bool findAll,
    OdDbMPolygonCrossingArray& crossingsArray,
    const OdGePoint2dArray& vertexPts, 
    const OdGeDoubleArray& vertexBulges, 
    double tol = OdDbMPolygonCrossingFuzz) const;

  virtual bool loopCrossesItself(const OdGePoint2dArray& vertexPts, 
    const OdGeDoubleArray& vertexBulges, 
    double tol = OdDbMPolygonCrossingFuzz) const;

  virtual OdResult loopCrossesMPolygon(bool& crosses, bool findAll,
    OdDbMPolygonCrossingArray& crossingsArray,
    const OdGePoint2dArray& testVertexPts, 
    const OdGeDoubleArray& testVertexBulges, 
    double tol = OdDbMPolygonCrossingFuzz) const;

  virtual bool selfCrosses(const OdGePoint2dArray& vertexPts, 
    const OdGeDoubleArray& vertexBulges,
    double tol = OdDbMPolygonCrossingFuzz) const;

  virtual bool includesTouchingLoops(double tol = OdDbMPolygonCrossingFuzz) const;

  //virtual OdResult subGetClassID(void* pClsid) const;

  virtual OdResult   intersectWith(
    const OdDbEntity*   ent,
    OdDb::Intersect     intType,
    OdGePoint3dArray&   points,
    OdGsMarker            thisGsMarker  = 0,
    OdGsMarker            otherGsMarker = 0)
    const;

  virtual OdResult   intersectWith(
    const OdDbEntity*   ent,
    OdDb::Intersect     intType,
    const OdGePlane&    projPlane,
    OdGePoint3dArray&   points,
    OdGsMarker            thisGsMarker  = 0,
    OdGsMarker            otherGsMarker = 0)
    const;

  virtual OdResult   getOsnapPoints(
    OdDb::OsnapMode       osnapMode,
    OdGsMarker              gsSelectionMark,
    const OdGePoint3d&    pickPoint,
    const OdGePoint3d&    lastPoint,
    const OdGeMatrix3d&   viewXform,
    OdGePoint3dArray&        snapPoints,
    OdDbIntArray&     geomIds) const;

  virtual OdResult getGripPoints(OdGePoint3dArray&     gripPoints,
    OdDbIntArray&  osnapModes,
    OdDbIntArray&  geomIds) const;

  virtual OdResult moveGripPointsAt(const OdDbIntArray& indices,
    const OdGeVector3d& offset);

  virtual OdResult getStretchPoints(OdGePoint3dArray& stretchPoints) const;

  virtual OdResult moveStretchPointsAt( const OdDbIntArray& indices,
    const OdGeVector3d& offset);

  
  
  
  */


  /** \details
    Breaks the polygon into a set of polylines.
  */
  virtual OdResult subExplode(
    OdRxObjectPtrArray& entitySet) const;

  virtual OdResult subTransformBy( 
    const OdGeMatrix3d& xfn );

  /** \details
    Reads the .dwg file data of this object.

    \param pFiler [in]  Filer object from which data are read.

    \remarks
    This function is called by dwgIn() to allow the object to read its data.
    When overriding this function:
    1) Call assertWriteEnabled().
    2) Call the parent class's dwgInFields(pFiler).
    3) If it returns eOK, continue; otherwise return whatever the parent's dwgInFields(pFiler) returned.
    4) Call the OdDbDwgFiler(pFiler) methods to read each of the object's data items in the order they were written.
    5) Return pFiler->filerStatus().

    \returns Returns eOk if reading was successful
      or an appropriate OdResult error code in the other case.
  */
  virtual OdResult dwgInFields(
    OdDbDwgFiler* pFiler);

  /** \details
    Writes the .dwg file data of this object.

    \param pFiler [in]  Pointer to the filer to which data are written.

    \remarks
    This function is called by dwgIn() to allow the object to write its data.
    When overriding this function:
    1) Call assertReadEnabled().
    2) Call the parent class's dwgOutFields(pFiler).
    3) Call the OdDbDwgFiler(pFiler) methods to write each of the object's data items in the order they were written.

    \returns Returns eOk if writing was successful
      or an appropriate OdResult error code in the other case.
  */
  virtual void dwgOutFields(
    OdDbDwgFiler* pFiler) const;

  /** \details
    Reads the DXF data of this object.

    \param pFiler [in] Pointer to the filer from which data are read.

    \remarks
    This function is called by dxfIn() to allow the object to read its data.
    When overriding this function:
    1) Call assertWriteEnabled().
    2) Call the parent class's dwgInFields(pFiler).
    3) If it returns eOK, continue; otherwise return whatever the parent's dxfInFields(pFiler) returned.
    4) Call the OdDbDxfFiler(pFiler) methods to read each of the object's data items in the order they were written.
    5) Return pFiler->filerStatus().

    \returns Returns eOk if reading was successful
      or an appropriate OdResult error code in the other case.
  */
  virtual OdResult dxfInFields(
    OdDbDxfFiler* pFiler);

  /** \details
    Writes the DXF data of this object.

    \param pFiler [in]  Pointer to the filer to which data are to be written.

    \remarks
    This function is called by dxfOut() to allow the object to write its data.
    When overriding this function:
    1) Call assertReadEnabled().
    2) Call the parent class's dxfOutFields(pFiler).
    3) Use pFiler to call the OdDbDxfFiler methods to write each of the object's data items in the order they were written.

    \returns Returns eOk if writing was successful
      or an appropriate OdResult error code in the other case.
  */
  virtual void dxfOutFields(
    OdDbDxfFiler* pFiler) const;

  virtual bool subWorldDraw(
    OdGiWorldDraw* pWd) const;

  /** \details
    Applies the default properties of the specified database to this entity.

    \param pDb [in]  Pointer to the database whose default values are to be used.
    \param doSubents [in]  Set to true if subentities should be processed

    \remarks
    If pDb is null, the database containing this entity is used.

    The following properties are set
    * color
    * layer
    * linetype
    * linetype scale
    * lineweight
    * plotstyle
    * visibility
  */
  virtual void subSetDatabaseDefaults(
    OdDbDatabase* pDb, 
    bool doSubents);

  virtual void saveAs(
    OdGiWorldDraw* pWd,
    OdDb::DwgVersion ver ) const;
};

/** \details
  This template class is a specialization of the OdSmartPtr class for OdDbMPolygon object pointers.
*/
typedef OdSmartPtr<OdDbMPolygon> OdDbMPolygonPtr;

/** \details
  Represents node objects in the MPolygon nesting tree.
*/
class OdDbMPolygonNode {
public:
  /** \details
    Creates a new instance of a node object with default parameters.
  */
  OdDbMPolygonNode();

public:
  /** Node pointer to parent node. */
  OdDbMPolygonNode * mParent;
  /** Array of node pointers for children nodes. */
  OdArray<OdDbMPolygonNode *> mChildren;
  /** MPolygon loop index. */
  OdInt32 mLoopIndex;
};

inline
OdDbMPolygonNode::OdDbMPolygonNode()
  : mLoopIndex(-1), mParent(NULL)
{
}

#endif // _DBMPOLYGON_H_INCLUDED_
