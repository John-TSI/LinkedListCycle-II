cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(142_LinkedListCycle-II VERSION 1.0.0)

set(SRC_FILES src/node.cpp src/solution.cpp)
add_executable(142_LinkedListCycle-II src/main.cpp ${SRC_FILES})

target_include_directories(142_LinkedListCycle-II PUBLIC inc)

