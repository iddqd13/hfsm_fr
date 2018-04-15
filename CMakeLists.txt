cmake_minimum_required(VERSION 3.9)
project(hfsm)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES
        main.cpp
        )

add_executable(hfsm ${SOURCES})