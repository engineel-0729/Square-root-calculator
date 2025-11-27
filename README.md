# Square Root Calculator (C++)

This is a simple program I wrote to calculate the square root of any number without using the built-in `sqrt()` function.  
The idea was to understand how the logic actually works internally.

It does two things:
- Finds the integer part of the square root using **binary search**
- Then improves the answer to the required decimal precision using **incremental steps**

---

## Why I built this

I wanted to practice binary search, precision handling, and clean function structuring in C++.  
Also, manually implementing sqrt() is a classic logic-building exercise.

---

## How it works

### **1. `sqrtInteger()`**
Uses binary search to get the floor value of √n.  
Runs fast — `O(log n)`.

### **2. `sqrtPrecise()`**
Takes the integer part and keeps refining it digit-by-digit depending on the precision I want.

---

## Compile & Run

```bash
g++ sqrt.cpp -o sqrt
./sqrt
