cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)
include_directories(${PROJECT_SOURCE_DIR})

# add the executable
add_executable(app
    src/main.cpp
    src/shape.cpp
    src/triangle.cpp
    src/rectangle.cpp
)