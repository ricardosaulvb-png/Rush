#pragma once



inline int add(int a, int b) {
    return a + b;
}

inline int sub(int a, int b) {
    return a - b;
}

inline int mul(int a, int b) {
    return a * b;
}

inline int divd(int a, int b) {
    if (b == 0) return 0; 
    return a / b;
}
