#
#  BmCDAProperties library
#

set (CDAProperties_h
  BmCDAPropertiesModule.h
  BmCDAPropertiesCache.h
  BmElementCDAProps.h
  BmDatabaseCDAProps.h
  BmProjectCDAProps.h
  BmBuildingCDAProps.h
  BmViewsCDAProps.h
  BmLevelCDAProps.h
  BmCategoryCDAProps.h
  BmRfaProjectCDAProps.h)
SOURCE_GROUP ("Header Files" FILES ${CDAProperties_h})

set (CDAProperties_cpp
  BmCDAPropertiesModule.cpp
  BmCDAPropertiesCache.cpp
  BmElementCDAProps.cpp
  BmDatabaseCDAProps.cpp
  BmProjectCDAProps.cpp
  BmBuildingCDAProps.cpp
  BmViewsCDAProps.cpp
  BmLevelCDAProps.cpp
  BmCategoryCDAProps.cpp
  BmRfaProjectCDAProps.cpp)

SOURCE_GROUP ("Source Files" FILES ${CDAProperties_cpp})

if(MSVC)
  tb_sources(${TB_EX_CDAPROPERTIES_LIB}
    CDAProperties.rc
  )
endif(MSVC)


tb_sources(${TB_EX_CDAPROPERTIES_LIB}
  ${CDAProperties_h}
  ${CDAProperties_cpp}
)

include_directories(
  ${TB_ROOT}/Include
  ${TB_ROOT}/Source
  ${TB_ROOT}/Include/Database/Entities
  ${TB_ROOT}/Include/Database/Managers
  ${TB_ROOT}/Source/Database/Entities
  ${TB_ROOT}/Source/Database/Managers
  ${TB_ROOT}/Extensions/TB_ExLabelUtils
  ${TKERNEL_ROOT}/DevInclude/DbRoot
  ${TB_ROOT}/Extensions/ExServices
  ${TKERNEL_ROOT}/Extensions/ExServices
)

tb_tx(${TB_EX_CDAPROPERTIES_LIB}
      ${TB_LOADER_BASE_LIB}
      ${TB_DB_LIB}
      ${TD_ROOT_LIB}
      ${TD_ALLOC_LIB}
      ${TD_RX_PROPERTIES_LIB}
      ${TB_EX_LABELUTILS_LIB}
      ${TD_TFCORE_LIB}
      ${TB_COMMON_LIB}
      ${TB_BASE_LIB}
      ${TB_STAIRSRAMP_LIB}
      ${TB_HOSTOBJ_LIB}
      ${TB_FAMILY_LIB}
      ${TB_MAIN_LIB}
      ${TB_STRUCTURAL_LIB}
)

tb_project_group(${TB_EX_CDAPROPERTIES_LIB} "Extensions")
