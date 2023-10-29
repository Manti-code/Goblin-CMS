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
        httplib
        GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
        GIT_TAG        master)
FetchContent_MakeAvailable(httplib)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        master)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
        argon
        GIT_REPOSITORY https://github.com/ChrisThrasher/argon.git
        GIT_TAG        master)
FetchContent_MakeAvailable(argon)