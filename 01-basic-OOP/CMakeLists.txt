cmake_minimum_required(VERSION 3.21)
project(game_lesson_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(game_lesson_1 main.cpp Character.cpp Human.cpp Elf.cpp Undead.cpp World.cpp Game.cpp HumanWorld.cpp)
