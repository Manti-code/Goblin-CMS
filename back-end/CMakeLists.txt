#TODO : put all the fetch content in it's own file.

cmake_minimum_required(VERSION 3.16)
project(goblin_cms)

set(CMAKE_CXX_STANDARD 17)
Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v2.13.1)

FetchContent_MakeAvailable(Catch2)

FetchContent_Declare(
        rapidcsv
        GIT_REPOSITORY https://github.com/d99kris/rapidcsv.git
        GIT_TAG        v8.43
)
FetchContent_MakeAvailable(rapidcsv)

FetchContent_Declare(
        cronpp
        GIT_REPOSITORY https://github.com/mariusbancila/croncpp.git
        GIT_TAG        master)

FetchContent_MakeAvailable(cronpp)


FetchContent_Declare(
        cli11
        GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
        GIT_TAG        v1.9.1)

FetchContent_MakeAvailable(cli11)


FetchContent_Declare(
        dynalo
        GIT_REPOSITORY https://github.com/maddouri/dynalo.git
        GIT_TAG master
)
FetchContent_MakeAvailable(dynalo)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)
include(CTest)
include(Catch)

set(global_libs Catch2::Catch2 croncpp::croncpp rapidcsv dynalo CLI11)

set(goblin_cms_src goblin_cms/main.cpp)
set(goblin_tests_src goblin_tests/test_main.cpp)

add_executable(goblin_cms ${goblin_cms_src})
target_link_libraries(goblin_cms PRIVATE ${global_libs})

add_library(share_object_test SHARED goblin_plugins/shared.hpp goblin_plugins/logger_main.cpp)

target_link_libraries(share_object_test PRIVATE ${global_libs})

add_executable(goblin_test ${goblin_tests_src})
target_link_libraries(goblin_test PRIVATE ${global_libs})

catch_discover_tests(goblin_test)



