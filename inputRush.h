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

/// INPUT function that reads the given arguments from the console.

template<typename... Args>
inline void readtxt(std::string_view prompt, Args&... args) {
	std::cout << prompt;
	return static_cast<bool>((std::cin >> ... >> args));
}

template<typename... Args>
inline void read(Args&... args) {
	return static_cast<bool>((std::cin >> ... >> args));
}
