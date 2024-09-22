#include <iostream>
#include <cstring>
#include <arpa/inet.h> //For socket programming
#include <unistd.h>
#include <ctime>
#include <sys/socket.h> // Include this header for socket functions

#define PORT 8080

int main() {
	int sock = 0;
	struct sockaddr_in serv_addr;
	char buffer[1024] = {0};

	// Create socket
	if((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		std::cout << "Socket creation error" << std::endl;
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);

	// Convert IPv4 and IPv6 addressess from text to binary format
	if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
		std::cout << "Invalid address/ Address not supported" << std::endl;
		return -1;
	}

	// Connect to the server
	if(connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
		std::cout << "Connection Failed" << std::endl;
		return -1;
	}

	// Read the time from the server
	int valread = read(sock, buffer, 1024);
	std::cout << "Server time: " << buffer << std::endl;

	// Convert server time to a time_t value (for simplicity, ignoring latency, just print it)
	std::time_t server_time = std::time(nullptr);
	std::cout << "Client time before adjustment: " << std::ctime(&server_time);

	// You can add logic here to adjust the client time.
	//  This would involve OS-specific system calls which typically require elevated priviliges.
	
	close(sock);
	return 0;
}
