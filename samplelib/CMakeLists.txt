
add_library ("samplelib" OpenCVSample.cpp)

target_link_libraries (samplelib ${OpenCV_LIBS})
target_include_directories (samplelib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

