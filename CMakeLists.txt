cmake_minimum_required(VERSION 3.27)
project(TrainTimetable)

set(CMAKE_CXX_STANDARD 20)

set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/header)
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/source)

include_directories(${HEADER_DIR})

file(GLOB SOURCE_FILES ${SOURCE_DIR}/*.cpp)
file(GLOB HEADER_FILES ${HEADER_DIR}/*.h)

add_executable(TrainTimetable
        ${SOURCE_FILES}
        ${HEADER_FILES})
