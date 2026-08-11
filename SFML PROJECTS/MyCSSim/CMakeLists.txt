cmake_minimum_required(VERSION 3.16)

project(MyCSSim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 COMPONENTS Graphics Window System REQUIRED)

add_executable(MyCSSim
        main.cpp
        Gun.cpp
        Gun.h
)

target_link_libraries(MyCSSim PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
)