cmake_minimum_required(VERSION 3.16)
project(mytests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(3rdparty/googletest)
#add_subdirectory(3rdparty/spdlog)

# Sources
file(GLOB TEST_SOURCES 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/cpp/*.cc"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/design_pattern/*.cc"
    )
add_executable(mytests ${TEST_SOURCES})

# add header search path
target_include_directories(mytests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include) 

find_package(Threads REQUIRED)
# Link libs
target_link_libraries(mytests PRIVATE gtest Threads::Threads)

# GTest auto-discovery
include(GoogleTest)
gtest_discover_tests(mytests)
