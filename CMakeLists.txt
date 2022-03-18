cmake_minimum_required(VERSION 3.16.3)

# add your qt cmake
list(APPEND CMAKE_PREFIX_PATH $ENV{QTDIR})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the project name
project (qnx_profiler)

# include qt core 
find_package(Qt5 COMPONENTS Core REQUIRED)

add_subdirectory(cpu)
add_subdirectory(ram)
add_subdirectory(io)
add_subdirectory(network)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME}
    sub::cpu
    sub::ram
    sub::io
    sub::network
    Qt5::Core
)