project(NapCatNativeLauncher)
file(GLOB SOURCES "src/*.cpp")
add_library(NapCatNativeLauncher ${SOURCES})