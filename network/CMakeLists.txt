# Set the project name
project (network)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/network.cpp)
add_library(sub::network ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)