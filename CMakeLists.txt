cmake_minimum_required(VERSION 3.16)

project(simple_vfs)

set(SOURCES 
  src/vfs.cpp
  src/path.cpp
)

if(NOT(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME))
  add_library(${PROJECT_NAME}
    ${SOURCES}
  )
else()
  add_executable(${PROJECT_NAME}
    src/main.cpp
    ${SOURCES}
  )
endif()

target_include_directories(${PROJECT_NAME} PUBLIC src/)