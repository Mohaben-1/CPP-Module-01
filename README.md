# 🎓 CPP01 - C++ Module 01 (1337 Project)

[![1337 Badge](https://img.shields.io/badge/1337-CPP--Module--01-blue)](https://www.42network.org/)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)
![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C)

---

## 📜 Project Overview

**CPP01** is the second module in the **1337 / 42 C++ curriculum**, focused on introducing **memory allocation, pointers, references, and the basics of OOP design**.  
It expands on Module 00 by exploring **object lifecycle**, **heap vs stack allocation**, and **class behavior** in different contexts.  

You will learn to:
- Understand the difference between **stack** and **heap** objects.
- Use **pointers** and **references** properly.
- Manage **dynamic memory** (`new` and `delete`).
- Work with **class members**, **initialization lists**, and **const references**.
- Create programs using **multiple classes** that interact with each other.
- Practice strict coding standards and C++98 compilation.


---

## 🚀 Exercises

### ✅ ex00 – Zombie Horde
- Implement a program that creates **zombie objects**.
- Learn:
  - Stack vs heap allocation
  - Object lifetime
  - Basic `new` / `delete`

---

### ✅ ex01 – Zombie Horde (Dynamic Array)
- Create a function that spawns a **horde of zombies** on the heap.
- Each zombie announces itself.
- Learn:
  - `new[]` and `delete[]`
  - Arrays of objects
  - Dynamic allocation management

---

### ✅ ex02 – Pointers and References
- Simple program demonstrating:
  - A **string**, a **string pointer**, and a **string reference**.
- Print their addresses and values.
- Understand:
  - The difference between **pointers** and **references**

---

### ✅ ex03 – Weapon, HumanA, HumanB
- Implement classes **Weapon**, **HumanA**, and **HumanB**.
- Key concepts:
  - References vs pointers in class members
  - Passing objects by reference
  - Modifying objects through shared references

---

### ✅ ex04 – Sed is for Losers
- Write a program that replaces all occurrences of a string in a file with another string.
- Learn:
  - File I/O with `std::ifstream` and `std::ofstream`
  - String manipulation
  - Error handling

---

### ✅ ex05 – Harl 2.0
- Implement a **Harl** class with complaints at different levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`).
- Use:
  - Member functions
  - Function pointers (optional)
  - Encapsulation

---

### ✅ ex06 – Harl Filter
- Extend ex05 by filtering logs:
  - Only print messages **equal or above a given level**.
- Learn:
  - Command-line argument parsing
  - Control flow with enums or string comparisons

---

## 🖥️ How to Build & Run

### 1. Clone the Repository
```bash
git clone https://github.com/Mohaben-1/CPP-Module-01.git
cd CPP-Module-01
```

### 2. Compile the Program  
Each exercise has its own Makefile:
```bash
make        # Compile default target
make clean  # Remove object files
make fclean # Remove object files and executables
make re     # Recompile from scratch
```

### 3. Run the Program
Example for ex04:
```bash
./replace filename s1 s2
```
---

## 📂 Repository Structure

```plaintext
|-- ex00/
|   |-- Makefile
|   |-- Zombie.hpp
|   |-- Zombie.cpp
|   |-- newZombie.cpp
|   |-- randomChump.cpp
|   |-- main.cpp

|-- ex01/
|   |-- Makefile
|   |-- Zombie.hpp
|   |-- Zombie.cpp
|   |-- zombieHorde.cpp
|   |-- main.cpp

|-- ex02/
|   |-- Makefile
|   |-- main.cpp

|-- ex03/
|   |-- Makefile
|   |-- Weapon.hpp
|   |-- Weapon.cpp
|   |-- HumanA.hpp
|   |-- HumanA.cpp
|   |-- HumanB.hpp
|   |-- HumanB.cpp
|   |-- main.cpp

|-- ex04/
|   |-- Makefile
|   |-- main.cpp

|-- ex05/
|   |-- Makefile
|   |-- Harl.hpp
|   |-- Harl.cpp
|   |-- main.cpp

|-- ex06/
|   |-- Makefile
|   |-- Harl.hpp
|   |-- Harl.cpp
|   |-- main.cpp

|-- README.md

```

---

## 📖 Key Concepts

### 1️⃣ Stack vs Heap

* **Stack objects**: automatically allocated and freed when going out of scope.
* **Heap objects**: manually allocated with `new` and freed with `delete`.

```cpp
Zombie z1("stackZombie");       // stack
Zombie* z2 = new Zombie("heapZombie"); // heap
delete z2;
```

---

### 2️⃣ Pointers and References

Pointers can be reassigned, references cannot.
References must be initialized at declaration.

```cpp
std::string str = "Hello";
std::string* ptr = &str;
std::string& ref = str;
```

---

### 3️⃣ Class Members & References

```cpp
class HumanA {
    Weapon& weapon; // must be initialized in constructor
public:
    HumanA(std::string name, Weapon& w) : weapon(w) {}
};
```

---

### 4️⃣ File I/O

Use streams to read/write files.

```cpp
std::ifstream infile("input.txt");
std::ofstream outfile("output.txt");
```

---

## 🛡️ Compilation Rules

Compile with:

```bash
clang++ -Wall -Wextra -Werror -std=c++98
```

* No use of `auto`, `nullptr`, or C++11+ features unless allowed.
* Follow subject PDF for forbidden functions and style rules.

---

## 📚 References

* [cppreference.com](https://en.cppreference.com/)
* [cplusplus.com](https://cplusplus.com/)
* 42/1337 subject PDF for CPP01

---

## 🛡️ License

This project is part of the 1337 curriculum. It is shared here for educational purposes and should not be used for plagiarism.

