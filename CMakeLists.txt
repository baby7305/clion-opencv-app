cmake_minimum_required(VERSION 3.13)
project(clion_opencv_app)

set(CMAKE_CXX_STANDARD 11)

set(THIRD_PARTY_DIR "C:\\third-party")

include_directories(${THIRD_PARTY_DIR}/opencv/build/include)
link_directories(${THIRD_PARTY_DIR}/opencv/build/x64/vc14/lib)

add_executable(clion_opencv_app main.cpp)
target_link_libraries(clion_opencv_app
    opencv_world340
    opencv_world340d)