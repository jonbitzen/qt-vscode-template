cmake_minimum_required(VERSION 3.22)

project(qt-vscode-template)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(qt-vscode-template
    src/main.cpp
    src/widget.cpp
    src/widget.h
    src/widget.ui
)

target_link_libraries(qt-vscode-template
    Qt5::Widgets
)