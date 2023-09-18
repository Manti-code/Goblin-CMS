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
        restbed
        GIT_REPOSITORY https://github.com/corvusoft/restbed
        GIT_TAG        4.8)

FetchContent_MakeAvailable(restbed)


list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)
include(CTest)
include(Catch)
#add_subdirectory("csv-parser")

add_executable(goblin_cms)
target_link_libraries(docker_test PRIVATE Catch2::Catch2 croncpp::croncpp rapidcsv  CLI11 restbed)







add_executable(goblin_cms_test_runner test2.cpp)
target_link_libraries(goblin_cms_test_runner PRIVATE Catch2::Catch2 croncpp::croncpp rapidcsv  CLI11)

catch_discover_tests(goblin_cms_test_runner)



