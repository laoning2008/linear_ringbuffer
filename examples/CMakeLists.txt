cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(example CXX)
     
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/build/linear_ringbuffer)

add_executable(example ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(example PRIVATE linear_ringbuffer)
set_target_properties(example PROPERTIES FOLDER "examples")
