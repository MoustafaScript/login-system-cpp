#include <fstream>
#include <iostream>
#include <string>
#include "deepapp.h"

void cmdsadmin() {
    std::string cmd;
    while (true) {
        std::cin >> cmd;

        if (cmd == "list") {
            std::cout << "1 list\n";
            std::cout << "2 delete\n";
            std::cout << "3 exit\n";
        }
        else if (cmd == "delete") {

        }
        else if (cmd == "exit") {
            break;
        }
    }
}
void admina() {

    std::string username, uesr;
    std::cout << "enter username\n";
    std::cin >> username;
    std::ofstream op("addmin.txt");
    std::ifstream no("admin.txt");

    if (no.is_open()) {
        op << username << " " << "admin";
    }
}