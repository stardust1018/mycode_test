cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp_test "")

target_sources(cpp_test
  PRIVATE
    solutionTest.cpp
  )

set(GTEST_DIR /usr/local/include)
include_directories(${GTEST_DIR})

target_link_libraries(cpp_test
  PRIVATE
    solution
    gtest
    pthread
)

enable_testing()

add_test(
  NAME google_test
  COMMAND $<TARGET_FILE:cpp_test>
  )