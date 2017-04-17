cmake_minimum_required(VERSION 2.8.12)

add_compile_options(-std=gnu++11)

project(HelloWorldEnterprise)

include_directories("includes")
file(GLOB SOURCES "src/*.cpp" "main.cpp")

add_executable(HelloWorldEnterprise ${SOURCES})
