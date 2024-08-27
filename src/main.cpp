#include <iostream>
#include <boost/asio.hpp>

int main(int argc, char** argv) {
	boost::asio::io_service ios;
	std::cout << "Hello world" << std::endl;
	return 0;
}