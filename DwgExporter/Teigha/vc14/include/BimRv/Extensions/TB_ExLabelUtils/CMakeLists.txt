#
#  ExLabelUtils library
#

set (ExLabelUtils_h
  BmExLabelUtilsModule.h
  BmSampleLabelUtilsPE.h)
SOURCE_GROUP ("Header Files" FILES ${BmLabelUtils_h})

set (ExLabelUtils_cpp
  BmExLabelUtilsModule.cpp
  BmSampleLabelUtilsPE.cpp
	${TH_ROOT}/DWFToolkit-7.7/develop/global/src/dwfcore/digest/sha1.c)

SOURCE_GROUP ("Source Files" FILES ${BmLabelUtils_cpp})

if(MSVC)
  tb_sources(${TB_EX_LABELUTILS_LIB}
    ExLabelUtils.rc
  )
endif(MSVC)


tb_sources(${TB_EX_LABELUTILS_LIB}
  ${ExLabelUtils_h}
  ${ExLabelUtils_cpp}
)

include_directories(
  ${TB_ROOT}/Include
  ${TB_ROOT}/Source
)

tb_tx(${TB_EX_LABELUTILS_LIB}
      ${TB_LOADER_BASE_LIB}
      ${TB_DB_LIB}
      ${TD_ROOT_LIB}
      ${TD_ALLOC_LIB}
      ${TB_COMMON_LIB}
	  ${TB_GEOMETRY_LIB}
      ${TB_BASE_LIB}
)

tb_project_group(${TB_EX_LABELUTILS_LIB} "Extensions")


if(NOT PACKAGE_MODE)
  # In custromer's version of project we trust, that provided CSV are OK
  # And checksums are up to date.
  # So copying & checking not required.

  #
  # Copy CSV files.
  #

  FILE(GLOB FILES "${TB_ROOT}/CSV/*.csv")

  add_dependencies(${TB_EX_LABELUTILS_LIB} TB_SHA1Check)

  FOREACH(PATH IN LISTS FILES)
    get_filename_component(CSV_FILENAME ${PATH} NAME_WE)

    if (NOT $ENV{GENERATION_MODE})
      add_custom_command(
        TARGET ${TB_EX_LABELUTILS_LIB} PRE_BUILD
        COMMAND "${ODA_BIN_DIR}/TB_SHA1Check" "${TB_ROOT}" "${TB_ROOT}/.csvchecksums" "CSV/${CSV_FILENAME}.csv"
        COMMENT "Checking consistency of ${CSV_FILENAME}.csv")
    endif()

    add_custom_command(
            TARGET ${TB_EX_LABELUTILS_LIB} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
                    ${PATH}
                    ${ODA_BIN_DIR}/CSV/${CSV_FILENAME}.csv
            COMMENT "CSV COPIED: ${CSV_FILENAME}.csv")
  ENDFOREACH(PATH)

  add_custom_command(
          TARGET ${TB_EX_LABELUTILS_LIB} POST_BUILD
          COMMAND ${CMAKE_COMMAND} -E copy
                  "${TB_ROOT}/Extensions/TB_ExLabelUtils/Checksums.txt"
                  "${ODA_BIN_DIR}/Checksums.txt"
          COMMENT "CHECKSUMS COPIED: Checksums.txt")

endif(NOT PACKAGE_MODE)
