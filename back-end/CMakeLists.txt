cmake_minimum_required(VERSION 3.20)
project(goblin_cms)

set(CMAKE_CXX_STANDARD 20)
include(cmake_libs/ThirdParty.cmake)

add_executable(goblin_cms src/main.cpp)
target_link_libraries(goblin_cms PRIVATE httplib argon fmt)
