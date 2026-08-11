cmake_minimum_required(VERSION 3.20)

project(MyGame)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 3 COMPONENTS Graphics Window System REQUIRED)

add_executable(MyGame
        main.cpp
)

target_link_libraries(MyGame
        PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
)