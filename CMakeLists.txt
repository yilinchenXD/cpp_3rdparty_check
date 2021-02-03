
cmake_minimum_required(VERSION 2.6)
project(cpp_3rdparty)

set(APPHOME ${CMAKE_SOURCE_DIR})
set(SRCDIR ${APPHOME}/src)
set(CMAKE_CXX_STANDARD 11)

find_package(CURL REQUIRED)
if(CURL_FOUND)
    message(STATUS "CURL_FOUND: ${CURL_FOUND}")
    message(STATUS "CURL_INCLUDE_DIR: ${CURL_INCLUDE_DIR}")
    message(STATUS "CURL_LIBRARY: ${CURL_LIBRARY}")
else()
    message(FATAL_ERROR  "CURL_NOT_FOUND")
endif()

message(${SRCDIR})
#include_directories(${SRCDIR}/run)
include_directories(${SRCDIR}/utils/cxxurl)

add_executable(post ${SRCDIR}/run/check_post.cpp)
