#include <iostream>
#include <boost/asio.hpp>

using namespace boost;

int main(int argc, char** argv) {

	const int BACKLOG_SIZE = 30;
	unsigned short port = 3333;

	asio::io_service ios;
	asio::ip::tcp protocol = asio::ip::tcp::v4();

	asio::ip::tcp::endpoint ep(asio::ip::address_v4::any(), port);

	try	{
		asio::ip::tcp::acceptor acceptor(ios, ep.protocol());
		acceptor.bind(ep);
		acceptor.listen(BACKLOG_SIZE);
		
		asio::ip::tcp::socket socket(ios);
		acceptor.accept(socket);
	}catch (system::system_error &e) {
		std::cout << "Error occured! Error code = " 
		<< e.code() << ". Message: " << e.what();

		return e.code().value();
	}
	std::cout << "Finished\n";

	return 0;
}