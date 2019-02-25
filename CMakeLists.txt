cmake_minimum_required(VERSION 3.12)

project(cmake-boost-unittests-skeleton)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

include_directories(
        calc
        parse
)

add_executable(cmake-boost-unittests-skeleton main.cpp)

set(OWN_LIBS geometry regex)

target_link_libraries(cmake-boost-unittests-skeleton ${Boost_LIBRARIES} ${OWN_LIBS})

# this triggers all tests in test directory
enable_testing ()
add_subdirectory (test)

