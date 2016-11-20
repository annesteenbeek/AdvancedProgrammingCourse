cmake_minimum_required(VERSION 3.6)
project(AdvancedProgrammingCourse)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Gradebook/fig03_13.cpp Gradebook/GradeBook.cpp Gradebook/GradeBook.h)
include_directories(Gradebook)
add_executable(Gradebook ${SOURCE_FILES})

set(SOURCE_FILES2 Gradebook5.11/GradeBook.cpp Gradebook5.11/GradeBook.h Gradebook5.11/Student.cpp Gradebook5.11/Student.h)
include_directories(Gradebook5.11)
add_executable(Gradebook5.11 ${SOURCE_FILES2} Gradebook5.11/fig05_11.cpp )
add_executable(runStudent ${SOURCE_FILES2} Gradebook5.11/runStudent.cpp)