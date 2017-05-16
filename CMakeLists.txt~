cmake_minimum_required(VERSION 2.8.12)

project(OpenCVSample)

find_package(OpenCV REQUIRED)

#Bring the headers, such as Student.h into the project
include_directories(${OpenCV_INCLUDE_DIRS}/include)
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(demo ${SOURCES})
target_link_libraries(demo ${OpenCV_LIBS})


