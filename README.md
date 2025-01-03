# Dangling Pointer Bug in C++
This repository demonstrates a common bug in C++ programming: the dangling pointer.  A dangling pointer arises when a pointer points to memory that has been freed or deallocated. Accessing a dangling pointer can lead to unpredictable behavior, crashes, or security vulnerabilities. 

The `danglingPointerBug.cpp` file contains code exhibiting this issue. The `danglingPointerSolution.cpp` shows how to avoid this using smart pointers.

## How to Reproduce
1. Compile the `danglingPointerBug.cpp` file using a C++ compiler (like g++).
2. Run the executable. You might get unexpected output or a crash.

## Solution
The solution involves using smart pointers (like `std::unique_ptr` or `std::shared_ptr`) which automatically manage memory and prevent dangling pointers.