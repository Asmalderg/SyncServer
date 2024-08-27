# Add the executable
add_executable(${PROJECT_NAME} main.cpp)

project(SyncServer
        VERSION 0.0.1
        DESCRIPTION "This is a test project for the file server"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Link Boost libraries
target_link_libraries(${PROJECT_NAME} BoostAsio)