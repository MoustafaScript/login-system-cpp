#include <thread>
#include <chrono>
#include <Windows.h>
#include "utils.h"

void enable_ansi() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode = 0;
    GetConsoleMode(hConsole, &mode);
    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hConsole, mode);
}

void delaysec(int s) {
	std::this_thread::sleep_for(std::chrono::seconds(s));
}