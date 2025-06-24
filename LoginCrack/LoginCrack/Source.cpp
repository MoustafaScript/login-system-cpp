#include <iostream>
#include "utils.h"
#include <string>
#include "deepapp.h"


int main() {
	int chan;
	std::cout << "1) make account\n";
	std::cout << "2) login\n";
	std::cout << "3) exit\n";

	std::cin >> chan;
	switch (chan) {
	case 1:
		makeacc();
		break;
	case 2:
		login();
	}
}