#pragma once
#include <iostream>
///  PRINT function that prints the given arguments to the console, followed by a newline.

template<typename... Args>
inline void print(const Args&... args) {
	(std::cout << ... << args) << "\n";
}

