# CMakeList.txt : CMake project for JoyLib, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_library (JoyLib "JoyLib.cpp" "JoyLib.h")

# VCPKG modules
#find_package(hidapi CONFIG REQUIRED)

# Target link
#target_link_libraries(JoyLib PRIVATE hidapi::hidapi hidapi::winapi hidapi::include)