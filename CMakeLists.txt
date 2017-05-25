cmake_minimum_required(VERSION 2.8.12)

project(OpenCVSample)

find_package(OpenCV REQUIRED)

add_subdirectory (samplelib)
add_subdirectory (demo)

