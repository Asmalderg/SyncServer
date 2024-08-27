# Add the executable
add_executable(${PROJECT_NAME} main.cpp)

project(SyncServer
        VERSION 0.0.1
        DESCRIPTION "This is a test project for the file server"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include Boost headers
target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_SOURCE_DIR} ${BOOST_INCLUDEDIR})

# Link BoostAsio to your project
target_link_libraries(${PROJECT_NAME} BoostAsio Boost::system ws2_32)





