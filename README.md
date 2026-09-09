# 🚀 Rush: A Lightweight C++ Wrapper for Clean and Fast Code

> "Code shouldn't be a struggle. It should be a flow."

## 🧬 What is Rush?
**Rush** is a lightweight C++ wrapper library designed to eliminate verbosity and runtime overhead from standard I/O operations.

It is **not** a new language, nor a translator. It is a **direct abstraction layer** using modern **C++ Templates** to connect your code to hardware without intermediaries.

## ⚡ Performance: Why is it Fast?
Many "simplification" libraries use a "universal translator" that converts types at **runtime** (like `std::to_string` or dynamic types in other languages). This adds a layer of **overhead**.

**Rush does not do that.**

- **Zero Conversion:** When you use `print(variable)`, the C++ compiler generates the direct machine instruction for that specific type. There is no dictionary lookup or memory conversion.
- **Zero-Cost Abstraction:** C++ templates resolve everything at **compile time**. Your final program runs as fast as if you had written `std::cout` manually.
- **Real Efficiency:** You avoid the dynamic memory management required by universal translators.

> *"Rush doesn't add layers of abstraction. It removes them."*

## 📜 Code: Before vs. After
The difference is not just aesthetic; it is **efficiency**.

### ❌ Traditional C++ (Verbose and Error-Prone)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Ricardo";
    int edad = 25;
    
    // Long, prone to type errors, hard to read
    cout << "Hola, " << nombre << ", tienes " << edad << " años." << endl;
    
    return 0;
}.
```
> "Rush (Clean, Safe, and Fast)"
 
```cpp
#include "Rush.h"

int main() {
    start

        string nombre = "Ricardo";
        int edad = 25;

        print("Hola, ", "Ricardo", ", tienes ", 25, " años.");

    finish
    return 0;
}
```

## What we gain:

No Type Errors: print automatically detects if it is a string, int, float, etc.
More Readable: The code reads like a normal sentence.
🎨 Structure and Aesthetics
Rush also aims to make code more pleasant to read. We use macros to define the "stage" of your program:

```cpp
#define start rushRun();
#define finish rushEnd();

int main() {
    start
        // Your code enters here
        print("Welcome to the magic of Rush");
        // Your code ends here
    finish
    return 0;
}
```
This frames your main logic, making the flow of the program evident at a glance.

## 🤝 A Project for the Community
This project was born from a personal need: I want to improve the language I love.

Rush is a collaborative experiment.

It is not perfect.
It is constantly evolving.
If you like the idea of making C++ faster and more readable, join me.

Try the code.
If you find a bug, let me know.
If you want to add a feature, do it.
If you want to use it in your project, use it freely.
"The best way to predict the future is to program it."

## 📄 How to Use It
Clone the repository.
Add the .h files to your project.
Include #include "Rush.h" in your main.cpp.
Start coding!
🌱 License
This project is licensed under the MIT License. You are free to use, modify, and share it.

Rush — Fast. Clean. Open.

