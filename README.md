# Binary Heap vs 4-Ary Heap

**Team:** Los Nenes  
**Members:** Josiah Caballero, Samuel Polo_Varona, Josh Hoeckendorf

## What is this?

We built two min-heaps in C++ and compared how they perform against each other — a standard binary heap and a 4-ary heap. The program throws 100,000 random integers at both, times the insertions and deletions, and counts comparisons and swaps so we can see which one actually does less work.

## Files

* `main.cpp` — runs everything: menu, random data, timing
* `heap.h` / `heap.cpp` — binary min-heap
* `multi_ary.h` / `multi_ary.cpp` — 4-ary min-heap

## Requirements

Just a standard C++ compiler (`g++`, `clang`, MSVC, whatever you have). No external libraries needed.

## How to Compile

From the project folder:

```bash
g++ main.cpp heap.cpp multi_ary.cpp -o heap_test
```
