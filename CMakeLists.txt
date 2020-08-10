cmake_minimum_required (VERSION 3.10)

project (pfld_ncnn)

add_executable(pfld_ncnn pfld.cpp)
find_package( OpenCV REQUIRED )
target_link_libraries( pfld_ncnn ${OpenCV_LIBS} )

set_target_properties(pfld_ncnn PROPERTIES CXX_STANDARD 11)

include_directories(./ncnn/include)
add_library(ncnn STATIC IMPORTED) 
set_property(TARGET ncnn PROPERTY IMPORTED_LOCATION ../ncnn/libncnn.a)
target_link_libraries(pfld_ncnn ncnn)

