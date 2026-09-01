#pragma once
#include <string>
#include <iostream>

string msg = "";
int num = 0;
float dec = 0.0;
double dbl = 0.0;
bool logic = false;

inline void PRINTs(string msg) {
	cout << msg << endl;
}

inline void PRINTi(int num) {
	cout << num << endl;
}

inline void PRINTb(bool logic) {
	cout << boolalpha << logic << endl;
}

inline void PRINTf(float dec) {
	cout << dec << endl;
}

inline void PRINT_d(double dbl) {
	cout << dbl << endl;
}
