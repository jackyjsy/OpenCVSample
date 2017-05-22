add_executable (demo demo.cpp)

target_link_libraries (demo samplelib)
target_link_libraries (demo ${OpenCV_LIBS})


#Copy all files in img/ to build directory after make
add_custom_command(TARGET demo POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/img $<TARGET_FILE_DIR:demo>)

