#pragma once
#include <iostream>
#include <string_view>

struct IOSetup {
    IOSetup() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
};

inline IOSetup io_setup;

///  PRINT function that prints the given arguments to the console, followed by a newline.

template<typename... Args>
inline void print(const Args&... args) {
	(std::cout << ... << args);
}

template<typename... Args>
inline void println(const Args&... args) {
	(std::cout << ... << args) << "\n";
}

