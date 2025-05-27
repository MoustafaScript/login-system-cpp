#include "deepapp.h"
#include <iostream>
#include <fstream>
#include "cmdsAdmin.h"

bool admin = false;
void makeacc() {
	std::string username, password, taken;
	std::cout << "You now start register\n";
	std::cout << " \n";
	std::cout << "Enter username: "; std::cin >> username;
	std::cout << "enter password: "; std::cin >> password;
	std::ifstream user3("users.txt");
	if (user3.is_open()) {
		while (user3 >> taken) {
			if (username == taken) {
				std::cout << "name has taked\n";
				makeacc();
			}
		}
	}
	std::ofstream file("users.txt", std::ios::app);

	if (file.is_open()) {
		file << username << " " << password << std::endl;
		file.close();
	}
}
void login() {
	//varibles
	std::string username, password, user, pass;

	std::ifstream user3("users.txt");
	std::fstream op("admin.txt");

	std::cout << "enter username"; std::cin >> username;
	std::cout << "enter password"; std::cin >> password;
	if (user3.is_open()) {
		while (user3 >> user >> pass) {
			if (username == user && password == pass) {
				if (username == "admin") {
					admin = true;
					admina();
				}
				std::cout << "welcome " << username << std::endl;
			}
			else {
				std::cout << "error 301\n";
			}

		}
	}	user3.close();
}
