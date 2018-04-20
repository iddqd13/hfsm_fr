cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 14)

set(HEADERS
        include/types.h
        include/States.h
        include/StateHandler.h
        include/FSM_FR.h
        )

set(SOURCES
        sources/main.cpp
        )

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        ${CMAKE_SOURCE_DIR}/src
)