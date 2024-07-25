cmake_minimum_required(VERSION 3.12)
project(NapCatNative)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")

add_library(NapCatNative SHARED ${SOURCES})