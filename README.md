# 🚀 Rush: A Personal C++ Wrapper (Experiment)

> "Code shouldn't be a struggle. It should be a flow."

## 📦 What is Rush?
**Rush** is a lightweight **C++ wrapper library** that I built for myself.

It's not an official improvement to C++, nor a commercial product. It's a **personal experiment** to see if we can make the language I love feel lighter and faster.

It acts as a simple **abstraction layer** over standard C++ I/O and utilities, replacing the heavy `std::cout` and `std::cin` with cleaner, human-readable functions like `PRINTs` and `INPUTi`.

## 🧬 Why a "Wrapper" and not a "Translator"?
I chose to build a **native C++ wrapper** instead of using a "universal translator" (like Python's dynamic typing).

- **No Runtime Overhead:** Functions like `PRINTs`, `INPUTi`, `PRINTf` map directly to machine instructions.
- **Type Safety:** By using explicit suffixes (`s`, `i`, `f`, `d`, `b`), the compiler knows exactly what type you mean.
- **Speed:** This avoids the expensive conversions and memory management of dynamic languages.

> *"A universal translator adds layers of abstraction. Rush removes the layers to gain speed."*

## 🤝 It's Not "Serious" (Yet)
Let's be honest: **This is just a dream.**

I started with simple functions for big reasons. You might see it as a little basic, and you're right. It's not a perfect tool. It's a **work in progress**.

But it includes:
- **Type-Safe I/O:** `INPUTs`, `INPUTi`, `INPUTf`, `INPUTd`, `INPUTb`.
- **Time Utilities:** `delay()`.
- **Random Generation:** `random()`.
- **Basic Math:** `add()`, `sub()`, `mul()`, `divd()`.

## 🌱 My Vision: I Want to Improve the Language
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

---
**Rush** — *Fast. Clean. Open.*
