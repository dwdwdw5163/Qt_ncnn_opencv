cmake_minimum_required (VERSION 3.10)

project (pfld_ncnn)

add_executable(detect-image-demo detect-image-demo.cpp detect-video-demo.cpp)

find_package(OpenCV REQUIRED )

set_target_properties(detect-image-demo PROPERTIES CXX_STANDARD 11)

include_directories(./ncnn/include)
add_library(ncnn STATIC IMPORTED) 
set_property(TARGET ncnn PROPERTY IMPORTED_LOCATION ../ncnn/libncnn.a)

include_directories(./libfacedetection)
add_library(libfacedetection STATIC IMPORTED)
set_property(TARGET libfacedetection PROPERTY IMPORTED_LOCATION ../libfacedetection/libfacedetection.a)

target_link_libraries(detect-image-demo ncnn libfacedetection ${OpenCV_LIBS})

