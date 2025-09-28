cmake_minimum_required(VERSION 3.28)
if (NOT CMAKE_PROJECT_TOP_LEVEL_INCLUDES)
    message("CMAKE_PROJECT_TOP_LEVEL_INCLUDES was not set!")
    set(CMAKE_PROJECT_TOP_LEVEL_INCLUDES 
        ${CMAKE_SOURCE_DIR}/cmake/conan_provider.cmake)
else()
    message("CMAKE_PROJECT_TOP_LEVEL_INCLUDES already set to ${CMAKE_PROJECT_TOP_LEVEL_INCLUDES}")
endif()

project(json_parser)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

find_package(nlohmann_json REQUIRED)
add_executable(json_parser Main.cpp)
target_link_libraries(json_parser PRIVATE nlohmann_json::nlohmann_json)
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/example.json 
    ${CMAKE_CURRENT_BINARY_DIR}
    COPYONLY)