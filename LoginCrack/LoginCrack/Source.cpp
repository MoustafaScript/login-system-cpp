#include <iostream>
#include "utils.h"
#include <string>
#include "cmdsAdmin.h"
#include "deepapp.h"


int main() {
	int chan;

	std::cout << "make account\n";
	std::cout << "login\n";
	std::cout << "exit\n";

	std::cin >> chan;
	switch (chan) {
	case 1:
		makeacc();
		break;
	case 2:
		login();
	}
}