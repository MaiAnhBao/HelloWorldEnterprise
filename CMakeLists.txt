cmake_minimum_required(VERSION 2.8.12)

add_compile_options(-std=gnu++11)

project(HelloWorldEnterprise)

set(EXECUTABLE_NAME HelloWorld)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin/)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes)

file(GLOB SOURCES "src/*.cpp" "main.cpp")
add_executable(${EXECUTABLE_NAME} ${SOURCES})

