cmake_minimum_required(VERSION 3.5)

project(main)

aux_source_directory(. SRC_LIST)
message(STATUS "***melon*** SRC_LIST: ${SRC_LIST}")
add_executable(main ${SRC_LIST})

set_target_properties(main
PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

add_subdirectory(solution)
add_subdirectory(test)

target_link_libraries(main
PRIVATE
  solution
)