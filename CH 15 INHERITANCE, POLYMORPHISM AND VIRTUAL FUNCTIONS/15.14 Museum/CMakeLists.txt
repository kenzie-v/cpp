cmake_minimum_required(VERSION 4.3)
project(15_14_Museum)

set(CMAKE_CXX_STANDARD 20)

add_executable(15_14_Museum main.cpp
        ArtWork.cpp
        Painting.cpp
        Sculpture.cpp
        Statue.cpp)
