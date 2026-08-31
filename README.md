# 🚀 Rush: A Personal Search for a Cleaner C++

> "Code shouldn't be a struggle. It should be a flow."

## Why Rush?
C++ is the language I love. It's powerful, fast, and versatile. But often, the syntax is heavy:
`std::cout`, `std::cin`, `#include <iostream>`, `using namespace std;`...
I've spent hours writing repetitive boilerplate instead of focusing on logic.

**Rush** was born from the need to simplify. It's not an "official improvement" to C++, but a personal abstraction layer I built for myself to make coding feel more natural and fast.

## 🧬 The Science Behind the Suffixes (s, i, f, d, b)
Why `PRINTs`, `PRINTi`, `PRINTf`, `PRINTd`, `PRINTb`? Why not a universal function?

Because **a universal translator is slower**.

In C++, converting a number to text (string) has a cost. If you use a generic function, the compiler must:
1.  **Inspect** the type at runtime.
2.  **Execute** an expensive conversion.
3.  **Manage** memory dynamically.

**Rush takes the direct path:**
- **`PRINTs` (String):** Prints directly to memory. **Zero conversion.**
- **`PRINTi` (int):** Prints the binary integer directly. **Maximum performance.**
- **`PRINTf` (float) / `PRINTd` (double):** Precise formatting without intermediate steps.
- **`PRINTb` (bool):** Native boolean handling with `boolalpha`.

> *"A universal translator adds layers of abstraction. Rush removes the layers to gain speed."*

This means your code is not only cleaner but technically **thousands of times more efficient** because it avoids the overhead of dynamic type conversion.

## 🤝 What is Rush?
It's not a perfect tool. **It's a work in progress.**
It's a set of files (`Rush.h`, `console_print.h`, `input_Rush.h`, etc.) I've created to make C++ feel more natural and faster.

It includes:
- **Type-Safe I/O:** `INPUTs`, `INPUTi`, `INPUTf`, `INPUTd`, `INPUTb`.
- **Time Utilities:** `delay()`.
- **Random Generation:** `random()`.
- **Basic Operations:** `add()`, `sub()`, `mul()`, `divd()`.
- **3D Foundation:** An initial framework for graphics (still in development).

## 🌱 My Vision: I Want to Improve the Language I Love
I'm not doing this to be the best. I'm doing it because **I want to improve the language I love, and I want people to join in doing so.**

Rush is a **collaborative effort**.
- If you find a bug, let me know.
- If you want to add a feature, do it.
- If you want to use it in your project, use it.

> *"The best way to predict the future is to program it."*

## 📄 How to Use It
1. Clone the repository.
2. Add the `.h` files to your project.
3. Include `#include "Rush.h"` in your `main.cpp`.
4. Code fast!

## 🤝 Join the Community
If you also feel that C++ can be more friendly, **join me**.
- **Fork** the repository.
- **Improve** the code.
- **Share** your version.

Together, we can make C++ more accessible for everyone.

---
**Rush** — *Fast. Clean. Open.*
