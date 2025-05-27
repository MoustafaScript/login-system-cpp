#include <iostream>
#include <fstream>
#include "utils.h"
#include <string>
#include "cmdsAdmin.h"

bool admin = false;

int main() {
	std::string username, password, user, pass;

	std::ifstream user3("users.txt");
	
	std::cout << "enter username"; std::cin >> username;
	std::cout << "enter password"; std::cin >> password;
	if (user3.is_open()) {
		while (user3 >> user >> pass) {
			if (username == user && password == pass) {
				if (username == "admin") {
					std::cout << "panel admin allowed\n";
					admin = true;
					cmdsadmin();
				}
				std::cout << "welcome " << username << std::endl;
			}
			else {
				std::cout << "error 301";
			}
		}
	}
}