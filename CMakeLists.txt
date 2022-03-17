cmake_minimum_required(VERSION 3.16.3)

# Set the project name
project (qnx_profiler)

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
)