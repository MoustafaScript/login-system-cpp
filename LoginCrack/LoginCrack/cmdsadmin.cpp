#include <fstream>
#include <iostream>
#include <string>

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