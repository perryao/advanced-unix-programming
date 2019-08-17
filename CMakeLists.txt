cmake_minimum_required(VERSION 2.8)

project(apue)
set(CMAKE_C_STANDARD 11)
set(
  CMAKE_RUNTIME_OUTPUT_DIRECTORY
  ${CMAKE_HOME_DIRECTORY}/.bin
)

include_directories("${PROJECT_SOURCE_DIR}/lib")
include_directories("${PROJECT_SOURCE_DIR}/include")
add_subdirectory(lib)
add_subdirectory(include)
add_subdirectory(chapter1)
add_subdirectory(chapter2)
add_subdirectory(chapter3)
add_subdirectory(chapter4)
add_subdirectory(chapter5)
add_subdirectory(chapter6)
