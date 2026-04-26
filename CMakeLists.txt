cmake_minimum_required(VERSION 3.10)
project(VyborosSnake VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SFML_DIR "${CMAKE_SOURCE_DIR}/vendor/SFML/lib/cmake/SFML")

find_package(SFML 3 COMPONENTS Graphics Window System Main REQUIRED)

add_executable(VyborosSnake src/main.cpp src/Game.cpp src/Snake.cpp)

target_link_libraries(VyborosSnake PRIVATE SFML::Graphics SFML::Window SFML::System SFML::Main)