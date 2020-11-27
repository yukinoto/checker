cmake_minimum_required(VERSION 3.0.0)
project(checker VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(checker main.cpp)
add_executable(p3373 p3373.cpp)
add_executable(fmk fmk.cpp)
add_executable(ans ans.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
