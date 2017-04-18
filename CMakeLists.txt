cmake_minimum_required(VERSION 2.8.12)

add_compile_options(-std=gnu++11)

project(HelloWorldEnterprise)

set(LIBRARY_OUTPUT_PATH ${dir}lib)
include_directories("includes")
file(GLOB SOURCES "src/*.cpp" "main.cpp")
file(GLOB FACTORY "src/FactoryClass.cpp")
file(GLOB IMPLEMENTATION "src/ImplementationClass.cpp")
file(GLOB ENTERPRISE "src/HelloWorldEnterprise.cpp")

add_executable(HelloWorldEnterprise ${SOURCES})
add_library(factory SHARED ${FACTORY})
add_library(implementation SHARED ${IMPLEMENTATION})
add_library(enterprise SHARED ${ENTERPRISE})
