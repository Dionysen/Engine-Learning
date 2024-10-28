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

#ifndef _BM_LOADER_HOST_APP_SERVICES_H_
#define _BM_LOADER_HOST_APP_SERVICES_H_

#include "TD_PackPush.h"

#include "Database/BmHostAppServices.h"
#include "ThumbnailImage.h"


/** \details
    This class is the base class for platform specific operations within ODA BimRv.

    Library: TB_Loader

    {group:OdBm_Classes}
	<group Loader_Classes>
*/
class ODRX_ABSTRACT TB_LOADER_EXPORT OdBmLoaderHostAppServices
    : public OdBmHostAppServices {
public:
  ODRX_DECLARE_MEMBERS(OdBmLoaderHostAppServices);

  /** \details
      Loads the contents of the specified ODA BimRv file file into the
      database with which this HostAppServices object is associated.

      \param fileName    [in] Input name of the file from which the data are to be read.
      \param shareMode   [in] Input share mode to use when opening the specified file.
      \param partialLoad [in] Input partial loading of ODA BimRv files flag. Partial loading is working only for the latest file format.

      \returns
      Returns a SmartPointer to the database containing the contents of the file.
  */
  virtual OdBmDatabasePtr readFile(
      const OdString& fileName,
      const Oda::FileShareMode shareMode = Oda::kShareDenyWrite,
      const bool bPartial = true);

  /** \details
      Loads the contents of the specified ODA BimRv file file into the
      database with which this HostAppServices object is associated.

      \param pDb         [in] Input a SmartPointer to the database which will containing the contents of the file.
      \param fileName    [in] Input name of the file from which the data are to be read.
      \param shareMode   [in] Input share mode to use when opening the specified file.
      \param partialLoad [in] Input partial loading of ODA BimRv files flag. Partial loading is working only for the latest file format.
  */
  virtual void readFile(OdBmDatabasePtr pDb,
                        const OdString& fileName,
                        Oda::FileShareMode shareMode,
                        const bool bPartial = true);

  /** \details
      Loads the contents of the specified StreamBuf into the database
      with which this HostAppServices object is associated.

      \param pStreamBuf  [in] Pointer to the StreamBuf object from which the data are to be read.
      \param partialLoad [in] Input partial loading of ODA BimRv files flag. Partial loading is working only for the latest file format.

      \returns
      Returns a SmartPointer to the database containing the contents of the file.
  */
  virtual OdBmDatabasePtr readFile(OdStreamBufPtr pStream, const bool bPartial = true);

  /** \details
    Writes the contents of this database to the specified output file.

    \param filename    [in] Name of the file to which the data that is to be written.
    \param pStreamBuf  [in] Pointer to the OdBmDatabase object data is to be written.
    \param partialLoad [in] Input partial saving of ODA BimRv files flag. If partial saving is true, modified elements will be written to a new stream in the file. If partial saving is false, streams for elements will be merged to one. It will contain the latest state of the elements.
  */
  virtual void writeFile(const OdString& fileName, OdBmDatabase* pDb, bool partialSaving = false);

  /** \details
    Writes the contents of this database to the specified StreamBuf object.

    \param pStreamBuf  [in] Pointer to the StreamBuf object to which the data is to be written.
    \param pStreamBuf  [in] Pointer to the OdBmDatabase object data that is to be written.
    \param partialLoad [in] Input partial saving of ODA BimRv files flag. If partial saving is true, modified elements will be written to a new stream in the file. If partial saving is false, streams for elements will be merged to one. It will contain the latest state of the elements.
  */
  virtual void writeFile(OdStreamBufPtr pStream, OdBmDatabase* pDb, bool partialSaving = false);

  /** \details
      Creates an instance of an OdBmDatabase object.
      This HostAppServices object will be associated with the newly created database.

      \param defaultContent [in] If it is not equal to kNotInitialized, the newly created database
      will be populated with the default set of objects.

      \returns
      Returns the newly created database.
  */
  virtual OdBmDatabasePtr createDatabase(bool createDefault = true) const;

  /** \details
      Loads the preview of the specified ODA BimRv file file into the thumbnail object.

      \param fileName [in] Input name of the file from which the data are to be read.
      \param dataImage [out] Output OdThumbnailImage object which will contain preview image.
  */
  virtual void getPreviewImage(
    const OdString& fileName,
    OdThumbnailImage& dataImage);

  virtual OdBmDatabase* importDatabase(OdBmDatabase* pDb, OdBmDatabase* pImportingDb);

  /** \details
      Returns true if file is supported to opening.

      \param fileName [in] Input name of the file for which the version is checked.
      \param bConvertible [in] If we test the file version for possibility to convert to the latest version or just read.
      \param errorDescription [out] Return description for the error if it possible
  */
  static bool isFileVersionSupported(const OdString& fileName, bool bConvertible = true, OdString* errorDescription = NULL);
};

#include "TD_PackPop.h"

#endif // _BM_LOADER_HOST_APP_SERVICES_H_
