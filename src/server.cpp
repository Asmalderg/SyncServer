#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "echo.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using echo::Echo;
using echo::EchoRequest;
using echo::EchoReply;

class EchoServiceImpl final : public Echo::Service {
  Status SayHello(ServerContext* context, const EchoRequest* request, EchoReply* reply) override {
    std::string prefix("Hello ");
    reply->set_message(prefix + request->message());
    return Status::OK;
  }
};

void RunServer() {
  std::string server_address("127.0.0.:50051");
  EchoServiceImpl service;

  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;
  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();
  return 0;
}
