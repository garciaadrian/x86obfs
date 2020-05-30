# elf-parser

set(target elf-parser)
set(source_path ${CMAKE_CURRENT_SOURCE_DIR})
set(sources ${source_path}/elf64.cpp)

add_library(${target}
  ${sources})

add_library(${META_PROJECT_NAME}::${target} ALIAS ${target})
