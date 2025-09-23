cmake_minimum_required(VERSION 3.28)
project(fetch-content-demo)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG main
)

FetchContent_MakeAvailable(googletest)

add_executable(fetch_content_tests Main.cpp)

target_link_libraries(fetch_content_tests gtest_main gmock)