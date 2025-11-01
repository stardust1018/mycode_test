add_library(solution SHARED "")

set_target_properties(solution
PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)

target_sources(solution
PRIVATE
  solution.cpp
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/solution.h
)

target_include_directories(solution
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)