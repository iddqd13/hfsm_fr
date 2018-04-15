cmake_minimum_required(VERSION 3.9)
project(hfsm)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES
        src/main.cpp
        src/FSM_FR.h
        src/SimpleHuman.h
        )

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${CMAKE_SOURCE_DIR}/src
)