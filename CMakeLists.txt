cmake_minimum_required(VERSION 3.19)
project(test VERSION 1.0)

# Find Protobuf and gRPC
find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

# Define the Protobuf and gRPC source files
set(PROTO_SRCS proto/echo.pb.cc)
set(GRPC_SRCS proto/echo.grpc.pb.cc)

# Add the executable
add_executable(SyncServer src/server.cpp ${PROTO_SRCS} ${GRPC_SRCS})

# Include directories
target_include_directories(SyncServer PRIVATE proto ${CMAKE_CURRENT_BINARY_DIR})

# Link the gRPC and Protobuf libraries
target_link_libraries(SyncServer
  gRPC::grpc++
  protobuf::libprotoc
  protobuf::libprotobuf
)