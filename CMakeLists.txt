cmake_minimum_required(VERSION 3.10)
project(pfld_ncnn)

set(CMAKE_CXX_STANDARD 11)
if (NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "No build type selected, default to Release")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type (default Debug)" FORCE)
endif()
set(OpenCV_DIR "/usr/local/lib/cmake/opencv4/")
find_package(OpenCV QUIET COMPONENTS core highgui imgproc imgcodecs)

add_subdirectory(3rd_party/ncnn ncnn_build)

include_directories(3rd_party/ncnn/src)

add_executable(pfld_ncnn pfld.cpp)
target_link_libraries(pfld_ncnn ncnn ${OpenCV_LIBS})
