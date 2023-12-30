cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(linear_ringbuffer CXX)

add_library(linear_ringbuffer INTERFACE)
target_include_directories(linear_ringbuffer INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)             

file(GLOB_RECURSE SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include *.hpp)
target_sources(linear_ringbuffer PRIVATE ${SOURCE_FILES})
foreach(source IN LISTS SOURCE_FILES)
    get_filename_component(source_path "${source}" PATH)
    string(REPLACE ${CMAKE_CURRENT_SOURCE_DIR} "" relatie_source_path ${source_path})
    source_group("${relatie_source_path}" FILES "${source}")
endforeach()