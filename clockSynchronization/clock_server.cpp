#include <iostream>
#include <ctime>
#include <chrono>
#include <cstring>
#include <arpa/inet.h> //For socket programming
#include <unistd.h>

#define PORT 8080

int main() {
	int server_fd, new_socket;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);

	if((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
		perror("socket failed");
		exit(EXIT_FAILURE);
	}

	// Attach socket to port
	if(setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}

	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons(PORT);

	//Bind the socket
	if(bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
		perror("bind failed");
		exit(EXIT_FAILURE);
	}

	//Listen for connections
	if(listen(server_fd, 3) < 0) {
		perror("listen");
		exit(EXIT_FAILURE);
	}

	std::cout << "Waiting for client to connect..." << std::endl;

	if((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
		perror("accept");
		exit(EXIT_FAILURE);
	}

	//Get the current system time
	auto now = std::chrono::system_clock::now();
	std::time_t current_time = std::chrono::system_clock::to_time_t(now);

	//Send the current time to the client
	std::string time_str = std::ctime(&current_time);
	send(new_socket, time_str.c_str(), time_str.size(), 0);
	std::cout << "Time sent to client: " << time_str << std::endl;

	close(new_socket);
	close(server_fd);
	return 0;
}
