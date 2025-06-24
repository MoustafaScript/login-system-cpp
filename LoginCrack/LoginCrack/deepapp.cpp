#include "deepapp.h"
#include <iostream>
#include <fstream>
#include "utils.h"

bool isDangerChar(const std::string& username) {
	for (char c : username) {
		if (!isalnum(c)) {
			return false;
		}
	}
	return true;
}
void makeacc() {
	while (true) {
		std::string username, password, existusername, existpassword;
		std::cout << "You now start register\n";
		std::cout << " \n";
		std::cout << "Enter username: "; std::cin >> username;
		std::cout << "enter password: "; std::cin >> password;

		if (username.length() > 20) {
			std::cout << "Error 302: username to long\n";
			continue;
		}

		if (username.length() < 3) {
			std::cout << "username max 20 and min 3\n";
			continue;
		}

		if (password.length() > 20) {
			std::cout << "Error 305: password too long\n";
			continue;
		}

		if (password.length() < 4) {
			std::cout << "password min 3 and max 20\n";
			// here continue;
		}

		if (!isDangerChar(username)) {
			std::cout << "No sql\n";
			continue;
		}
		if (!isDangerChar(password)) {
			std::cout << "No sql\n";
			continue;
		}
		std::ifstream user3("users.txt");
		if (user3.is_open()) {
			while (user3 >> existusername >> existpassword) {
				if (username == existusername) {
					std::cout << "name has taked\n";
					
				}
			}
		}
		std::ofstream file("users.txt", std::ios::app);

		if (file.is_open()) {
			file << username << " " << password << std::endl;
			file.close();
		}
	}
}
void login() {
	//varibles
	while (true) {
		std::string username, password, user, pass;
		bool found = false;

		std::ifstream user3("users.txt");

		std::cout << "enter username"; std::cin >> username;
		std::cout << "enter password"; std::cin >> password;
		if (!isDangerChar(username)) {
			std::cout << "No Sql\n";
			continue;
		}
		if (!isDangerChar(password)) {
			std::cout << "No Sql\n";
			continue;
		}
		if (user3.is_open()) {
			while (user3 >> user >> pass) {
				if (username == user && password == pass) {
					std::cout << "welcome " << username << std::endl;
					found = true;
				}

			}
		}	user3.close();
		if (!found) {
			std::cout << "Error 301: Falied to login\n";
		}
	}
}
