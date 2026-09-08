#pragma once
#include <thread>
#include <chrono>


inline void delay(int time)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(time));
}
