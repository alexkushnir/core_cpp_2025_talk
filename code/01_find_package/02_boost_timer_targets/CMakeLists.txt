cmake_minimum_required(VERSION 3.28)
project(boost-timer-demo)
set(CMAKE_CXX_STANDARD 23)

find_package(Boost REQUIRED ALL)

if (Boost_FOUND)
    add_executable(boost_timer Main.cpp)
    target_link_libraries(boost_timer PRIVATE Boost::timer)
else()
    message(FATAL_ERROR "Boost libraries were not found!")
endif()