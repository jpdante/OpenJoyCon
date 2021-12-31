# CMakeList.txt : CMake project for JoyTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_executable (JoyTest "JoyTest.cpp" "JoyTest.h")

target_include_directories (JoyTest PRIVATE "../JoyLib")

target_link_libraries (JoyTest PRIVATE JoyLib)