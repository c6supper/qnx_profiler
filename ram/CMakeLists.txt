# Set the project name
project (ram)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/ram.cpp)
add_library(sub::ram ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)