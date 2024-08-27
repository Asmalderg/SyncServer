# Include FetchContent module
include(FetchContent)

# Set Boost options
set(Boost_USE_STATIC_LIBS ON)
set(BOOST_ENABLE_CMAKE ON)

# Download Boost
FetchContent_Declare(
  Boost
  GIT_REPOSITORY https://github.com/boostorg/boost.git
  GIT_PROGRESS TRUE
  GIT_TAG boost-1.86.0
)

FetchContent_MakeAvailable(Boost)

# Boost root directory
set(BOOST_ROOT ${Boost_SOURCE_DIR})
set(BOOST_INCLUDEDIR ${Boost_SOURCE_DIR}/boost)

# Print Boost directories for debugging
message(STATUS "Boost source directory: ${Boost_SOURCE_DIR}")
message(STATUS "Boost include directory: ${BOOST_INCLUDEDIR}")

# Create an interface library for Boost.Asio
add_library(BoostAsio INTERFACE)
target_include_directories(BoostAsio INTERFACE ${BOOST_INCLUDEDIR})

# Link Boost dependencies
target_link_libraries(BoostAsio
  INTERFACE
  Boost::thread
  Boost::filesystem
  Boost::system
  Boost::program_options
  Boost::date_time
  Boost::asio
)