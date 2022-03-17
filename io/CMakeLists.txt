# Set the project name
project (io)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/io.cpp)
add_library(sub::io ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)