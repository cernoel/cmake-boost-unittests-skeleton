message("build regex")


set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost COMPONENTS regex REQUIRED)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_library(regex regex.cpp regex.hpp)
    target_link_libraries(regex ${Boost_LIBRARIES})
endif()

