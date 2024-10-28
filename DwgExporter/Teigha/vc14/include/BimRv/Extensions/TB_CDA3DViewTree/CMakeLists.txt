#
#  BmCDA3DViewTree library
#

set (CDA3DViewTree_h
  BmCDA3DViewTreeModule.h
  BmCDA3DViewCache.h
  BmElementCDAProps.h
  BmDatabaseCDAProps.h
  BmViewsCDAProps.h
  BmDynNodeCDAProps.h)
SOURCE_GROUP ("Header Files" FILES ${CDA3DViewTree_h})

set (CDA3DViewTree_cpp
  BmCDA3DViewTreeModule.cpp
  BmCDA3DViewCache.cpp
  BmElementCDAProps.cpp
  BmDatabaseCDAProps.cpp
  BmViewsCDAProps.cpp
  BmDynNodeCDAProps.cpp)

SOURCE_GROUP ("Source Files" FILES ${CDA3DViewTree_cpp})

if(MSVC)
  tb_sources(${TB_EX_CDA3DVIEWTREE_LIB}
    CDA3DViewTree.rc
  )
endif(MSVC)


tb_sources(${TB_EX_CDA3DVIEWTREE_LIB}
  ${CDA3DViewTree_h}
  ${CDA3DViewTree_cpp}
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

tb_tx(${TB_EX_CDA3DVIEWTREE_LIB}
      ${TB_LOADER_BASE_LIB}
      ${TB_DB_LIB}
      ${TD_ROOT_LIB}
      ${TD_ALLOC_LIB}
      ${TD_RX_PROPERTIES_LIB}
      ${TB_EX_LABELUTILS_LIB}
      ${TD_TFCORE_LIB}
      ${TB_COMMON_LIB}
      ${TB_BASE_LIB}
)

tb_project_group(${TB_EX_CDA3DVIEWTREE_LIB} "Extensions")