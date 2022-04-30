cmake_minimum_required(VERSION 3.21)
project(sample_sdl)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_INCLUDE_DIR /opt/homebrew/Cellar/sdl2/2.0.20/include)
include_directories(${SDL2_INCLUDE_DIR})

set(SDL2_INCLUDE_LIB /opt/homebrew/Cellar/sdl2/2.0.20/lib/libSDL2-2.0.0.dylib)
link_libraries(${SDL2_INCLUDE_LIB})

#set(SDL2_INCLUDE_IMAGE_DIR  /opt/homebrew/Cellar/sdl2_image/2.0.5/include)
#include_directories(${SDL2_INCLUDE_IMAGE_DIR})

set(SDL2_INCLUDE_IMAGE_LIB  /opt/homebrew/Cellar/sdl2_image/2.0.5/lib/libSDL2_image.dylib)
link_libraries(${SDL2_INCLUDE_IMAGE_LIB})


add_executable(sample_sdl main.cpp App.cpp App.h Entity.cpp Entity.h TextureManager.cpp TextureManager.h Map.cpp Map.h)
