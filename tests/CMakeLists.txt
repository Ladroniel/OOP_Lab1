include(FetchContent)

FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.4.0
)

FetchContent_MakeAvailable(catch2)

add_executable(tests test_replace.cpp)
target_link_libraries(tests PRIVATE replace_lib Catch2::Catch2WithMain)

include(CTest)
add_test(NAME ReplaceTests COMMAND tests)
