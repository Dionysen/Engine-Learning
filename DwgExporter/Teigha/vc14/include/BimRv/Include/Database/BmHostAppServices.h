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



#ifndef _ODBM_HOSTAPPLICATIONSERVICES_INCLUDED_
#define _ODBM_HOSTAPPLICATIONSERVICES_INCLUDED_


#include "TD_PackPush.h"

#include "DbBaseHostAppServices.h"
#include "StringArray.h"
#include "BrepBuilder/BrepBuilder.h"

class OdBmDatabase;
typedef OdSmartPtr<OdBmDatabase> OdBmDatabasePtr;

/** Description:
    This class is the base class for platform specific operations within ODA BimRv.

    Library: TB_Base

    {group:OdBm_Classes}

    <group Database_Classes>
*/
class ODRX_ABSTRACT TB_DB_EXPORT OdBmHostAppServices
    : public OdDbBaseHostAppServices {
public:
  ODRX_DECLARE_MEMBERS(OdBmHostAppServices);

  OdBmHostAppServices();

  /** Description:
    Returns the static OdRxClass *description* object associated with the *database*.

    Remarks:
    Returns OdBmDatabase::desc();
  */
  virtual OdRxClass* databaseClass() const;

  /** Description:
    Creates an instance of an OdBmDatabase object.

    Arguments:
    defaultContent (I) If it is not equal to kNotInitialized, the newly created *database*
            will be populated with the default set of objects.
            \param createDefault [in]  If and only if true, the newly created database
            will be populated with the default set of objects (all tables, ModelSpace and PaperSpace blocks
            etc.)
    Remarks:
    Returns the newly created *database*.

    This HostAppServices object will be associated with the newly created *database*.

   */
  virtual OdBmDatabasePtr createDatabase( bool createDefault = true ) const;

  /** Description:
    Returns the fully qualified path to the specified file.

    Arguments:
    filename (I) Name of the file to find.
    pDb (I) Pointer to the *database* *context*.
    hint (I) Hint that indicates the type of file that is required.

    Remarks:
    Returns an empty string if the file is not found.

    This function is called by ODA BimRv when access is needed to a
    file, such as a font file, a template file, etc.

    pDb == 0 specifies that this file search is not related to a *database*.

    If pDb != 0, call pDb->getFilename() to determine the path to the bim
    file associated with the *database*.

    The typical search order is as follows:

    1.  The filename itself.
    2.  The current directory.
    3.  The drawing directory (for shx font, image, and xref files).
    4.  The Windows fonts directory (only for TTF fonts on Windows).

    hint must be one of the following:

    @table
    Name                    Value     Description Extension
    kDefault                0         Any file.                         any
    kFontFile               1         Can be either SHX or TTF file.    SHX or TTF
    kCompiledShapeFile      2         SHX file.                         SHX
    kTrueTypeFontFile       3         TTF file.                         TTF
    kEmbeddedImageFile      4         Image file.                       ISM
    kXRefDrawing            5         External reference file.
    kPatternFile            6         Pattern file (PAT)                PAT
    kDRXApplication         7         DRX Application file.             DRX
    kFontMapFile            8         FontMap file                      FMP
  */
  virtual OdString findFile(
    const OdString& filename,
    OdDbBaseDatabase* pDb = 0,
    FindFileHint hint = kDefault);

  /** Description:
    Returns the *name* of the client *program*.

    Remarks:
    This function is typically used for populating "About" information.

    Note:
    The default implementation of this function returns oddgGetLibraryInfo()->getLibName()
  */
  virtual const OdString program();

  /** Description:
    Returns the *name* of the client *product*.

    Remarks:
    This function is typically used for populating "About" information.

    Note:
    The default implementation of this function returns program().
  */
  virtual const OdString product();

  /** Description:
    Returns the *name* of the client company.

    Remarks:
    This function is typically used for populating "About" information.

    Note:
    The default implementation of this function returns oddgGetLibraryInfo()->getCompanyName().
  */
  virtual const OdString companyName();

  /** Description:
    Returns the *release* major and minor version string of the client application.

    Note:
    The default implementation of this function returns oddgGetLibraryInfo()->getLibVersion().
  */
  virtual const OdString releaseMajorMinorString();

  /** Description:
    Returns the *release* version string of the client application.

    Note:
    The default implementation of this function returns oddgGetLibraryInfo()->getLibVersion().
  */
  virtual const OdString versionString();

  /** Description:
    Returns a formatted message corresponding to the specified error code(s).
    Arguments:
    errorCode (I) Error code.
   */
  virtual OdString formatMessage(
    unsigned int errorCode,...);

  /** Description:
    Returns the font file to be used when a given font file is
    not found by ODA BimRv.

    See Also:
    Font Handling

    Note:
    The default implementation of this function returns an empty string.
  */
  virtual OdString getAlternateFontName() const;

  /** Description:
    Returns the name of the font mapping file used by the getPreferableFont function.

    See Also:
    Font Handling

    Note:
    The default implementation of this function returns an empty string.
  */
  virtual OdString getFontMapFileName() const;

  /** Description:
    Returns the preferable font *name* for the specified font *name* and type.

    Arguments:
    fontName (I) Font *name*.
    fontType (I) Font type.

    Remarks:
    fontType must be one of the following:

    @table
    Name                    Value    Description
    kFontTypeUnknown        0        Unknown.
    kFontTypeShx            1        SHX font.
    kFontTypeTrueType       2        TrueType font.
    kFontTypeShape          3        Shape file.
    kFontTypeBig            4        BigFont file.

    See Also:
    Font Handling

    Note:
    The default implementation of this function returns an empty string.
  */
  virtual OdString getPreferableFont(
    const OdString& fontName,
    OdFontType fontType);

  /** Description:
    Returns the font to be used when the specified font is not found.

    Arguments:
    fontName (I) Font *name*.
    fontType (I) Font type.

    Remarks:
    fontType must be one of the following:

    @table
    Name                    Value    Description
    kFontTypeUnknown        0        Unknown.
    kFontTypeShx            1        SHX font.
    kFontTypeTrueType       2        TrueType font.
    kFontTypeShape          3        Shape file.
    kFontTypeBig            4        BigFont file.

    See Also:
    Font Handling

    Note:
    The default implementation of this function returns an empty string.
  */
  virtual OdString getSubstituteFont(
    const OdString& fontName,
    OdFontType fontType);

  /** Description:
    Collects folders with TrueType fonts.

    \param aDirs [out]   Array names of folders.
  */
  virtual bool getSystemFontFolders(OdStringArray& aDirs);

  /** Description:
    Collects TrueType font paths.

    \param res [out]      Array of full file names of TrueType fonts.
    \param sPath [in]    Array of folders paths with TrueType files.
    \param sFilter [in]  File name filter.
  */
  virtual void collectFilePathsInDirectory(OdStringArray& res, // out
    const OdString& sPath, // in
    const OdString& sFilter = L"*.*");

    /** \details
    Initialize brep builder with product specific implementation. Return eNotImplementedYet by default.

    \param brepBuilder [in]  instance of brep builder class.
    \param bbType [in] type of brep.

  */
  virtual OdResult brepBuilder(OdBrepBuilder& brepBuilder, BrepType bbType);

  #define REGVAR_DEF(type, name, unused3, unused4, unused5)               \
  protected:                                                              \
    type  m_##name;                                                       \
  public:                                                                 \
    /** Description: Returns the ##NAME registry-resident system variable.\
      Remarks: ##remarks                                                  \
      Notes: ##notes                                                      \
      See Also: ##see_also                                                \
    */                                                                    \
    virtual type get##name() const;                                       \
    /** Description: Sets the ##NAME registry-resident system variable.   \
      Arguments:  val (I) New value for ##NAME. ##RANGE                   \
      Remarks: ##remarks                                                  \
      Notes: ##notes                                                      \
      See Also: ##see_also                                                \
    */                                                                    \
    virtual void set##name(type val);

  #define REGVAR_DEF_ARRAY(type, name, unused3, unused4, unused5)         \
  protected:                                                              \
    type  m_##name;                                                       \
  public:                                                                 \
    /** Description: Returns the ##NAME registry-resident system variable.\
      Remarks: ##remarks                                                  \
      Notes: ##notes                                                      \
      See Also: ##see_also                                                \
    */                                                                    \
    virtual void get##name(type& val) const;                              \
    /** Description: Sets the ##NAME registry-resident system variable.   \
      Arguments:  val (I) New value for ##NAME. ##RANGE                   \
      Remarks: ##remarks                                                  \
      Notes: ##notes                                                      \
      See Also: ##see_also                                                \
    */                                                                    \
    virtual void set##name(type& val);

  #include "Common/BmRegVarDefs.h"

  #undef REGVAR_DEF
  #undef REGVAR_DEF_ARRAY
};


class OdDbLibraryInfo;

/** Description:
  Returns the properties of the library.

  Remarks:
  This function is typically used for populating "About" information.
*/
TB_DB_EXPORT OdDbLibraryInfo* odbmGetLibraryInfo();


#include "TD_PackPop.h"

#endif /* _ODBM_HOSTAPPLICATIONSERVICES_INCLUDED_ */



