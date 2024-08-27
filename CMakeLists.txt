cmake_minimum_required(VERSION 3.26)

project(SyncServer)

add_subdirectory(ExternalDeps)
add_subdirectory(src)

set(BOOST_INCLUDE_DIRS ${Boost_SOURCE_DIR})