cmake_minimum_required (VERSION 3.0)
project (roll)

if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -pthread -O3 ${CMAKE_CXX_FLAGS}")
endif()

add_executable(roll
	main.cpp
	api.hpp
	api.cpp
	helpers.cpp
	helpers.hpp
)
