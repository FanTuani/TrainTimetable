cmake_minimum_required(VERSION 3.27)
project(TrainTimetable)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/header)

add_executable(TrainTimetable source/main.cpp
        header/invalid_operation_exception.h)
