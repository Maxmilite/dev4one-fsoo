set(CMAKE_CXX_COMPILER icpx)

cmake_minimum_required(VERSION 3.4)
project(FaceSwap)

# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/dist)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../dist)

add_subdirectory(../dlib dlib_build)
if(DLIB_LINK_WITH_SQLITE3)
	add_example(sqlite_ex)
endif()

add_subdirectory(src)