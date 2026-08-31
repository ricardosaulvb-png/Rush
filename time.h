#pragma once
#include <thread>
#include <chrono>

int ms = 0;

inline void delay(int time)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(time));
}
