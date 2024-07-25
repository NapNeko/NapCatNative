project(NapCatNativeInject)
file(GLOB SOURCES "src/*.cpp")
add_library(NapCatNativeInject SHARED ${SOURCES})