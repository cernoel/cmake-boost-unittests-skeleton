cmake_minimum_required(VERSION 3.10)

set(Boost_USE_STATIC_LIBS ON)

find_package(Boost COMPONENTS system filesystem unit_test_framework regex REQUIRED)

include_directories (${cmake-boost-unittests-skeleton_SOURCE_DIR}/src
        ${Boost_INCLUDE_DIRS}
        )

add_executable (geometryTest src/calc/geometryTest.cpp ${cmake-boost-unittests-skeleton_SOURCE_DIR}/src/calc/geometry.cpp)

target_link_libraries(geometryTest geometry ${Boost_LIBRARIES})


add_executable (regexTest src/parse/regexTest.cpp ${cmake-boost-unittests-skeleton_SOURCE_DIR}/src/parse/regex.cpp)

target_link_libraries(regexTest regex ${Boost_LIBRARIES})