#pragma once
#include <iostream>


/// INPUT function that reads the given arguments from the console.

template<typename... Args>
inline void read(const char* prompt, Args&... args) {
	std::cout << prompt;
	(std::cin >> ... >> args);
}

