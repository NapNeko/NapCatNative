project(NapCatNativeInject)
file(GLOB SOURCES "src/*.cpp")
include_directories(${CMAKE_SOURCE_DIR}/inject/include)
add_library(NapCatNativeInject SHARED ${SOURCES})