cmake_minimum_required(VERSION 3.22)
# set the project name
project(Lab_8 VERSION 1.0)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -g -Wextra -Wpedantic)

include_directories()

# add the executable
add_executable(apk_lab_8
                main.cpp
)

