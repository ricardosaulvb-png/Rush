#pragma once
#include <string>
#include <iostream>


inline void INPUTs(std::string& mensaje, const std::string& promptS) {
    std::cout << promptS;
    std::getline(std::cin, mensaje);
}

inline void INPUTi(int& mensaje, const std::string& promptS) {
	std::cout << promptS;
	std::cin >> mensaje;
}

inline void INPUTf(float& mensaje, const std::string& promptS) {
	std::cout << promptS;
	std::cin >> mensaje;
}

inline void INPUTd(double& mensaje, const std::string& promptS) {
	std::cout << promptS;
	std::cin >> mensaje;
}

inline void INPUTb(bool& mensaje, const std::string& promptS) {
	std::cout << promptS;
	std::cin >> std::boolalpha >> mensaje;
}
